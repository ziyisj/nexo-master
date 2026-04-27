#include "Physics3D.h"
#include <iostream>
#include <shared_mutex>
#include <unordered_map>
#include <cfloat>
#include <cmath>
#include <Hack/PhysXCollect.h>

// 初始化静态成员变量
std::vector<P3D_ShapeInstance> Physics3D::ShapeInstances;
std::unordered_map<const physx::PxTriangleMesh*, P3D_BaseMesh> Physics3D::MeshCache;
std::unordered_map<const physx::PxConvexMesh*, P3D_BaseMesh> Physics3D::ConvexMeshCache;
std::unordered_map<const physx::PxHeightField*, P3D_BaseMesh> Physics3D::HeightFieldCache;
P3D_BaseMesh Physics3D::BoxMesh;
std::unordered_map<P3D_BaseMesh*, std::vector<P3D_InstanceData>> Physics3D::InstanceGroups;
std::unordered_map<P3D_BaseMesh*, std::unordered_map<uint32_t, std::vector<P3D_InstanceData>>> Physics3D::ColoredInstanceGroups;
bool Physics3D::KeyRPressed = false;
bool Physics3D::KeyDPressed = false;
int Physics3D::SelectedInstanceIndex = -1;
P3D_Vec3 Physics3D::SelectionOutlineColor = P3D_Vec3(1.0f, 0.0f, 0.0f); // 红色描边

// ==================== 坐标系转换实现 ====================
//
// UE4坐标系（左手系）:
//   X轴 = Forward（前）
//   Y轴 = Right（右）
//   Z轴 = Up（上）
//
// OpenGL坐标系（右手系）:
//   X轴 = Right（右）
//   Y轴 = Up（上）
//   Z轴 = -Forward（后，注意OpenGL的Forward是-Z方向）
//
// 映射关系：
//   UE4.X (Forward)  →  OpenGL.-Z (-Forward)
//   UE4.Y (Right)    →  OpenGL.X  (Right)
//   UE4.Z (Up)       →  OpenGL.Y  (Up)
//
// ==================== 位置/缩放转换 ====================

P3D_Vec3 CoordTransform::UE4ToGL_Position(const physx::PxVec3& ue4Pos)
{
    // 位置转换公式：
    //   OpenGL.x = UE4.y  (Right)
    //   OpenGL.y = UE4.z  (Up)
    //   OpenGL.z = -UE4.x (-Forward)
    return P3D_Vec3(ue4Pos.y, ue4Pos.z, -ue4Pos.x);
}

P3D_Vec3 CoordTransform::UE4ToGL_Scale(const physx::PxVec3& ue4Scale)
{
    // 缩放遵循相同的轴映射：
    //   OpenGL.scaleX = UE4.scaleY  (Right轴缩放)
    //   OpenGL.scaleY = UE4.scaleZ  (Up轴缩放)
    //   OpenGL.scaleZ = UE4.scaleX  (Forward轴缩放)
    return P3D_Vec3(ue4Scale.y, ue4Scale.z, ue4Scale.x);
}

// ==================== 旋转转换（四元数→欧拉角）====================

P3D_Vec3 CoordTransform::UE4ToGL_Quaternion(const physx::PxQuat& ue4Quat)
{
    // 方法：四元数→矩阵→坐标系转换→欧拉角
    // 这样避免直接转换四元数时的符号问题
    
    // 步骤1：将UE4四元数转为旋转矩阵（在UE4坐标系中）
    physx::PxMat33 ue4Mat(ue4Quat);
    
    // 步骤2：坐标系转换矩阵
    // UE4→OpenGL: (x,y,z) → (y, z, -x)
    // T = [ 0  1  0]
    //     [ 0  0  1]
    //     [-1  0  0]
    //
    // OpenGL旋转矩阵 = T * UE4旋转矩阵 * T^T
    
    // T * ue4Mat * T^T 的结果（手动计算）:
    float m00 = ue4Mat[1][1];    // ue4.YY
    float m01 = ue4Mat[1][2];    // ue4.YZ
    float m02 = -ue4Mat[1][0];   // -ue4.YX
    
    float m10 = ue4Mat[2][1];    // ue4.ZY
    float m11 = ue4Mat[2][2];    // ue4.ZZ
    float m12 = -ue4Mat[2][0];   // -ue4.ZX
    
    float m20 = -ue4Mat[0][1];   // -ue4.XY
    float m21 = -ue4Mat[0][2];   // -ue4.XZ
    float m22 = ue4Mat[0][0];    // ue4.XX
    
    // 步骤3：从旋转矩阵提取欧拉角
    // 
    // Editor3D::getModelMatrix 生成的矩阵（不考虑scale）：
    // m[0]  = cy*cz,           m[4]  = sx*sy*cz - cx*sz,   m[8]  = cx*sy*cz + sx*sz
    // m[1]  = cy*sz,           m[5]  = sx*sy*sz + cx*cz,   m[9]  = cx*sy*sz - sx*cz
    // m[2]  = -sy,             m[6]  = sx*cy,              m[10] = cx*cy
    //
    // 这对应的是 Rz(rz) * Rx(rx) * Ry(ry) 的顺序（从右到左应用）
    // 也就是说：先绕Y轴旋转ry，再绕X轴旋转rx，最后绕Z轴旋转rz
    //
    // 我们的矩阵索引（列主序）：
    // [0][1][2]
    // [3][4][5]  → 但我们用的是m00,m01...（行主序标记）
    // [6][7][8]
    //
    // 从矩阵提取：
    
    P3D_Vec3 euler;
    
    // 从 m02 = -sy 提取 ry
    float sy = -m02;
    
    if (std::abs(sy) < 0.99999f)  // 非万向锁
    {
        // ry (rotation.y)
        euler.y = std::asin(sy) * 180.0f / 3.14159f;
        
        // rx (rotation.x) 从 m12/m22 = sx*cy / cx*cy = sx/cx = tan(rx)
        euler.x = std::atan2(m12, m22) * 180.0f / 3.14159f;
        
        // rz (rotation.z) 从 m01/m00 = cy*sz / cy*cz = sz/cz = tan(rz)
        euler.z = std::atan2(m01, m00) * 180.0f / 3.14159f;
    }
    else  // 万向锁（ry = ±90°）
    {
        euler.y = std::copysign(90.0f, sy);
        
        // 当sy = ±1时，cy = 0，需要用其他元素
        // 使用 m10 和 m11 的组合
        euler.x = std::atan2(-m21, m11) * 180.0f / 3.14159f;
        euler.z = 0.0f;
    }
    
    return euler;
}

void CoordTransform::CombineTransforms(
    const physx::PxTransform& global,
    const physx::PxTransform& local,
    const physx::PxVec3& meshScale,
    const physx::PxQuat& meshRotation,
    P3D_Vec3& outPosition,
    P3D_Vec3& outRotation,
    P3D_Vec3& outScale)
{
    // 步骤1：在UE4坐标系中组合变换
    physx::PxTransform combinedPose = global * local;
    
    // 步骤2：组合旋转
    physx::PxQuat finalQuat = combinedPose.q * meshRotation;
    
    // 步骤3：转换到OpenGL坐标系
    outPosition = UE4ToGL_Position(combinedPose.p);
    outRotation = UE4ToGL_Quaternion(finalQuat);
    outScale = UE4ToGL_Scale(meshScale);
}

