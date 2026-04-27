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
#include <unordered_set>
#include <Utils/Timer.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <execution>
#include <thread>
#include <vector>
#include <future>
#include <set>


//PhysX3_x64.lib
//PhysX3Common_x64.lib
//PhysX3Extensions.lib
//PxFoundation_x64.lib
//PxPvdSDK_x64.lib
//PhysX3Cooking_x64.lib

static Throttler ThrottleredUpdateDynamics;

using namespace physx;

class PxSilentErrorCallback : public PxErrorCallback
{
public:
	virtual void reportError(PxErrorCode::Enum code, const char* message, const char* file, int line) override
	{
	}
};

class PhysXMirror
{
public:
	static void CreateScene();

	static void ReleaseSceneActors();

	static void ReleaseScene();

	static bool RayCast(FVector Location, const PlayerInfo& Player);

	static bool ValidateTriangleIndices(const CPxTriangleMesh& TriangleMesh);

	static bool ValidateConvexDesc(const PxConvexMeshDesc& desc);

	static void ReadTriangleMeshs(
		std::unordered_map<uint64_t, CPxTriangleMesh>& PxTriangleMeshs,
		std::unordered_map<uint64_t, CPxTriangleMesh>& ErrorPxTriangleMeshs
	);

	static void ParallelCookTriangleMeshs(
		std::unordered_map<uint64_t, CPxTriangleMesh>& PxTriangleMeshs,
		std::unordered_map<uint64_t, CPxTriangleMesh>& ErrorPxTriangleMeshs
	);

	static void ReadHeightFields(
		std::unordered_map<uint64_t, CPxHeightField>& PxHeightFields,
		std::unordered_map<uint64_t, CPxHeightField>& ErrorPxHeightFields
	);

	static void ParallelCookHeightFields(
		std::unordered_map<uint64_t, CPxHeightField>& PxHeightFields,
		std::unordered_map<uint64_t, CPxHeightField>& ErrorPxHeightFields
	);

	static void ReadConvexMeshs(
		std::unordered_map<uint64_t, CPxConvexMesh>& PxConvexMeshs,
		std::unordered_map<uint64_t, CPxConvexMesh>& ErrorPxConvexMeshs
	);

	static void ParallelCookConvexMeshs(
		std::unordered_map<uint64_t, CPxConvexMesh>& PxConvexMeshs,
		std::unordered_map<uint64_t, CPxConvexMesh>& ErrorPxConvexMeshs
	);

	static void UpdateSceneActors(std::unordered_map<uint64_t, CPxActor>& PxActors);

	static void UpdatePxActors(VMMDLL_SCATTER_HANDLE& hScatter);

	static void Update();
};