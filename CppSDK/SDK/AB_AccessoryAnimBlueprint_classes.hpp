#pragma once

 

// Package: AB_AccessoryAnimBlueprint

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_AccessoryAnimBlueprint.AB_AccessoryAnimBlueprint_C
// 0x4920 (0x4DC0 - 0x04A0)
class UAB_AccessoryAnimBlueprint_C final : public USBPhysicsAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x04A8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04C8(0x0030)()
	uint8                                         Pad_8B6F[0x8];                                     // 0x04F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_11;                    // 0x0500(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_10;                    // 0x0B10(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_9;                     // 0x1120(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0x1730(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x1D40(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x2350(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x2960(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x2F70(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x3580(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x3B90(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x41A0(0x0610)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x47B0(0x0610)()

public:
	void ExecuteUbergraph_AB_AccessoryAnimBlueprint(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_AccessoryAnimBlueprint_C">();
	}
	static class UAB_AccessoryAnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_AccessoryAnimBlueprint_C>();
	}
};
static_assert(alignof(UAB_AccessoryAnimBlueprint_C) == 0x000010, "Wrong alignment on UAB_AccessoryAnimBlueprint_C");
static_assert(sizeof(UAB_AccessoryAnimBlueprint_C) == 0x004DC0, "Wrong size on UAB_AccessoryAnimBlueprint_C");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, UberGraphFrame) == 0x0004A0, "Member 'UAB_AccessoryAnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0004A8, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_Root) == 0x0004C8, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_11) == 0x000500, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_11' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_10) == 0x000B10, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_10' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_9) == 0x001120, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_9' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_8) == 0x001730, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_8' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_7) == 0x001D40, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_7' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_6) == 0x002350, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_6' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_5) == 0x002960, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_5' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_4) == 0x002F70, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_3) == 0x003580, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_2) == 0x003B90, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics_1) == 0x0041A0, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UAB_AccessoryAnimBlueprint_C, AnimGraphNode_KawaiiPhysics) == 0x0047B0, "Member 'UAB_AccessoryAnimBlueprint_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");

}

