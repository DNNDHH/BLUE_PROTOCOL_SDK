#pragma once

 

// Package: AB_ExtraNPC_Common_Demo

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "SBAnimNode_structs.hpp"
#include "ActionSystem_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C
// 0x2EA0 (0x3E90 - 0x0FF0)
class UAB_ExtraNPC_Common_Demo_C final : public USBNpcCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0FF8(0x0048)()
	struct FSBAnimNode_LookAt                     SBAnimGraphNode_LookAt;                            // 0x1040(0x0D00)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1D40(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1D60(0x0020)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine;                      // 0x1D80(0x0310)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2090(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x20D8(0x0030)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2108(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2128(0x0020)()
	uint8                                         Pad_5831[0x8];                                     // 0x2148(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x2150(0x0610)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x2760(0x0118)()
	struct FSBAnimNode_CustomBoneScaleLocal       SBAnimGraphNode_CustomBoneScaleLocal;              // 0x2878(0x1048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x38C0(0x0030)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x38F0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x3918(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x3940(0x0158)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3A98(0x00C0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_3;                   // 0x3B58(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_2;                   // 0x3BF8(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_1;                   // 0x3C98(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x3D38(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3DD8(0x00A8)()
	bool                                          __CustomProperty_bActive_0ECE649E48FF8768D0CAC1A4619446C1; // 0x3E80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_9DE4EE444D7283CC57EA209CD6BD8963; // 0x3E81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_8EF3463841808113CD3A5DB2B81608B9; // 0x3E82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_62B1D4C54227581CABC290B203E7A33B; // 0x3E83(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5832[0x4];                                     // 0x3E84(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        AnimSet;                                           // 0x3E88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_ExtraNPC_Common_Demo(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* Param_HairLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_ExtraNPC_Common_Demo_C">();
	}
	static class UAB_ExtraNPC_Common_Demo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_ExtraNPC_Common_Demo_C>();
	}
};
static_assert(alignof(UAB_ExtraNPC_Common_Demo_C) == 0x000010, "Wrong alignment on UAB_ExtraNPC_Common_Demo_C");
static_assert(sizeof(UAB_ExtraNPC_Common_Demo_C) == 0x003E90, "Wrong size on UAB_ExtraNPC_Common_Demo_C");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, UberGraphFrame) == 0x000FF0, "Member 'UAB_ExtraNPC_Common_Demo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_Slot_1) == 0x000FF8, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, SBAnimGraphNode_LookAt) == 0x001040, "Member 'UAB_ExtraNPC_Common_Demo_C::SBAnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x001D40, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LocalToComponentSpace_1) == 0x001D60, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, ASAnimGraphNode_StateMachine) == 0x001D80, "Member 'UAB_ExtraNPC_Common_Demo_C::ASAnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_Slot) == 0x002090, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_Root_1) == 0x0020D8, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_ComponentToLocalSpace) == 0x002108, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LocalToComponentSpace) == 0x002128, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_KawaiiPhysics) == 0x002150, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LinkedInputPose) == 0x002760, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, SBAnimGraphNode_CustomBoneScaleLocal) == 0x002878, "Member 'UAB_ExtraNPC_Common_Demo_C::SBAnimGraphNode_CustomBoneScaleLocal' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_Root) == 0x0038C0, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_UseCachedPose_1) == 0x0038F0, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_UseCachedPose) == 0x003918, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_SaveCachedPose) == 0x003940, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LayeredBoneBlend) == 0x003A98, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LinkedAnimGraph_3) == 0x003B58, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LinkedAnimGraph_3' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LinkedAnimGraph_2) == 0x003BF8, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LinkedAnimGraph_2' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LinkedAnimGraph_1) == 0x003C98, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LinkedAnimGraph_1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_LinkedAnimGraph) == 0x003D38, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimGraphNode_BlendListByBool) == 0x003DD8, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, __CustomProperty_bActive_0ECE649E48FF8768D0CAC1A4619446C1) == 0x003E80, "Member 'UAB_ExtraNPC_Common_Demo_C::__CustomProperty_bActive_0ECE649E48FF8768D0CAC1A4619446C1' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, __CustomProperty_bActive_9DE4EE444D7283CC57EA209CD6BD8963) == 0x003E81, "Member 'UAB_ExtraNPC_Common_Demo_C::__CustomProperty_bActive_9DE4EE444D7283CC57EA209CD6BD8963' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, __CustomProperty_bActive_8EF3463841808113CD3A5DB2B81608B9) == 0x003E82, "Member 'UAB_ExtraNPC_Common_Demo_C::__CustomProperty_bActive_8EF3463841808113CD3A5DB2B81608B9' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, __CustomProperty_bActive_62B1D4C54227581CABC290B203E7A33B) == 0x003E83, "Member 'UAB_ExtraNPC_Common_Demo_C::__CustomProperty_bActive_62B1D4C54227581CABC290B203E7A33B' has a wrong offset!");
static_assert(offsetof(UAB_ExtraNPC_Common_Demo_C, AnimSet) == 0x003E88, "Member 'UAB_ExtraNPC_Common_Demo_C::AnimSet' has a wrong offset!");

}