// ==================== 缩放验证 ====================

bool Physics3D::IsValidScale(const physx::PxVec3& scale)
{
    // 判断xyz至少有两个值相等
    float Max = 5.f;
    if (scale.x >= Max || scale.y >= Max || scale.z >= Max)
    {
        return false;
    }
    return true;
    //return (scale.x == scale.y) || (scale.x == scale.z) || (scale.y == scale.z);
}


// ==================== 网格创建（不应用变换）====================

P3D_Mesh* Physics3D::CreateBoxMesh(Editor3D& editor)
{
    // 创建单位立方体（-0.5 到 0.5，后续通过Scale变换到实际大小）
    // 使用与 TriangleMesh 相同的方式计算法线
    std::vector<P3D_Vertex> vertexData = {
        // 8个顶点
        {{-0.5f, -0.5f, -0.5f}, {0, 0, 0}},  // 0
        {{ 0.5f, -0.5f, -0.5f}, {0, 0, 0}},  // 1
        {{ 0.5f,  0.5f, -0.5f}, {0, 0, 0}},  // 2
        {{-0.5f,  0.5f, -0.5f}, {0, 0, 0}},  // 3
        {{-0.5f, -0.5f,  0.5f}, {0, 0, 0}},  // 4
        {{ 0.5f, -0.5f,  0.5f}, {0, 0, 0}},  // 5
        {{ 0.5f,  0.5f,  0.5f}, {0, 0, 0}},  // 6
        {{-0.5f,  0.5f,  0.5f}, {0, 0, 0}}   // 7
    };
    
    std::vector<unsigned int> indexData = {
        // 前面 (Z+)
        4, 5, 6,  6, 7, 4,
        // 后面 (Z-)
        1, 0, 3,  3, 2, 1,
        // 右面 (X+)
        5, 1, 2,  2, 6, 5,
        // 左面 (X-)
        0, 4, 7,  7, 3, 0,
        // 上面 (Y+)
        7, 6, 2,  2, 3, 7,
        // 下面 (Y-)
        0, 1, 5,  5, 4, 0
    };
    
    // 计算顶点法线（与 TriangleMesh 相同的方式）
    std::vector<P3D_Vec3> normals(8, P3D_Vec3(0, 0, 0));
    for (size_t i = 0; i < indexData.size(); i += 3)
    {
        unsigned int i0 = indexData[i];
        unsigned int i1 = indexData[i + 1];
        unsigned int i2 = indexData[i + 2];
        
        P3D_Vec3 v0 = vertexData[i0].position;
        P3D_Vec3 v1 = vertexData[i1].position;
        P3D_Vec3 v2 = vertexData[i2].position;
        
        P3D_Vec3 edge1 = v1 - v0;
        P3D_Vec3 edge2 = v2 - v0;
        P3D_Vec3 normal = edge1.cross(edge2);
        
        normals[i0] = normals[i0] + normal;
        normals[i1] = normals[i1] + normal;
        normals[i2] = normals[i2] + normal;
    }
    
    // 归一化法线
    for (size_t i = 0; i < 8; i++)
    {
        vertexData[i].normal = normals[i].normalize();
    }
    
    return editor.CreateMesh(vertexData, indexData);
}

P3D_Mesh* Physics3D::CreateBaseMeshFromPhysX(Editor3D& editor, const physx::PxTriangleMesh* triangleMesh)
{
    if (!triangleMesh)
        return nullptr;
    
    // 获取顶点和三角形数据
    const physx::PxU32 nbVertices = triangleMesh->getNbVertices();
    const physx::PxVec3* vertices = triangleMesh->getVertices();
    
    const physx::PxU32 nbTriangles = triangleMesh->getNbTriangles();
    const void* triangles = triangleMesh->getTriangles();
    
    if (nbVertices == 0 || nbTriangles == 0)
        return nullptr;
    
    // 准备顶点数据（直接转换坐标系，不应用缩放和旋转）
    std::vector<P3D_Vertex> vertexData;
    vertexData.reserve(nbVertices);
    
    for (physx::PxU32 i = 0; i < nbVertices; i++)
    {
        P3D_Vertex vertex;
        // UE4坐标系转OpenGL坐标系
        vertex.position = CoordTransform::UE4ToGL_Position(vertices[i]);
        vertex.normal = P3D_Vec3(0, 1, 0); // 临时法线，后面计算
        vertexData.push_back(vertex);
    }
    
    // 准备索引数据
    std::vector<unsigned int> indexData;
    indexData.reserve(nbTriangles * 3);
    
    bool has16BitIndices = triangleMesh->getTriangleMeshFlags() & physx::PxTriangleMeshFlag::e16_BIT_INDICES;
    
    if (has16BitIndices)
    {
        const physx::PxU16* indices16 = static_cast<const physx::PxU16*>(triangles);
        // 反转三角形顶点顺序以修正面的朝向（左手系->右手系）
        for (physx::PxU32 i = 0; i < nbTriangles; i++)
        {
            indexData.push_back(static_cast<unsigned int>(indices16[i * 3 + 0]));
            indexData.push_back(static_cast<unsigned int>(indices16[i * 3 + 2]));  // 交换2和1
            indexData.push_back(static_cast<unsigned int>(indices16[i * 3 + 1]));
        }
    }
    else
    {
        const physx::PxU32* indices32 = static_cast<const physx::PxU32*>(triangles);
        // 反转三角形顶点顺序以修正面的朝向（左手系->右手系）
        for (physx::PxU32 i = 0; i < nbTriangles; i++)
        {
            indexData.push_back(static_cast<unsigned int>(indices32[i * 3 + 0]));
            indexData.push_back(static_cast<unsigned int>(indices32[i * 3 + 2]));  // 交换2和1
            indexData.push_back(static_cast<unsigned int>(indices32[i * 3 + 1]));
        }
    }
    
    // 计算顶点法线
    std::vector<P3D_Vec3> normals(nbVertices, P3D_Vec3(0, 0, 0));
    for (size_t i = 0; i < indexData.size(); i += 3)
    {
        unsigned int i0 = indexData[i];
        unsigned int i1 = indexData[i + 1];
        unsigned int i2 = indexData[i + 2];
        
        P3D_Vec3 v0 = vertexData[i0].position;
        P3D_Vec3 v1 = vertexData[i1].position;
        P3D_Vec3 v2 = vertexData[i2].position;
        
        P3D_Vec3 edge1 = v1 - v0;
        P3D_Vec3 edge2 = v2 - v0;
        P3D_Vec3 normal = edge1.cross(edge2);
        
        normals[i0] = normals[i0] + normal;
        normals[i1] = normals[i1] + normal;
        normals[i2] = normals[i2] + normal;
    }
    
    // 归一化法线
    for (size_t i = 0; i < nbVertices; i++)
    {
        vertexData[i].normal = normals[i].normalize();
    }
    
    // 创建Mesh
    return editor.CreateMesh(vertexData, indexData);
}

