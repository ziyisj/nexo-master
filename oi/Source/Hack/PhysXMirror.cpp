#include "PhysXMirror.h"
#include "PhysXCollect.h"
#include <Hack/GName.h>

void PhysXMirror::CreateScene()
{
	static PxSilentErrorCallback SilentCallback;

	GameData.Physics.PhysX.mFoundation = PxCreateFoundation(PX_FOUNDATION_VERSION, GameData.Physics.PhysX.mDefaultAllocatorCallback, SilentCallback);
	GameData.Physics.PhysX.mPhysics = PxCreatePhysics(PX_PHYSICS_VERSION, *GameData.Physics.PhysX.mFoundation, physx::PxTolerancesScale(), true, GameData.Physics.PhysX.mPvd);

	PxCookingParams cookingParams(GameData.Physics.PhysX.mPhysics->getTolerancesScale());
	cookingParams.meshWeldTolerance = 0.001f;
	cookingParams.meshPreprocessParams = PxMeshPreprocessingFlags(
		PxMeshPreprocessingFlag::eWELD_VERTICES
	);
	cookingParams.meshCookingHint = PxMeshCookingHint::eCOOKING_PERFORMANCE;
	cookingParams.meshSizePerformanceTradeOff = 0.55f;

	GameData.Physics.PhysX.mCooking = PxCreateCooking(PX_PHYSICS_VERSION, *GameData.Physics.PhysX.mFoundation, cookingParams);

	physx::PxSceneDesc sceneDesc(GameData.Physics.PhysX.mPhysics->getTolerancesScale());
	sceneDesc.gravity = physx::PxVec3(0.0f, -9.81f, 0.0f);
	GameData.Physics.PhysX.mDispatcher = physx::PxDefaultCpuDispatcherCreate(0);
	sceneDesc.cpuDispatcher = GameData.Physics.PhysX.mDispatcher;
	sceneDesc.filterShader = physx::PxDefaultSimulationFilterShader;
	GameData.Physics.PhysX.mScene = GameData.Physics.PhysX.mPhysics->createScene(sceneDesc);
	GameData.Physics.PhysX.mMaterial = GameData.Physics.PhysX.mPhysics->createMaterial(0.1f, 0.1f, 0.1f);
}

bool PhysXMirror::ValidateTriangleIndices(const CPxTriangleMesh& TriangleMesh) {
	bool Has16BitIndices = (TriangleMesh.Flags & 2U) ? true : false;
	if (Has16BitIndices) {
		const PxU16* indices = static_cast<const PxU16*>(TriangleMesh.Triangles.data());
		for (int i = 0; i < TriangleMesh.NumTriangles * 3; i++) {
			if (indices[i] >= TriangleMesh.NumVertices) {
				return false; // 索引越界
			}
		}
	}
	else {
		const PxU32* indices = static_cast<const PxU32*>(TriangleMesh.BigTriangles.data());
		for (int i = 0; i < TriangleMesh.NumTriangles * 3; i++) {
			if (indices[i] >= TriangleMesh.NumVertices) {
				return false; // 索引越界
			}
		}
	}
	return true;
}

void PhysXMirror::ParallelCookTriangleMeshs(
	std::unordered_map<uint64_t, CPxTriangleMesh>& PxTriangleMeshs,
	std::unordered_map<uint64_t, CPxTriangleMesh>& ErrorPxTriangleMeshs)
{
	// 准备收集有效网格的容器
	std::vector<uint64_t> validIndices;
	std::vector<PxTriangleMeshDesc> validMeshDescs;

	// 第一步：筛选需要处理的网格
	for (auto& Item : PxTriangleMeshs)
	{
		auto& TriangleMesh = Item.second;

		if (TriangleMesh.Vertices.size() > 0 && TriangleMesh.Triangles.size() > 0)
		{
			if (!TriangleMesh.TriangleMesh)
			{
				//if (true) {
				//	if (
				//		(TriangleMesh.Vertices[0].x == 0 && TriangleMesh.Vertices[0].y == 0 && TriangleMesh.Vertices[0].z == 0) ||
				//		(
				//			(TriangleMesh.Vertices[0].x < -10000000 || TriangleMesh.Vertices[0].x > 10000000 || TriangleMesh.Vertices[0].x == INFINITY)
				//			|| (TriangleMesh.Vertices[0].y < -10000000 || TriangleMesh.Vertices[0].y > 10000000 || TriangleMesh.Vertices[0].y == INFINITY)
				//			|| (TriangleMesh.Vertices[0].z < -10000000 || TriangleMesh.Vertices[0].z > 10000000 || TriangleMesh.Vertices[0].z == INFINITY)
				//			)
				//		)
				//	{
				//		continue;
				//	}

				//	bool Faild = false;

				//	for (int32 Index = 0; Index < TriangleMesh.NumTriangles * 3; Index += 3)
				//	{
				//		if (
				//			TriangleMesh.Triangles[Index] > TriangleMesh.Vertices.size() ||
				//			TriangleMesh.Triangles[Index + 1] > TriangleMesh.Vertices.size() ||
				//			TriangleMesh.Triangles[Index + 2] > TriangleMesh.Vertices.size()
				//			)
				//		{
				//			Utils::Log(0, XorStr("TriangleMeshError %d %d %d"), Index, TriangleMesh.NumTriangles, TriangleMesh.NumTriangles);
				//			Faild = true;
				//			break;
				//		}
				//	}

				//	if (Faild) continue;
				//}

				PxTriangleMeshDesc MeshDesc;
				MeshDesc.points.count = TriangleMesh.NumVertices;
				MeshDesc.points.stride = sizeof(PxVec3);
				MeshDesc.points.data = TriangleMesh.Vertices.data();
				MeshDesc.triangles.count = TriangleMesh.NumTriangles;

				bool Has16BitIndices = (TriangleMesh.Flags & 2U) ? true : false;
				if (Has16BitIndices) {
					if (TriangleMesh.Triangles.empty()) {
						continue;
					}
					size_t requiredCount = TriangleMesh.NumTriangles * 3;
					if (TriangleMesh.Triangles.size() < requiredCount) {

						continue;
					}
					MeshDesc.triangles.stride = 3 * sizeof(PxU16);
					MeshDesc.triangles.data = TriangleMesh.Triangles.data();
					MeshDesc.flags = PxMeshFlag::e16_BIT_INDICES;
				}
				else {
					if (TriangleMesh.BigTriangles.empty()) {
						continue;
					}

					size_t requiredCount = TriangleMesh.NumTriangles * 3;
					if (TriangleMesh.BigTriangles.size() < requiredCount) {
						continue;
					}

					MeshDesc.triangles.stride = 3 * sizeof(PxU32);
					MeshDesc.triangles.data = TriangleMesh.BigTriangles.data();
				}

				// 验证索引范围
				if (!ValidateTriangleIndices(TriangleMesh)) {
					// 索引越界
					continue;
				}

				if (reinterpret_cast<uintptr_t>(TriangleMesh.Vertices.data()) % alignof(PxVec3) != 0) {
					// 数据未对齐
					continue;
				}

				if (!MeshDesc.isValid())
				{
					//Utils::Log(0, XorStr("TriangleMeshDesc Valid Failed %d %d"), TriangleMesh.NumVertices, TriangleMesh.NumTriangles);
				}
				else {
					// 添加到有效列表
					validIndices.push_back(Item.first);
					validMeshDescs.push_back(MeshDesc);
				}
			}
		}
	}

	// 如果有有效的网格需要处理
	if (!validIndices.empty())
	{
		size_t numMeshes = validIndices.size();

		// 准备存储cooking结果
		std::vector<PxDefaultMemoryOutputStream*> writeBuffers(numMeshes, nullptr);
		std::vector<bool> cookResults(numMeshes, false);
		std::vector<PxTriangleMesh*> resultMeshes(numMeshes, nullptr);

		// 创建输出缓冲区
		for (size_t i = 0; i < numMeshes; i++)
		{
			writeBuffers[i] = new PxDefaultMemoryOutputStream();
		}

		// 确定线程数量
		unsigned int numThreads = std::thread::hardware_concurrency();
		numThreads = (numThreads == 0) ? 4 : numThreads;
		// 确保线程数不超过任务数
		if (numThreads > numMeshes) {
			numThreads = (unsigned int)numMeshes;
		}

		// 第二步：多线程执行cooking
		{
			// 共享的任务计数器
			std::mutex cookMutex;
			size_t nextCookTask = 0;

			// 创建线程数组
			std::vector<std::thread*> cookThreads;

			// 创建并启动线程
			for (unsigned int t = 0; t < numThreads; t++)
			{
				std::thread* thread = new std::thread([&cookMutex, &nextCookTask, &numMeshes, &validMeshDescs, &writeBuffers, &cookResults]()
					{
						while (true)
						{
							size_t taskIdx;

							// 获取下一个任务
							cookMutex.lock();
							if (nextCookTask >= numMeshes)
							{
								cookMutex.unlock();
								break; // 所有任务已完成
							}
							taskIdx = nextCookTask++;
							cookMutex.unlock();

							// 执行cooking
							cookResults[taskIdx] = GameData.Physics.PhysX.mCooking->cookTriangleMesh(
								validMeshDescs[taskIdx], *(writeBuffers[taskIdx]));
						}
					});

				cookThreads.push_back(thread);
			}

			// 等待所有线程完成
			for (unsigned int t = 0; t < numThreads; t++)
			{
				cookThreads[t]->join();
				delete cookThreads[t];
			}
		}

		// 第三步：多线程创建三角形网格
		{
			// 共享的任务计数器
			std::mutex meshMutex;
			size_t nextMeshTask = 0;

			// 创建线程数组
			std::vector<std::thread*> meshThreads;

			// 创建并启动线程
			for (unsigned int t = 0; t < numThreads; t++)
			{
				std::thread* thread = new std::thread([&meshMutex, &nextMeshTask, &numMeshes, &writeBuffers, &cookResults, &resultMeshes]()
					{
						while (true)
						{
							size_t taskIdx;

							// 获取下一个任务
							meshMutex.lock();
							if (nextMeshTask >= numMeshes)
							{
								meshMutex.unlock();
								break; // 所有任务已完成
							}
							taskIdx = nextMeshTask++;
							meshMutex.unlock();

							// 只处理cooking成功的任务
							if (cookResults[taskIdx])
							{
								PxDefaultMemoryInputData readBuffer(
									writeBuffers[taskIdx]->getData(),
									writeBuffers[taskIdx]->getSize());
								resultMeshes[taskIdx] = GameData.Physics.PhysX.mPhysics->createTriangleMesh(readBuffer);
							}
						}
					});

				meshThreads.push_back(thread);
			}

			// 等待所有线程完成
			for (unsigned int t = 0; t < numThreads; t++)
			{
				meshThreads[t]->join();
				delete meshThreads[t];
			}
		}

		// 更新结果
		for (size_t i = 0; i < numMeshes; i++)
		{
			uint64_t meshIndex = validIndices[i];
			auto& TriangleMesh = PxTriangleMeshs[meshIndex];

			TriangleMesh.TriangleMesh = resultMeshes[i];

			if (!TriangleMesh.TriangleMesh)
			{
				ErrorPxTriangleMeshs[meshIndex] = TriangleMesh;
			}
			else
			{
				Data::SetPxTriangleMeshsItem(meshIndex, TriangleMesh);
			}
		}

		// 清理缓冲区
		for (size_t i = 0; i < numMeshes; i++)
		{
			delete writeBuffers[i];
		}
	}
}

