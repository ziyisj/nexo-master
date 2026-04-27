#pragma once
#include <PhysX/Include/PxPhysicsAPI.h>
#include <windows.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <Common/VectorHelper.h>

enum CPxActorType : uint8_t
{
	PxRigidDynamic = 0, // 6
	PxRigidStatic = 1, // 7
	PxUnk = 2,
};

struct CPxTriangleMesh
{
	uint64_t pTriangleMesh;
	physx::PxU32 NumVertices = 0;
	physx::PxU32 NumTriangles = 0;
	uint64_t pVertice;
	uint64_t pTriangle;
	std::vector<physx::PxVec3> Vertices;
	std::vector<physx::PxU16> Triangles;
	std::vector<physx::PxU32> BigTriangles;
	physx::PxVec3* eVertices;
	physx::PxU16* eTriangles;
	UINT8 Flags = 0;

	physx::PxTriangleMesh* TriangleMesh = NULL;
};

struct CPxPlane
{
    physx::PxVec3 n;
    float d;
};

struct CPxHullPolygonData
{
    CPxPlane mPlane;
    UINT16 mVRef8;
    UINT8 mNbVerts;
    UINT8 mMinIndex;
};

struct CPxConvexMesh
{
    UINT64 pConvexMesh;
    physx::PxU32 NumVertices = 0;
    UINT8 nbVertices = 0;
    UINT8 nbPolygons = 0;
    UINT64 pVertice;
    UINT64 pPolygons;
    std::vector<CPxHullPolygonData> Polygons;
    std::vector<physx::PxVec3> Vertices;
    physx::PxVec3* eVertices;

	physx::PxConvexMesh* ConvexMesh = NULL;
};

struct CPxHeightField
{
	uint64_t pHeightField;
	physx::PxU32 NumRows = 0;
	physx::PxU32 NumColumns = 0;
	physx::PxReal Thickness = 0;

	uint64_t pSamples;
	//std::vector<physx::PxU16> Samples;
	std::vector<physx::PxHeightFieldSample> Samples;

	physx::PxHeightField* HeightField = NULL;
};

struct CPxBox
{
    float X;
    float Y;
    float Z;
};

enum CPxShapeFlag : uint8_t
{
	eSIMULATION_SHAPE = (1 << 0),
	eSCENE_QUERY_SHAPE = (1 << 1),
	eTRIGGER_SHAPE = (1 << 2),
	eVISUALIZATION = (1 << 3),
	ePARTICLE_DRAIN = (1 << 4)
};

enum CPxGeometryType : uint32_t
{
	eSPHERE,
	ePLANE,
	eCAPSULE,
	eBOX,
	eCONVEXMESH,
	eTRIANGLEMESH,
	eHEIGHTFIELD,

	eGEOMETRY_COUNT,	//!< internal use only!
	eINVALID = -1		//!< internal use only!
};

enum CPxMeshGeometryFlag : uint8_t
{
	eDOUBLE_SIDED = (1 << 1)
};

enum CPxConvexMeshGeometryFlag : uint8_t
{
    eTIGHT_BOUNDS = (1 << 1)
};

struct CPxMeshScale
{
	physx::PxVec3 Scale;
	physx::PxQuat Rotation;
};