P3D_Mesh* Physics3D::CreateBaseMeshFromConvex(Editor3D& editor, const physx::PxConvexMesh* convexMesh)
{
    if (!convexMesh)
        return nullptr;
    
    // 获取顶点数据
    const physx::PxU32 nbVertices = convexMesh->getNbVertices();
    const physx::PxVec3* vertices = convexMesh->getVertices();
    
    if (nbVertices == 0)
        return nullptr;
    
    // 准备顶点数据（直接转换坐标系）
    std::vector<P3D_Vertex> vertexData;
    vertexData.reserve(nbVertices);
    
    for (physx::PxU32 i = 0; i < nbVertices; i++)
    {
        P3D_Vertex vertex;
        vertex.position = CoordTransform::UE4ToGL_Position(vertices[i]);
        vertex.normal = P3D_Vec3(0, 1, 0); // 临时法线，后面计算
        vertexData.push_back(vertex);
    }
    
    // 准备索引数据（从多边形提取）
    std::vector<unsigned int> indexData;
    const physx::PxU8* indexBuffer = convexMesh->getIndexBuffer();
    uint32_t nbPolygons = convexMesh->getNbPolygons();
    
    for (uint32_t p = 0; p < nbPolygons; p++)
    {
        physx::PxHullPolygon polygon;
        convexMesh->getPolygonData(p, polygon);
        
        // 将多边形三角化（扇形三角化，假设是凸多边形）
        if (polygon.mNbVerts >= 3)
        {
            // 使用扇形三角化：以第一个顶点为中心
            for (uint32_t v = 1; v < polygon.mNbVerts - 1; v++)
            {
                // 反转顶点顺序以修正面朝向（左手系->右手系）
                // 原始: (0, v, v+1) -> 反转: (0, v+1, v)
                indexData.push_back(static_cast<unsigned int>(indexBuffer[polygon.mIndexBase + 0]));
                indexData.push_back(static_cast<unsigned int>(indexBuffer[polygon.mIndexBase + v + 1]));
                indexData.push_back(static_cast<unsigned int>(indexBuffer[polygon.mIndexBase + v]));
            }
        }
    }
    
    if (indexData.empty())
        return nullptr;
    
    // 计算顶点法线
    std::vector<P3D_Vec3> normals(nbVertices, P3D_Vec3(0, 0, 0));
    for (size_t i = 0; i < indexData.size(); i += 3)
    {
        unsigned int i0 = indexData[i];
        unsigned int i1 = indexData[i + 1];
        unsigned int i2 = indexData[i + 2];
        
        P3D_Vec3 v0 = vertexData[i0].position;
        P3D_Vec3 v1 = vertexData[i1].position;
        P3D_Vec3 v2 = vertexData[i2].position;
        
        P3D_Vec3 edge1 = v1 - v0;
        P3D_Vec3 edge2 = v2 - v0;
        P3D_Vec3 normal = edge1.cross(edge2);
        
        normals[i0] = normals[i0] + normal;
        normals[i1] = normals[i1] + normal;
        normals[i2] = normals[i2] + normal;
    }
    
    // 归一化法线
    for (size_t i = 0; i < nbVertices; i++)
    {
        vertexData[i].normal = normals[i].normalize();
    }
    
    // 创建Mesh
    return editor.CreateMesh(vertexData, indexData);
}

P3D_Mesh* Physics3D::CreateBaseMeshFromHeightField(Editor3D& editor, const physx::PxHeightField* heightField,
                                                     float heightScale, float rowScale, float columnScale)
{
    if (!heightField)
        return nullptr;
    
    uint32_t nbRows = heightField->getNbRows();
    uint32_t nbCols = heightField->getNbColumns();
    
    if (nbRows < 2 || nbCols < 2)
        return nullptr;
    
    // 准备顶点数据
    std::vector<P3D_Vertex> vertexData;
    vertexData.reserve(nbRows * nbCols);
    
    // 获取高度场采样数据
    std::vector<physx::PxHeightFieldSample> samples(nbRows * nbCols);
    heightField->saveCells(samples.data(), samples.size() * sizeof(physx::PxHeightFieldSample));
    
    // 生成顶点
    // 参考 SFML 绘制代码中的映射方式：
    // physx::PxVec3 v(row * RowScale, height, col * ColScale)
    // 在 UE4 坐标系中：X=row, Y=height, Z=col
    for (uint32_t r = 0; r < nbRows; r++)
    {
        for (uint32_t c = 0; c < nbCols; c++)
        {
            uint32_t index = r * nbCols + c;
            
            // 使用 getHeight 方法获取高度（与 SFML 代码一致）
            physx::PxReal height = heightField->getHeight(r, c) * heightScale;
            
            // 构建顶点位置（与 SFML 绘制代码的映射一致）
            // UE4坐标系：X=row*RowScale, Y=height, Z=col*ColScale
            physx::PxVec3 ue4Pos(
                r * rowScale,
                height,
                c * columnScale
            );
            
            P3D_Vertex vertex;
            vertex.position = CoordTransform::UE4ToGL_Position(ue4Pos);
            vertex.normal = P3D_Vec3(0, 1, 0); // 临时法线，后面计算
            vertexData.push_back(vertex);
        }
    }
    
    // 准备索引数据（生成三角形）
    std::vector<unsigned int> indexData;
    indexData.reserve((nbRows - 1) * (nbCols - 1) * 6);
    
    for (uint32_t r = 0; r < nbRows - 1; r++)
    {
        for (uint32_t c = 0; c < nbCols - 1; c++)
        {
            uint32_t i0 = r * nbCols + c;
            uint32_t i1 = r * nbCols + (c + 1);
            uint32_t i2 = (r + 1) * nbCols + (c + 1);
            uint32_t i3 = (r + 1) * nbCols + c;
            
            // 每个格子生成两个三角形，反转顶点顺序以修正面朝向
            // 三角形1: i0, i2, i1
            indexData.push_back(i0);
            indexData.push_back(i2);
            indexData.push_back(i1);
            
            // 三角形2: i0, i3, i2
            indexData.push_back(i0);
            indexData.push_back(i3);
            indexData.push_back(i2);
        }
    }
    
    if (indexData.empty())
        return nullptr;
    
    // 计算顶点法线
    std::vector<P3D_Vec3> normals(nbRows * nbCols, P3D_Vec3(0, 0, 0));
    for (size_t i = 0; i < indexData.size(); i += 3)
    {
        unsigned int i0 = indexData[i];
        unsigned int i1 = indexData[i + 1];
        unsigned int i2 = indexData[i + 2];
        
        P3D_Vec3 v0 = vertexData[i0].position;
        P3D_Vec3 v1 = vertexData[i1].position;
        P3D_Vec3 v2 = vertexData[i2].position;
        
        P3D_Vec3 edge1 = v1 - v0;
        P3D_Vec3 edge2 = v2 - v0;
        P3D_Vec3 normal = edge1.cross(edge2);
        
        normals[i0] = normals[i0] + normal;
        normals[i1] = normals[i1] + normal;
        normals[i2] = normals[i2] + normal;
    }
    
    // 归一化法线
    for (size_t i = 0; i < nbRows * nbCols; i++)
    {
        vertexData[i].normal = normals[i].normalize();
    }
    
    // 创建Mesh
    return editor.CreateMesh(vertexData, indexData);
}

