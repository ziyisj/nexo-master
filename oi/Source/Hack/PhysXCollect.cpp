#include "PhysXCollect.h"
#include <fstream>
#include <filesystem>
#include <unordered_set>
#include "PhysXMirror.h"

using namespace PhysXTypes;

// ActorID实现
bool ActorID::operator==(const ActorID& Other) const
{
    if (!(GeometryID == Other.GeometryID))
        return false;

    const auto& T = Transform;
    const auto& O = Other.Transform;
    if (T.p.x != O.p.x || T.p.y != O.p.y || T.p.z != O.p.z || T.q.x != O.q.x || T.q.y != O.q.y || T.q.z != O.q.z || T.q.w != O.q.w)
        return false;

    const auto& L = LocalPose;
    const auto& OL = Other.LocalPose;
    if (L.p.x != OL.p.x || L.p.y != OL.p.y || L.p.z != OL.p.z || L.q.x != OL.q.x || L.q.y != OL.q.y || L.q.z != OL.q.z || L.q.w != OL.q.w)
        return false;

    if (Scale.x != Other.Scale.x || Scale.y != Other.Scale.y || Scale.z != Other.Scale.z)
        return false;

    if (Rotation.x != Other.Rotation.x || Rotation.y != Other.Rotation.y || Rotation.z != Other.Rotation.z || Rotation.w != Other.Rotation.w)
        return false;

    return true;
}

