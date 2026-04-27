// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2017 NVIDIA Corporation. All rights reserved.
// Copyright (c) 2004-2008 AGEIA Technologies, Inc. All rights reserved.
// Copyright (c) 2001-2004 NovodeX AG. All rights reserved.  


#ifndef PX_PHYSICS_NXPHYSICS_API
#define PX_PHYSICS_NXPHYSICS_API
/** \addtogroup physics
@{
*/

/**
This is the main include header for the Physics SDK, for users who
want to use a single #include file.

Alternatively, one can instead directly #include a subset of the below files.
*/

// Foundation SDK 
#include <Physx/Include/foundation/Px.h>
#include <Physx/Include/foundation/PxAllocatorCallback.h>
#include <Physx/Include/foundation/PxAssert.h>
#include <Physx/Include/foundation/PxBitAndData.h>
#include <Physx/Include/foundation/PxBounds3.h>
#include <Physx/Include/foundation/PxErrorCallback.h>
#include <Physx/Include/foundation/PxErrors.h>
#include <Physx/Include/foundation/PxFlags.h>
#include <Physx/Include/foundation/PxFoundation.h>
#include <Physx/Include/foundation/PxFoundationVersion.h>
#include <Physx/Include/foundation/PxIntrinsics.h>
#include <Physx/Include/foundation/PxIO.h>
#include <Physx/Include/foundation/PxMat33.h>
#include <Physx/Include/foundation/PxMat44.h>
#include <Physx/Include/foundation/PxMath.h>
#include <Physx/Include/foundation/PxMathUtils.h>
#include <Physx/Include/foundation/PxPlane.h>
#include <Physx/Include/foundation/PxPreprocessor.h>
#include <Physx/Include/foundation/PxQuat.h>
#include <Physx/Include/foundation/PxSimpleTypes.h>
#include <Physx/Include/foundation/PxStrideIterator.h>
#include <Physx/Include/foundation/PxTransform.h>
#include <Physx/Include/foundation/PxUnionCast.h>
#include <Physx/Include/foundation/PxVec2.h>
#include <Physx/Include/foundation/PxVec3.h>
#include <Physx/Include/foundation/PxVec4.h>

//Not physics specific utilities and common code
#include <Physx/Include/common/PxCoreUtilityTypes.h>
#include <Physx/Include/common/PxPhysXCommonConfig.h>
#include <Physx/Include/common/PxRenderBuffer.h>
#include <Physx/Include/common/PxBase.h>
#include <Physx/Include/common/PxTolerancesScale.h>
#include <Physx/Include/common/PxTypeInfo.h>
#include <Physx/Include/common/PxStringTable.h>
#define requires requires_old
#include <Physx/Include/common/PxSerializer.h>
#undef requires
#include <Physx/Include/common/PxMetaData.h>
#include <Physx/Include/common/PxMetaDataFlags.h>
#include <Physx/Include/common/PxSerialFramework.h>
#include <Physx/Include/common/PxPhysicsInsertionCallback.h>

//Task Manager
#include <Physx/Include/task/PxTask.h>

// Cuda Mananger
#if PX_SUPPORT_GPU_PHYSX
#include <Physx/Include/gpu/PxGpu.h>
#endif

//Geometry Library
#include <Physx/Include/geometry/PxBoxGeometry.h>
#include <Physx/Include/geometry/PxCapsuleGeometry.h>
#include <Physx/Include/geometry/PxConvexMesh.h>
#include <Physx/Include/geometry/PxConvexMeshGeometry.h>
#include <Physx/Include/geometry/PxGeometry.h>
#include <Physx/Include/geometry/PxGeometryHelpers.h>
#include <Physx/Include/geometry/PxGeometryQuery.h>
#include <Physx/Include/geometry/PxHeightField.h>
#include <Physx/Include/geometry/PxHeightFieldDesc.h>
#include <Physx/Include/geometry/PxHeightFieldFlag.h>
#include <Physx/Include/geometry/PxHeightFieldGeometry.h>
#include <Physx/Include/geometry/PxHeightFieldSample.h>
#include <Physx/Include/geometry/PxMeshQuery.h>
#include <Physx/Include/geometry/PxMeshScale.h>
#include <Physx/Include/geometry/PxPlaneGeometry.h>
#include <Physx/Include/geometry/PxSimpleTriangleMesh.h>
#include <Physx/Include/geometry/PxSphereGeometry.h>
#include <Physx/Include/geometry/PxTriangle.h>
#include <Physx/Include/geometry/PxTriangleMesh.h>
#include <Physx/Include/geometry/PxTriangleMeshGeometry.h>


// PhysX Core SDK
#include <Physx/Include/PxActor.h>
#include <Physx/Include/PxAggregate.h>
#include <Physx/Include/PxArticulation.h>
#include <Physx/Include/PxArticulationJoint.h>
#include <Physx/Include/PxArticulationLink.h>
#include <Physx/Include/PxBatchQuery.h>
#include <Physx/Include/PxBatchQueryDesc.h>
#include <Physx/Include/PxClient.h>
#include <Physx/Include/PxConstraint.h>
#include <Physx/Include/PxConstraintDesc.h>
#include <Physx/Include/PxContact.h>
#include <Physx/Include/PxContactModifyCallback.h>
#include <Physx/Include/PxDeletionListener.h>
#include <Physx/Include/PxFiltering.h>
#include <Physx/Include/PxForceMode.h>
#include <Physx/Include/PxLockedData.h>
#include <Physx/Include/PxMaterial.h>
#include <Physx/Include/PxPhysics.h>
#include <Physx/Include/PxPhysicsVersion.h>
#include <Physx/Include/PxPhysXConfig.h>
#include <Physx/Include/PxQueryFiltering.h>
#include <Physx/Include/PxQueryReport.h>
#include <Physx/Include/PxRigidActor.h>
#include <Physx/Include/PxRigidBody.h>
#include <Physx/Include/PxRigidDynamic.h>
#include <Physx/Include/PxRigidStatic.h>
#include <Physx/Include/PxScene.h>
#include <Physx/Include/PxSceneDesc.h>
#include <Physx/Include/PxSceneLock.h>
#include <Physx/Include/PxShape.h>
#include <Physx/Include/PxSimulationEventCallback.h>
#include <Physx/Include/PxSimulationStatistics.h>
#include <Physx/Include/PxSpatialIndex.h>
#include <Physx/Include/PxVisualizationParameter.h>
#include <Physx/Include/PxVolumeCache.h>
#include <Physx/Include/PxPruningStructure.h>