P3D_BaseMesh* Physics3D::GetOrCreateMesh(Editor3D& editor, const physx::PxTriangleMesh* triangleMesh)
{
    if (!triangleMesh)
        return nullptr;
    
    // 检查缓存
    auto it = MeshCache.find(triangleMesh);
    if (it != MeshCache.end())
    {
        // 增加引用计数
        it->second.RefCount++;
        return &it->second;
    }
    
    // 创建新网格
    P3D_Mesh* mesh = CreateBaseMeshFromPhysX(editor, triangleMesh);
    if (!mesh)
        return nullptr;
    
    // 添加到缓存
    P3D_BaseMesh& baseMesh = MeshCache[triangleMesh];
    baseMesh.Mesh = mesh;
    baseMesh.RefCount = 1;
    
    return &baseMesh;
}

P3D_BaseMesh* Physics3D::GetOrCreateConvexMesh(Editor3D& editor, const physx::PxConvexMesh* convexMesh)
{
    if (!convexMesh)
        return nullptr;
    
    // 检查缓存
    auto it = ConvexMeshCache.find(convexMesh);
    if (it != ConvexMeshCache.end())
    {
        // 增加引用计数
        it->second.RefCount++;
        return &it->second;
    }
    
    // 创建新网格
    P3D_Mesh* mesh = CreateBaseMeshFromConvex(editor, convexMesh);
    if (!mesh)
        return nullptr;
    
    // 添加到缓存
    P3D_BaseMesh& baseMesh = ConvexMeshCache[convexMesh];
    baseMesh.Mesh = mesh;
    baseMesh.RefCount = 1;
    
    return &baseMesh;
}

P3D_BaseMesh* Physics3D::GetOrCreateBoxMesh(Editor3D& editor)
{
    // Box网格是全局共享的
    if (BoxMesh.Mesh == nullptr)
    {
        BoxMesh.Mesh = CreateBoxMesh(editor);
        BoxMesh.RefCount = 1;
    }
    else
    {
        BoxMesh.RefCount++;
    }
    
    return &BoxMesh;
}

P3D_BaseMesh* Physics3D::GetOrCreateHeightFieldMesh(Editor3D& editor, const physx::PxHeightField* heightField,
                                                     float heightScale, float rowScale, float columnScale)
{
    if (!heightField)
        return nullptr;
    
    // 检查缓存
    auto it = HeightFieldCache.find(heightField);
    if (it != HeightFieldCache.end())
    {
        // 增加引用计数
        it->second.RefCount++;
        return &it->second;
    }
    
    // 创建新网格
    P3D_Mesh* mesh = CreateBaseMeshFromHeightField(editor, heightField, heightScale, rowScale, columnScale);
    if (!mesh)
        return nullptr;
    
    // 添加到缓存
    P3D_BaseMesh& baseMesh = HeightFieldCache[heightField];
    baseMesh.Mesh = mesh;
    baseMesh.RefCount = 1;
    
    return &baseMesh;
}

// ==================== 场景加载 ====================

