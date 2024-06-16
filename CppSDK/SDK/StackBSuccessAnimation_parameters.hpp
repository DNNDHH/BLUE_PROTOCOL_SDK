#pragma once

 

// Package: StackBSuccessAnimation

#include "Basic.hpp"


namespace SDK::Params
{

// Function StackBSuccessAnimation.StackBSuccessAnimation_C.ExecuteUbergraph_StackBSuccessAnimation
// 0x0018 (0x0018 - 0x0000)
struct StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E58[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation) == 0x000008, "Wrong alignment on StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation");
static_assert(sizeof(StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation) == 0x000018, "Wrong size on StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation");
static_assert(offsetof(StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation, EntryPoint) == 0x000000, "Member 'StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation, K2Node_Event_Animation) == 0x000010, "Member 'StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation::K2Node_Event_Animation' has a wrong offset!");

// Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct StackBSuccessAnimation_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBSuccessAnimation_C_OnAnimationFinished) == 0x000008, "Wrong alignment on StackBSuccessAnimation_C_OnAnimationFinished");
static_assert(sizeof(StackBSuccessAnimation_C_OnAnimationFinished) == 0x000008, "Wrong size on StackBSuccessAnimation_C_OnAnimationFinished");
static_assert(offsetof(StackBSuccessAnimation_C_OnAnimationFinished, Animation) == 0x000000, "Member 'StackBSuccessAnimation_C_OnAnimationFinished::Animation' has a wrong offset!");

}

