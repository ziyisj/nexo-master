#pragma once

#include <winsock2.h>
#include <windows.h>
#include "Editor3D.h"
#include <PhysX/Include/PxPhysicsAPI.h>
#include <Utils/Timer.h>
#include <Utils/Throttler.h>
#include <Utils/XorString.h>
#include <Utils/Utils.h>
#include <Common/Data.h>
#include <unordered_map>
#include <vector>
#include <shared_mutex>

// ==================== 坐标系转换辅助类 ====================
// UE4: X=Forward, Y=Right, Z=Up (左手系)
// OpenGL: X=Right, Y=Up, Z=-Forward (右手系)
class CoordTransform
{
public:
    // UE4 -> OpenGL 位置转换
    static P3D_Vec3 UE4ToGL_Position(const physx::PxVec3& ue4Pos);
    
    // UE4 -> OpenGL 四元数转换
    static P3D_Vec3 UE4ToGL_Quaternion(const physx::PxQuat& ue4Quat);
    
    // UE4 -> OpenGL 缩放转换
    static P3D_Vec3 UE4ToGL_Scale(const physx::PxVec3& ue4Scale);
    
    // 组合变换：GlobalPose × LocalPose
    static void CombineTransforms(
        const physx::PxTransform& global,
        const physx::PxTransform& local,
        const physx::PxVec3& meshScale,
        const physx::PxQuat& meshRotation,
        P3D_Vec3& outPosition,
        P3D_Vec3& outRotation,
        P3D_Vec3& outScale
    );
};

// ==================== 网格缓存（支持共享）====================
struct P3D_BaseMesh
{
    P3D_Mesh* Mesh;              // OpenGL网格对象
    size_t RefCount;             // 引用计数
    
    P3D_BaseMesh() : Mesh(nullptr), RefCount(0) {}
};

// ==================== Shape类型枚举 ====================
enum class P3D_ShapeType
{
    TriangleMesh,
    Box,
    ConvexMesh,
    HeightField
};

// ==================== Shape实例数据 ====================
struct P3D_ShapeInstance
{
    P3D_ShapeType ShapeType;                  // 形状类型
    const void* SourceMesh;                   // PhysX源网格指针（用作缓存key）
    P3D_BaseMesh* BaseMesh;                   // 共享的基础网格
    
    // 完整变换（已转换到OpenGL坐标系）
    P3D_Vec3 Position;
    P3D_Vec3 Rotation;
    P3D_Vec3 Scale;
    
    // 渲染颜色
    P3D_Vec3 Color;
    
    // PhysX对象引用（用于删除）
    physx::PxRigidActor* Actor;               // 对应的PhysX Actor
    physx::PxShape* Shape;                    // 对应的PhysX Shape
    
    // 选择状态
    bool IsSelected;                          // 是否被选中
    
    P3D_ShapeInstance() 
        : ShapeType(P3D_ShapeType::TriangleMesh), SourceMesh(nullptr), BaseMesh(nullptr), 
          Position(0, 0, 0), Rotation(0, 0, 0), Scale(1, 1, 1), Color(0.745f, 0.745f, 0.745f),
          Actor(nullptr), Shape(nullptr), IsSelected(false) {}
};

class Physics3D
{  
private:
    // Shape实例列表（每个Actor+Shape一个实例）
    static std::vector<P3D_ShapeInstance> ShapeInstances;
    
    // 网格缓存（TriangleMesh指针 -> 基础网格）
    static std::unordered_map<const physx::PxTriangleMesh*, P3D_BaseMesh> MeshCache;
    
    // ConvexMesh缓存
    static std::unordered_map<const physx::PxConvexMesh*, P3D_BaseMesh> ConvexMeshCache;
    
    // HeightField缓存
    static std::unordered_map<const physx::PxHeightField*, P3D_BaseMesh> HeightFieldCache;
    
    // Box网格（全局共享一个）
    static P3D_BaseMesh BoxMesh;
    
    // 按BaseMesh分组的实例数据（用于实例化渲染）
    static std::unordered_map<P3D_BaseMesh*, std::vector<P3D_InstanceData>> InstanceGroups;
    
    // 按颜色分组的实例数据（用于不同颜色渲染）
    static std::unordered_map<P3D_BaseMesh*, std::unordered_map<uint32_t, std::vector<P3D_InstanceData>>> ColoredInstanceGroups;
    
    static bool KeyRPressed;
    static bool KeyDPressed;
    
    // 选择相关
    static int SelectedInstanceIndex;         // 当前选中的实例索引（-1表示未选中）
    static P3D_Vec3 SelectionOutlineColor;    // 选中描边颜色
    
    // 选择相关方法
    static void HandleMouseSelection(Editor3D& editor);
    static void HandleCameraTargetSelection(Editor3D& editor);
    static int FindCameraTarget(const P3D_Vec3& cameraPos, const P3D_Vec3& cameraFront);
    static int PerformRaycast(Editor3D& editor, double mouseX, double mouseY);
    static void SelectInstance(int index);
    static void DeselectAll();
    static void OutputSelectedInstanceInfo();
    static void DeleteSelectedInstance(Editor3D& editor);
    
    // 从PhysX三角网格创建基础OpenGL网格（只创建一次，不应用任何变换）
    static P3D_Mesh* CreateBaseMeshFromPhysX(Editor3D& editor, const physx::PxTriangleMesh* triangleMesh);
    
    // 从PhysX凸包网格创建基础OpenGL网格
    static P3D_Mesh* CreateBaseMeshFromConvex(Editor3D& editor, const physx::PxConvexMesh* convexMesh);
    
    // 从PhysX高度场创建基础OpenGL网格
    static P3D_Mesh* CreateBaseMeshFromHeightField(Editor3D& editor, const physx::PxHeightField* heightField, 
                                                    float heightScale, float rowScale, float columnScale);
    
    // 创建Box网格（单位立方体）
    static P3D_Mesh* CreateBoxMesh(Editor3D& editor);
    
    // 获取或创建缓存的网格（TriangleMesh）
    static P3D_BaseMesh* GetOrCreateMesh(Editor3D& editor, const physx::PxTriangleMesh* triangleMesh);
    
    // 获取或创建缓存的网格（ConvexMesh）
    static P3D_BaseMesh* GetOrCreateConvexMesh(Editor3D& editor, const physx::PxConvexMesh* convexMesh);
    
    // 获取或创建缓存的网格（HeightField）
    static P3D_BaseMesh* GetOrCreateHeightFieldMesh(Editor3D& editor, const physx::PxHeightField* heightField,
                                                     float heightScale, float rowScale, float columnScale);
    
    // 获取或创建Box网格（全局共享一个）
    static P3D_BaseMesh* GetOrCreateBoxMesh(Editor3D& editor);
    
    // 清理所有已加载的Mesh
    static void ClearAllMeshes(Editor3D& editor);
    
    // 从PhysX场景加载所有静态Actor
    static void LoadSceneFromPhysX(Editor3D& editor);
    
    // 缩放验证函数
    static bool IsValidScale(const physx::PxVec3& scale);
    
public:
    static void Run();
};