void Physics3D::LoadSceneFromPhysX(Editor3D& editor)
{
    std::shared_lock<std::shared_mutex> Lock(GameData.Physics.Mutex);
    
    if (!GameData.Physics.PhysX.mScene)
    {
        std::cout << "PhysX场景不存在" << std::endl;
        Lock.unlock();
        return;
    }
    
    GameData.Physics.PhysX.mScene->lockRead();
    
    physx::PxU32 NbStaticActors = GameData.Physics.PhysX.mScene->getNbActors(physx::PxActorTypeFlag::eRIGID_STATIC);
    
    if (NbStaticActors == 0)
    {
        std::cout << "场景中没有静态Actor" << std::endl;
        GameData.Physics.PhysX.mScene->unlockRead();
        Lock.unlock();
        return;
    }
    
    physx::PxActor** StaticActors = new physx::PxActor*[NbStaticActors];
    GameData.Physics.PhysX.mScene->getActors(physx::PxActorTypeFlag::eRIGID_STATIC, StaticActors, NbStaticActors);
    
    int loadedCount = 0;
    int sharedMeshCount = 0;
    int boxCount = 0;
    int convexCount = 0;
    int heightFieldCount = 0;
    int skippedCount = 0; // 因为无效缩放跳过的模型数
    
    for (physx::PxU32 I = 0; I < NbStaticActors; I++)
    {
        physx::PxRigidActor* Actor = StaticActors[I]->is<physx::PxRigidActor>();
        if (!Actor)
            continue;
        
        physx::PxU32 NbShapes = Actor->getNbShapes();
        if (NbShapes == 0)
            continue;
        
        physx::PxShape** Shapes = new physx::PxShape*[NbShapes];
        Actor->getShapes(Shapes, NbShapes);
        
        for (physx::PxU32 J = 0; J < NbShapes; J++)
        {
            physx::PxShape* Shape = Shapes[J];
            if (!Shape)
                continue;
            
            physx::PxGeometryType::Enum GeomType = Shape->getGeometry().getType();
            
            if (GeomType == physx::PxGeometryType::eTRIANGLEMESH)
            {
                physx::PxTriangleMeshGeometry TriGeom = Shape->getGeometry().triangleMesh();
                if (!TriGeom.triangleMesh)
                    continue;
                
                // // 验证缩放值，如果无效则跳过此模型
                 //if (!IsValidScale(TriGeom.scale.scale))
                 //{
                 //    //692016, -482928, -22735.4
                 //    //if(Actor->getGlobalPose().p.x == 715835.812500f && Actor->getGlobalPose().p.y == -478352.843750f && Actor->getGlobalPose().p.z == -21902.000000f)
                 //    {
                 //        Utils::Log(2, "Scale: X=%f, Y=%f, Z=%f", TriGeom.scale.scale.x, TriGeom.scale.scale.y, TriGeom.scale.scale.z);
                 //        Utils::Log(2, "Rotation: X=%f, Y=%f, Z=%f", TriGeom.scale.rotation.x, TriGeom.scale.rotation.y, TriGeom.scale.rotation.z);
                 //        Utils::Log(2, "Position: Actor->getGlobalPose().p.x == %ff && Actor->getGlobalPose().p.y == %ff && Actor->getGlobalPose().p.z == %ff\n", Actor->getGlobalPose().p.x, Actor->getGlobalPose().p.y, Actor->getGlobalPose().p.z);
                 //    }
                 //    skippedCount++;
                 //    continue;
                 //}
                
                // 获取或创建共享的基础网格
                P3D_BaseMesh* baseMesh = GetOrCreateMesh(editor, TriGeom.triangleMesh);
                if (!baseMesh)
                    continue;
                
                if (baseMesh->RefCount > 1)
                    sharedMeshCount++;
                
                // 创建Shape实例
                P3D_ShapeInstance instance;
                instance.ShapeType = P3D_ShapeType::TriangleMesh;
                instance.SourceMesh = TriGeom.triangleMesh;
                instance.BaseMesh = baseMesh;
                instance.Color = P3D_Vec3(190.f / 255.f, 190.f / 255.f, 190.f / 255.f); // 灰色
                instance.Actor = Actor;
                instance.Shape = Shape;
                
                // 组合所有变换并转换到OpenGL坐标系
                CoordTransform::CombineTransforms(
                    Actor->getGlobalPose(),
                    Shape->getLocalPose(),
                    TriGeom.scale.scale,
                    //physx::PxVec3(1.f, 1.f, 1.f),
                    TriGeom.scale.rotation, 
                    //physx::PxQuat(0.f, 0.f, 0.f, 0.f),
                    instance.Position,
                    instance.Rotation,
                    instance.Scale
                );
                
                ShapeInstances.push_back(instance);
                loadedCount++;
            }
            else if (GeomType == physx::PxGeometryType::eBOX)
            {
                physx::PxBoxGeometry BoxGeom = Shape->getGeometry().box();
                
                // 获取或创建Box网格（全局共享）
                P3D_BaseMesh* baseMesh = GetOrCreateBoxMesh(editor);
                if (!baseMesh)
                    continue;
                
                // 创建Shape实例
                P3D_ShapeInstance instance;
                instance.ShapeType = P3D_ShapeType::Box;
                instance.SourceMesh = nullptr; // Box不需要源网格指针
                instance.BaseMesh = baseMesh;
                instance.Color = P3D_Vec3(1.0f, 1.0f, 0.0f); // 黄色
                instance.Actor = Actor;
                instance.Shape = Shape;
                
                // Box的HalfExtents需要乘以2才是实际尺寸
                physx::PxVec3 boxScale = BoxGeom.halfExtents * 2.0f;
                
                // 组合所有变换并转换到OpenGL坐标系
                CoordTransform::CombineTransforms(
                    Actor->getGlobalPose(),
                    Shape->getLocalPose(),
                    boxScale,
                    physx::PxQuat(physx::PxIdentity),
                    instance.Position,
                    instance.Rotation,
                    instance.Scale
                );
                
                ShapeInstances.push_back(instance);
                loadedCount++;
                boxCount++;
            }
            else if (GeomType == physx::PxGeometryType::eCONVEXMESH)
            {
                physx::PxConvexMeshGeometry ConvexGeom = Shape->getGeometry().convexMesh();
                if (!ConvexGeom.convexMesh)
                    continue;
                
                // 验证缩放值，如果无效则跳过此模型
                if (!IsValidScale(ConvexGeom.scale.scale))
                {
                    skippedCount++;
                    continue;
                }
                
                // 获取或创建共享的ConvexMesh
                P3D_BaseMesh* baseMesh = GetOrCreateConvexMesh(editor, ConvexGeom.convexMesh);
                if (!baseMesh)
                    continue;
                
                if (baseMesh->RefCount > 1)
                    sharedMeshCount++;
                
                // 创建Shape实例
                P3D_ShapeInstance instance;
                instance.ShapeType = P3D_ShapeType::ConvexMesh;
                instance.SourceMesh = ConvexGeom.convexMesh;
                instance.BaseMesh = baseMesh;
                instance.Color = P3D_Vec3(0.0f, 1.0f, 0.0f); // 绿色
                instance.Actor = Actor;
                instance.Shape = Shape;
                
                // 组合所有变换并转换到OpenGL坐标系
                CoordTransform::CombineTransforms(
                    Actor->getGlobalPose(),
                    Shape->getLocalPose(), 
                    ConvexGeom.scale.scale,
                    ConvexGeom.scale.rotation,
                    instance.Position,
                    instance.Rotation,
                    instance.Scale
                );
                
                ShapeInstances.push_back(instance);
                loadedCount++;
                convexCount++;
            }
            else if (GeomType == physx::PxGeometryType::eHEIGHTFIELD)
            {
                physx::PxHeightFieldGeometry HFGeom = Shape->getGeometry().heightField();
                if (!HFGeom.heightField)
                    continue;
                
                // 获取或创建共享的HeightField网格
                P3D_BaseMesh* baseMesh = GetOrCreateHeightFieldMesh(editor, HFGeom.heightField, 
                                                                      HFGeom.heightScale, 
                                                                      HFGeom.rowScale, 
                                                                      HFGeom.columnScale);
                if (!baseMesh)
                    continue;
                
                if (baseMesh->RefCount > 1)
                    sharedMeshCount++;
                
                // 创建Shape实例
                P3D_ShapeInstance instance;
                instance.ShapeType = P3D_ShapeType::HeightField;
                instance.SourceMesh = HFGeom.heightField;
                instance.BaseMesh = baseMesh;
                instance.Color = P3D_Vec3(0.5f, 0.8f, 1.0f); // 浅蓝色
                instance.Actor = Actor;
                instance.Shape = Shape;
                
                // HeightField 不需要额外的缩放（已经在创建网格时应用了）
                CoordTransform::CombineTransforms(
                    Actor->getGlobalPose(),
                    Shape->getLocalPose(),
                    physx::PxVec3(1.0f, 1.0f, 1.0f),
                    physx::PxQuat(physx::PxIdentity),
                    instance.Position,
                    instance.Rotation,
                    instance.Scale
                );
                
                ShapeInstances.push_back(instance);
                loadedCount++;
                heightFieldCount++;
            }
        }
        
        delete[] Shapes;
    }
    
    delete[] StaticActors;
    
    GameData.Physics.PhysX.mScene->unlockRead();
    Lock.unlock();
    
    std::cout << "========================================" << std::endl;
    std::cout << "成功加载场景:" << std::endl;
    std::cout << "  - Shape实例数: " << loadedCount << std::endl;
    std::cout << "  - TriangleMesh: " << MeshCache.size() << " 个" << std::endl;
    std::cout << "  - ConvexMesh: " << convexCount << " 个" << std::endl;
    std::cout << "  - Box: " << boxCount << " 个" << std::endl;
    std::cout << "  - HeightField: " << heightFieldCount << " 个" << std::endl;
    std::cout << "  - 共享网格数: " << sharedMeshCount << std::endl;
    if (skippedCount > 0)
    {
        std::cout << "  - 跳过无效缩放: " << skippedCount << " 个" << std::endl;
    }
    std::cout << "========================================" << std::endl;
}

// ==================== 清理 ====================