size_t ActorID::GetHash() const
{
    size_t Hash = GeometryID.ContentHash;
    auto HashFloat = [](float F) { return std::hash<float>{}(F); };

    Hash ^= HashFloat(Transform.p.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Transform.p.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Transform.p.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Transform.q.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Transform.q.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Transform.q.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Transform.q.w) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);

    Hash ^= HashFloat(LocalPose.p.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(LocalPose.p.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(LocalPose.p.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(LocalPose.q.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(LocalPose.q.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(LocalPose.q.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(LocalPose.q.w) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);

    Hash ^= HashFloat(Scale.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Scale.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Scale.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);

    Hash ^= HashFloat(Rotation.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Rotation.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Rotation.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= HashFloat(Rotation.w) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);

    return Hash;
}

// 几何体哈希计算
size_t PhysXTypes::ComputeGeomHash(const std::vector<physx::PxVec3>& Vertices, const std::vector<uint16_t>& Triangles16, const std::vector<uint32_t>& Triangles32)
{
    size_t Hash = 0;
    for (const auto& V : Vertices)
    {
        Hash ^= std::hash<float>{}(V.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
        Hash ^= std::hash<float>{}(V.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
        Hash ^= std::hash<float>{}(V.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    }
    for (auto Idx : Triangles16)
        Hash ^= std::hash<uint16_t>{}(Idx) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    for (auto Idx : Triangles32)
        Hash ^= std::hash<uint32_t>{}(Idx) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    return Hash;
}

size_t PhysXTypes::ComputeHFHash(const std::vector<physx::PxHeightFieldSample>& Samples, uint32_t Rows, uint32_t Cols, float HeightScale, float RowScale, float ColumnScale)
{
    size_t Hash = std::hash<uint32_t>{}(Rows);
    Hash ^= std::hash<uint32_t>{}(Cols) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= std::hash<float>{}(HeightScale) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= std::hash<float>{}(RowScale) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= std::hash<float>{}(ColumnScale) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    for (const auto& Sample : Samples)
        Hash ^= std::hash<int16_t>{}(Sample.height) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    return Hash;
}

size_t PhysXTypes::ComputeBoxHash(const physx::PxVec3& HalfExtents)
{
    size_t Hash = 0;
    Hash ^= std::hash<float>{}(HalfExtents.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= std::hash<float>{}(HalfExtents.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    Hash ^= std::hash<float>{}(HalfExtents.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    return Hash;
}

size_t PhysXTypes::ComputeConvexHash(const std::vector<physx::PxVec3>& Vertices, const std::vector<uint8_t>& Indices, uint32_t NumPolygons)
{
    size_t Hash = 0;

    // 哈希所有顶点
    for (const auto& V : Vertices)
    {
        Hash ^= std::hash<float>{}(V.x) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
        Hash ^= std::hash<float>{}(V.y) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
        Hash ^= std::hash<float>{}(V.z) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);
    }

    // 哈希索引数据
    for (auto Idx : Indices)
        Hash ^= std::hash<uint8_t>{}(Idx) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);

    // 哈希多边形数量
    Hash ^= std::hash<uint32_t>{}(NumPolygons) + 0x9e3779b9 + (Hash << 6) + (Hash >> 2);

    return Hash;
}

bool PhysXCollect::LoadFromFile(const std::string& MapName)
{
    if (!GameData.Physics.PhysX.mScene)
    {
        Utils::Log(4, XorStr("LoadFromFile: Scene is null"));
        return false;
    }

    Timer Timered(XorStr("LoadFromFile"));
    std::string Filename = XorStr("Engine/Map/") + MapName + ".npak";

    std::ifstream InFile(Filename, std::ios::binary);
    if (!InFile.is_open())
    {
        Utils::Log(4, XorStr("LoadFromFile: Failed to open file: %s"), Filename.c_str());
        return false;
    }

    FileHeader Header;
    InFile.read((char*)&Header, sizeof(Header));

    if (Header.Version != FILE_VERSION)
    {
        Utils::Log(4, XorStr("LoadFromFile: Invalid version %d, expected %d"), Header.Version, FILE_VERSION);
        InFile.close();
        return false;
    }

    PhysXMirror::ReleaseScene();

    // 加载所有TriangleMesh
    std::vector<physx::PxTriangleMesh*> LoadedTriMeshes;
    std::unordered_map<uint32_t, GeomID> LoadedTriMeshIDs;
    LoadedTriMeshes.reserve(Header.NumTriangleMeshes);

    for (uint32_t I = 0; I < Header.NumTriangleMeshes; I++)
    {
        TriMeshData MeshData;
        InFile.read((char*)&MeshData, sizeof(MeshData));

        std::vector<physx::PxVec3> Vertices(MeshData.NumVertices);
        InFile.read((char*)Vertices.data(), MeshData.NumVertices * sizeof(physx::PxVec3));

        bool Has16BitIndices = MeshData.Flags & physx::PxTriangleMeshFlag::e16_BIT_INDICES;
        std::vector<uint32_t> Triangles32;
        std::vector<uint16_t> Triangles16;

        if (Has16BitIndices)
        {
            Triangles16.resize(MeshData.NumTriangles * 3);
            InFile.read((char*)Triangles16.data(), MeshData.NumTriangles * sizeof(uint16_t) * 3);
        }
        else
        {
            Triangles32.resize(MeshData.NumTriangles * 3);
            InFile.read((char*)Triangles32.data(), MeshData.NumTriangles * sizeof(uint32_t) * 3);
        }

        // 计算GeomID
        GeomID Gid;
        Gid.ContentHash = ComputeGeomHash(Vertices, Triangles16, Triangles32);
        LoadedTriMeshIDs[I] = Gid;

        physx::PxTriangleMeshDesc MeshDesc;
        MeshDesc.points.count = MeshData.NumVertices;
        MeshDesc.points.stride = sizeof(physx::PxVec3);
        MeshDesc.points.data = Vertices.data();
        MeshDesc.triangles.count = MeshData.NumTriangles;

        if (Has16BitIndices)
        {
            MeshDesc.flags |= physx::PxMeshFlag::e16_BIT_INDICES;
            MeshDesc.triangles.stride = 3 * sizeof(uint16_t);
            MeshDesc.triangles.data = Triangles16.data();
        }
        else
        {
            MeshDesc.triangles.stride = 3 * sizeof(uint32_t);
            MeshDesc.triangles.data = Triangles32.data();
        }

        physx::PxDefaultMemoryOutputStream WriteBuffer;
        physx::PxTriangleMesh* TriMesh = nullptr;
        if (GameData.Physics.PhysX.mCooking->cookTriangleMesh(MeshDesc, WriteBuffer))
        {
            physx::PxDefaultMemoryInputData ReadBuffer(WriteBuffer.getData(), WriteBuffer.getSize());
            TriMesh = GameData.Physics.PhysX.mPhysics->createTriangleMesh(ReadBuffer);
        }

        LoadedTriMeshes.push_back(TriMesh);
    }

    // 加载所有HeightField
    std::vector<physx::PxHeightField*> LoadedHeightFields;
    std::vector<HeightFieldData> LoadedHFDataList;
    std::unordered_map<uint32_t, GeomID> LoadedHFIDs;
    LoadedHeightFields.reserve(Header.NumHeightFields);
    LoadedHFDataList.reserve(Header.NumHeightFields);

    for (uint32_t I = 0; I < Header.NumHeightFields; I++)
    {
        HeightFieldData HFData;
        InFile.read((char*)&HFData, sizeof(HFData));

        std::vector<physx::PxHeightFieldSample> Samples(HFData.Rows * HFData.Columns);
        InFile.read((char*)Samples.data(), Samples.size() * sizeof(physx::PxHeightFieldSample));

        // 计算GeomID
        GeomID Gid;
        Gid.ContentHash = ComputeHFHash(Samples, HFData.Rows, HFData.Columns, HFData.HeightScale, HFData.RowScale, HFData.ColumnScale);
        LoadedHFIDs[I] = Gid;

        physx::PxHeightFieldDesc HFDesc;
        HFDesc.nbRows = HFData.Rows;
        HFDesc.nbColumns = HFData.Columns;
        HFDesc.samples.data = Samples.data();
        HFDesc.samples.stride = sizeof(physx::PxHeightFieldSample);

        physx::PxHeightField* HeightField = GameData.Physics.PhysX.mCooking->createHeightField(HFDesc, GameData.Physics.PhysX.mPhysics->getPhysicsInsertionCallback());
        LoadedHeightFields.push_back(HeightField);
        LoadedHFDataList.push_back(HFData);
    }

    // 加载所有Box
    std::vector<physx::PxVec3> LoadedBoxes;
    std::unordered_map<uint32_t, GeomID> LoadedBoxIDs;
    LoadedBoxes.reserve(Header.NumBoxes);

    for (uint32_t I = 0; I < Header.NumBoxes; I++)
    {
        BoxData BData;
        InFile.read((char*)&BData, sizeof(BData));

        // 计算GeomID
        GeomID Gid;
        Gid.ContentHash = ComputeBoxHash(BData.HalfExtents);
        LoadedBoxIDs[I] = Gid;

        LoadedBoxes.push_back(BData.HalfExtents);
    }

    // 加载所有ConvexMesh
    std::vector<physx::PxConvexMesh*> LoadedConvexMeshes;
    std::unordered_map<uint32_t, GeomID> LoadedConvexIDs;
    LoadedConvexMeshes.reserve(Header.NumConvexMeshes);

    for (uint32_t I = 0; I < Header.NumConvexMeshes; I++)
    {
        ConvexMeshData MeshData;
        InFile.read((char*)&MeshData, sizeof(MeshData));

        std::vector<physx::PxVec3> Vertices(MeshData.NumVertices);
        InFile.read((char*)Vertices.data(), MeshData.NumVertices * sizeof(physx::PxVec3));

        std::vector<uint8_t> Indices(MeshData.NumIndices);
        InFile.read((char*)Indices.data(), MeshData.NumIndices * sizeof(uint8_t));

        // 计算GeomID
        GeomID Gid;
        Gid.ContentHash = ComputeConvexHash(Vertices, Indices, MeshData.NumPolygons);
        LoadedConvexIDs[I] = Gid;

        physx::PxConvexMeshDesc ConvexDesc;
        ConvexDesc.points.count = MeshData.NumVertices;
        ConvexDesc.points.stride = sizeof(physx::PxVec3);
        ConvexDesc.points.data = Vertices.data();
        ConvexDesc.indices.count = MeshData.NumIndices;
        ConvexDesc.indices.stride = sizeof(uint8_t);
        ConvexDesc.indices.data = Indices.data();
        ConvexDesc.flags = physx::PxConvexFlag::eCOMPUTE_CONVEX;

        physx::PxDefaultMemoryOutputStream WriteBuffer;
        physx::PxConvexMesh* ConvexMesh = nullptr;
        if (GameData.Physics.PhysX.mCooking->cookConvexMesh(ConvexDesc, WriteBuffer))
        {
            physx::PxDefaultMemoryInputData ReadBuffer(WriteBuffer.getData(), WriteBuffer.getSize());
            ConvexMesh = GameData.Physics.PhysX.mPhysics->createConvexMesh(ReadBuffer);
        }

        LoadedConvexMeshes.push_back(ConvexMesh);
    }

    // 建立现有Actor映射（去重用）
    std::unordered_set<ActorID, ActorIDHash> ExistingActors;
    physx::PxU32 NbStaticActors = GameData.Physics.PhysX.mScene->getNbActors(physx::PxActorTypeFlag::eRIGID_STATIC);
    if (NbStaticActors > 0)
    {
        physx::PxActor** StaticActors = new physx::PxActor*[NbStaticActors];
        GameData.Physics.PhysX.mScene->getActors(physx::PxActorTypeFlag::eRIGID_STATIC, StaticActors, NbStaticActors);

        for (physx::PxU32 I = 0; I < NbStaticActors; I++)
        {
            physx::PxRigidActor* Actor = StaticActors[I]->is<physx::PxRigidActor>();
            if (Actor && Actor->getNbShapes() > 0)
            {
                physx::PxShape* Shape = nullptr;
                Actor->getShapes(&Shape, 1);

                if (Shape)
                {
                    physx::PxGeometryType::Enum GeomType = Shape->getGeometry().getType();
                    GeomID Gid;
                    physx::PxVec3 ShapeScale;
                    physx::PxQuat ShapeRotation;
                    bool ValidGeom = false;

                    if (GeomType == physx::PxGeometryType::eTRIANGLEMESH)
                    {
                        physx::PxTriangleMeshGeometry TriGeom = Shape->getGeometry().triangleMesh();
                        if (TriGeom.triangleMesh)
                        {
                            const physx::PxTriangleMesh* Mesh = TriGeom.triangleMesh;
                            std::vector<physx::PxVec3> Verts(Mesh->getVertices(), Mesh->getVertices() + Mesh->getNbVertices());
                            std::vector<uint16_t> Tri16;
                            std::vector<uint32_t> Tri32;

                            bool Has16bit = Mesh->getTriangleMeshFlags() & physx::PxTriangleMeshFlag::e16_BIT_INDICES;
                            if (Has16bit)
                            {
                                const uint16_t* Tris = static_cast<const uint16_t*>(Mesh->getTriangles());
                                Tri16.assign(Tris, Tris + Mesh->getNbTriangles() * 3);
                            }
                            else
                            {
                                const uint32_t* Tris = static_cast<const uint32_t*>(Mesh->getTriangles());
                                Tri32.assign(Tris, Tris + Mesh->getNbTriangles() * 3);
                            }

                            Gid.ContentHash = ComputeGeomHash(Verts, Tri16, Tri32);
                            ShapeScale = TriGeom.scale.scale;
                            ShapeRotation = TriGeom.scale.rotation;
                            ValidGeom = true;
                        }
                    }
                    else if (GeomType == physx::PxGeometryType::eHEIGHTFIELD)
                    {
                        physx::PxHeightFieldGeometry HFGeom = Shape->getGeometry().heightField();
                        if (HFGeom.heightField)
                        {
                            const physx::PxHeightField* HF = HFGeom.heightField;
                            std::vector<physx::PxHeightFieldSample> Samples(HF->getNbRows() * HF->getNbColumns());
                            // 使用saveCells导出完整Sample数据（包括height、materialIndex、tessFlag等）
                            HF->saveCells(Samples.data(), Samples.size() * sizeof(physx::PxHeightFieldSample));

                            Gid.ContentHash = ComputeHFHash(Samples, HF->getNbRows(), HF->getNbColumns(), HFGeom.heightScale, HFGeom.rowScale, HFGeom.columnScale);
                            ShapeScale = physx::PxVec3(HFGeom.columnScale, HFGeom.heightScale, HFGeom.rowScale);
                            ShapeRotation = physx::PxQuat(physx::PxIdentity);
                            ValidGeom = true;
                        }
                    }
                    else if (GeomType == physx::PxGeometryType::eBOX)
                    {
                        physx::PxBoxGeometry BoxGeom = Shape->getGeometry().box();
                        Gid.ContentHash = ComputeBoxHash(BoxGeom.halfExtents);
                        ShapeScale = BoxGeom.halfExtents;
                        ShapeRotation = physx::PxQuat(physx::PxIdentity);
                        ValidGeom = true;
                    }
                    else if (GeomType == physx::PxGeometryType::eCONVEXMESH)
                    {
                        physx::PxConvexMeshGeometry ConvexGeom = Shape->getGeometry().convexMesh();
                        if (ConvexGeom.convexMesh)
                        {
                            const physx::PxConvexMesh* Mesh = ConvexGeom.convexMesh;
                            std::vector<physx::PxVec3> Verts(Mesh->getVertices(), Mesh->getVertices() + Mesh->getNbVertices());

                            // 提取索引数据
                            std::vector<uint8_t> ConvexIndices;
                            const physx::PxU8* IndexBuffer = Mesh->getIndexBuffer();
                            uint32_t NumPolygons = Mesh->getNbPolygons();

                            for (uint32_t P = 0; P < NumPolygons; P++)
                            {
                                physx::PxHullPolygon Polygon;
                                Mesh->getPolygonData(P, Polygon);
                                for (uint32_t V = 0; V < Polygon.mNbVerts; V++)
                                {
                                    ConvexIndices.push_back(IndexBuffer[Polygon.mIndexBase + V]);
                                }
                            }

                            Gid.ContentHash = ComputeConvexHash(Verts, ConvexIndices, NumPolygons);
                            ShapeScale = ConvexGeom.scale.scale;
                            ShapeRotation = ConvexGeom.scale.rotation;
                            ValidGeom = true;
                        }
                    }

                    if (ValidGeom)
                    {
                        ActorID Id;
                        Id.GeometryID = Gid;
                        Id.Transform = Actor->getGlobalPose();
                        Id.LocalPose = Shape->getLocalPose();
                        Id.Scale = ShapeScale;
                        Id.Rotation = ShapeRotation;
                        ExistingActors.insert(Id);
                    }
                }
            }
        }
        delete[] StaticActors;
    }

    // 读取并创建Actor
    int NewCount = 0;
    int SkippedCount = 0;
    int FailedCount = 0;

    for (uint32_t I = 0; I < Header.NumActors; I++)
    {
        PhysXTypes::ActorData ActorInfo;
        InFile.read((char*)&ActorInfo, sizeof(ActorInfo));

        // 从映射中获取GeomID
        GeomID Gid;
        if (ActorInfo.Type == GeometryType::TriangleMesh)
        {
            auto It = LoadedTriMeshIDs.find(ActorInfo.GeomID);
            if (It == LoadedTriMeshIDs.end())
            {
                FailedCount++;
                continue;
            }
            Gid = It->second;
        }
        else if (ActorInfo.Type == GeometryType::HeightField)
        {
            auto It = LoadedHFIDs.find(ActorInfo.GeomID);
            if (It == LoadedHFIDs.end())
            {
                FailedCount++;
                continue;
            }
            Gid = It->second;
        }
        else if (ActorInfo.Type == GeometryType::Box)
        {
            auto It = LoadedBoxIDs.find(ActorInfo.GeomID);
            if (It == LoadedBoxIDs.end())
            {
                FailedCount++;
                continue;
            }
            Gid = It->second;
        }
        else if (ActorInfo.Type == GeometryType::ConvexMesh)
        {
            auto It = LoadedConvexIDs.find(ActorInfo.GeomID);
            if (It == LoadedConvexIDs.end())
            {
                FailedCount++;
                continue;
            }
            Gid = It->second;
        }
        else
        {
            FailedCount++;
            continue;
        }

        ActorID Id;
        Id.GeometryID = Gid;
        Id.Transform = ActorInfo.Transform;
        Id.LocalPose = ActorInfo.LocalPose;
        Id.Scale = ActorInfo.Scale;
        Id.Rotation = ActorInfo.Rotation;

        // 检查是否已存在（基于位置和变换）
        if (ExistingActors.find(Id) != ExistingActors.end())
        {
            SkippedCount++;
            continue;
        }

        physx::PxShape* Shape = nullptr;

        if (ActorInfo.Type == GeometryType::TriangleMesh)
        {
            if (ActorInfo.GeomID >= LoadedTriMeshes.size() || !LoadedTriMeshes[ActorInfo.GeomID])
            {
                FailedCount++;
                continue;
            }

            physx::PxTriangleMesh* TriMesh = LoadedTriMeshes[ActorInfo.GeomID];
            physx::PxTriangleMeshGeometry Geom(TriMesh, physx::PxMeshScale(ActorInfo.Scale, ActorInfo.Rotation));
            Shape = GameData.Physics.PhysX.mPhysics->createShape(Geom, *GameData.Physics.PhysX.mMaterial, true);
        }
        else if (ActorInfo.Type == GeometryType::HeightField)
        {
            if (ActorInfo.GeomID >= LoadedHeightFields.size() || !LoadedHeightFields[ActorInfo.GeomID])
            {
                FailedCount++;
                continue;
            }

            physx::PxHeightField* HF = LoadedHeightFields[ActorInfo.GeomID];
            float ColumnScale = ActorInfo.Scale.x;
            float HeightScale = ActorInfo.Scale.y;
            float RowScale = ActorInfo.Scale.z;
            physx::PxHeightFieldGeometry Geom(HF, physx::PxMeshGeometryFlags(), HeightScale, RowScale, ColumnScale);
            Shape = GameData.Physics.PhysX.mPhysics->createShape(Geom, *GameData.Physics.PhysX.mMaterial, true);
        }
        else if (ActorInfo.Type == GeometryType::Box)
        {
            if (ActorInfo.GeomID >= LoadedBoxes.size())
            {
                FailedCount++;
                continue;
            }

            physx::PxVec3 HalfExtents = LoadedBoxes[ActorInfo.GeomID];
            physx::PxBoxGeometry Geom(HalfExtents);
            Shape = GameData.Physics.PhysX.mPhysics->createShape(Geom, *GameData.Physics.PhysX.mMaterial, true);
        }
        else if (ActorInfo.Type == GeometryType::ConvexMesh)
        {
            if (ActorInfo.GeomID >= LoadedConvexMeshes.size() || !LoadedConvexMeshes[ActorInfo.GeomID])
            {
                FailedCount++;
                continue;
            }

            physx::PxConvexMesh* ConvexMesh = LoadedConvexMeshes[ActorInfo.GeomID];
            physx::PxConvexMeshGeometry Geom(ConvexMesh, physx::PxMeshScale(ActorInfo.Scale, ActorInfo.Rotation));
            Shape = GameData.Physics.PhysX.mPhysics->createShape(Geom, *GameData.Physics.PhysX.mMaterial, true);
        }

        if (!Shape)
        {
            FailedCount++;
            continue;
        }

        Shape->setLocalPose(ActorInfo.LocalPose);

        physx::PxRigidStatic* Actor = GameData.Physics.PhysX.mPhysics->createRigidStatic(ActorInfo.Transform);
        if (Actor)
        {
            Actor->attachShape(*Shape);
            GameData.Physics.PhysX.mScene->addActor(*Actor);
            NewCount++;
        }
        else
        {
            FailedCount++;
        }

        Shape->release();
    }

    InFile.close();

    Utils::Log(1, XorStr("Loaded %d actors (%d TriMeshes, %d HeightFields, %d Boxes, %d ConvexMeshes) in %d ms. (加載本地模型成功)"), NewCount, Header.NumTriangleMeshes, Header.NumHeightFields, Header.NumBoxes, Header.NumConvexMeshes, Timered.get());

    return true;
}

bool PhysXCollect::SaveToFile(const std::string& MapName, bool onlyCurrentScene)
{
    if (GameData.Physics.Loading.load() || !GameData.Physics.PhysX.mScene)
        return false;

    Timer Timered(XorStr("SaveToFile"));
    std::string Filename = XorStr("Engine/Map/") + MapName + ".npak";
    std::filesystem::create_directories(XorStr("Engine/Map"));

    // 输出保存模式信息
    if (onlyCurrentScene)
    {
        Utils::Log(4, XorStr("SaveToFile: Save only the current scene model mode"));
    }
    else
    {
        Utils::Log(4, XorStr("SaveToFile: Merge old files mode (default)"));
    }

    std::unordered_map<ActorID, PhysXTypes::ActorInfo, ActorIDHash> MergedActors;

    // 从旧文件加载数据（如果不是只保存当前场景模式）
    if (!onlyCurrentScene)
    {
        std::ifstream InFile(Filename, std::ios::binary);
        if (InFile.is_open())
        {
            FileHeader OldHeader;
            InFile.read((char*)&OldHeader, sizeof(OldHeader));

            if (OldHeader.Version == FILE_VERSION)
            {
                std::vector<PhysXTypes::ActorInfo> OldTriMeshData;
                for (uint32_t I = 0; I < OldHeader.NumTriangleMeshes; I++)
                {
                    TriMeshData MeshData;
                    InFile.read((char*)&MeshData, sizeof(MeshData));

                    PhysXTypes::ActorInfo Info;
                    Info.Type = GeometryType::TriangleMesh;
                    Info.Vertices.resize(MeshData.NumVertices);
                    InFile.read((char*)Info.Vertices.data(), MeshData.NumVertices * sizeof(physx::PxVec3));

                    bool Has16BitIndices = MeshData.Flags & physx::PxTriangleMeshFlag::e16_BIT_INDICES;
                    Info.TriMeshFlags = MeshData.Flags;

                    if (Has16BitIndices)
                    {
                        Info.Triangles16.resize(MeshData.NumTriangles * 3);
                        InFile.read((char*)Info.Triangles16.data(), MeshData.NumTriangles * sizeof(uint16_t) * 3);
                    }
                    else
                    {
                        Info.Triangles32.resize(MeshData.NumTriangles * 3);
                        InFile.read((char*)Info.Triangles32.data(), MeshData.NumTriangles * sizeof(uint32_t) * 3);
                    }

                    OldTriMeshData.push_back(Info);
                }

                std::vector<PhysXTypes::ActorInfo> OldHFData;
                for (uint32_t I = 0; I < OldHeader.NumHeightFields; I++)
                {
                    HeightFieldData HFData;
                    InFile.read((char*)&HFData, sizeof(HFData));

                    PhysXTypes::ActorInfo Info;
                    Info.Type = GeometryType::HeightField;
                    Info.HFRows = HFData.Rows;
                    Info.HFColumns = HFData.Columns;
                    Info.Scale = physx::PxVec3(HFData.ColumnScale, HFData.HeightScale, HFData.RowScale);
                    Info.Rotation = physx::PxQuat(physx::PxIdentity);
                    Info.HFSamples.resize(HFData.Rows * HFData.Columns);
                    InFile.read((char*)Info.HFSamples.data(), Info.HFSamples.size() * sizeof(physx::PxHeightFieldSample));

                    OldHFData.push_back(Info);
                }

                std::vector<PhysXTypes::ActorInfo> OldBoxData;
                for (uint32_t I = 0; I < OldHeader.NumBoxes; I++)
                {
                    BoxData BData;
                    InFile.read((char*)&BData, sizeof(BData));

                    PhysXTypes::ActorInfo Info;
                    Info.Type = GeometryType::Box;
                    Info.Scale = BData.HalfExtents;
                    Info.Rotation = physx::PxQuat(physx::PxIdentity);

                    OldBoxData.push_back(Info);
                }

                std::vector<PhysXTypes::ActorInfo> OldConvexData;
                for (uint32_t I = 0; I < OldHeader.NumConvexMeshes; I++)
                {
                    ConvexMeshData MeshData;
                    InFile.read((char*)&MeshData, sizeof(MeshData));

                    PhysXTypes::ActorInfo Info;
                    Info.Type = GeometryType::ConvexMesh;
                    Info.Vertices.resize(MeshData.NumVertices);
                    InFile.read((char*)Info.Vertices.data(), MeshData.NumVertices * sizeof(physx::PxVec3));

                    Info.ConvexIndices.resize(MeshData.NumIndices);
                    InFile.read((char*)Info.ConvexIndices.data(), MeshData.NumIndices * sizeof(uint8_t));

                    Info.ConvexNumPolygons = MeshData.NumPolygons;

                    OldConvexData.push_back(Info);
                }

                for (uint32_t I = 0; I < OldHeader.NumActors; I++)
                {
                    PhysXTypes::ActorData ActorInfo;
                    InFile.read((char*)&ActorInfo, sizeof(ActorInfo));

                    GeomID Gid;
                    PhysXTypes::ActorInfo Info;
                    Info.Transform = ActorInfo.Transform;
                    Info.LocalPose = ActorInfo.LocalPose;
                    Info.Scale = ActorInfo.Scale;
                    Info.Rotation = ActorInfo.Rotation;
                    Info.Type = ActorInfo.Type;

                    if (ActorInfo.Type == GeometryType::TriangleMesh && ActorInfo.GeomID < OldTriMeshData.size())
                    {
                        Info.Vertices = OldTriMeshData[ActorInfo.GeomID].Vertices;
                        Info.Triangles32 = OldTriMeshData[ActorInfo.GeomID].Triangles32;
                        Info.Triangles16 = OldTriMeshData[ActorInfo.GeomID].Triangles16;
                        Info.TriMeshFlags = OldTriMeshData[ActorInfo.GeomID].TriMeshFlags;
                        Gid.ContentHash = ComputeGeomHash(Info.Vertices, Info.Triangles16, Info.Triangles32);
                    }
                    else if (ActorInfo.Type == GeometryType::HeightField && ActorInfo.GeomID < OldHFData.size())
                    {
                        Info.HFSamples = OldHFData[ActorInfo.GeomID].HFSamples;
                        Info.HFRows = OldHFData[ActorInfo.GeomID].HFRows;
                        Info.HFColumns = OldHFData[ActorInfo.GeomID].HFColumns;
                        Info.Scale = OldHFData[ActorInfo.GeomID].Scale;
                        Info.Rotation = OldHFData[ActorInfo.GeomID].Rotation;
                        Gid.ContentHash = ComputeHFHash(Info.HFSamples, Info.HFRows, Info.HFColumns, Info.Scale.y, Info.Scale.z, Info.Scale.x);
                    }
                    else if (ActorInfo.Type == GeometryType::Box && ActorInfo.GeomID < OldBoxData.size())
                    {
                        Info.Scale = OldBoxData[ActorInfo.GeomID].Scale;
                        Info.Rotation = OldBoxData[ActorInfo.GeomID].Rotation;
                        Gid.ContentHash = ComputeBoxHash(Info.Scale);
                    }
                    else if (ActorInfo.Type == GeometryType::ConvexMesh && ActorInfo.GeomID < OldConvexData.size())
                    {
                        Info.Vertices = OldConvexData[ActorInfo.GeomID].Vertices;
                        Info.ConvexIndices = OldConvexData[ActorInfo.GeomID].ConvexIndices;
                        Info.ConvexNumPolygons = OldConvexData[ActorInfo.GeomID].ConvexNumPolygons;
                        Gid.ContentHash = ComputeConvexHash(Info.Vertices, Info.ConvexIndices, Info.ConvexNumPolygons);
                    }
                    else
                        continue;

                    ActorID Id;
                    Id.GeometryID = Gid;
                    Id.Transform = ActorInfo.Transform;
                    Id.LocalPose = ActorInfo.LocalPose;
                    Id.Scale = ActorInfo.Scale;
                    Id.Rotation = ActorInfo.Rotation;

                    MergedActors[Id] = Info;
                }
            }
            InFile.close();
        }
    } else {
        Filename += XorStr(".new");
    }

    // 收集当前场景数据
    physx::PxU32 NbStaticActors = GameData.Physics.PhysX.mScene->getNbActors(physx::PxActorTypeFlag::eRIGID_STATIC);
    if (NbStaticActors > 0)
    {
        physx::PxActor** StaticActors = new physx::PxActor*[NbStaticActors];
        GameData.Physics.PhysX.mScene->getActors(physx::PxActorTypeFlag::eRIGID_STATIC, StaticActors, NbStaticActors);

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

                PhysXTypes::ActorInfo Info;
                Info.Transform = Actor->getGlobalPose();
                Info.LocalPose = Shape->getLocalPose();

                physx::PxGeometryType::Enum GeomType = Shape->getGeometry().getType();
                GeomID Gid;
                bool ValidGeom = false;

                if (GeomType == physx::PxGeometryType::eTRIANGLEMESH)
                {
                    physx::PxTriangleMeshGeometry TriGeom = Shape->getGeometry().triangleMesh();
                    if (!TriGeom.triangleMesh)
                        continue;

                    Info.Type = GeometryType::TriangleMesh;
                    Info.Scale = TriGeom.scale.scale;
                    Info.Rotation = TriGeom.scale.rotation;

                    const physx::PxTriangleMesh* Mesh = TriGeom.triangleMesh;
                    Info.TriMeshFlags = Mesh->getTriangleMeshFlags();
                    Info.Vertices.assign(Mesh->getVertices(), Mesh->getVertices() + Mesh->getNbVertices());

                    bool Has16BitIndices = Mesh->getTriangleMeshFlags() & physx::PxTriangleMeshFlag::e16_BIT_INDICES;
                    if (Has16BitIndices)
                    {
                        const uint16_t* Tri16 = static_cast<const uint16_t*>(Mesh->getTriangles());
                        Info.Triangles16.assign(Tri16, Tri16 + Mesh->getNbTriangles() * 3);
                    }
                    else
                    {
                        const uint32_t* Tri32 = static_cast<const uint32_t*>(Mesh->getTriangles());
                        Info.Triangles32.assign(Tri32, Tri32 + Mesh->getNbTriangles() * 3);
                    }

                    Gid.ContentHash = ComputeGeomHash(Info.Vertices, Info.Triangles16, Info.Triangles32);
                    ValidGeom = true;
                }
                else if (GeomType == physx::PxGeometryType::eHEIGHTFIELD)
                {
                    physx::PxHeightFieldGeometry HFGeom = Shape->getGeometry().heightField();
                    if (!HFGeom.heightField)
                        continue;

                    Info.Type = GeometryType::HeightField;
                    const physx::PxHeightField* HF = HFGeom.heightField;
                    Info.HFRows = HF->getNbRows();
                    Info.HFColumns = HF->getNbColumns();
                    Info.Scale = physx::PxVec3(HFGeom.columnScale, HFGeom.heightScale, HFGeom.rowScale);
                    Info.Rotation = physx::PxQuat(physx::PxIdentity);
                    Info.HFSamples.resize(Info.HFRows * Info.HFColumns);

                    // 使用saveCells导出完整Sample数据（包括height、materialIndex、tessFlag等）
                    HF->saveCells(Info.HFSamples.data(), Info.HFSamples.size() * sizeof(physx::PxHeightFieldSample));

                    Gid.ContentHash = ComputeHFHash(Info.HFSamples, Info.HFRows, Info.HFColumns, Info.Scale.y, Info.Scale.z, Info.Scale.x);
                    ValidGeom = true;
                }
                else if (GeomType == physx::PxGeometryType::eBOX)
                {
                    physx::PxBoxGeometry BoxGeom = Shape->getGeometry().box();

                    Info.Type = GeometryType::Box;
                    Info.Scale = BoxGeom.halfExtents;
                    Info.Rotation = physx::PxQuat(physx::PxIdentity);

                    Gid.ContentHash = ComputeBoxHash(Info.Scale);
                    ValidGeom = true;
                }
                else if (GeomType == physx::PxGeometryType::eCONVEXMESH)
                {
                    physx::PxConvexMeshGeometry ConvexGeom = Shape->getGeometry().convexMesh();
                    if (!ConvexGeom.convexMesh)
                        continue;

                    Info.Type = GeometryType::ConvexMesh;
                    Info.Scale = ConvexGeom.scale.scale;
                    Info.Rotation = ConvexGeom.scale.rotation;

                    const physx::PxConvexMesh* Mesh = ConvexGeom.convexMesh;
                    Info.Vertices.assign(Mesh->getVertices(), Mesh->getVertices() + Mesh->getNbVertices());

                    // 提取索引数据
                    const physx::PxU8* IndexBuffer = Mesh->getIndexBuffer();
                    Info.ConvexNumPolygons = Mesh->getNbPolygons();

                    for (uint32_t P = 0; P < Info.ConvexNumPolygons; P++)
                    {
                        physx::PxHullPolygon Polygon;
                        Mesh->getPolygonData(P, Polygon);
                        for (uint32_t V = 0; V < Polygon.mNbVerts; V++)
                        {
                            Info.ConvexIndices.push_back(IndexBuffer[Polygon.mIndexBase + V]);
                        }
                    }

                    Gid.ContentHash = ComputeConvexHash(Info.Vertices, Info.ConvexIndices, Info.ConvexNumPolygons);
                    ValidGeom = true;
                }

                if (ValidGeom)
                {
                    ActorID Id;
                    Id.GeometryID = Gid;
                    Id.Transform = Info.Transform;
                    Id.LocalPose = Info.LocalPose;
                    Id.Scale = Info.Scale;
                    Id.Rotation = Info.Rotation;

                    // 根据位置和变换作为唯一ID，自动覆盖旧数据
                    MergedActors[Id] = Info;
                }
            }

            delete[] Shapes;
        }
        delete[] StaticActors;
    }

    if (MergedActors.empty())
    {
        Utils::Log(4, XorStr("SaveToFile: No actors to save"));
        return false;
    }

    // 几何体去重
    struct GeomHash
    {
        size_t operator()(const PhysXTypes::ActorInfo& Info) const
        {
            if (Info.Type == GeometryType::TriangleMesh)
                return ComputeGeomHash(Info.Vertices, Info.Triangles16, Info.Triangles32);
            else if (Info.Type == GeometryType::HeightField)
                return ComputeHFHash(Info.HFSamples, Info.HFRows, Info.HFColumns, Info.Scale.y, Info.Scale.z, Info.Scale.x);
            else if (Info.Type == GeometryType::Box)
                return ComputeBoxHash(Info.Scale);
            else if (Info.Type == GeometryType::ConvexMesh)
                return ComputeConvexHash(Info.Vertices, Info.ConvexIndices, Info.ConvexNumPolygons);
            return 0;
        }
    };

    struct GeomEqual
    {
        bool operator()(const PhysXTypes::ActorInfo& A, const PhysXTypes::ActorInfo& B) const
        {
            if (A.Type != B.Type)
                return false;

            if (A.Type == GeometryType::TriangleMesh)
            {
                return A.Vertices == B.Vertices && A.Triangles16 == B.Triangles16 && A.Triangles32 == B.Triangles32 && A.TriMeshFlags == B.TriMeshFlags;
            }
            else if (A.Type == GeometryType::HeightField)
            {
                if (A.HFRows != B.HFRows || A.HFColumns != B.HFColumns)
                    return false;
                if (A.Scale.x != B.Scale.x || A.Scale.y != B.Scale.y || A.Scale.z != B.Scale.z)
                    return false;
                if (A.HFSamples.size() != B.HFSamples.size())
                    return false;

                for (size_t I = 0; I < A.HFSamples.size(); I++)
                    if (A.HFSamples[I].height != B.HFSamples[I].height)
                        return false;

                return true;
            }
            else if (A.Type == GeometryType::Box)
            {
                return A.Scale.x == B.Scale.x && A.Scale.y == B.Scale.y && A.Scale.z == B.Scale.z;
            }
            else if (A.Type == GeometryType::ConvexMesh)
            {
                return A.Vertices == B.Vertices && A.ConvexIndices == B.ConvexIndices && A.ConvexNumPolygons == B.ConvexNumPolygons;
            }

            return false;
        }
    };

    std::unordered_map<PhysXTypes::ActorInfo, uint32_t, GeomHash, GeomEqual> TriMeshDedup;
    std::unordered_map<PhysXTypes::ActorInfo, uint32_t, GeomHash, GeomEqual> HFDedup;
    std::unordered_map<PhysXTypes::ActorInfo, uint32_t, GeomHash, GeomEqual> BoxDedup;
    std::unordered_map<PhysXTypes::ActorInfo, uint32_t, GeomHash, GeomEqual> ConvexDedup;
    std::vector<PhysXTypes::ActorInfo> UniqueTriMeshes;
    std::vector<PhysXTypes::ActorInfo> UniqueHeightFields;
    std::vector<PhysXTypes::ActorInfo> UniqueBoxes;
    std::vector<PhysXTypes::ActorInfo> UniqueConvexMeshes;
    std::unordered_map<ActorID, uint32_t, ActorIDHash> ActorGeomIDs;

    for (const auto& Pair : MergedActors)
    {
        const ActorID& ActorId = Pair.first;
        const PhysXTypes::ActorInfo& Info = Pair.second;

        if (Info.Type == GeometryType::TriangleMesh)
        {
            auto It = TriMeshDedup.find(Info);
            if (It == TriMeshDedup.end())
            {
                uint32_t NewID = (uint32_t)UniqueTriMeshes.size();
                TriMeshDedup[Info] = NewID;
                UniqueTriMeshes.push_back(Info);
                ActorGeomIDs[ActorId] = NewID;
            }
            else
            {
                ActorGeomIDs[ActorId] = It->second;
            }
        }
        else if (Info.Type == GeometryType::HeightField)
        {
            auto It = HFDedup.find(Info);
            if (It == HFDedup.end())
            {
                uint32_t NewID = (uint32_t)UniqueHeightFields.size();
                HFDedup[Info] = NewID;
                UniqueHeightFields.push_back(Info);
                ActorGeomIDs[ActorId] = NewID;
            }
            else
            {
                ActorGeomIDs[ActorId] = It->second;
            }
        }
        else if (Info.Type == GeometryType::Box)
        {
            auto It = BoxDedup.find(Info);
            if (It == BoxDedup.end())
            {
                uint32_t NewID = (uint32_t)UniqueBoxes.size();
                BoxDedup[Info] = NewID;
                UniqueBoxes.push_back(Info);
                ActorGeomIDs[ActorId] = NewID;
            }
            else
            {
                ActorGeomIDs[ActorId] = It->second;
            }
        }
        else if (Info.Type == GeometryType::ConvexMesh)
        {
            auto It = ConvexDedup.find(Info);
            if (It == ConvexDedup.end())
            {
                uint32_t NewID = (uint32_t)UniqueConvexMeshes.size();
                ConvexDedup[Info] = NewID;
                UniqueConvexMeshes.push_back(Info);
                ActorGeomIDs[ActorId] = NewID;
            }
            else
            {
                ActorGeomIDs[ActorId] = It->second;
            }
        }
    }

    // 写入文件
    std::ofstream OutFile(Filename, std::ios::binary);
    if (!OutFile.is_open())
    {
        Utils::Log(4, XorStr("SaveToFile: Failed to open file for writing: %s"), Filename.c_str());
        return false;
    }

    FileHeader Header;
    Header.Version = FILE_VERSION;
    Header.NumTriangleMeshes = (uint32_t)UniqueTriMeshes.size();
    Header.NumHeightFields = (uint32_t)UniqueHeightFields.size();
    Header.NumBoxes = (uint32_t)UniqueBoxes.size();
    Header.NumConvexMeshes = (uint32_t)UniqueConvexMeshes.size();
    Header.NumActors = (uint32_t)MergedActors.size();
    OutFile.write((char*)&Header, sizeof(Header));

    for (const auto& Info : UniqueTriMeshes)
    {
        uint32_t NumTris = Info.Triangles16.empty() ? (uint32_t)(Info.Triangles32.size() / 3) : (uint32_t)(Info.Triangles16.size() / 3);
        TriMeshData MeshData;
        MeshData.NumVertices = (uint32_t)Info.Vertices.size();
        MeshData.NumTriangles = NumTris;
        MeshData.Flags = Info.TriMeshFlags;
        OutFile.write((char*)&MeshData, sizeof(MeshData));
        OutFile.write((char*)Info.Vertices.data(), Info.Vertices.size() * sizeof(physx::PxVec3));

        if (!Info.Triangles16.empty())
            OutFile.write((char*)Info.Triangles16.data(), Info.Triangles16.size() * sizeof(uint16_t));
        else
            OutFile.write((char*)Info.Triangles32.data(), Info.Triangles32.size() * sizeof(uint32_t));
    }

    for (const auto& Info : UniqueHeightFields)
    {
        HeightFieldData HFData;
        HFData.Rows = Info.HFRows;
        HFData.Columns = Info.HFColumns;
        HFData.ColumnScale = Info.Scale.x;
        HFData.HeightScale = Info.Scale.y;
        HFData.RowScale = Info.Scale.z;
        HFData.Flags = physx::PxMeshGeometryFlags();
        OutFile.write((char*)&HFData, sizeof(HFData));
        OutFile.write((char*)Info.HFSamples.data(), Info.HFSamples.size() * sizeof(physx::PxHeightFieldSample));
    }

    for (const auto& Info : UniqueBoxes)
    {
        BoxData BData;
        BData.HalfExtents = Info.Scale;
        OutFile.write((char*)&BData, sizeof(BData));
    }

    for (const auto& Info : UniqueConvexMeshes)
    {
        ConvexMeshData MeshData;
        MeshData.NumVertices = (uint32_t)Info.Vertices.size();
        MeshData.NumIndices = (uint32_t)Info.ConvexIndices.size();
        MeshData.NumPolygons = Info.ConvexNumPolygons;
        OutFile.write((char*)&MeshData, sizeof(MeshData));
        OutFile.write((char*)Info.Vertices.data(), Info.Vertices.size() * sizeof(physx::PxVec3));
        OutFile.write((char*)Info.ConvexIndices.data(), Info.ConvexIndices.size() * sizeof(uint8_t));
    }

    for (const auto& Pair : MergedActors)
    {
        const ActorID& ActorId = Pair.first;
        const PhysXTypes::ActorInfo& Info = Pair.second;

        PhysXTypes::ActorData ActorInfo;
        ActorInfo.Transform = Info.Transform;
        ActorInfo.Type = Info.Type;
        ActorInfo.Scale = Info.Scale;
        ActorInfo.Rotation = Info.Rotation;
        ActorInfo.LocalPose = Info.LocalPose;
        ActorInfo.GeomID = ActorGeomIDs[ActorId];
        OutFile.write((char*)&ActorInfo, sizeof(ActorInfo));
    }

    OutFile.close();

    Utils::Log(4, XorStr("Saved %d actors (%d TriMeshes, %d HeightFields, %d Boxes, %d ConvexMeshes) in %d ms"), MergedActors.size(), UniqueTriMeshes.size(), UniqueHeightFields.size(), UniqueBoxes.size(), UniqueConvexMeshes.size(), Timered.get());

    return true;
}

void PhysXCollect::Update()
{
    return;
    while (true)
    {
        if (GameData.Process.GameState != FGameState::InGame)
        {
            Sleep(2000);
            continue;
        }

        if (!GameData.Physics.SaveLocalModelUpdate)
        {
            Sleep(1000);
            continue;
        }

        if (GameData.Keyboard.IsKeyDown(VK_MBUTTON))
        {
            const auto MapName = GameData.Global.Data.LevelName != "" ? GameData.Global.Data.LevelName : XorStr("SecretService");

            std::shared_lock<std::shared_mutex> Lock(GameData.Physics.Mutex);
            if (GameData.Physics.PhysX.mScene)
            {
                GameData.Physics.PhysX.mScene->lockRead();
                SaveToFile(MapName);
                GameData.Physics.PhysX.mScene->unlockRead();
            }
            Lock.unlock();
        }

        Sleep(100);
    }
}
