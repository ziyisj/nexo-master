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


#ifndef PX_EXTENSIONS_API_H
#define PX_EXTENSIONS_API_H
/** \addtogroup extensions
  @{
*/

#include <Physx/Include/foundation/PxErrorCallback.h>
#include <Physx/Include/extensions/PxDefaultAllocator.h>
#include <Physx/Include/extensions/PxConstraintExt.h>
#include <Physx/Include/extensions/PxDistanceJoint.h>
#include <Physx/Include/extensions/PxFixedJoint.h>
#include <Physx/Include/extensions/PxPrismaticJoint.h>
#include <Physx/Include/extensions/PxRevoluteJoint.h>
#include <Physx/Include/extensions/PxSphericalJoint.h>
#include <Physx/Include/extensions/PxD6Joint.h>
#include <Physx/Include/extensions/PxDefaultSimulationFilterShader.h>
#include <Physx/Include/extensions/PxDefaultErrorCallback.h>
#include <Physx/Include/extensions/PxDefaultStreams.h>
#include <Physx/Include/extensions/PxRigidActorExt.h>
#include <Physx/Include/extensions/PxRigidBodyExt.h>
#include <Physx/Include/extensions/PxShapeExt.h>
#include <Physx/Include/extensions/PxParticleExt.h>
#include <Physx/Include/extensions/PxTriangleMeshExt.h>
#include <Physx/Include/extensions/PxSerialization.h>
#include <Physx/Include/extensions/PxDefaultCpuDispatcher.h>
#include <Physx/Include/extensions/PxSmoothNormals.h>
#include <Physx/Include/extensions/PxSimpleFactory.h>
#include <Physx/Include/extensions/PxStringTableExt.h>
#include <Physx/Include/extensions/PxClothFabricCooker.h>
#include <Physx/Include/extensions/PxBroadPhaseExt.h>
#include <Physx/Include/extensions/PxClothMeshQuadifier.h>
#include <Physx/Include/extensions/PxMassProperties.h>
#include <Physx/Include/extensions/PxSceneQueryExt.h>

/** \brief Initialize the PhysXExtensions library. 

This should be called before calling any functions or methods in extensions which may require allocation. 
\note This function does not need to be called before creating a PxDefaultAllocator object.

\param physics a PxPhysics object
\param pvd an PxPvd (PhysX Visual Debugger) object

@see PxCloseExtensions PxFoundation PxPhysics
*/

PX_C_EXPORT bool PX_CALL_CONV PxInitExtensions(physx::PxPhysics& physics, physx::PxPvd* pvd);

/** \brief Shut down the PhysXExtensions library. 

This function should be called to cleanly shut down the PhysXExtensions library before application exit. 

\note This function is required to be called to release foundation usage.

@see PxInitExtensions
*/

PX_C_EXPORT void PX_CALL_CONV PxCloseExtensions();

/** @} */
#endif // PX_EXTENSIONS_API_H