void PhysXMirror::ReadTriangleMeshs(
	std::unordered_map<uint64_t, CPxTriangleMesh>& PxTriangleMeshs,
	std::unordered_map<uint64_t, CPxTriangleMesh>& ErrorPxTriangleMeshs
)
{
	auto hScatter = mem.CreateScatterHandleUseCache();

	for (const auto& Item : PxTriangleMeshs)
	{
		const auto& TriangleMesh = Item.second;

		mem.AddScatterRead(hScatter, TriangleMesh.pTriangleMesh + 0x20, (PxU32*)&TriangleMesh.NumVertices);
		mem.AddScatterRead(hScatter, TriangleMesh.pTriangleMesh + 0x24, (PxU32*)&TriangleMesh.NumTriangles);
		mem.AddScatterRead(hScatter, TriangleMesh.pTriangleMesh + 0x28, (uint64_t*)&TriangleMesh.pVertice);
		mem.AddScatterRead(hScatter, TriangleMesh.pTriangleMesh + 0x30, (uint64_t*)&TriangleMesh.pTriangle);
		mem.AddScatterRead(hScatter, TriangleMesh.pTriangleMesh + 0x5C, (UINT8*)&TriangleMesh.Flags);
	}

	mem.ExecuteReadScatterUseCache(hScatter);

	for (auto& Item : PxTriangleMeshs)
	{
		auto& TriangleMesh = Item.second;

		if (
			TriangleMesh.NumVertices > 0 && TriangleMesh.NumVertices < 100000
			&&
			TriangleMesh.NumTriangles > 0 && TriangleMesh.NumTriangles < 100000
			&& ((float)TriangleMesh.NumVertices / TriangleMesh.NumTriangles) < 10.0f
			)
		{
			TriangleMesh.Vertices.resize(TriangleMesh.NumVertices);
			TriangleMesh.Triangles.resize(TriangleMesh.NumTriangles * 3);

			TriangleMesh.Vertices.resize(TriangleMesh.NumVertices);
			mem.AddScatterReadRequest(hScatter, TriangleMesh.pVertice, TriangleMesh.Vertices.data(), sizeof(PxVec3) * TriangleMesh.NumVertices);

			bool Has16BitIndices = (TriangleMesh.Flags & 2U) ? true : false;

			if (Has16BitIndices) {
				TriangleMesh.Triangles.resize(TriangleMesh.NumTriangles * 3);
				mem.AddScatterReadRequest(hScatter, TriangleMesh.pTriangle, TriangleMesh.Triangles.data(), sizeof(PxU16) * TriangleMesh.NumTriangles * 3);
			}
			else {
				TriangleMesh.BigTriangles.resize(TriangleMesh.NumTriangles * 3);
				mem.AddScatterReadRequest(hScatter, TriangleMesh.pTriangle, TriangleMesh.BigTriangles.data(), sizeof(PxU32) * TriangleMesh.NumTriangles * 3);
			}
		}
	}

	mem.ExecuteReadScatterUseCache(hScatter);

	mem.CloseScatterHandle(hScatter);
}

void PhysXMirror::ReadConvexMeshs(std::unordered_map<uint64_t, CPxConvexMesh>& PxConvexMeshs, std::unordered_map<uint64_t, CPxConvexMesh>& ErrorPxConvexMeshs)
{
    auto hScatter = mem.CreateScatterHandleUseCache();
    {
    	for (auto& Item : PxConvexMeshs)
    	{
    		auto& ConvexMesh = Item.second;
    		mem.AddScatterRead(hScatter, ConvexMesh.pConvexMesh + 0x46, (UINT8*)&ConvexMesh.nbVertices);
    		mem.AddScatterRead(hScatter, ConvexMesh.pConvexMesh + 0x47, (UINT8*)&ConvexMesh.nbPolygons);
    		mem.AddScatterRead(hScatter, ConvexMesh.pConvexMesh + 0x48, (UINT64*)&ConvexMesh.pPolygons);
    	}

    	mem.ExecuteReadScatter(hScatter);
    	mem.CloseScatterHandle(hScatter);
    	hScatter = mem.CreateScatterHandle();

    	for (auto& Item : PxConvexMeshs)
    	{
    		auto& ConvexMesh = Item.second;
    		ConvexMesh.Vertices.resize(ConvexMesh.nbVertices);

    		mem.AddScatterReadRequest(hScatter, ConvexMesh.pPolygons +
    			sizeof(CPxHullPolygonData) * ConvexMesh.nbPolygons,
    			ConvexMesh.Vertices.data(),
    			sizeof(PxVec3)* ConvexMesh.nbVertices);
    	}

    	mem.ExecuteReadScatter(hScatter);

    	
    }
	mem.CloseScatterHandle(hScatter);
}