//Character Controller
#include <Physx/Include/characterkinematic/PxBoxController.h>
#include <Physx/Include/characterkinematic/PxCapsuleController.h>
#include <Physx/Include/characterkinematic/PxCharacter.h>
#include <Physx/Include/characterkinematic/PxController.h>
#include <Physx/Include/characterkinematic/PxControllerBehavior.h>
#include <Physx/Include/characterkinematic/PxControllerManager.h>
#include <Physx/Include/characterkinematic/PxControllerObstacles.h>
#include <Physx/Include/characterkinematic/PxExtended.h>

//Cloth Simulation
#if PX_USE_CLOTH_API
#include <Physx/Include/cloth/PxCloth.h>
#include <Physx/Include/cloth/PxClothCollisionData.h>
#include <Physx/Include/cloth/PxClothFabric.h>
#include <Physx/Include/cloth/PxClothParticleData.h>
#include <Physx/Include/cloth/PxClothTypes.h>
#endif

//Cooking (data preprocessing)
#include <Physx/Include/cooking/Pxc.h>
#include <Physx/Include/cooking/PxConvexMeshDesc.h>
#include <Physx/Include/cooking/PxCooking.h>
#include <Physx/Include/cooking/PxTriangleMeshDesc.h>
#include <Physx/Include/cooking/PxBVH33MidphaseDesc.h>
#include <Physx/Include/cooking/PxBVH34MidphaseDesc.h>
#include <Physx/Include/cooking/PxMidphaseDesc.h>

//Extensions to the SDK
#include <Physx/Include/extensions/PxDefaultStreams.h>
#include <Physx/Include/extensions/PxDistanceJoint.h>
#include <Physx/Include/extensions/PxExtensionsAPI.h>
#include <Physx/Include/extensions/PxFixedJoint.h>
#include <Physx/Include/extensions/PxJoint.h>
#include <Physx/Include/extensions/PxJointLimit.h>
#include <Physx/Include/extensions/PxParticleExt.h>
#include <Physx/Include/extensions/PxPrismaticJoint.h>
#include <Physx/Include/extensions/PxRevoluteJoint.h>
#include <Physx/Include/extensions/PxRigidBodyExt.h>
#include <Physx/Include/extensions/PxShapeExt.h>
#include <Physx/Include/extensions/PxSimpleFactory.h>
#include <Physx/Include/extensions/PxSmoothNormals.h>
#include <Physx/Include/extensions/PxSphericalJoint.h>
#include <Physx/Include/extensions/PxStringTableExt.h>
#include <Physx/Include/extensions/PxTriangleMeshExt.h>
#include <Physx/Include/extensions/PxConvexMeshExt.h>

//Serialization
#include <Physx/Include/extensions/PxSerialization.h>
#include <Physx/Include/extensions/PxBinaryConverter.h>
#include <Physx/Include/extensions/PxRepXSerializer.h>
#include <Physx/Include/extensions/PxJointRepXSerializer.h>

//Particle Simulation
#if PX_USE_PARTICLE_SYSTEM_API
#include <Physx/Include/particles/PxParticleBase.h>
#include <Physx/Include/particles/PxParticleBaseFlag.h>
#include <Physx/Include/particles/PxParticleCreationData.h>
#include <Physx/Include/particles/PxParticleFlag.h>
#include <Physx/Include/particles/PxParticleFluid.h>
#include <Physx/Include/particles/PxParticleFluidReadData.h>
#include <Physx/Include/particles/PxParticleReadData.h>
#include <Physx/Include/particles/PxParticleSystem.h>
#endif

//Vehicle Simulation
#include <Physx/Include/vehicle/PxVehicleComponents.h>
#include <Physx/Include/vehicle/PxVehicleDrive.h>
#include <Physx/Include/vehicle/PxVehicleDrive4W.h>
#include <Physx/Include/vehicle/PxVehicleDriveTank.h>
#include <Physx/Include/vehicle/PxVehicleSDK.h>
#include <Physx/Include/vehicle/PxVehicleShaders.h>
#include <Physx/Include/vehicle/PxVehicleTireFriction.h>
#include <Physx/Include/vehicle/PxVehicleUpdate.h>
#include <Physx/Include/vehicle/PxVehicleUtilControl.h>
#include <Physx/Include/vehicle/PxVehicleUtilSetup.h>
#include <Physx/Include/vehicle/PxVehicleUtilTelemetry.h>
#include <Physx/Include/vehicle/PxVehicleWheels.h>
#include <Physx/Include/vehicle/PxVehicleNoDrive.h>
#include <Physx/Include/vehicle/PxVehicleDriveNW.h>

//Connecting the SDK to Visual Debugger
#include <Physx/Include/pvd/PxPvdSceneClient.h>
#include <Physx/Include/pvd/PxPvd.h>
#include <Physx/Include/pvd/PxPvdTransport.h>
/** @} */
#endif
