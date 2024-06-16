#pragma once

 

// Package: UI_Reticle_ChargeLevel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.ExecuteUbergraph_UI_Reticle_ChargeLevel
// 0x0040 (0x0040 - 0x0000)
struct UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_689C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_689D[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_689E[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_2;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel) == 0x000008, "Wrong alignment on UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel");
static_assert(sizeof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel) == 0x000040, "Wrong size on UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, EntryPoint) == 0x000000, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000008, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000010, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, K2Node_CustomEvent_InUIType) == 0x000018, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, K2Node_CustomEvent_bInVisibility) == 0x000019, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, K2Node_CustomEvent_bInInstantly) == 0x00001A, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002D, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_GetUIVisibleSettings_ReturnValue_2) == 0x000030, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_GetUIVisibleSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_GetVisibleSetting_ReturnValue) == 0x000038, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'UI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'UI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetRootVisible
// 0x0005 (0x0005 - 0x0000)
struct UI_Reticle_ChargeLevel_C_SetRootVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Reticle_ChargeLevel_C_SetRootVisible) == 0x000001, "Wrong alignment on UI_Reticle_ChargeLevel_C_SetRootVisible");
static_assert(sizeof(UI_Reticle_ChargeLevel_C_SetRootVisible) == 0x000005, "Wrong size on UI_Reticle_ChargeLevel_C_SetRootVisible");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetRootVisible, Param_IsVisible) == 0x000000, "Member 'UI_Reticle_ChargeLevel_C_SetRootVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetRootVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UI_Reticle_ChargeLevel_C_SetRootVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetRootVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'UI_Reticle_ChargeLevel_C_SetRootVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetRootVisible, Temp_bool_Variable) == 0x000003, "Member 'UI_Reticle_ChargeLevel_C_SetRootVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetRootVisible, K2Node_Select_Default) == 0x000004, "Member 'UI_Reticle_ChargeLevel_C_SetRootVisible::K2Node_Select_Default' has a wrong offset!");

// Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetShotChargeGrpVisible
// 0x0005 (0x0005 - 0x0000)
struct UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible) == 0x000001, "Wrong alignment on UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible");
static_assert(sizeof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible) == 0x000005, "Wrong size on UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible, Param_IsVisible) == 0x000000, "Member 'UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible, Temp_bool_Variable) == 0x000003, "Member 'UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible, K2Node_Select_Default) == 0x000004, "Member 'UI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible::K2Node_Select_Default' has a wrong offset!");

}

