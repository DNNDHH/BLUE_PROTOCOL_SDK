#pragma once

 

// Package: P011HUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function P011HUD.P011HUD_C.ExecuteUbergraph_P011HUD
// 0x0040 (0x0040 - 0x0000)
struct P011HUD_C_ExecuteUbergraph_P011HUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_730D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_730E[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_730F[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUD_C_ExecuteUbergraph_P011HUD) == 0x000008, "Wrong alignment on P011HUD_C_ExecuteUbergraph_P011HUD");
static_assert(sizeof(P011HUD_C_ExecuteUbergraph_P011HUD) == 0x000040, "Wrong size on P011HUD_C_ExecuteUbergraph_P011HUD");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, EntryPoint) == 0x000000, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, Temp_bool_Variable) == 0x000018, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000019, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, K2Node_CustomEvent_InUIType) == 0x000028, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, K2Node_CustomEvent_bInVisibility) == 0x000029, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, K2Node_CustomEvent_bInInstantly) == 0x00002A, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, CallFunc_IsValid_ReturnValue) == 0x00002B, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, K2Node_Select_Default) == 0x00002C, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000030, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P011HUD_C_ExecuteUbergraph_P011HUD, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'P011HUD_C_ExecuteUbergraph_P011HUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function P011HUD.P011HUD_C.OnUIVisibleSettingChange
// 0x0003 (0x0003 - 0x0000)
struct P011HUD_C_OnUIVisibleSettingChange final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUD_C_OnUIVisibleSettingChange) == 0x000001, "Wrong alignment on P011HUD_C_OnUIVisibleSettingChange");
static_assert(sizeof(P011HUD_C_OnUIVisibleSettingChange) == 0x000003, "Wrong size on P011HUD_C_OnUIVisibleSettingChange");
static_assert(offsetof(P011HUD_C_OnUIVisibleSettingChange, InUIType) == 0x000000, "Member 'P011HUD_C_OnUIVisibleSettingChange::InUIType' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnUIVisibleSettingChange, bInVisibility) == 0x000001, "Member 'P011HUD_C_OnUIVisibleSettingChange::bInVisibility' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnUIVisibleSettingChange, bInInstantly) == 0x000002, "Member 'P011HUD_C_OnUIVisibleSettingChange::bInInstantly' has a wrong offset!");

// Function P011HUD.P011HUD_C.OnSetGaugeValue
// 0x000C (0x000C - 0x0000)
struct P011HUD_C_OnSetGaugeValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUD_C_OnSetGaugeValue) == 0x000004, "Wrong alignment on P011HUD_C_OnSetGaugeValue");
static_assert(sizeof(P011HUD_C_OnSetGaugeValue) == 0x00000C, "Wrong size on P011HUD_C_OnSetGaugeValue");
static_assert(offsetof(P011HUD_C_OnSetGaugeValue, InValue) == 0x000000, "Member 'P011HUD_C_OnSetGaugeValue::InValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetGaugeValue, CallFunc_FClamp_ReturnValue) == 0x000004, "Member 'P011HUD_C_OnSetGaugeValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetGaugeValue, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'P011HUD_C_OnSetGaugeValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function P011HUD.P011HUD_C.OnSetMpValue
// 0x0020 (0x0020 - 0x0000)
struct P011HUD_C_OnSetMpValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(P011HUD_C_OnSetMpValue) == 0x000008, "Wrong alignment on P011HUD_C_OnSetMpValue");
static_assert(sizeof(P011HUD_C_OnSetMpValue) == 0x000020, "Wrong size on P011HUD_C_OnSetMpValue");
static_assert(offsetof(P011HUD_C_OnSetMpValue, InValue) == 0x000000, "Member 'P011HUD_C_OnSetMpValue::InValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetMpValue, CallFunc_FFloor_ReturnValue) == 0x000004, "Member 'P011HUD_C_OnSetMpValue::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetMpValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'P011HUD_C_OnSetMpValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function P011HUD.P011HUD_C.OnInitialize
// 0x0008 (0x0008 - 0x0000)
struct P011HUD_C_OnInitialize final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUD_C_OnInitialize) == 0x000008, "Wrong alignment on P011HUD_C_OnInitialize");
static_assert(sizeof(P011HUD_C_OnInitialize) == 0x000008, "Wrong size on P011HUD_C_OnInitialize");
static_assert(offsetof(P011HUD_C_OnInitialize, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'P011HUD_C_OnInitialize::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function P011HUD.P011HUD_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P011HUD_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7310[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUD_C_OnSetEditMode) == 0x000004, "Wrong alignment on P011HUD_C_OnSetEditMode");
static_assert(sizeof(P011HUD_C_OnSetEditMode) == 0x000010, "Wrong size on P011HUD_C_OnSetEditMode");
static_assert(offsetof(P011HUD_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P011HUD_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P011HUD_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P011HUD_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P011HUD_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P011HUD_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P011HUD_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P011HUD.P011HUD_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P011HUD_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P011HUD_C_PlayAnimForwardInOut");
static_assert(sizeof(P011HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P011HUD_C_PlayAnimForwardInOut");
static_assert(offsetof(P011HUD_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P011HUD_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P011HUD.P011HUD_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P011HUD_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P011HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P011HUD_C_PlayAnimReverseInOut");
static_assert(sizeof(P011HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P011HUD_C_PlayAnimReverseInOut");
static_assert(offsetof(P011HUD_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P011HUD_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P011HUD.P011HUD_C.SetInspirationIconRenderOpacity
// 0x0001 (0x0001 - 0x0000)
struct P011HUD_C_SetInspirationIconRenderOpacity final
{
public:
	bool                                          TrueIsVisible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P011HUD_C_SetInspirationIconRenderOpacity) == 0x000001, "Wrong alignment on P011HUD_C_SetInspirationIconRenderOpacity");
static_assert(sizeof(P011HUD_C_SetInspirationIconRenderOpacity) == 0x000001, "Wrong size on P011HUD_C_SetInspirationIconRenderOpacity");
static_assert(offsetof(P011HUD_C_SetInspirationIconRenderOpacity, TrueIsVisible) == 0x000000, "Member 'P011HUD_C_SetInspirationIconRenderOpacity::TrueIsVisible' has a wrong offset!");

}