bool PhysXMirror::ValidateConvexDesc(const PxConvexMeshDesc& desc)
{
    if (!desc.points.data || desc.points.count < 4)
    {
        return false;
    }

    const PxVec3* verts = static_cast<const PxVec3*>(desc.points.data);

    for (PxU32 i = 0; i < desc.points.count; i++)
    {
        if (!verts[i].isFinite())
        {
            return false;
        }
    }

    return true;
}

void PhysXMirror::ParallelCookConvexMeshs(std::unordered_map<uint64_t, CPxConvexMesh>& PxConvexMeshs, std::unordered_map<uint64_t, CPxConvexMesh>& ErrorPxConvexMeshs) 
{
    for (auto& Item : PxConvexMeshs)
    {
        auto& ConvexMeshs = Item.second;

        if (ConvexMeshs.Vertices.size() > 0)
        {
            if (!ConvexMeshs.ConvexMesh)
            {
                // 创建凸包描述
                PxConvexMeshDesc ConvexDesc;
                ConvexDesc.points.count = ConvexMeshs.nbVertices;
                ConvexDesc.points.stride = sizeof(PxVec3);
                ConvexDesc.points.data = ConvexMeshs.Vertices.data();
                ConvexDesc.flags = PxConvexFlag::eCOMPUTE_CONVEX;

                if (!ConvexDesc.isValid())
                {
                    // Utils::Log(0, XorStr("TriangleMeshDesc Valid Failed %d %d"), TriangleMesh.NumVertices, TriangleMesh.NumTriangles);
                }
                else
                {
                    PxDefaultMemoryOutputStream WriteBuffer;
                    if (ValidateConvexDesc(ConvexDesc))
                    {
                        bool CookSuccess = GameData.Physics.PhysX.mCooking->cookConvexMesh(ConvexDesc, WriteBuffer);
                        if (!CookSuccess)
                        {
                            // Utils::Log(0, XorStr("TriangleMesh Cook Failed %d %d"), TriangleMesh.NumVertices, TriangleMesh.NumTriangles);
                        }
                        else
                        {
                            PxDefaultMemoryInputData readBuffer(WriteBuffer.getData(), WriteBuffer.getSize());
                            ConvexMeshs.ConvexMesh = GameData.Physics.PhysX.mPhysics->createConvexMesh(readBuffer);

                            // Utils::Log(1, "%p", ConvexMeshs.ConvexMesh);
                        }
                    }
                }

                if (!ConvexMeshs.ConvexMesh)
                {
                    ErrorPxConvexMeshs[Item.first] = Item.second;
                }
                else
                {
                    Data::SetPxConvexMeshsItem(Item.first, Item.second);
                }
            }
        }
    }
}

void PhysXMirror::ReadHeightFields(std::unordered_map<uint64_t, CPxHeightField>& PxHeightFields, std::unordered_map<uint64_t, CPxHeightField>& ErrorPxHeightFields) 
{
    auto hScatter = mem.CreateScatterHandleUseCache();

    for (auto& Item : PxHeightFields)
    {
        auto& HeightField = Item.second;

        mem.AddScatterRead(hScatter, HeightField.pHeightField + 0x38, (PxU32*)&HeightField.NumRows);
        mem.AddScatterRead(hScatter, HeightField.pHeightField + 0x3C, (PxU32*)&HeightField.NumColumns);
        mem.AddScatterRead(hScatter, HeightField.pHeightField + 0x50, (uint64_t*)&HeightField.pSamples);
        mem.AddScatterRead(hScatter, HeightField.pHeightField + 0x58, (PxReal*)&HeightField.Thickness);
    }

    mem.ExecuteReadScatterUseCache(hScatter);

    for (auto& Item : PxHeightFields)
    {
        auto& HeightField = Item.second;

        if (HeightField.NumRows > 0 && HeightField.NumRows < 10000 && HeightField.NumColumns > 0 && HeightField.NumColumns < 10000)
        {
            HeightField.Samples.resize(HeightField.NumRows * HeightField.NumColumns);
            mem.AddScatterReadRequest(hScatter, HeightField.pSamples, HeightField.Samples.data(), sizeof(PxHeightFieldSample) * HeightField.NumRows * HeightField.NumColumns);
        }
    }

    mem.ExecuteReadScatterUseCache(hScatter);
	mem.CloseScatterHandle(hScatter);
}

void PhysXMirror::ParallelCookHeightFields(std::unordered_map<uint64_t, CPxHeightField>& PxHeightFields, std::unordered_map<uint64_t, CPxHeightField>& ErrorPxHeightFields) 
{
    for (auto& Item : PxHeightFields)
    {
        auto& HeightField = Item.second;

        if (HeightField.Samples.size() > 0)
        {
            if (!HeightField.HeightField)
            {
                PxU32 NumRows = HeightField.NumRows;
                PxU32 NumCols = HeightField.NumColumns;

                PxHeightFieldDesc HeightFieldDesc;
                HeightFieldDesc.nbRows = HeightField.NumRows;
                HeightFieldDesc.nbColumns = HeightField.NumColumns;
                HeightFieldDesc.thickness = HeightField.Thickness;
                HeightFieldDesc.samples.data = HeightField.Samples.data();
                HeightFieldDesc.samples.stride = sizeof(PxHeightFieldSample);

                if (!HeightFieldDesc.isValid())
                {
                    // Utils::Log(0, XorStr("HeightFieldDesc Valid Failed %d %d"), HeightField.NumRows, HeightField.NumColumns);
                }
                else
                {
                    if (std::fpclassify(HeightField.Thickness) == FP_SUBNORMAL || HeightField.Thickness != -1.0f)
                    {
                        // Utils::Log(0, XorStr("HeightFieldDesc Number Failed %f %d %d"), HeightFieldDesc.thickness, HeightFieldDesc.nbRows, HeightFieldDesc.nbColumns);
                    }
                    else
                    {
                        /*HeightField.HeightField = PxCreateHeightField(HeightFieldDesc,
                            GameData.Physics.PhysX.mPhysics->getPhysicsInsertionCallback());*/

                        PxDefaultMemoryOutputStream WriteBuffer;
                        bool CookSuccess = GameData.Physics.PhysX.mCooking->cookHeightField(HeightFieldDesc, WriteBuffer);
                        if (!CookSuccess)
                        {
                            // Utils::Log(0, XorStr("HeightFieldDesc Cook Failed %d %d"), HeightFieldDesc.nbRows, HeightFieldDesc.nbColumns);
                        }
                        else
                        {
                            PxDefaultMemoryInputData ReadBuffer(WriteBuffer.getData(), WriteBuffer.getSize());
                            HeightField.HeightField = GameData.Physics.PhysX.mPhysics->createHeightField(ReadBuffer);
                        }
                    }
                }

                if (!HeightField.HeightField)
                {
                    ErrorPxHeightFields[Item.first] = Item.second;
                }
                else
                {
                    Data::SetPxHeightFieldsItem(Item.first, Item.second);
                }
            }
        }
    }
}

