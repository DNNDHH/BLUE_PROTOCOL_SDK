#pragma once

 

// Package: AB_Player_Nappo

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "ActionSystem_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_Player_Nappo.AB_Player_Nappo_C
// 0x3D20 (0x4D00 - 0x0FE0)
class UAB_Player_Nappo_C final : public USBCharacterAnimInstance
{
public:
	uint8                                         Pad_9F23[0x8];                                     // 0x0FD8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0FE8(0x0030)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine;                      // 0x1018(0x0310)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1328(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1348(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1368(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x14C0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x14E8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1640(0x0028)()
	uint8                                         Pad_9F24[0x8];                                     // 0x1668(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0x1670(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x1C80(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x2290(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x28A0(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x2EB0(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x34C0(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x3AD0(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x40E0(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x46F0(0x0610)()

public:
	void ExecuteUbergraph_AB_Player_Nappo(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Player_Nappo_C">();
	}
	static class UAB_Player_Nappo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Player_Nappo_C>();
	}
};
static_assert(alignof(UAB_Player_Nappo_C) == 0x000010, "Wrong alignment on UAB_Player_Nappo_C");
static_assert(sizeof(UAB_Player_Nappo_C) == 0x004D00, "Wrong size on UAB_Player_Nappo_C");
static_assert(offsetof(UAB_Player_Nappo_C, UberGraphFrame) == 0x000FE0, "Member 'UAB_Player_Nappo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_Root) == 0x000FE8, "Member 'UAB_Player_Nappo_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, ASAnimGraphNode_StateMachine) == 0x001018, "Member 'UAB_Player_Nappo_C::ASAnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_LocalToComponentSpace) == 0x001328, "Member 'UAB_Player_Nappo_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_ComponentToLocalSpace) == 0x001348, "Member 'UAB_Player_Nappo_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_SaveCachedPose_1) == 0x001368, "Member 'UAB_Player_Nappo_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_UseCachedPose_1) == 0x0014C0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_SaveCachedPose) == 0x0014E8, "Member 'UAB_Player_Nappo_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_UseCachedPose) == 0x001640, "Member 'UAB_Player_Nappo_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_8) == 0x001670, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_8' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_7) == 0x001C80, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_7' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_6) == 0x002290, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_6' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_5) == 0x0028A0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_5' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_4) == 0x002EB0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_3) == 0x0034C0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_2) == 0x003AD0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics_1) == 0x0040E0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UAB_Player_Nappo_C, AnimGraphNode_KawaiiPhysics) == 0x0046F0, "Member 'UAB_Player_Nappo_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");

}

