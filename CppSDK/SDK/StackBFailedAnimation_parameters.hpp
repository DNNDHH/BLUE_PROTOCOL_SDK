#pragma once

 

// Package: StackBFailedAnimation

#include "Basic.hpp"


namespace SDK::Params
{

// Function StackBFailedAnimation.StackBFailedAnimation_C.ExecuteUbergraph_StackBFailedAnimation
// 0x0018 (0x0018 - 0x0000)
struct StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E59[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation) == 0x000008, "Wrong alignment on StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation");
static_assert(sizeof(StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation) == 0x000018, "Wrong size on StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation");
static_assert(offsetof(StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation, EntryPoint) == 0x000000, "Member 'StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation, K2Node_Event_Animation) == 0x000010, "Member 'StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation::K2Node_Event_Animation' has a wrong offset!");

// Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct StackBFailedAnimation_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBFailedAnimation_C_OnAnimationFinished) == 0x000008, "Wrong alignment on StackBFailedAnimation_C_OnAnimationFinished");
static_assert(sizeof(StackBFailedAnimation_C_OnAnimationFinished) == 0x000008, "Wrong size on StackBFailedAnimation_C_OnAnimationFinished");
static_assert(offsetof(StackBFailedAnimation_C_OnAnimationFinished, Animation) == 0x000000, "Member 'StackBFailedAnimation_C_OnAnimationFinished::Animation' has a wrong offset!");

}

