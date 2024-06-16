#pragma once

 

// Package: WeaponRemoveAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponRemoveAnime.WeaponRemoveAnime_C.ExecuteUbergraph_WeaponRemoveAnime
// 0x0018 (0x0018 - 0x0000)
struct WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BAE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime) == 0x000008, "Wrong alignment on WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime");
static_assert(sizeof(WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime) == 0x000018, "Wrong size on WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime");
static_assert(offsetof(WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime, EntryPoint) == 0x000000, "Member 'WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime, K2Node_Event_Animation) == 0x000008, "Member 'WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WeaponRemoveAnime.WeaponRemoveAnime_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct WeaponRemoveAnime_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponRemoveAnime_C_OnAnimationFinished) == 0x000008, "Wrong alignment on WeaponRemoveAnime_C_OnAnimationFinished");
static_assert(sizeof(WeaponRemoveAnime_C_OnAnimationFinished) == 0x000008, "Wrong size on WeaponRemoveAnime_C_OnAnimationFinished");
static_assert(offsetof(WeaponRemoveAnime_C_OnAnimationFinished, Animation) == 0x000000, "Member 'WeaponRemoveAnime_C_OnAnimationFinished::Animation' has a wrong offset!");

}

