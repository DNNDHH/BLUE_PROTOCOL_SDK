#pragma once

 

// Package: P012HUDGlitter

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function P012HUDGlitter.P012HUDGlitter_C.ExecuteUbergraph_P012HUDGlitter
// 0x0038 (0x0038 - 0x0000)
struct P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7300[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7301[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter) == 0x000008, "Wrong alignment on P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter");
static_assert(sizeof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter) == 0x000038, "Wrong size on P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, EntryPoint) == 0x000000, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::EntryPoint' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, Temp_bool_Variable) == 0x000005, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, K2Node_CustomEvent_InUIType) == 0x000007, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, K2Node_CustomEvent_bInVisibility) == 0x000008, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, K2Node_CustomEvent_bInInstantly) == 0x000009, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, K2Node_Select_Default) == 0x00001C, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000028, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct P012HUDGlitter_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDGlitter_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on P012HUDGlitter_C_OnChangeUIVisibleSetting");
static_assert(sizeof(P012HUDGlitter_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on P012HUDGlitter_C_OnChangeUIVisibleSetting");
static_assert(offsetof(P012HUDGlitter_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'P012HUDGlitter_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'P012HUDGlitter_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'P012HUDGlitter_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.Update
// 0x0008 (0x0008 - 0x0000)
struct P012HUDGlitter_C_Update final
{
public:
	float                                         GaugeRatio;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lv;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDGlitter_C_Update) == 0x000004, "Wrong alignment on P012HUDGlitter_C_Update");
static_assert(sizeof(P012HUDGlitter_C_Update) == 0x000008, "Wrong size on P012HUDGlitter_C_Update");
static_assert(offsetof(P012HUDGlitter_C_Update, GaugeRatio) == 0x000000, "Member 'P012HUDGlitter_C_Update::GaugeRatio' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_Update, Lv) == 0x000004, "Member 'P012HUDGlitter_C_Update::Lv' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.SetGauge
// 0x0008 (0x0008 - 0x0000)
struct P012HUDGlitter_C_SetGauge final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P012HUDGlitter_C_SetGauge) == 0x000004, "Wrong alignment on P012HUDGlitter_C_SetGauge");
static_assert(sizeof(P012HUDGlitter_C_SetGauge) == 0x000008, "Wrong size on P012HUDGlitter_C_SetGauge");
static_assert(offsetof(P012HUDGlitter_C_SetGauge, InValue) == 0x000000, "Member 'P012HUDGlitter_C_SetGauge::InValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_SetGauge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'P012HUDGlitter_C_SetGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.SetLv
// 0x0048 (0x0048 - 0x0000)
struct P012HUDGlitter_C_SetLv final
{
public:
	int32                                         InLV;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7302[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7303[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(P012HUDGlitter_C_SetLv) == 0x000008, "Wrong alignment on P012HUDGlitter_C_SetLv");
static_assert(sizeof(P012HUDGlitter_C_SetLv) == 0x000048, "Wrong size on P012HUDGlitter_C_SetLv");
static_assert(offsetof(P012HUDGlitter_C_SetLv, InLV) == 0x000000, "Member 'P012HUDGlitter_C_SetLv::InLV' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_SetLv, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'P012HUDGlitter_C_SetLv::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_SetLv, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'P012HUDGlitter_C_SetLv::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_SetLv, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'P012HUDGlitter_C_SetLv::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_SetLv, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'P012HUDGlitter_C_SetLv::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.OnInitialize
// 0x0008 (0x0008 - 0x0000)
struct P012HUDGlitter_C_OnInitialize final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDGlitter_C_OnInitialize) == 0x000008, "Wrong alignment on P012HUDGlitter_C_OnInitialize");
static_assert(sizeof(P012HUDGlitter_C_OnInitialize) == 0x000008, "Wrong size on P012HUDGlitter_C_OnInitialize");
static_assert(offsetof(P012HUDGlitter_C_OnInitialize, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'P012HUDGlitter_C_OnInitialize::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P012HUDGlitter_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7304[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDGlitter_C_OnSetEditMode) == 0x000004, "Wrong alignment on P012HUDGlitter_C_OnSetEditMode");
static_assert(sizeof(P012HUDGlitter_C_OnSetEditMode) == 0x000010, "Wrong size on P012HUDGlitter_C_OnSetEditMode");
static_assert(offsetof(P012HUDGlitter_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P012HUDGlitter_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P012HUDGlitter_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P012HUDGlitter_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P012HUDGlitter_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P012HUDGlitter_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P012HUDGlitter_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P012HUDGlitter_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDGlitter_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P012HUDGlitter_C_PlayAnimForwardInOut");
static_assert(sizeof(P012HUDGlitter_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P012HUDGlitter_C_PlayAnimForwardInOut");
static_assert(offsetof(P012HUDGlitter_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P012HUDGlitter_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P012HUDGlitter.P012HUDGlitter_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P012HUDGlitter_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P012HUDGlitter_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P012HUDGlitter_C_PlayAnimReverseInOut");
static_assert(sizeof(P012HUDGlitter_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P012HUDGlitter_C_PlayAnimReverseInOut");
static_assert(offsetof(P012HUDGlitter_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P012HUDGlitter_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

