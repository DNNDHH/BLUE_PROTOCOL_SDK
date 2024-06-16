#pragma once

 

// Package: WeaponSlotExtendAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSlotExtendAnime.WeaponSlotExtendAnime_C.ExecuteUbergraph_WeaponSlotExtendAnime
// 0x0018 (0x0018 - 0x0000)
struct WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime) == 0x000008, "Wrong alignment on WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime");
static_assert(sizeof(WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime) == 0x000018, "Wrong size on WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime");
static_assert(offsetof(WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime, EntryPoint) == 0x000000, "Member 'WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime, K2Node_Event_Animation) == 0x000008, "Member 'WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WeaponSlotExtendAnime.WeaponSlotExtendAnime_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponSlotExtendAnime_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSlotExtendAnime_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponSlotExtendAnime_C_OnAnimationFinished");
static_assert(sizeof(WeaponSlotExtendAnime_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponSlotExtendAnime_C_OnAnimationFinished");
static_assert(offsetof(WeaponSlotExtendAnime_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponSlotExtendAnime_C_OnAnimationFinished::Animation' has a wrong offset!");

}