void Physics3D::ClearAllMeshes(Editor3D& editor)
{
    // 清理所有TriangleMesh网格
    for (auto& pair : MeshCache)
    {
        if (pair.second.Mesh)
        {
            editor.DestroyMesh(pair.second.Mesh);
        }
    }
    
    // 清理所有ConvexMesh网格
    for (auto& pair : ConvexMeshCache)
    {
        if (pair.second.Mesh)
        {
            editor.DestroyMesh(pair.second.Mesh);
        }
    }
    
    // 清理所有HeightField网格
    for (auto& pair : HeightFieldCache)
    {
        if (pair.second.Mesh)
        {
            editor.DestroyMesh(pair.second.Mesh);
        }
    }
    
    // 清理Box网格
    if (BoxMesh.Mesh)
    {
        editor.DestroyMesh(BoxMesh.Mesh);
        BoxMesh.Mesh = nullptr;
        BoxMesh.RefCount = 0;
    }
    
    MeshCache.clear();
    ConvexMeshCache.clear();
    HeightFieldCache.clear();
    ShapeInstances.clear();
    InstanceGroups.clear();
    ColoredInstanceGroups.clear();
    
    // 重置选择状态
    SelectedInstanceIndex = -1;
    
    std::cout << "已清理所有网格和实例" << std::endl;
}

// ==================== 选择功能实现 ====================

void Physics3D::HandleMouseSelection(Editor3D& editor)
{
    // 改为基于相机朝向的自动选择
    HandleCameraTargetSelection(editor);
}

void Physics3D::HandleCameraTargetSelection(Editor3D& editor)
{
    // 限制射线投射频率，避免性能问题
    static float lastRaycastTime = 0.0f;
    static float raycastInterval = 0.1f; // 每100毫秒检测一次
    
    float currentTime = glfwGetTime();
    if (currentTime - lastRaycastTime < raycastInterval)
    {
        return;
    }
    lastRaycastTime = currentTime;
    
    // 获取相机信息
    P3D_Vec3 cameraPos = editor.GetCameraPosition();
    P3D_Vec3 cameraFront = editor.GetCameraFront();
    
    // 找到相机正前方最近的模型
    int targetIndex = FindCameraTarget(cameraPos, cameraFront);
    
    // 如果目标发生变化，更新选择
    static int lastTargetIndex = -1;
    if (targetIndex != lastTargetIndex)
    {
        if (lastTargetIndex != -1)
        {
            // 取消之前的选择
            DeselectAll();
        }
        
        if (targetIndex != -1)
        {
            // 选中新目标
            SelectInstance(targetIndex);
            std::cout << "相机瞄准模型: " << targetIndex << std::endl;
        }
        
        lastTargetIndex = targetIndex;
    }
}

int Physics3D::FindCameraTarget(const P3D_Vec3& cameraPos, const P3D_Vec3& cameraFront)
{
    // 使用PhysX射线投射进行精确碰撞检测
    std::shared_lock<std::shared_mutex> Lock(GameData.Physics.Mutex);
    
    if (!GameData.Physics.PhysX.mScene)
    {
        Lock.unlock();
        return -1;
    }
    
    // 将OpenGL坐标系的相机位置和朝向转换回UE4坐标系
    // OpenGL -> UE4: (x,y,z) -> (-z, x, y)
    physx::PxVec3 ue4CameraPos(-cameraPos.z, cameraPos.x, cameraPos.y);
    physx::PxVec3 ue4CameraDir(-cameraFront.z, cameraFront.x, cameraFront.y);
    
    // 射线投射距离
    const float rayDistance = 10000.0f;
    
    // 创建射线投射查询
    physx::PxRaycastBuffer hit;
    physx::PxQueryFilterData filterData;
    filterData.data.word0 = 0; // 不过滤任何对象
    
    GameData.Physics.PhysX.mScene->lockRead();
    
    // 执行射线投射
    bool hasHit = GameData.Physics.PhysX.mScene->raycast(
        ue4CameraPos,           // 射线起点（UE4坐标系）
        ue4CameraDir,           // 射线方向（UE4坐标系）
        rayDistance,            // 射线距离
        hit,                    // 碰撞结果
        physx::PxHitFlag::eDEFAULT,
        filterData
    );
    
    GameData.Physics.PhysX.mScene->unlockRead();
    Lock.unlock();
    
    if (!hasHit || !hit.hasBlock)
    {
        return -1;
    }
    
    // 找到被击中的Shape对应的实例索引
    physx::PxRigidActor* hitActor = hit.block.actor;
    physx::PxShape* hitShape = hit.block.shape;
    
    // 在ShapeInstances中查找匹配的Actor和Shape
    for (size_t i = 0; i < ShapeInstances.size(); i++)
    {
        const P3D_ShapeInstance& instance = ShapeInstances[i];
        if (instance.Actor == hitActor && instance.Shape == hitShape)
        {
            // 输出调试信息
            physx::PxVec3 hitPoint = hit.block.position;
            float hitDistance = hit.block.distance;
            
            std::cout << "PhysX射线命中: 实例" << i 
                      << ", 距离=" << hitDistance 
                      << ", 命中点UE4=(" << hitPoint.x << "," << hitPoint.y << "," << hitPoint.z << ")"
                      << std::endl;
            
            return static_cast<int>(i);
        }
    }
    
    return -1;
}

int Physics3D::PerformRaycast(Editor3D& editor, double mouseX, double mouseY)
{
    // 简化的选择逻辑：找到距离相机最近的模型
    P3D_Vec3 cameraPos = editor.GetCameraPosition();
    
    float closestDistance = FLT_MAX;
    int closestIndex = -1;
    
    // 添加调试输出
    std::cout << "鼠标点击位置: (" << mouseX << ", " << mouseY << ")" << std::endl;
    std::cout << "相机位置: (" << cameraPos.x << ", " << cameraPos.y << ", " << cameraPos.z << ")" << std::endl;
    std::cout << "检测到 " << ShapeInstances.size() << " 个模型实例" << std::endl;
    
    for (size_t i = 0; i < ShapeInstances.size(); i++)
    {
        const P3D_ShapeInstance& instance = ShapeInstances[i];
        
        // 计算到相机的距离
        P3D_Vec3 toInstance = instance.Position - cameraPos;
        float distance = std::sqrt(toInstance.dot(toInstance));
        
        // 简单的距离检测：选择最近的模型（在合理范围内）
        if (distance < 10000.0f && distance < closestDistance) // 10000单位内的模型
        {
            closestDistance = distance;
            closestIndex = static_cast<int>(i);
        }
        
        // 调试输出前几个模型的信息
        if (i < 5)
        {
            std::cout << "模型 " << i << ": 位置(" << instance.Position.x << ", " 
                      << instance.Position.y << ", " << instance.Position.z 
                      << "), 距离=" << distance << std::endl;
        }
    }
    
    if (closestIndex != -1)
    {
        std::cout << "选中模型索引: " << closestIndex << ", 距离: " << closestDistance << std::endl;
    }
    else
    {
        std::cout << "没有找到可选择的模型" << std::endl;
    }
    
    return closestIndex;
}