#pragma pack(push, 1)
struct CPxTriangleMeshGeometry
{
	CPxMeshScale Scale;
	UINT8 MeshFlagsByte;
	UINT8 PaddingFromFlags[7];
	uint64_t TriangleMesh;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct CPxConvexMeshGeometry
{
    CPxMeshScale Scale;
    uint64_t ConvexMesh;
    UINT8 MeshFlagsByte;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct CPxHeightFieldGeometry
{
	UINT8 PaddingFromFlags[4];
	uint64_t HeightField;
	float HeightScale;
	float RowScale;
	float ColumnScale;
	UINT8 HeightFieldFlagsByte;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct CPxBoxGeometry
{
    float X;
    float Y;
    float Z;
};
#pragma pack(pop)

struct CGeometryHolderByte
{
	CPxGeometryType Type = CPxGeometryType::eINVALID;
	CPxTriangleMeshGeometry TriangleMeshGeometry;
    CPxHeightFieldGeometry HeightFieldGeometry;
    CPxBoxGeometry BoxGeometry;
    CPxConvexMeshGeometry ConvexMeshGeometry;
};

struct CPxShape
{
	uint64_t pPxShapeCache = NULL;
	uint64_t pPxShape = NULL;

	CGeometryHolderByte GeometryHolderByte;

	physx::PxGeometryHolder GeometryHolder;
    physx::PxFilterData QueryFilterData;
    //physx::PxFilterData SimulationFilterData;
	physx::PxTransform LocalPose;
	//physx::PxTransform OldLocalPose;
	physx::PxTransform ShapeTransform;
	//physx::PxTransform OldShapeTransform;
	CPxTriangleMesh TriangleMesh;
	CPxHeightField HeightField;
    CPxConvexMesh ConvexMesh;
    CPxBox Box;
	UINT8 FlagsByte;
	physx::PxShapeFlags Flags;
	physx::PxShape* Shape = NULL;
    bool bTrash = false;
};

struct CPxActorUserData
{
	uint64_t data1{};
	uint64_t data2{};
	uint64_t data3{};
};

struct CPxActor
{
	uint64_t pPxActor;
	UINT16 ByteType = 0;
	uint64_t UserData = 0;
	CPxActorType Type = CPxActorType::PxUnk;
	physx::PxTransform GlobalPose;
	physx::PxTransform OldGlobalPose;
	physx::PxTransform CMassLocalPose;
	physx::PxTransform OldCMassLocalPose;
	physx::PxVec3 LastWorldOriginLocation = physx::PxVec3(0.f, 0.f, 0.f);
	float LastDistance = 0;
	UINT16 NumShape = 0;
	uint64_t pShape;
	std::vector<CPxShape> Shapes;
	std::unordered_map<uint64_t, uint64_t> ShapesPTR;
	bool ValidShapes = false;

	physx::PxActor* PxActor = NULL;
	CPxActorUserData ActorUserData;
};

struct CPhysX
{
	physx::PxDefaultAllocator      mDefaultAllocatorCallback;
	physx::PxDefaultErrorCallback  mDefaultErrorCallback;
	physx::PxDefaultCpuDispatcher* mDispatcher = NULL;
	physx::PxTolerancesScale       mToleranceScale;

	physx::PxFoundation* mFoundation = NULL;
	physx::PxPhysics* mPhysics = NULL;
	physx::PxCooking* mCooking = NULL;
	physx::PxScene* mScene = NULL;
	physx::PxMaterial* mMaterial = NULL;
	physx::PxPvd* mPvd = NULL;
};

struct CUserData
{
	physx::PxU32 NumVertices = 0;
	physx::PxU32 NumTriangles = 0;
};

#pragma pack(push, 1)
struct CPxTriangleMeshData
{
	BYTE padding1[0x20];
	physx::PxU32 NumVertices;
	physx::PxU32 NumTriangles;
	uint64_t pVertice;
	uint64_t pTriangle;
	BYTE padding2[0x28];
	UINT8 Flags;
};
#pragma pack(pop)

struct PrunerExtT
{
	uintptr_t mPruner;
	char mPad[0x24]{};
	uint32_t mTimestamp;
};

struct NpSceneT
{
	PrunerExtT exts[2];
};

struct PrunerPayload
{
	uintptr_t Shape;
	uintptr_t Actor;

	bool operator==(const PrunerPayload& other) const {
		return Shape == other.Shape && Actor == other.Actor;
	}

	bool operator<(const PrunerPayload& other) const {
		if (Shape != other.Shape)
			return Shape < other.Shape;
		return Actor < other.Actor;
	}
};

struct PruningPoolT
{
	uint32_t mNbObjects;
	uint32_t mMaxNbObjects;
	physx::PxBounds3* mWorldBoxes;
	PrunerPayload* mObjects;
};

struct PxTransformT
{

	Vector4 mRotation{};
	Vector3 mPosition{};

	PxTransformT() = default;

	PxTransformT(const Vector4& rotation, const Vector3& position)
		: mRotation(rotation), mPosition(position)
	{
	}

	// Transform a vector using the transform's rotation and translation
	Vector3 transform(const Vector3& input) const
	{
		return mRotation.rotate(input) + mPosition;
	}

	PxTransformT operator*(const PxTransformT& other) const
	{
		Vector4 newRotation = mRotation * other.mRotation;
		Vector3 newPosition = mRotation.rotate(other.mPosition) + mPosition;
		return PxTransformT(newRotation, newPosition);
	}

	bool isNearlyZero(float value, float epsilon = 1e-6f)
	{
		return fabs(value) < epsilon;
	}

	PxTransformT getInverse() const
	{
		Vector4 invRotation = mRotation.conjugate();
		Vector3 invPosition = mRotation.rotateInv(-mPosition);
		return PxTransformT(invRotation, invPosition);
	}

	bool IsNearlyEqual(const PxTransformT& other, float tolerance = 0.1f) const {
		return mRotation.IsNearlyEqual(other.mRotation, tolerance) &&
			mPosition.IsNearlyEqual(other.mPosition, tolerance);
	}


};

struct PxsRigidCoreT
{
	alignas(16) PxTransformT mBodyToWorld {};
	physx::PxRigidBodyFlag Flags{};
	uint8_t m_idt_body_to_actor{};
	uint16_t m_solver_iteration_counts{};
};

struct BodyCoreT
{
	char mPad[0x10]{};
	alignas(16) PxsRigidCoreT mCore {};
	alignas(16) PxTransformT mBodyToActor;
};

struct BodyT
{
	uintptr_t mScene{};
	uintptr_t mControlState{};
	uintptr_t mStreamPtr{};
	BodyCoreT mRigid{};
};

struct PxGeometryT
{
	physx::PxGeometryType mType{};
};

struct GeometryUnionT
{
	union
	{
		void* alignment; // PT: Makes sure the class is at least aligned to pointer size. See DE6803.
		uint8_t box[16];
		uint8_t sphere[8];
		uint8_t capsule[12];
		uint8_t plane[4];
		uint8_t convex[64];
		uint8_t mesh[80];
		uint8_t heightfield[56];
		uint8_t invalid[4];
	} mGeometry;

	__forceinline physx::PxGeometryType getType() const { return reinterpret_cast<const PxGeometryT&>(mGeometry).mType; }
};

struct PxShapeCoreT
{
	alignas(16) PxTransformT transform;
	float contactOffset;
	uint8_t mShapeFlags;			// !< API shape flags	// PT: TODO: use PxShapeFlags here. Needs to move flags to separate file.
	uint8_t mOwnsMaterialIdxMemory; // PT: for de-serialization to avoid deallocating material index list. Moved there from Sc::ShapeCore (since one byte was free).
	uint16_t materialIndex;
	GeometryUnionT geometry;
};

struct FilterDataT
{
	uint32_t word0;
	uint32_t word1;
	uint32_t word2;
	uint32_t word3;
};

struct ShapeCoreT
{

	FilterDataT QueryFilterData{};
	FilterDataT SimulationFilterData{};
	alignas(16) PxShapeCoreT mCore {};
	float mRestOffset{};

	__forceinline physx::PxGeometryType getGeometryType() const { return mCore.geometry.getType(); }
	__forceinline const PxTransformT getShape2Actor() const { return mCore.transform; }
};

struct ShapeT
{

	uintptr_t mScene{};
	uint32_t mControlState{};
	uintptr_t mStreamPtr{};

	ShapeCoreT ShapeCore{};

	__forceinline const PxGeometryT& GetGeometry() const { return reinterpret_cast<const PxGeometryT&>(ShapeCore.mCore.geometry.mGeometry); }
};

struct CenterExtentsT
{
	Vector3 mCenter{};
	Vector3 mExtents{};
};

struct TriangleMeshT
{
	char mPad[0x8]{};
	physx::PxConcreteType mType{};
	physx::PxBaseFlag mBaseFlags{};
	uintptr_t mRefCountableVfptr{};
	int64_t mRefCount{};
	uint32_t mNbVertices{};
	uint32_t mNbTriangles{};
	Vector3* Vertices{};
	void* mTriangles{};
	CenterExtentsT mAABB{};
	uint8_t* mExtraTrigData{};
	float mGeomEpsilon{};
	uint8_t Flags{};
};

struct PxTriangleMeshGeometryT : PxGeometryT
{
	physx::PxMeshScale Scale{};
	uint8_t mMeshFlags{};
	char mFlagPad[0x3]{};
	TriangleMeshT* mTriangleMesh{};
};

inline FVector P2UVector(const physx::PxVec3& PVec)
{
	return FVector(PVec.x, PVec.y, PVec.z);
}

inline physx::PxVec3 U2PVector(const FVector& PVec)
{
	return physx::PxVec3(PVec.X, PVec.Y, PVec.Z);
}

inline uint64_t GenerateMeshHash(const int NumTriangles, const int NumVertices, const float VertexX, const float VertexY, const float VertexZ) noexcept
{
	uint64_t hash = ((uint64_t)NumTriangles << 32) | (uint64_t)NumVertices;
	const uint32_t* px = reinterpret_cast<const uint32_t*>(&VertexX);
	const uint32_t* py = reinterpret_cast<const uint32_t*>(&VertexY);
	const uint32_t* pz = reinterpret_cast<const uint32_t*>(&VertexZ);
	hash ^= ((uint64_t)*px << 13) ^ ((uint64_t)*py << 27) ^ ((uint64_t)*pz << 47);

	return hash;
}

constexpr uint64_t SKIP_MESH_HASHES[] = {
	0x0
};

constexpr uint64_t SKIP_CONVEX_HASHES[] = {
	0xDB7A4278B9680783
};

inline bool ShouldSkipMesh(uint64_t hash) noexcept {
	for (const uint64_t skipHash : SKIP_MESH_HASHES) {
		if (hash == skipHash) return true;
	}
	return false;
}

inline bool ShouldSkipConvex(uint64_t hash) noexcept {
	for (const uint64_t skipHash : SKIP_CONVEX_HASHES) {
		if (hash == skipHash) return true;
	}
	return false;
}