void PhysXMirror::UpdateSceneActors(std::unordered_map<uint64_t, CPxActor>& PxActors)
{
	for (auto& Item : PxActors)
	{
		auto& Actor = Item.second;

		if (
			!Actor.PxActor &&
			Actor.NumShape > 0
			)
		{
			if (Actor.Type == CPxActorType::PxRigidDynamic) {
				physx::PxRigidDynamic* DynamicActor = GameData.Physics.PhysX.mPhysics->createRigidDynamic(Actor.GlobalPose);
				if (DynamicActor) {
					if (Actor.ActorUserData.data1 != 0)
					{
						CPxActorUserData* UserData = new CPxActorUserData{ Actor.ActorUserData };
						DynamicActor->userData = UserData;
					}
					GameData.Physics.PhysX.mScene->addActor(*DynamicActor);

					Actor.PxActor = DynamicActor;
				}
			}
			else {
				physx::PxRigidStatic* StaticActor = GameData.Physics.PhysX.mPhysics->createRigidStatic(Actor.GlobalPose);
				if (StaticActor) {
					GameData.Physics.PhysX.mScene->addActor(*StaticActor);
					Actor.PxActor = StaticActor;
				}
			}
		}

		if (Actor.PxActor)
		{
			for (auto& Shape : Actor.Shapes)
			{
                if (Shape.bTrash)
                    continue;

                if (1 && Shape.GeometryHolderByte.Type == CPxGeometryType::eBOX)
                {
                    if (!Shape.Shape)
                    {
                        PxBoxGeometry Geometry(Shape.Box.X, Shape.Box.Y, Shape.Box.Z);

						if (Geometry.isValid())
                        {
                            physx::PxRigidActor* RigidActor = static_cast<physx::PxRigidActor*>(Actor.PxActor);
                            Shape.Shape = RigidActor->createShape(Geometry, *GameData.Physics.PhysX.mMaterial, Shape.Flags);
                            RigidActor->attachShape(*Shape.Shape);
                            Shape.Shape->release();

                            if (Shape.Shape)
                            {
                                Shape.Shape->setQueryFilterData(Shape.QueryFilterData);
                                //Shape.Shape->setSimulationFilterData(Shape.SimulationFilterData);
                                Shape.Shape->setLocalPose(Shape.LocalPose);
                            }
                        }

                        // Utils::Log(4, "%f %f %f", Shape.Box.X, Shape.Box.Y, Shape.Box.Z);
                    }
                }

				if (1 && Shape.GeometryHolderByte.Type == CPxGeometryType::eCONVEXMESH)
				{
                    if (!Shape.Shape)
                    {
                        CPxConvexMesh ConvexMesh = Data::GetPxConvexMeshsItem(Shape.ConvexMesh.pConvexMesh);
                        if (ConvexMesh.ConvexMesh)
						{
                            Shape.ConvexMesh.ConvexMesh = ConvexMesh.ConvexMesh;

                            PxConvexMeshGeometry Geometry(Shape.ConvexMesh.ConvexMesh);

							// 判断hash是否等于 0xDB7A4278B9680783 如果是 跳过
							//{
							//	physx::PxConvexMesh* convexMesh = Shape.ConvexMesh.ConvexMesh;
							//	physx::PxU32 nbVertices = convexMesh->getNbVertices();
							//	const physx::PxVec3* vertices = convexMesh->getVertices();
							//	physx::PxU32 nbPolygons = convexMesh->getNbPolygons();
							//	const physx::PxU8* indexBuffer = convexMesh->getIndexBuffer();
							//	
							//	// 收集顶点和索引
							//	std::vector<physx::PxVec3> verticesVec(vertices, vertices + nbVertices);
							//	std::vector<uint8_t> indicesVec;
							//	for (physx::PxU32 j = 0; j < nbPolygons; j++)
							//	{
							//		physx::PxHullPolygon polygon;
							//		if (convexMesh->getPolygonData(j, polygon))
							//		{
							//			const physx::PxU8* polyIndices = indexBuffer + polygon.mIndexBase;
							//			for (physx::PxU16 k = 0; k < polygon.mNbVerts; k++)
							//			{
							//				indicesVec.push_back(polyIndices[k]);
							//			}
							//		}
							//	}
							//	
							//	// 计算hash
							//	size_t hash = PhysXTypes::ComputeConvexHash(verticesVec, indicesVec, nbPolygons);
							//	
							//	// 如果hash在跳过列表中，跳过此Shape
							//	if (ShouldSkipConvex(hash))
							//	{
							//		continue;
							//	}
							//}

							if (Geometry.isValid())
                            {
                                if (Shape.GeometryHolderByte.ConvexMeshGeometry.MeshFlagsByte & CPxConvexMeshGeometryFlag::eTIGHT_BOUNDS)
                                {
                                    Geometry.meshFlags |= physx::PxConvexMeshGeometryFlag::eTIGHT_BOUNDS;
                                }
                                Geometry.scale.scale = Shape.GeometryHolderByte.ConvexMeshGeometry.Scale.Scale;
                                Geometry.scale.rotation = Shape.GeometryHolderByte.ConvexMeshGeometry.Scale.Rotation;

                                physx::PxRigidActor* RigidActor = static_cast<physx::PxRigidActor*>(Actor.PxActor);
                                Shape.Shape = RigidActor->createShape(Geometry, *GameData.Physics.PhysX.mMaterial, Shape.Flags);
                                RigidActor->attachShape(*Shape.Shape);
                                Shape.Shape->release();

                                if (Shape.Shape)
                                {
                                    Shape.Shape->setQueryFilterData(Shape.QueryFilterData);
                                    //Shape.Shape->setSimulationFilterData(Shape.SimulationFilterData);
                                    Shape.Shape->setLocalPose(Shape.LocalPose);
                                }
                            }
						}
					}
				}

				if (Shape.GeometryHolderByte.Type == CPxGeometryType::eTRIANGLEMESH)
				{
					if (!Shape.Shape)
					{
						CPxTriangleMesh TriangleMesh = Data::GetPxTriangleMeshsItem(Shape.TriangleMesh.pTriangleMesh);
						if (TriangleMesh.TriangleMesh)
						{
							Shape.TriangleMesh.TriangleMesh = TriangleMesh.TriangleMesh;

							PxTriangleMeshGeometry Geometry(Shape.TriangleMesh.TriangleMesh);
							/*Geometry.meshFlags = Shape.GeometryHolder.triangleMesh().meshFlags;
							Geometry.scale = Shape.GeometryHolder.triangleMesh().scale;
							Geometry.paddingFromFlags = Shape.GeometryHolder.triangleMesh().paddingFromFlags;*/
							if (Shape.GeometryHolderByte.TriangleMeshGeometry.MeshFlagsByte & CPxMeshGeometryFlag::eDOUBLE_SIDED)
							{
								Geometry.meshFlags |= physx::PxMeshGeometryFlag::eDOUBLE_SIDED;
							}
							Geometry.scale.scale = Shape.GeometryHolderByte.TriangleMeshGeometry.Scale.Scale;
							Geometry.scale.rotation = Shape.GeometryHolderByte.TriangleMeshGeometry.Scale.Rotation;

							physx::PxRigidActor* RigidActor = static_cast<physx::PxRigidActor*>(Actor.PxActor);

							if (ShouldSkipMesh(GenerateMeshHash(TriangleMesh.NumTriangles, TriangleMesh.NumVertices, TriangleMesh.Vertices[0].x, TriangleMesh.Vertices[0].y, TriangleMesh.Vertices[0].z)))
							{
								continue;
							}

							Actor.ValidShapes = true;

							//Utils::Log(4, "Shape.Flags %d", (uint8_t)Shape.Flags);

							Shape.Shape = RigidActor->createShape(Geometry, *GameData.Physics.PhysX.mMaterial, Shape.Flags);
							RigidActor->attachShape(*Shape.Shape);
							Shape.Shape->release();

							if (Shape.Shape)
							{
                                Shape.Shape->setQueryFilterData(Shape.QueryFilterData);
                                //Shape.Shape->setSimulationFilterData(Shape.SimulationFilterData);
								Shape.Shape->setLocalPose(Shape.LocalPose);
							}
						}
					}
				}

				if (Shape.GeometryHolderByte.Type == CPxGeometryType::eHEIGHTFIELD)
				{
					if (!Shape.Shape)
					{
						CPxHeightField HeightField = Data::GetPxHeightFieldsItem(Shape.HeightField.pHeightField);
						if (HeightField.pHeightField)
						{
							Shape.HeightField.HeightField = HeightField.HeightField;

							PxHeightFieldGeometry Geometry(Shape.HeightField.HeightField, PxMeshGeometryFlags(), 1.0f, 1.0f, 1.0f);
							Geometry.heightScale = Shape.GeometryHolderByte.HeightFieldGeometry.HeightScale;
							Geometry.rowScale = Shape.GeometryHolderByte.HeightFieldGeometry.RowScale;
							Geometry.columnScale = Shape.GeometryHolderByte.HeightFieldGeometry.ColumnScale;
							if (Shape.GeometryHolderByte.HeightFieldGeometry.HeightFieldFlagsByte & CPxMeshGeometryFlag::eDOUBLE_SIDED)
							{
								Geometry.heightFieldFlags |= physx::PxMeshGeometryFlag::eDOUBLE_SIDED;
							}

							physx::PxRigidActor* RigidActor = static_cast<physx::PxRigidActor*>(Actor.PxActor);
							Shape.Shape = RigidActor->createShape(Geometry, *GameData.Physics.PhysX.mMaterial, Shape.Flags);
							RigidActor->attachShape(*Shape.Shape);
							Shape.Shape->release();

							if (Shape.Shape)
							{
                                Shape.Shape->setQueryFilterData(Shape.QueryFilterData);
                                //Shape.Shape->setSimulationFilterData(Shape.SimulationFilterData);
								Shape.Shape->setLocalPose(Shape.LocalPose);
							}
						}
					}
				}
			}
		}
	}
}

