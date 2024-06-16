#pragma once

 

// Package: WeaponBrakeAnim

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponBrakeAnim.WeaponBrakeAnim_C.ExecuteUbergraph_WeaponBrakeAnim
// 0x0018 (0x0018 - 0x0000)
struct WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5906[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim) == 0x000008, "Wrong alignment on WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim");
static_assert(sizeof(WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim) == 0x000018, "Wrong size on WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim");
static_assert(offsetof(WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim, EntryPoint) == 0x000000, "Member 'WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim, K2Node_Event_Animation) == 0x000008, "Member 'WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponBrakeAnim_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponBrakeAnim_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponBrakeAnim_C_OnAnimationFinished");
static_assert(sizeof(WeaponBrakeAnim_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponBrakeAnim_C_OnAnimationFinished");
static_assert(offsetof(WeaponBrakeAnim_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponBrakeAnim_C_OnAnimationFinished::Animation' has a wrong offset!");

}

