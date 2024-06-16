#pragma once

 

// Package: ImagineAbilityButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.ExecuteUbergraph_ImagineAbilityButtonView
// 0x0004 (0x0004 - 0x0000)
struct ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView) == 0x000004, "Wrong alignment on ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView");
static_assert(sizeof(ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView) == 0x000004, "Wrong size on ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView");
static_assert(offsetof(ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView, EntryPoint) == 0x000000, "Member 'ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView::EntryPoint' has a wrong offset!");

// Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.SetData
// 0x0168 (0x0168 - 0x0000)
struct ImagineAbilityButtonView_C_SetData final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D70[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x011C(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0018)()
};
static_assert(alignof(ImagineAbilityButtonView_C_SetData) == 0x000008, "Wrong alignment on ImagineAbilityButtonView_C_SetData");
static_assert(sizeof(ImagineAbilityButtonView_C_SetData) == 0x000168, "Wrong size on ImagineAbilityButtonView_C_SetData");
static_assert(offsetof(ImagineAbilityButtonView_C_SetData, Info) == 0x000000, "Member 'ImagineAbilityButtonView_C_SetData::Info' has a wrong offset!");
static_assert(offsetof(ImagineAbilityButtonView_C_SetData, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x000118, "Member 'ImagineAbilityButtonView_C_SetData::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineAbilityButtonView_C_SetData, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x00011C, "Member 'ImagineAbilityButtonView_C_SetData::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(ImagineAbilityButtonView_C_SetData, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000140, "Member 'ImagineAbilityButtonView_C_SetData::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityButtonView_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'ImagineAbilityButtonView_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