void PhysXMirror::UpdatePxActors(VMMDLL_SCATTER_HANDLE& hScatter)
{
	Timer timer(XorStr("UpdatePxActors"));

	std::unordered_map<uint64_t, CPxActor> PxActors;

	const std::unordered_map<uint64_t, CPxTriangleMesh> CachePxTriangleMeshs = Data::GetPxTriangleMeshs();
    const std::unordered_map<uint64_t, CPxHeightField> CachePxHeightFields = Data::GetPxHeightFields();
    const std::unordered_map<uint64_t, CPxConvexMesh> CachePxConvexMeshs = Data::GetPxConvexMeshs();

	std::unordered_map<uint64_t, CPxTriangleMesh> PxTriangleMeshs;
    std::unordered_map<uint64_t, CPxTriangleMesh> ErrorPxTriangleMeshs;

	std::unordered_map<uint64_t, CPxHeightField> PxHeightFields;
    std::unordered_map<uint64_t, CPxHeightField> ErrorPxHeightFields;

	std::unordered_map<uint64_t, CPxConvexMesh> PxConvexMeshs;
    std::unordered_map<uint64_t, CPxConvexMesh> ErrorPxConvexMeshs;

    std::unordered_map<uint64_t, CPxBox> PxBoxs;
    std::unordered_map<uint64_t, CPxBox> ErrorPxBoxs;

	std::unordered_map<uint64_t, uint64_t> KeysToDelete;

	int32 Count = mem.Read<int32>(GameData.Physics.PxScene + 0x2618 + 8);
    if (!(Count <= 0 || Count > 100000))
    {
		std::vector<uint64_t> PxActorsPTR(Count);
		mem.Read(mem.Read<uint64_t>(GameData.Physics.PxScene + 0x2618), (uint64_t*)&PxActorsPTR[0], Count * 8);

		for (const auto& Item : PxActorsPTR)
		{
			CPxActor PxActor;
			if (!Utils::ValidPtr(Item)) {
				PxActor.pPxActor = Item;
				PxActors[PxActor.pPxActor] = PxActor;
			}
		}

		for (auto& Item : PxActors)
		{
			auto& Actor = Item.second;

			mem.AddScatterRead(hScatter, Actor.pPxActor + 0x8, (UINT16*)&Actor.ByteType);
            // mem.AddScatterRead(hScatter, Actor.pPxActor + 0x10, (uint64_t*)&Actor.UserData);
            mem.AddScatterRead(hScatter, Actor.pPxActor + 0x28, (uint64_t*)&Actor.pShape);
            mem.AddScatterRead(hScatter, Actor.pPxActor + 0x30, (UINT16*)&Actor.NumShape);
            mem.AddScatterRead(hScatter, Actor.pPxActor + 0x90, (PxTransform*)&Actor.GlobalPose);
            mem.AddScatterRead(hScatter, Actor.pPxActor + 0xB0, (PxTransform*)&Actor.CMassLocalPose);
		}

		mem.ExecuteReadScatterUseCache(hScatter);

		//Utils::Log(1, XorStr("Update PhysX Scene 1 Time=%d"), timer.get());

		for (auto& Item : PxActors)
		{
			auto& Actor = Item.second;

			switch (Actor.ByteType)
			{
			case 6:
				Actor.Type = CPxActorType::PxRigidDynamic;
				break;
			case 7:
				Actor.Type = CPxActorType::PxRigidStatic;
				break;
			default:
				Actor.Type = CPxActorType::PxUnk;
				break;
			}


			if (
				Actor.Type == CPxActorType::PxUnk
				/*|| Actor.Type == CPxActorType::PxRigidStatic*/ /*|| Actor.Type == CPxActorType::PxRigidDynamic*/
				|| Actor.Type == CPxActorType::PxRigidDynamic
				|| Actor.NumShape <= 0
				|| Actor.NumShape >= 10000 
				//|| (Actor.GlobalPose.p.x == 0.f && Actor.GlobalPose.p.y == 0.f && Actor.GlobalPose.p.z == 0.f)

				//|| (Actor.GlobalPose.p.x == 29590.0f && Actor.GlobalPose.p.y == 19030.0f && Actor.GlobalPose.p.z == 210.0f) 
				//|| (Actor.GlobalPose.p.x == 29710.f && Actor.GlobalPose.p.y == 18930.0f) 
				//|| (Actor.GlobalPose.p.x == 29650.f && Actor.GlobalPose.p.y == 19060.0f)
				)
			{
				//Utils::Log(1, "%d", Actor.ByteType);
				KeysToDelete[Actor.pPxActor] = Actor.pPxActor;
				continue;
			}

			Actor.GlobalPose.p.x += GameData.Physics.FWorldOriginLocation.X;
			Actor.GlobalPose.p.y += GameData.Physics.FWorldOriginLocation.Y;
			Actor.GlobalPose.p.z += GameData.Physics.FWorldOriginLocation.Z;

			for (size_t i = 0; i < Actor.NumShape; i++)
			{
				CPxShape Shape;

				if (Actor.NumShape == 1)
				{
					Shape.pPxShapeCache = Actor.pPxActor + 0x28;
				}
				else {
					Shape.pPxShapeCache = Actor.pShape + i * 8;
				}

				if (Actor.ShapesPTR.count(Shape.pPxShapeCache) == 0)
				{
					Actor.ShapesPTR[Shape.pPxShapeCache] = Shape.pPxShapeCache;
					Actor.Shapes.push_back(Shape);
				}
			}
		}

		for (const auto& Key : KeysToDelete) {
			PxActors.erase(Key.first);
		}

		KeysToDelete.clear();

		Count = PxActors.size();

		for (auto& Item : PxActors)
		{
			auto& Actor = Item.second;

			for (auto& Shape : Actor.Shapes)
			{
                mem.AddScatterRead(hScatter, Shape.pPxShapeCache, (uint64_t*)&Shape.pPxShape);
			}
		}

		mem.ExecuteReadScatterUseCache(hScatter);

		//Utils::Log(1, XorStr("Update PhysX Scene 3 Time=%d"), timer.get());

		for (auto& Item : PxActors)
		{
			auto& Actor = Item.second;

			for (auto& Shape : Actor.Shapes)
			{
                if (!Utils::ValidPtr(Shape.pPxShape))
                {
                    // mem.AddScatterRead(hScatter, Shape.pPxShape + 0x98, (PxGeometryHolder*)&Shape.GeometryHolder);
                    // mem.AddScatterRead(hScatter, Shape.pPxShape + 0x90, (PxShapeFlags*)&Shape.Flags);

                    mem.AddScatterRead(hScatter, Shape.pPxShape + 0x50, (physx::PxFilterData*)&Shape.QueryFilterData);
                    //mem.AddScatterRead(hScatter, Shape.pPxShape + 0x60, (physx::PxFilterData*)&Shape.SimulationFilterData);
                    mem.AddScatterRead(hScatter, Shape.pPxShape + 0x70, (physx::PxTransform*)&Shape.LocalPose);
                    mem.AddScatterRead(hScatter, Shape.pPxShape + 0x90, (UINT8*)&Shape.FlagsByte);
                    mem.AddScatterRead(hScatter, Shape.pPxShape + 0x98, (CPxGeometryType*)&Shape.GeometryHolderByte.Type);
                }
			}
		}

		mem.ExecuteReadScatterUseCache(hScatter);

		//Utils::Log(1, XorStr("Update PhysX Scene 4 Time=%d"), timer.get());

		for (auto& Item : PxActors)
		{
			auto& Actor = Item.second;

			for (auto& Shape : Actor.Shapes)
			{
                if (!Utils::ValidPtr(Shape.pPxShape))
                {
                    if (Shape.GeometryHolderByte.Type == CPxGeometryType::eTRIANGLEMESH)
                    {
                        mem.AddScatterRead(hScatter, Shape.pPxShape + 0x98 + 0x4, (CPxTriangleMeshGeometry*)&Shape.GeometryHolderByte.TriangleMeshGeometry);
                    }
                    else if (Shape.GeometryHolderByte.Type == CPxGeometryType::eHEIGHTFIELD)
                    {
                        mem.AddScatterRead(hScatter, Shape.pPxShape + 0x98 + 0x4, (CPxHeightFieldGeometry*)&Shape.GeometryHolderByte.HeightFieldGeometry);
                    }
                    else if (Shape.GeometryHolderByte.Type == CPxGeometryType::eBOX)
                    {
                        mem.AddScatterRead(hScatter, Shape.pPxShape + 0x98 + 0x4, (CPxBox*)&Shape.GeometryHolderByte.BoxGeometry);
                    }
                    else if (Shape.GeometryHolderByte.Type == CPxGeometryType::eCONVEXMESH)
                    {
                        mem.AddScatterRead(hScatter, Shape.pPxShape + 0x98 + 0x4, (CPxConvexMeshGeometry*)&Shape.GeometryHolderByte.ConvexMeshGeometry);
                    }
                }
			}
		}

		mem.ExecuteReadScatterUseCache(hScatter);

		//Utils::Log(1, XorStr("Update PhysX Scene 5 Time=%d"), timer.get());

		for (auto& Item : PxActors)
		{
			auto& Actor = Item.second;

			if (Actor.Type == CPxActorType::PxRigidDynamic) {
				Actor.GlobalPose.q = Actor.GlobalPose.q * Actor.CMassLocalPose.q.getConjugate();
				Actor.GlobalPose.p -= Actor.GlobalPose.q.rotate(Actor.CMassLocalPose.p);
			}

			bool bHaveTriangleMeshORHeightField = false;
            bool bHaveOtherShape = false;

			for (auto& Shape : Actor.Shapes)
			{
                bool bSCENE_QUERY_SHAPE = false;

				if (Shape.FlagsByte & CPxShapeFlag::eSIMULATION_SHAPE)
				{
					Shape.Flags |= physx::PxShapeFlag::eSIMULATION_SHAPE;
				}

				if (Shape.FlagsByte & CPxShapeFlag::eSCENE_QUERY_SHAPE)
				{
                    bSCENE_QUERY_SHAPE = true;
					Shape.Flags |= physx::PxShapeFlag::eSCENE_QUERY_SHAPE;
				}

				if (Shape.FlagsByte & CPxShapeFlag::eTRIGGER_SHAPE)
				{
					Shape.Flags |= physx::PxShapeFlag::eTRIGGER_SHAPE;
				}

				if (Shape.FlagsByte & CPxShapeFlag::eVISUALIZATION)
				{
					Shape.Flags |= physx::PxShapeFlag::eVISUALIZATION;
				}

				if (Shape.FlagsByte & CPxShapeFlag::ePARTICLE_DRAIN)
				{
					Shape.Flags |= physx::PxShapeFlag::ePARTICLE_DRAIN;
				}

				if (!bSCENE_QUERY_SHAPE) // 跳过不参与物理查询的形状
                {
                    Shape.bTrash = true; // 废弃
                    continue;
                }

				Shape.ShapeTransform = Actor.GlobalPose * Shape.LocalPose;

				//if (Actor.GlobalPose.p.x == 49738.75f && Actor.GlobalPose.p.y == -64024.88f && Actor.GlobalPose.p.z == -8774.f)
				//{
				//	//3 4
    //                Utils::Log(4, "%p - %p %d", Actor.pPxActor, Shape.pPxShape, Shape.GeometryHolderByte.Type);
				//}

				//if ((Actor.GlobalPose.p.x == 29351.037f && Actor.GlobalPose.p.y == 29734.809f && Actor.GlobalPose.p.z == 29.298828f))
    //            {
    //                Utils::Log(4, "%p - %p %d", Actor.pPxActor, Shape.pPxShape, Shape.GeometryHolderByte.Type);
    //            }

				switch (Shape.GeometryHolderByte.Type)
				{
				case CPxGeometryType::eSPHERE:
				{
					break;
				}
				case CPxGeometryType::ePLANE:
				{
					break;
				}
				case CPxGeometryType::eCAPSULE:
				{
					break;
				}
				case CPxGeometryType::eBOX:
				{
                    if (Shape.QueryFilterData.word1 & (1u << static_cast<uint32_t>(ECollisionChannel::ECC_Visibility)))
                    {
                        bHaveOtherShape = true;
                        CPxBox Box;
                        Box.X = Shape.GeometryHolderByte.BoxGeometry.X;
                        Box.Y = Shape.GeometryHolderByte.BoxGeometry.Y;
                        Box.Z = Shape.GeometryHolderByte.BoxGeometry.Z;

                        Shape.Box = Box;
                    }

                    //Utils::Log(4, "%p %f %f %f", Shape.pPxShape, PxBoxs[Shape.pPxShape].X, PxBoxs[Shape.pPxShape].Y, PxBoxs[Shape.pPxShape].Z);

					break;
				}
				case CPxGeometryType::eCONVEXMESH:
				{
                    if (Shape.QueryFilterData.word1 & (1u << static_cast<uint32_t>(ECollisionChannel::ECC_Visibility)))
					{
                        bHaveOtherShape = true;
                        Shape.ConvexMesh.pConvexMesh = (uint64_t)Shape.GeometryHolderByte.ConvexMeshGeometry.ConvexMesh;
                        if (!Utils::ValidPtr(Shape.ConvexMesh.pConvexMesh))
                        {
                            if (CachePxConvexMeshs.count(Shape.ConvexMesh.pConvexMesh) == 0)
                            {
                                CPxConvexMesh ConvexMesh;
                                ConvexMesh.pConvexMesh = Shape.ConvexMesh.pConvexMesh;
                                PxConvexMeshs[ConvexMesh.pConvexMesh] = ConvexMesh;
                            }
                        }
					}
					break;
				}
				case CPxGeometryType::eTRIANGLEMESH:
                {
                    if (Shape.QueryFilterData.word1 & (1u << static_cast<uint32_t>(ECollisionChannel::ECC_Visibility)))
                    {
                        bHaveTriangleMeshORHeightField = true;

                        // Shape.TriangleMesh.pTriangleMesh = (uint64_t)Shape.GeometryHolder.triangleMesh().triangleMesh;
                        Shape.TriangleMesh.pTriangleMesh = (uint64_t)Shape.GeometryHolderByte.TriangleMeshGeometry.TriangleMesh;

                        if (!Utils::ValidPtr(Shape.TriangleMesh.pTriangleMesh))
                        {
                            if (CachePxTriangleMeshs.count(Shape.TriangleMesh.pTriangleMesh) == 0)
                            {
                                CPxTriangleMesh TriangleMesh;
                                TriangleMesh.pTriangleMesh = Shape.TriangleMesh.pTriangleMesh;
                                PxTriangleMeshs[TriangleMesh.pTriangleMesh] = TriangleMesh;
                            }
                        }
                    }
					//Utils::Log(1, "PxGeometryType::eTRIANGLEMESH: %d %p %p", Shape.GeometryHolderByte.Type, Shape.GeometryHolderByte.TriangleMeshGeometry.TriangleMesh, (uint64_t)Shape.GeometryHolder.triangleMesh().triangleMesh);

					break;
				}
				case CPxGeometryType::eHEIGHTFIELD:
                {
                    if (Shape.QueryFilterData.word1 & (1u << static_cast<uint32_t>(ECollisionChannel::ECC_Visibility)))
                    {
                        bHaveTriangleMeshORHeightField = true;

                        // Shape.HeightField.pHeightField = (uint64_t)Shape.GeometryHolder.heightField().heightField;
                        Shape.HeightField.pHeightField = (uint64_t)Shape.GeometryHolderByte.HeightFieldGeometry.HeightField;

                        if (!Utils::ValidPtr(Shape.HeightField.pHeightField))
                        {
                            if (CachePxHeightFields.count(Shape.HeightField.pHeightField) == 0)
                            {
                                CPxHeightField HeightField;
                                HeightField.pHeightField = Shape.HeightField.pHeightField;
                                PxHeightFields[Shape.HeightField.pHeightField] = HeightField;
                            }
                        }
                    }
					//Utils::Log(1, "PxGeometryType::eHEIGHTFIELD: %d %p %p", Shape.GeometryHolderByte.Type, Shape.GeometryHolderByte.HeightFieldGeometry.HeightField, (uint64_t)Shape.GeometryHolder.heightField().heightField);

					break;
				}
				default:
					break;
				}
			}

			if (bHaveOtherShape && bHaveTriangleMeshORHeightField)
			{
				for (auto& Shape : Actor.Shapes)
				{
					if (!Shape.bTrash && Shape.GeometryHolderByte.Type != CPxGeometryType::eTRIANGLEMESH && CPxGeometryType::eHEIGHTFIELD)
					{
						// 如果判断这个Actor里的Shape已经有了 TriangleMesh 或 HeightField 的情况下把其它形状全部废弃
                        Shape.bTrash = true;
					}
				}
			}
		}

		//Utils::Log(1, XorStr("Update PhysX Scene 6 Time=%d"), timer.get());

		// 三角形网格
		ReadTriangleMeshs(PxTriangleMeshs, ErrorPxTriangleMeshs);
		// 凸网格
        ReadConvexMeshs(PxConvexMeshs, ErrorPxConvexMeshs);
		// 高度场
        ReadHeightFields(PxHeightFields, ErrorPxHeightFields);

		{
            Timer Timerd("UpdatePxScene");
            std::unique_lock<std::shared_mutex> lock(GameData.Physics.Mutex);
            if (GameData.Physics.PhysX.mScene)
                GameData.Physics.PhysX.mScene->lockWrite();
            GameData.Physics.Loading.store(true);
            GameData.Physics.Index = false;

			{
                // 批量烘培三角形网格
                ParallelCookTriangleMeshs(PxTriangleMeshs, ErrorPxTriangleMeshs);
                ParallelCookHeightFields(PxHeightFields, ErrorPxHeightFields);
                ParallelCookConvexMeshs(PxConvexMeshs, ErrorPxConvexMeshs);

                {
                    if (!GameData.Config.PhysX.NoCache)
					{
                        PxU32 NumActors = GameData.Physics.PhysX.mScene->getNbActors(PxActorTypeFlag::eRIGID_DYNAMIC | PxActorTypeFlag::eRIGID_STATIC);
                        std::vector<PxActor*> PxSceneActors(NumActors);
                        GameData.Physics.PhysX.mScene->getActors(PxActorTypeFlag::eRIGID_DYNAMIC | PxActorTypeFlag::eRIGID_STATIC, reinterpret_cast<PxActor**>(PxSceneActors.data()), NumActors);
                        GameData.Physics.PhysX.mScene->removeActors(reinterpret_cast<PxActor**>(PxSceneActors.data()), NumActors);

                        PxActor** end = PxSceneActors.data() + NumActors;
                        for (PxActor** actor = PxSceneActors.data(); actor != end; ++actor)
                        {
                            (*actor)->release();
                        }
                    }
                    else
                    {
                        ReleaseSceneActors();
					}
                }

                // Utils::Log(1, XorStr("Update PhysX Scene 9 Time=%d"), timer.get());

                UpdateSceneActors(PxActors);

				//Utils::Log(1, XorStr("Update physical scene in %dms."), Timerd.get());
            }

			GameData.Physics.Loading.store(false);
            if (GameData.Physics.PhysX.mScene)
                GameData.Physics.PhysX.mScene->unlockWrite();
            lock.unlock();
        }
	}

	if (ErrorPxHeightFields.size() > 0)
	{
		//Utils::Log(2, XorStr("HeightFields Error Number %d"), ErrorPxHeightFields.size());
	}

	if (ErrorPxTriangleMeshs.size() > 0)
	{
		//Utils::Log(2, XorStr("TriangleMeshs Error Number %d"), ErrorPxTriangleMeshs.size());
	}

	GameData.Physics.UpdateTime = timer.get();

	Utils::Log(1, XorStr("Successfully read the physical collision scene actor %d (%dms)."), PxActors.size(), GameData.Physics.UpdateTime);

	if (PxActors.size() == 0)
	{
		GameData.Physics.Index = true;
		GameData.Physics.PxScene = 0;
	}
}

