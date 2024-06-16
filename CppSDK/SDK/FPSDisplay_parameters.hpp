#pragma once

 

// Package: FPSDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FPSDisplay.FPSDisplay_C.ExecuteUbergraph_FPSDisplay
// 0x0078 (0x0078 - 0x0000)
struct FPSDisplay_C_ExecuteUbergraph_FPSDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5046[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x000C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bShow;                          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5047[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowFPSCounter_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_EditMode;                       // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5048[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay) == 0x000008, "Wrong alignment on FPSDisplay_C_ExecuteUbergraph_FPSDisplay");
static_assert(sizeof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay) == 0x000078, "Wrong size on FPSDisplay_C_ExecuteUbergraph_FPSDisplay");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, EntryPoint) == 0x000000, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::EntryPoint' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, Temp_bool_Variable) == 0x000004, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, Temp_byte_Variable) == 0x000005, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, Temp_byte_Variable_1) == 0x000006, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, Temp_bool_Variable_1) == 0x000007, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, Temp_byte_Variable_2) == 0x000008, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, Temp_byte_Variable_3) == 0x000009, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_Event_MyGeometry) == 0x00000C, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_Event_InDeltaTime) == 0x000044, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_CustomEvent_bShow) == 0x000058, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_CustomEvent_bShow' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, CallFunc_GetConfigSaveManager_IsValid) == 0x000059, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000060, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, CallFunc_IsShowFPSCounter_ReturnValue) == 0x000068, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::CallFunc_IsShowFPSCounter_ReturnValue' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_Select_Default) == 0x000069, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_CustomEvent_EditMode) == 0x00006A, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_CustomEvent_EditMode' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, K2Node_Select_Default_1) == 0x00006B, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, CallFunc_GetConfigSaveManager_IsValid_1) == 0x00006C, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_ExecuteUbergraph_FPSDisplay, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000070, "Member 'FPSDisplay_C_ExecuteUbergraph_FPSDisplay::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");

// Function FPSDisplay.FPSDisplay_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct FPSDisplay_C_SetEditMode final
{
public:
	bool                                          EditMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FPSDisplay_C_SetEditMode) == 0x000001, "Wrong alignment on FPSDisplay_C_SetEditMode");
static_assert(sizeof(FPSDisplay_C_SetEditMode) == 0x000001, "Wrong size on FPSDisplay_C_SetEditMode");
static_assert(offsetof(FPSDisplay_C_SetEditMode, EditMode) == 0x000000, "Member 'FPSDisplay_C_SetEditMode::EditMode' has a wrong offset!");

// Function FPSDisplay.FPSDisplay_C.Set Show
// 0x0001 (0x0001 - 0x0000)
struct FPSDisplay_C_Set_Show final
{
public:
	bool                                          Param_bShow;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FPSDisplay_C_Set_Show) == 0x000001, "Wrong alignment on FPSDisplay_C_Set_Show");
static_assert(sizeof(FPSDisplay_C_Set_Show) == 0x000001, "Wrong size on FPSDisplay_C_Set_Show");
static_assert(offsetof(FPSDisplay_C_Set_Show, Param_bShow) == 0x000000, "Member 'FPSDisplay_C_Set_Show::Param_bShow' has a wrong offset!");

// Function FPSDisplay.FPSDisplay_C.Tick
// 0x003C (0x003C - 0x0000)
struct FPSDisplay_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPSDisplay_C_Tick) == 0x000004, "Wrong alignment on FPSDisplay_C_Tick");
static_assert(sizeof(FPSDisplay_C_Tick) == 0x00003C, "Wrong size on FPSDisplay_C_Tick");
static_assert(offsetof(FPSDisplay_C_Tick, MyGeometry) == 0x000000, "Member 'FPSDisplay_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_Tick, InDeltaTime) == 0x000038, "Member 'FPSDisplay_C_Tick::InDeltaTime' has a wrong offset!");

// Function FPSDisplay.FPSDisplay_C.GetText_0
// 0x00B0 (0x00B0 - 0x0000)
struct FPSDisplay_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5049[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_504A[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504B[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
};
static_assert(alignof(FPSDisplay_C_GetText_0) == 0x000008, "Wrong alignment on FPSDisplay_C_GetText_0");
static_assert(sizeof(FPSDisplay_C_GetText_0) == 0x0000B0, "Wrong size on FPSDisplay_C_GetText_0");
static_assert(offsetof(FPSDisplay_C_GetText_0, ReturnValue) == 0x000000, "Member 'FPSDisplay_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, Temp_bool_Variable) == 0x000018, "Member 'FPSDisplay_C_GetText_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, Temp_float_Variable) == 0x00001C, "Member 'FPSDisplay_C_GetText_0::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'FPSDisplay_C_GetText_0::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, K2Node_Select_Default) == 0x000024, "Member 'FPSDisplay_C_GetText_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000028, "Member 'FPSDisplay_C_GetText_0::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, CallFunc_Conv_FloatToText_ReturnValue) == 0x000030, "Member 'FPSDisplay_C_GetText_0::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'FPSDisplay_C_GetText_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, K2Node_MakeArray_Array) == 0x000088, "Member 'FPSDisplay_C_GetText_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FPSDisplay_C_GetText_0, CallFunc_Format_ReturnValue) == 0x000098, "Member 'FPSDisplay_C_GetText_0::CallFunc_Format_ReturnValue' has a wrong offset!");

}

