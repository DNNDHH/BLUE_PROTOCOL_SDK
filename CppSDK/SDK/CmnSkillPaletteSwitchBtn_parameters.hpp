#pragma once

 

// Package: CmnSkillPaletteSwitchBtn

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.OnPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature final
{
public:
	bool                                          bInSwitchToSubSkillPalette;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature) == 0x000001, "Wrong alignment on CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature");
static_assert(sizeof(CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature) == 0x000001, "Wrong size on CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature, bInSwitchToSubSkillPalette) == 0x000000, "Member 'CmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature::bInSwitchToSubSkillPalette' has a wrong offset!");

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.ExecuteUbergraph_CmnSkillPaletteSwitchBtn
// 0x0008 (0x0008 - 0x0000)
struct CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn) == 0x000004, "Wrong alignment on CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn");
static_assert(sizeof(CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn) == 0x000008, "Wrong size on CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn, EntryPoint) == 0x000000, "Member 'CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsSubPaletteReleased
// 0x0014 (0x0014 - 0x0000)
struct CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased final
{
public:
	bool                                          bInIsReleased;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEnabled;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8207[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased) == 0x000004, "Wrong alignment on CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased");
static_assert(sizeof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased) == 0x000014, "Wrong size on CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, bInIsReleased) == 0x000000, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::bInIsReleased' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, LocalIsEnabled) == 0x000001, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::LocalIsEnabled' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, Temp_bool_Variable) == 0x000002, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, Temp_int_Variable) == 0x000004, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, Temp_int_Variable_1) == 0x000008, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, K2Node_Select_Default) == 0x00000C, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.CreateTooltip
// 0x0040 (0x0040 - 0x0000)
struct CmnSkillPaletteSwitchBtn_C_CreateTooltip final
{
public:
	bool                                          InIsNoTooltip;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8208[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSubPaletteReleaseLevel_ReturnValue;    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8209[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_CommonToolTip_Unreleased_C*        K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Unreleased; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_820A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTip_Unreleased_C*        CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSkillPaletteSwitchBtn_C_CreateTooltip) == 0x000008, "Wrong alignment on CmnSkillPaletteSwitchBtn_C_CreateTooltip");
static_assert(sizeof(CmnSkillPaletteSwitchBtn_C_CreateTooltip) == 0x000040, "Wrong size on CmnSkillPaletteSwitchBtn_C_CreateTooltip");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, InIsNoTooltip) == 0x000000, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::InIsNoTooltip' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue_1) == 0x000002, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_GetSubPaletteReleaseLevel_ReturnValue) == 0x000004, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_GetSubPaletteReleaseLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_BooleanAND_ReturnValue) == 0x000008, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue_2) == 0x000009, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Unreleased) == 0x000020, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Common_Tool_Tip_Unreleased' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000030, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CmnSkillPaletteSwitchBtn_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetActiveSwitchBtn
// 0x000C (0x000C - 0x0000)
struct CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn final
{
public:
	int32                                         InActiveSwitchBtnId;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn) == 0x000004, "Wrong alignment on CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn");
static_assert(sizeof(CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn) == 0x00000C, "Wrong size on CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn, InActiveSwitchBtnId) == 0x000000, "Member 'CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn::InActiveSwitchBtnId' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'CmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsTooltipEnable
// 0x0002 (0x0002 - 0x0000)
struct CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable final
{
public:
	bool                                          bInIsTooltipEnabled;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable) == 0x000001, "Wrong alignment on CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable");
static_assert(sizeof(CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable) == 0x000002, "Wrong size on CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable, bInIsTooltipEnabled) == 0x000000, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable::bInIsTooltipEnabled' has a wrong offset!");
static_assert(offsetof(CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'CmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