void PhysXMirror::ReleaseSceneActors() 
{
	PxU32 NumActors = GameData.Physics.PhysX.mScene->getNbActors(PxActorTypeFlag::eRIGID_DYNAMIC | PxActorTypeFlag::eRIGID_STATIC);
    std::vector<PxActor*> PxSceneActors(NumActors);
    GameData.Physics.PhysX.mScene->getActors(PxActorTypeFlag::eRIGID_DYNAMIC | PxActorTypeFlag::eRIGID_STATIC, reinterpret_cast<PxActor**>(PxSceneActors.data()), NumActors);

    std::unordered_set<PxTriangleMesh*> TriangleMeshs;
    std::unordered_set<PxHeightField*> HeightFields;

    for (auto& Item : PxSceneActors)
    {
        if (!Utils::ValidPtr(Item))
        {
            PxRigidActor* RigidActor = static_cast<PxRigidActor*>(Item);
            if (RigidActor)
            {
                PxU32 NumShapes = RigidActor->getNbShapes();
                std::vector<PxShape*> Shapes(NumShapes);
                RigidActor->getShapes(Shapes.data(), NumShapes);

                for (auto& Shape : Shapes)
                {
                    if (Shape->getGeometry().getType() == PxGeometryType::eTRIANGLEMESH)
                    {
                        PxTriangleMeshGeometry MeshGeometry;
                        if (Shape->getTriangleMeshGeometry(MeshGeometry))
                        {
                            PxTriangleMesh* TriangleMesh = MeshGeometry.triangleMesh;
                            if (TriangleMeshs.find(TriangleMesh) == TriangleMeshs.end())
                            {
                                TriangleMeshs.insert(TriangleMesh);
                            }
                        }
                    }

                    if (Shape->getGeometry().getType() == PxGeometryType::eHEIGHTFIELD)
                    {
                        PxHeightFieldGeometry HeightFieldGeometry;
                        if (Shape->getHeightFieldGeometry(HeightFieldGeometry))
                        {
                            PxHeightField* HeightField = HeightFieldGeometry.heightField;
                            if (HeightFields.find(HeightField) == HeightFields.end())
                            {
                                HeightFields.insert(HeightField);
                            }
                        }
                    }

                    Shape->release();
                }

                GameData.Physics.PhysX.mScene->removeActor(*Item);

                if (Item->userData)
                {
                    delete Item->userData;
                }

                Item->release();
            }
        }
    }

    for (auto* Item : TriangleMeshs)
    {
        if (Item)
        {
            Item->release();
        }
    }

    for (auto* Item : HeightFields)
    {
        if (Item)
        {
            Item->release();
        }
    }
}

