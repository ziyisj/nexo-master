#pragma once

#include <list>
#include <unordered_map>

enum EBoneIndex
{
	Root = 0,
	Pelvis = 1,
	Spine_01 = 3,
	Neck_01 = 30,
	Head = 31,
	ForeHead = 32,

	Upperarm_L = 34,
	Lowerarm_L = 35,
	Hand_L = 38,

	Upperarm_R = 6,
	Lowerarm_R = 7,
	Hand_R = 10,

	Thigh_L = 58,
	Calf_L = 59,
	Foot_L = 60,

	Thigh_R = 62,
	Calf_R = 63,
	Foot_R = 64,

	Unk = 1000,
};

namespace SkeletonLists {
	static std::list<EBoneIndex> Right_Arm = { EBoneIndex::Neck_01, EBoneIndex::Upperarm_R, EBoneIndex::Lowerarm_R, EBoneIndex::Hand_R };
	static std::list<EBoneIndex> Left_Arm = { EBoneIndex::Neck_01, EBoneIndex::Upperarm_L, EBoneIndex::Lowerarm_L, EBoneIndex::Hand_L };
	static std::list<EBoneIndex> Spine = { EBoneIndex::Neck_01, EBoneIndex::Spine_01, EBoneIndex::Pelvis };
	static std::list<EBoneIndex> Lower_Right = { EBoneIndex::Pelvis, EBoneIndex::Thigh_R, EBoneIndex::Calf_R, EBoneIndex::Foot_R };
	static std::list<EBoneIndex> Lower_Left = { EBoneIndex::Pelvis, EBoneIndex::Thigh_L, EBoneIndex::Calf_L, EBoneIndex::Foot_L };
	static std::list<std::list<EBoneIndex>> Skeleton = { Right_Arm, Left_Arm, Spine, Lower_Right, Lower_Left };

	static const EBoneIndex Bones[] = {
		EBoneIndex::Root,
		EBoneIndex::ForeHead,
		EBoneIndex::Head,
		EBoneIndex::Neck_01,
		EBoneIndex::Upperarm_R,
		EBoneIndex::Lowerarm_R,
		EBoneIndex::Hand_R,
		EBoneIndex::Upperarm_L,
		EBoneIndex::Lowerarm_L,
		EBoneIndex::Hand_L,
		EBoneIndex::Spine_01,
		EBoneIndex::Pelvis,
		EBoneIndex::Thigh_R,
		EBoneIndex::Calf_R,
		EBoneIndex::Foot_R,
		EBoneIndex::Thigh_L,
		EBoneIndex::Calf_L,
		EBoneIndex::Foot_L
	};

	static constexpr size_t BonesCount = sizeof(Bones) / sizeof(Bones[0]);
};

inline static const std::vector<int> BoneIndex = {
	EBoneIndex::ForeHead,       // 前额 1
	EBoneIndex::Head,           // 头部 2
	EBoneIndex::Neck_01,        // 脖子 3
	EBoneIndex::Spine_01,       // 骨盆 5

	EBoneIndex::Pelvis,         // 胸部 4
	EBoneIndex::Upperarm_R,     // 右上臂 6
	EBoneIndex::Lowerarm_R,     // 右前臂 7
	EBoneIndex::Hand_R,         // 右手 8
	EBoneIndex::Upperarm_L,     // 左上臂 9
	EBoneIndex::Lowerarm_L,     // 左前臂 10
	EBoneIndex::Hand_L,         // 左手 11
	EBoneIndex::Thigh_R,        // 右大腿 12
	EBoneIndex::Calf_R,         // 右小腿 13
	EBoneIndex::Foot_R,         // 右脚 14 
	EBoneIndex::Thigh_L,        // 左大腿 15
	EBoneIndex::Calf_L,         // 左小腿 16
	EBoneIndex::Foot_L,         // 左脚 17
};