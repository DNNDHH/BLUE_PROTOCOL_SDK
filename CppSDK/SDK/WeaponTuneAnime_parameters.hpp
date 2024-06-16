#pragma once

 

// Package: WeaponTuneAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponTuneAnime.WeaponTuneAnime_C.ExecuteUbergraph_WeaponTuneAnime
// 0x0018 (0x0018 - 0x0000)
struct WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime) == 0x000008, "Wrong alignment on WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime");
static_assert(sizeof(WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime) == 0x000018, "Wrong size on WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime");
static_assert(offsetof(WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime, EntryPoint) == 0x000000, "Member 'WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime, K2Node_Event_Animation) == 0x000008, "Member 'WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WeaponTuneAnime.WeaponTuneAnime_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponTuneAnime_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponTuneAnime_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponTuneAnime_C_OnAnimationFinished");
static_assert(sizeof(WeaponTuneAnime_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponTuneAnime_C_OnAnimationFinished");
static_assert(offsetof(WeaponTuneAnime_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponTuneAnime_C_OnAnimationFinished::Animation' has a wrong offset!");

}