void PhysXMirror::ReleaseScene()
{
	if (!GameData.Physics.PhysX.mScene) {
		return;
	}

	ReleaseSceneActors();

	if (GameData.Process.GameState != FGameState::InGame) {

		// 1. 首先释放场景
		if (GameData.Physics.PhysX.mScene)
		{
			GameData.Physics.PhysX.mScene->release();
			GameData.Physics.PhysX.mScene = nullptr;
		}

		// 2. 释放调度器
		if (GameData.Physics.PhysX.mDispatcher)
		{
			GameData.Physics.PhysX.mDispatcher->release();
			GameData.Physics.PhysX.mDispatcher = nullptr;
		}

		// 3. 释放材质
		if (GameData.Physics.PhysX.mMaterial)
		{
			GameData.Physics.PhysX.mMaterial->release();
			GameData.Physics.PhysX.mMaterial = nullptr;
		}

		// 4. 释放 Cooking
		if (GameData.Physics.PhysX.mCooking)
		{
			GameData.Physics.PhysX.mCooking->release();
			GameData.Physics.PhysX.mCooking = nullptr;
		}
	}
}

bool PhysXMirror::RayCast(FVector Location, const PlayerInfo& Player)
{
	if (Location == FVector() || !GameData.Config.PhysX.Enable || GameData.Physics.Loading.load()) {
		return !Player.IsVisible;
	}

	FVector CameraLocation = GameData.Global.Data.Camera.Location + GameData.Physics.FWorldOriginLocation;
	FVector WorldLocation = Location + GameData.Physics.FWorldOriginLocation;

	physx::PxVec3 Start = U2PVector(CameraLocation);
	physx::PxVec3 End = U2PVector(WorldLocation);

	if (!Start.isFinite() || !End.isFinite()) {
		return !Player.IsVisible;
	}

	physx::PxVec3 Direction = End - Start;
	physx::PxReal Distance = Direction.magnitude();

	if (Distance < 1e-6f) {
		return !Player.IsVisible;
	}

	Direction.normalize();

	std::shared_lock<std::shared_mutex> lock(GameData.Physics.Mutex);

	if (!GameData.Physics.PhysX.mScene) {
		return !Player.IsVisible;
	}

	physx::PxRaycastBuffer Hit;

	GameData.Physics.PhysX.mScene->lockRead();
	bool IsBlocked = GameData.Physics.PhysX.mScene->raycast(
		Start,
		Direction,
		Distance,
		Hit,
		physx::PxHitFlag::eDEFAULT
	);
	GameData.Physics.PhysX.mScene->unlockRead();

	return IsBlocked || Hit.hasBlock;
}

