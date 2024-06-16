#pragma once

 

// Package: AB_CommonNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SBAnimNode_structs.hpp"
#include "ActionSystem_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_CommonNPC.AB_CommonNPC_C
// 0x2B80 (0x3B70 - 0x0FF0)
class UAB_CommonNPC_C final : public USBNpcCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0FF8(0x0030)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine;                      // 0x1028(0x0310)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1338(0x0048)()
	struct FSBAnimNode_LegIK                      SBAnimGraphNode_LegIK;                             // 0x1380(0x07C0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1B40(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1B60(0x0020)()
	struct FSBAnimNode_PoseAlong                  SBAnimGraphNode_PoseAlong;                         // 0x1B80(0x0210)()
	struct FSBAnimNode_LookAt                     SBAnimGraphNode_LookAt;                            // 0x1D90(0x0D00)()
	struct FSBAnimNode_CustomBoneScaleLocal       SBAnimGraphNode_CustomBoneScaleLocal;              // 0x2A90(0x1048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x3AD8(0x0048)()
	class UASStateMachine*                        SM_Main;                                           // 0x3B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        AnimSet;                                           // 0x3B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Wait_Stance;                                       // 0x3B30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Temp_Float;                                        // 0x3B40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Counter;                                           // 0x3B44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartCounter;                                      // 0x3B48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StartWaitCounter;                                  // 0x3B49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A2A[0x2];                                     // 0x3B4A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WaitCounter;                                       // 0x3B4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NPC_Stance;                                        // 0x3B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeelLength;                                        // 0x3B58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A2B[0x4];                                     // 0x3B5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  NewVar_0;                                          // 0x3B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_CommonNPC(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_CommonNPC_C">();
	}
	static class UAB_CommonNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_CommonNPC_C>();
	}
};
static_assert(alignof(UAB_CommonNPC_C) == 0x000010, "Wrong alignment on UAB_CommonNPC_C");
static_assert(sizeof(UAB_CommonNPC_C) == 0x003B70, "Wrong size on UAB_CommonNPC_C");
static_assert(offsetof(UAB_CommonNPC_C, UberGraphFrame) == 0x000FF0, "Member 'UAB_CommonNPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, AnimGraphNode_Root) == 0x000FF8, "Member 'UAB_CommonNPC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, ASAnimGraphNode_StateMachine) == 0x001028, "Member 'UAB_CommonNPC_C::ASAnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, AnimGraphNode_Slot_1) == 0x001338, "Member 'UAB_CommonNPC_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, SBAnimGraphNode_LegIK) == 0x001380, "Member 'UAB_CommonNPC_C::SBAnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, AnimGraphNode_LocalToComponentSpace) == 0x001B40, "Member 'UAB_CommonNPC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, AnimGraphNode_ComponentToLocalSpace) == 0x001B60, "Member 'UAB_CommonNPC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, SBAnimGraphNode_PoseAlong) == 0x001B80, "Member 'UAB_CommonNPC_C::SBAnimGraphNode_PoseAlong' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, SBAnimGraphNode_LookAt) == 0x001D90, "Member 'UAB_CommonNPC_C::SBAnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, SBAnimGraphNode_CustomBoneScaleLocal) == 0x002A90, "Member 'UAB_CommonNPC_C::SBAnimGraphNode_CustomBoneScaleLocal' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, AnimGraphNode_Slot) == 0x003AD8, "Member 'UAB_CommonNPC_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, SM_Main) == 0x003B20, "Member 'UAB_CommonNPC_C::SM_Main' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, AnimSet) == 0x003B28, "Member 'UAB_CommonNPC_C::AnimSet' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, Wait_Stance) == 0x003B30, "Member 'UAB_CommonNPC_C::Wait_Stance' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, Temp_Float) == 0x003B40, "Member 'UAB_CommonNPC_C::Temp_Float' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, Counter) == 0x003B44, "Member 'UAB_CommonNPC_C::Counter' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, StartCounter) == 0x003B48, "Member 'UAB_CommonNPC_C::StartCounter' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, StartWaitCounter) == 0x003B49, "Member 'UAB_CommonNPC_C::StartWaitCounter' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, WaitCounter) == 0x003B4C, "Member 'UAB_CommonNPC_C::WaitCounter' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, NPC_Stance) == 0x003B50, "Member 'UAB_CommonNPC_C::NPC_Stance' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, HeelLength) == 0x003B58, "Member 'UAB_CommonNPC_C::HeelLength' has a wrong offset!");
static_assert(offsetof(UAB_CommonNPC_C, NewVar_0) == 0x003B60, "Member 'UAB_CommonNPC_C::NewVar_0' has a wrong offset!");

}

