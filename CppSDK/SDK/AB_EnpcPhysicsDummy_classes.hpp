#pragma once

 

// Package: AB_EnpcPhysicsDummy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C
// 0x0150 (0x05F0 - 0x04A0)
class UAB_EnpcPhysicsDummy_C final : public USBPhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04A8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x04D8(0x0118)()

public:
	void ExecuteUbergraph_AB_EnpcPhysicsDummy(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_EnpcPhysicsDummy_C">();
	}
	static class UAB_EnpcPhysicsDummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_EnpcPhysicsDummy_C>();
	}
};
static_assert(alignof(UAB_EnpcPhysicsDummy_C) == 0x000010, "Wrong alignment on UAB_EnpcPhysicsDummy_C");
static_assert(sizeof(UAB_EnpcPhysicsDummy_C) == 0x0005F0, "Wrong size on UAB_EnpcPhysicsDummy_C");
static_assert(offsetof(UAB_EnpcPhysicsDummy_C, UberGraphFrame) == 0x0004A0, "Member 'UAB_EnpcPhysicsDummy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_EnpcPhysicsDummy_C, AnimGraphNode_Root) == 0x0004A8, "Member 'UAB_EnpcPhysicsDummy_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_EnpcPhysicsDummy_C, AnimGraphNode_LinkedInputPose) == 0x0004D8, "Member 'UAB_EnpcPhysicsDummy_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");

}