void PhysXMirror::Update()
{
	Throttler Throttlered;
	physx::PxVec3 LastWorldOriginLocation;
	bool bCanLoadLocalModel = true;
	bool bLoadLocalModel = false;

	while (true)
	{
		if (GameData.Config.ESP.Debug) GameData.Global.Data.ThreadCount.PhysX++;

		if (GameData.Process.GameState != FGameState::InGame || Utils::ValidPtr(GameData.Physics.PxScene) || Utils::ValidPtr(GameData.Global.Data.LocalPlayerInfo.Address) || !GameData.Config.PhysX.Enable)
		{
			std::unique_lock<std::shared_mutex> lock(GameData.Physics.Mutex);

			if (GameData.Physics.PhysX.mScene) GameData.Physics.PhysX.mScene->lockWrite();
			ReleaseScene();
			if (GameData.Physics.PhysX.mScene) GameData.Physics.PhysX.mScene->unlockWrite();

			Data::SetPxActors({});
			Data::SetPxTriangleMeshs({});
			Data::SetPxHeightFields({});
			GameData.Physics.WorldOriginLocation = { 0.f, 0.f, 0.f };
			GameData.Physics.FWorldOriginLocation = { 0.f, 0.f, 0.f };
			GameData.Physics.LastCameraLocation = { 0.f, 0.f, 0.f };
			GameData.Physics.Index = true;
			GameData.Physics.bUpdateDynamic = false;
			GameData.Physics.PxScene = NULL;
			bLoadLocalModel = false;

			lock.unlock();

			Sleep(2000);
			continue;
		}

		if (GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID == 0)
		{
            Sleep(4);
            continue;
		}

		if (!GameData.Physics.PhysX.mScene)
		{
			std::unique_lock<std::shared_mutex> lock(GameData.Physics.Mutex);
			CreateScene();
			Utils::Log(1, XorStr("The physical scene was created successfully"));
			lock.unlock();
		}

		if (GameData.Physics.Loading.load())
		{
			Sleep(4);
			continue;
		}

		GameData.Physics.WorldOriginLocation.x = (float)mem.Read<int>(GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("WorldToMap")));
		GameData.Physics.WorldOriginLocation.y = (float)mem.Read<int>(GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("WorldToMap")) + 0x4);
		GameData.Physics.WorldOriginLocation.z = (float)mem.Read<int>(GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("WorldToMap")) + 0x8);
		GameData.Physics.FWorldOriginLocation = { GameData.Physics.WorldOriginLocation.x, GameData.Physics.WorldOriginLocation.y, GameData.Physics.WorldOriginLocation.z };

		if (GameData.Physics.bCanLoadLocalModel)
		{
			static bool LoadSuccess = false;
			auto MapName = GameData.Global.Data.LevelName != "" ? GameData.Global.Data.LevelName : XorStr("SecretService");
			//MapName = XorStr("Tide");
			std::string Filename = XorStr("Engine/Map/") + MapName + ".npak";
			std::ifstream InFile(Filename, std::ios::binary);

			if (InFile.is_open())
			{
				InFile.close();

				if (!bLoadLocalModel || GameData.Physics.Index)
				{
					GameData.Physics.Loading.store(true);

					std::unique_lock<std::shared_mutex> lock(GameData.Physics.Mutex);

					if (true) {
						if (GameData.Physics.PhysX.mScene) GameData.Physics.PhysX.mScene->lockWrite();
					
						LoadSuccess = PhysXCollect::LoadFromFile(MapName);

						bLoadLocalModel = true;
						GameData.Physics.Index = false;

						if (GameData.Physics.PhysX.mScene) GameData.Physics.PhysX.mScene->unlockWrite();
					}

					lock.unlock();

					GameData.Physics.Loading.store(false);
				}
			} else {
				LoadSuccess = false;
			}

			if (LoadSuccess)
			{
				Sleep(100);
				continue;
			}
		}
		else {
			if (bLoadLocalModel)
			{
				std::unique_lock<std::shared_mutex> lock(GameData.Physics.Mutex);

				{
					if (GameData.Physics.PhysX.mScene) GameData.Physics.PhysX.mScene->lockWrite();
					ReleaseScene();
					if (GameData.Physics.PhysX.mScene) GameData.Physics.PhysX.mScene->unlockWrite();
				}

				Data::SetPxActors({});
                Data::SetPxTriangleMeshs({});
                Data::SetPxHeightFields({});
                GameData.Physics.WorldOriginLocation = {0.f, 0.f, 0.f};
                GameData.Physics.LastCameraLocation = {0.f, 0.f, 0.f};
                GameData.Physics.Index = true;
                bLoadLocalModel = false;

                Utils::Log(1, XorStr("Local Model Release Success"));

				lock.unlock();
			}
		}

		//Utils::Log(1, "%d %d %d %d %f", Scene.exts[0].mTimestamp, GameData.Physics.StaticUpdateTimestamp, GameData.Physics.Loading, GameData.Physics.Index, GameData.Global.Data.Camera.Location.Distance(GameData.Physics.LastCameraLocation) / 100.0f);

		if (!GameData.Physics.Loading.load()
            && (GameData.Physics.LastCameraLocation == FVector() || GameData.Physics.Index || GameData.Global.Data.Camera.Location.Distance(GameData.Physics.LastCameraLocation) / 100.0f >= GameData.Config.PhysX.ReDistance
                //|| (CacheLastUpdateSeconds != LastUpdateSeconds && CacheLastUpdateSeconds > 0)
                ))
        {
			GameData.Physics.LastCameraLocation = GameData.Global.Data.Camera.Location;

			auto hScatter = mem.CreateScatterHandle();
			UpdatePxActors(hScatter);
			mem.CloseScatterHandle(hScatter);

			if (GameData.Config.PhysX.NoCache)
            {
                Data::SetPxActors({});
                Data::SetPxTriangleMeshs({});
                Data::SetPxHeightFields({});
                //Utils::Log(1, XorStr("Clear physical cache sucesss."));
            }
			if (GameData.Physics.SaveLocalModelUpdate)
            {
                const auto MapName = GameData.Global.Data.LevelName != "" ? GameData.Global.Data.LevelName : XorStr("SecretService");

                std::shared_lock<std::shared_mutex> Lock(GameData.Physics.Mutex);
                if (GameData.Physics.PhysX.mScene)
                {
                    GameData.Physics.PhysX.mScene->lockRead();
                    PhysXCollect::SaveToFile(MapName);
                    GameData.Physics.PhysX.mScene->unlockRead();
                }
                Lock.unlock();
			}
		}

		Sleep(100);
	}
}