void Physics3D::SelectInstance(int index)
{
    if (index < 0 || index >= static_cast<int>(ShapeInstances.size()))
        return;
    
    // 取消之前的选择
    DeselectAll();
    
    // 选中新实例
    SelectedInstanceIndex = index;
    ShapeInstances[index].IsSelected = true;
    
    // 输出选中实例的信息
    OutputSelectedInstanceInfo();
}

void Physics3D::DeselectAll()
{
    if (SelectedInstanceIndex != -1 && SelectedInstanceIndex < static_cast<int>(ShapeInstances.size()))
    {
        ShapeInstances[SelectedInstanceIndex].IsSelected = false;
    }
    SelectedInstanceIndex = -1;
}

void Physics3D::OutputSelectedInstanceInfo()
{
    if (SelectedInstanceIndex == -1 || SelectedInstanceIndex >= static_cast<int>(ShapeInstances.size()))
        return;
    
    const P3D_ShapeInstance& instance = ShapeInstances[SelectedInstanceIndex];
    
    std::cout << "\n========== 选中模型信息 ==========" << std::endl;
    
    // 输出类型
    std::string typeStr;
    switch (instance.ShapeType)
    {
        case P3D_ShapeType::TriangleMesh: typeStr = "TriangleMesh"; break;
        case P3D_ShapeType::Box: typeStr = "Box"; break;
        case P3D_ShapeType::ConvexMesh: typeStr = "ConvexMesh"; break;
        case P3D_ShapeType::HeightField: typeStr = "HeightField"; break;
        default: typeStr = "Unknown"; break;
    }
    std::cout << "类型: " << typeStr << std::endl;
    
    // 输出坐标（OpenGL坐标系）
    std::cout << "位置 (OpenGL): X=" << instance.Position.x 
              << ", Y=" << instance.Position.y 
              << ", Z=" << instance.Position.z << std::endl;
    
    // 输出旋转
    std::cout << "旋转 (度): X=" << instance.Rotation.x 
              << ", Y=" << instance.Rotation.y 
              << ", Z=" << instance.Rotation.z << std::endl;
    
    // 输出缩放
    std::cout << "缩放: X=" << instance.Scale.x 
              << ", Y=" << instance.Scale.y 
              << ", Z=" << instance.Scale.z << std::endl;
    
    // 输出PhysX原始坐标（UE4坐标系）
    if (instance.Actor)
    {
        physx::PxVec3 physxPos = instance.Actor->getGlobalPose().p;
        std::cout << "PhysX位置 (UE4): X=" << physxPos.x 
                  << ", Y=" << physxPos.y 
                  << ", Z=" << physxPos.z << std::endl;
    }

    if (instance.Shape)
    {
        physx::PxTriangleMeshGeometry TriGeom = instance.Shape->getGeometry().triangleMesh();
        physx::PxVec3 physxPos = TriGeom.scale.scale;
        std::cout << "Shape位置 (UE4): X=" << physxPos.x << ", Y=" << physxPos.y << ", Z=" << physxPos.z << std::endl;
        std::cout << "Shape缩放 (UE4): X=" << TriGeom.scale.rotation.x << ", Y=" << TriGeom.scale.rotation.y << ", Z=" << TriGeom.scale.rotation.z << ", W=" << TriGeom.scale.rotation.z << std::endl;
    }
    
    std::cout << "=================================" << std::endl;
}

void Physics3D::DeleteSelectedInstance(Editor3D& editor)
{
    if (SelectedInstanceIndex == -1 || SelectedInstanceIndex >= static_cast<int>(ShapeInstances.size()))
        return;
    
    const P3D_ShapeInstance& instance = ShapeInstances[SelectedInstanceIndex];
    
    if (!instance.Actor || !instance.Shape)
    {
        std::cout << "错误: 无法删除实例，PhysX对象引用无效" << std::endl;
        return;
    }
    
    std::cout << "\n正在删除选中的模型..." << std::endl;
    
    // 从PhysX场景中删除
    std::shared_lock<std::shared_mutex> Lock(GameData.Physics.Mutex);
    
    if (GameData.Physics.PhysX.mScene)
    {
        GameData.Physics.PhysX.mScene->lockWrite();
        
        // 从Actor中移除Shape
        instance.Actor->detachShape(*instance.Shape);
        
        // 如果Actor没有其他Shape了，也删除Actor
        if (instance.Actor->getNbShapes() == 0)
        {
            GameData.Physics.PhysX.mScene->removeActor(*instance.Actor);
        }
        
        GameData.Physics.PhysX.mScene->unlockWrite();
        
        std::cout << "已从PhysX场景中删除模型" << std::endl;
        
        // 重新加载场景
        std::cout << "正在重新加载场景..." << std::endl;
        ClearAllMeshes(editor);
        LoadSceneFromPhysX(editor);

        {
            auto MapName = XorStr("New");

            std::shared_lock<std::shared_mutex> Lock(GameData.Physics.Mutex);
            if (GameData.Physics.PhysX.mScene)
            {
                GameData.Physics.PhysX.mScene->lockRead();
                PhysXCollect::SaveToFile(MapName, true);
                GameData.Physics.PhysX.mScene->unlockRead();
            }
            Lock.unlock();
        }
        
        std::cout << "场景重新加载完成" << std::endl;
    }
    else
    {
        std::cout << "错误: PhysX场景不存在" << std::endl;
    }
    
    Lock.unlock();
}

// ==================== 主循环 ====================

