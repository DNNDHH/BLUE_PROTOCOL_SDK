#pragma once

 

// Package: USBDebugBlueprintFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.ApplyDebugUIVisibilitySetting
// 0x0048 (0x0048 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5027[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5028[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBool_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5029[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting) == 0x000048, "Wrong size on USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, __WorldContext) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetDebugFunction_IsValid) == 0x000008, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetDebugFunction_ReturnValue) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetDebugFunction_IsValid_1) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000020, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_MakeLiteralName_ReturnValue) == 0x000028, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000030, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetBool_ReturnValue) == 0x000038, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetBool_ReturnValue_1) == 0x000039, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetDebugFunction_IsValid_2) == 0x00003A, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000040, "Member 'USBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetBattleHUDVisibility
// 0x0038 (0x0038 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility final
{
public:
	bool                                          bVisibility;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_502A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBUIType>                             K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     CallFunc_Array_Get_Item;                           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility) == 0x000038, "Wrong size on USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, bVisibility) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::bVisibility' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, __WorldContext) == 0x000008, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, Temp_int_Array_Index_Variable) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, K2Node_MakeArray_Array) == 0x000020, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, CallFunc_Array_Get_Item) == 0x000034, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetUIVisibility
// 0x0020 (0x0020 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisibility;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_502C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility) == 0x000020, "Wrong size on USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility, InUIType) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility::InUIType' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility, bVisibility) == 0x000001, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility::bVisibility' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility, __WorldContext) == 0x000008, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedDebugValue
// 0x0020 (0x0020 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue) == 0x000020, "Wrong size on USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue, MenuType) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue::MenuType' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue, RowName) == 0x000004, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue::RowName' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue, __WorldContext) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedUIDebugValue
// 0x0030 (0x0030 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5030[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5031[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue) == 0x000030, "Wrong size on USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, MenuType) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::MenuType' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, RowName) == 0x000004, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::RowName' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, __WorldContext) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, CallFunc_GetDebugFunction_IsValid) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, CallFunc_GetDebugFunction_ReturnValue) == 0x000020, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, K2Node_SwitchName_CmpSuccess) == 0x000028, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue, CallFunc_GetBool_ReturnValue) == 0x000029, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue::CallFunc_GetBool_ReturnValue' has a wrong offset!");

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedCameraDebugValue
// 0x0068 (0x0068 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5032[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5033[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5034[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5035[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5036[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBPlayerCameraInterface> CallFunc_GetPlayerCameraComponent_self_CastInput;  // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBPlayerCameraComponent*               CallFunc_GetPlayerCameraComponent_ReturnValue;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue) == 0x000068, "Wrong size on USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, MenuType) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::MenuType' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, RowName) == 0x000004, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::RowName' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, __WorldContext) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_GetDebugFunction_IsValid) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_GetDebugFunction_ReturnValue) == 0x000020, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000028, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_GetBool_ReturnValue) == 0x000030, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, K2Node_DynamicCast_AsBP_Player_Character) == 0x000038, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_GetPlayerCameraComponent_self_CastInput) == 0x000048, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_GetPlayerCameraComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_GetPlayerCameraComponent_ReturnValue) == 0x000058, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_GetPlayerCameraComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue, K2Node_SwitchName_CmpSuccess) == 0x000061, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedEffectDebugValue
// 0x0038 (0x0038 - 0x0000)
struct USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5037[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5038[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5039[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCheatManager*                        K2Node_DynamicCast_AsSBCheat_Manager;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue) == 0x000008, "Wrong alignment on USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue");
static_assert(sizeof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue) == 0x000038, "Wrong size on USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, MenuType) == 0x000000, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::MenuType' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, RowName) == 0x000004, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::RowName' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, __WorldContext) == 0x000010, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, K2Node_DynamicCast_AsSBCheat_Manager) == 0x000028, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::K2Node_DynamicCast_AsSBCheat_Manager' has a wrong offset!");
static_assert(offsetof(USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'USBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

