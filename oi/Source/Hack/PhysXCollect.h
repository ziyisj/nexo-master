#pragma once

#include <winsock2.h>
#include <windows.h>
#include <PhysX/Include/PxPhysicsAPI.h>
#include <PhysX/Include/extensions/PxSerialization.h>
#include <PhysX/Include/extensions/PxDefaultStreams.h>
#include <PhysX/Include/extensions/PxDefaultCpuDispatcher.h>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Utils/PhysX.h>
#include <Utils/Timer.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <vector>
#include <unordered_map>

namespace PhysXTypes
{
    constexpr uint32_t FILE_VERSION = 5;

    enum class GeometryType : uint8_t
    {
        TriangleMesh = 0,
        HeightField = 1,
        Box = 2,
        ConvexMesh = 3
    };

    struct FileHeader
    {
        uint32_t Version;
        uint32_t NumTriangleMeshes;
        uint32_t NumHeightFields;
        uint32_t NumBoxes;
        uint32_t NumConvexMeshes;
        uint32_t NumActors;
    };

    struct ActorData
    {
        physx::PxTransform Transform;
        GeometryType Type;
        physx::PxVec3 Scale;
        physx::PxQuat Rotation;
        physx::PxTransform LocalPose;
        uint32_t GeomID;
    };

    struct TriMeshData
    {
        uint32_t NumVertices;
        uint32_t NumTriangles;
        uint32_t Flags;
    };

    struct HeightFieldData
    {
        uint32_t Rows;
        uint32_t Columns;
        float HeightScale;
        float RowScale;
        float ColumnScale;
        physx::PxMeshGeometryFlags Flags;
    };

    struct BoxData
    {
        physx::PxVec3 HalfExtents;
    };

    struct ConvexMeshData
    {
        uint32_t NumVertices;
        uint32_t NumIndices;
        uint32_t NumPolygons;
    };

    struct GeomID
    {
        size_t ContentHash;
        bool operator==(const GeomID& Other) const { return ContentHash == Other.ContentHash; }
    };

    struct ActorID
    {
        GeomID GeometryID;            // 几何体内容唯一ID
        physx::PxTransform Transform;  // Actor全局位置
        physx::PxTransform LocalPose;  // Shape局部位置
        physx::PxVec3 Scale;          // Shape缩放
        physx::PxQuat Rotation;       // Shape旋转

        bool operator==(const ActorID& Other) const;
        size_t GetHash() const;
    };

    struct ActorInfo
    {
        physx::PxTransform Transform;
        physx::PxTransform LocalPose;
        physx::PxVec3 Scale;      // TriMesh: MeshScale.scale; HeightField: (columnScale, heightScale, rowScale); Box: HalfExtents; ConvexMesh: MeshScale.scale
        physx::PxQuat Rotation;   // TriMesh: MeshScale.rotation; HeightField: Identity; Box: Identity; ConvexMesh: MeshScale.rotation
        GeometryType Type;
        // TriangleMesh data
        std::vector<physx::PxVec3> Vertices;
        std::vector<uint32_t> Triangles32;
        std::vector<uint16_t> Triangles16;
        uint32_t TriMeshFlags;
        // HeightField data
        std::vector<physx::PxHeightFieldSample> HFSamples;
        uint32_t HFRows;
        uint32_t HFColumns;
        // Box data (Scale contains HalfExtents)
        // ConvexMesh data
        std::vector<uint8_t> ConvexIndices;
        uint32_t ConvexNumPolygons;
    };

    struct GeomIDHash { size_t operator()(const GeomID& Id) const { return Id.ContentHash; } };
    struct ActorIDHash { size_t operator()(const ActorID& Id) const { return Id.GetHash(); } };

    size_t ComputeGeomHash(const std::vector<physx::PxVec3>& Vertices, 
                           const std::vector<uint16_t>& Triangles16, 
                           const std::vector<uint32_t>& Triangles32);
    
    size_t ComputeHFHash(const std::vector<physx::PxHeightFieldSample>& Samples, 
                         uint32_t Rows, uint32_t Cols,
                         float HeightScale, float RowScale, float ColumnScale);

    size_t ComputeBoxHash(const physx::PxVec3& HalfExtents);

    size_t ComputeConvexHash(const std::vector<physx::PxVec3>& Vertices,
                             const std::vector<uint8_t>& Indices,
                             uint32_t NumPolygons);
}

class PhysXCollect
{
public:
    static void Update();
    static bool SaveToFile(const std::string& MapName, bool onlyCurrentScene = false);
    static bool LoadFromFile(const std::string& MapName);
};