void Physics3D::Run()
{
    // 创建编辑器实例
    Editor3D editor;
    
    // 初始化
    if (!editor.Initialize(1280, 800, "3D Physics Editor")) {
        return;
    }
    
    // 设置缩放限制
    editor.SetZoomLimits(10.0f, 120.0f);
    
    // 设置 Shift 加速倍率
    editor.SetShiftSpeedMultiplier(5.0f);

    while (!editor.ShouldClose()) {
        
        GLFWwindow* window = editor.GetWindow();
        bool ctrlPressed = (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS || 
                           glfwGetKey(window, GLFW_KEY_RIGHT_CONTROL) == GLFW_PRESS);
        
        // 检测 Ctrl + R 快捷键（重新加载场景）
        if (ctrlPressed && glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS)
        {
            if (!KeyRPressed)
            {
                KeyRPressed = true;
                std::cout << "\n正在重新加载场景..." << std::endl;
                
                // 清理旧的Mesh
                ClearAllMeshes(editor);
                
                // 从PhysX场景加载
                LoadSceneFromPhysX(editor);

                auto Location = GameData.Physics.FWorldOriginLocation + GameData.Global.Data.Camera.Location;

                //76937.515625f, -54192.121094f, -6918.869629f | 29.320503f, -2.725191f, 0.000000f
                P3D_Vec3 glCamPos = CoordTransform::UE4ToGL_Position(physx::PxVec3(Location.X, Location.Y, Location.Z));
                editor.SetCameraPosition(glCamPos);
                editor.SetCameraRotation(GameData.Global.Data.Camera.Rotation.Yaw + -90.f, GameData.Global.Data.Camera.Rotation.Pitch, GameData.Global.Data.Camera.Rotation.Roll);
                
                //687041.875000f, -470090.250000f, -22795.527344f | -129.586945f, -2.429662f, -0.000001f
                //P3D_Vec3 glCamPos = CoordTransform::UE4ToGL_Position(physx::PxVec3(76937.515625f, -54192.121094f, -6918.869629f));
                //editor.SetCameraPosition(glCamPos);
                //editor.SetCameraRotation(29.320503f, -2.725191f, 0.000000f);
                

                //964 - 484 | 700228.437500_-454612.437500_-22985.941406
                //964 - 484 | 700848.125000_-458638.031250_-22914.117188
                //133 - 71 | 697954.500000_-458308.812500_-22948.947266
                //93 - 51 | 697665.562500_-456803.468750_-22944.154297
                Utils::Log(4, XorStr("%ff, %ff, %ff | %ff, %ff, %ff"), Location.X, Location.Y, Location.Z, GameData.Global.Data.Camera.Rotation.Yaw + -90.f, GameData.Global.Data.Camera.Rotation.Pitch, GameData.Global.Data.Camera.Rotation.Roll);
            }
        }
        else
        {
            KeyRPressed = false;
        }
        
        // 检测 Ctrl + D 快捷键（删除选中模型）
        if (ctrlPressed && glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        {
            if (!KeyDPressed)
            {
                KeyDPressed = true;
                if (SelectedInstanceIndex != -1)
                {
                    DeleteSelectedInstance(editor);
                }
                else
                {
                    std::cout << "没有选中的模型可以删除" << std::endl;
                }
            }
        }
        else
        {
            KeyDPressed = false;
        }
        
        // 处理鼠标选择
        HandleMouseSelection(editor);
        
        // 测试选择功能：按 T 键选择第一个模型
        static bool keyTPressed = false;
        if (glfwGetKey(window, GLFW_KEY_T) == GLFW_PRESS)
        {
            if (!keyTPressed)
            {
                keyTPressed = true;
                if (!ShapeInstances.empty())
                {
                    std::cout << "测试选择第一个模型..." << std::endl;
                    SelectInstance(0);
                }
            }
        }
        else
        {
            keyTPressed = false;
        }
        
        // 按 U 键取消选择
        static bool keyUPressed = false;
        if (glfwGetKey(window, GLFW_KEY_U) == GLFW_PRESS)
        {
            if (!keyUPressed)
            {
                keyUPressed = true;
                std::cout << "取消选择..." << std::endl;
                DeselectAll();
            }
        }
        else
        {
            keyUPressed = false;
        }
        
        // 按 I 键显示相机瞄准信息
        static bool keyIPressed = false;
        if (glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS)
        {
            if (!keyIPressed)
            {
                keyIPressed = true;
                P3D_Vec3 cameraPos = editor.GetCameraPosition();
                P3D_Vec3 cameraFront = editor.GetCameraFront();
                
                // 转换到UE4坐标系
                physx::PxVec3 ue4CameraPos(-cameraPos.z, cameraPos.x, cameraPos.y);
                physx::PxVec3 ue4CameraDir(-cameraFront.z, cameraFront.x, cameraFront.y);
                
                std::cout << "\n=== 相机瞄准信息 ===" << std::endl;
                std::cout << "OpenGL相机位置: (" << cameraPos.x << ", " << cameraPos.y << ", " << cameraPos.z << ")" << std::endl;
                std::cout << "OpenGL相机朝向: (" << cameraFront.x << ", " << cameraFront.y << ", " << cameraFront.z << ")" << std::endl;
                std::cout << "UE4相机位置: (" << ue4CameraPos.x << ", " << ue4CameraPos.y << ", " << ue4CameraPos.z << ")" << std::endl;
                std::cout << "UE4相机朝向: (" << ue4CameraDir.x << ", " << ue4CameraDir.y << ", " << ue4CameraDir.z << ")" << std::endl;
                std::cout << "当前选中: " << SelectedInstanceIndex << std::endl;
                std::cout << "模型总数: " << ShapeInstances.size() << std::endl;
                
                // 手动执行一次射线投射测试
                std::cout << "执行射线投射测试..." << std::endl;
                int testTarget = FindCameraTarget(cameraPos, cameraFront);
                std::cout << "射线投射结果: " << testTarget << std::endl;
            }
        }
        else
        {
            keyIPressed = false;
        }

        //auto Location = GameData.Physics.FWorldOriginLocation + GameData.Global.Data.Camera.Location;
        //P3D_Vec3 glCamPos = CoordTransform::UE4ToGL_Position(physx::PxVec3(Location.X, Location.Y, Location.Z));
        //editor.SetCameraPosition(glCamPos);
        //editor.SetCameraRotation(
        //    GameData.Global.Data.Camera.Rotation.Yaw + -90.f, 
        //    GameData.Global.Data.Camera.Rotation.Pitch, 
        //    GameData.Global.Data.Camera.Rotation.Roll
        //);
         
        // 开始帧
        editor.BeginFrame();
        
        // 重组实例数据（按BaseMesh和颜色分组）
        ColoredInstanceGroups.clear();
        
        for (size_t i = 0; i < ShapeInstances.size(); i++)
        {
            const auto& instance = ShapeInstances[i];
            
            if (instance.BaseMesh && instance.BaseMesh->Mesh)
            {
                // 构建变换矩阵
                P3D_InstanceData instanceData;
                editor.getModelMatrix(instanceData.modelMatrix, instance.Position, instance.Rotation, instance.Scale);
                
                // 确定渲染颜色（选中的模型直接变成红色）
                P3D_Vec3 renderColor = instance.Color;
                if (instance.IsSelected)
                {
                    renderColor = P3D_Vec3(1.0f, 0.0f, 0.0f); // 纯红色
                }
                
                // 将颜色转换为uint32用于分组
                uint32_t colorKey = 
                    (static_cast<uint32_t>(renderColor.x * 255) << 16) |
                    (static_cast<uint32_t>(renderColor.y * 255) << 8) |
                    (static_cast<uint32_t>(renderColor.z * 255));
                
                // 添加到对应的BaseMesh+颜色组
                ColoredInstanceGroups[instance.BaseMesh][colorKey].push_back(instanceData);
            }
        }
        
        // 使用实例化渲染（按BaseMesh和颜色分组）
        for (const auto& meshGroup : ColoredInstanceGroups)
        {
            P3D_BaseMesh* baseMesh = meshGroup.first;
            
            for (const auto& colorGroup : meshGroup.second)
            {
                uint32_t colorKey = colorGroup.first;
                const std::vector<P3D_InstanceData>& instances = colorGroup.second;
                
                // 解析颜色
                P3D_Vec3 color(
                    ((colorKey >> 16) & 0xFF) / 255.0f,
                    ((colorKey >> 8) & 0xFF) / 255.0f,
                    (colorKey & 0xFF) / 255.0f
                );
                
                editor.RenderMeshInstanced(baseMesh->Mesh, instances, color);
            }
        }
        
        // 结束帧
        editor.EndFrame();
    }
    
    // 清理资源
    ClearAllMeshes(editor);
}
