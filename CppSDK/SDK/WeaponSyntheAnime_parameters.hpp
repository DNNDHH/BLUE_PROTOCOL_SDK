#pragma once

 

// Package: WeaponSyntheAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSyntheAnime.WeaponSyntheAnime_C.ExecuteUbergraph_WeaponSyntheAnime
// 0x0018 (0x0018 - 0x0000)
struct WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime) == 0x000008, "Wrong alignment on WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime");
static_assert(sizeof(WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime) == 0x000018, "Wrong size on WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime");
static_assert(offsetof(WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime, EntryPoint) == 0x000000, "Member 'WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime, K2Node_Event_Animation) == 0x000008, "Member 'WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WeaponSyntheAnime.WeaponSyntheAnime_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponSyntheAnime_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSyntheAnime_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponSyntheAnime_C_OnAnimationFinished");
static_assert(sizeof(WeaponSyntheAnime_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponSyntheAnime_C_OnAnimationFinished");
static_assert(offsetof(WeaponSyntheAnime_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponSyntheAnime_C_OnAnimationFinished::Animation' has a wrong offset!");

}

