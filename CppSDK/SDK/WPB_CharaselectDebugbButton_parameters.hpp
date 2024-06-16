#pragma once

 

// Package: WPB_CharaselectDebugbButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.ExecuteUbergraph_WPB_CharaselectDebugbButton
// 0x0080 (0x0080 - 0x0000)
struct WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterSelectCaptureOne_C*        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB5[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_StateName;                      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Command;                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CharacterSelectCaptureOne_C*> K2Node_CustomEvent_CharacterSelectCaptureOne;      // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB6[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton) == 0x000008, "Wrong alignment on WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton");
static_assert(sizeof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton) == 0x000080, "Wrong size on WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, EntryPoint) == 0x000000, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_Array_Get_Item) == 0x000010, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, K2Node_CustomEvent_StateName) == 0x000020, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::K2Node_CustomEvent_StateName' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, K2Node_CustomEvent_Command) == 0x000030, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::K2Node_CustomEvent_Command' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, K2Node_CustomEvent_CharacterSelectCaptureOne) == 0x000038, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::K2Node_CustomEvent_CharacterSelectCaptureOne' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000048, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000049, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_Conv_NameToText_ReturnValue) == 0x000050, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.Initialize
// 0x0028 (0x0028 - 0x0000)
struct WPB_CharaselectDebugbButton_C_Initialize final
{
public:
	class FString                                 Param_StateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Param_Command;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CharacterSelectCaptureOne_C*> Param_CharacterSelectCaptureOne;                   // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WPB_CharaselectDebugbButton_C_Initialize) == 0x000008, "Wrong alignment on WPB_CharaselectDebugbButton_C_Initialize");
static_assert(sizeof(WPB_CharaselectDebugbButton_C_Initialize) == 0x000028, "Wrong size on WPB_CharaselectDebugbButton_C_Initialize");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_Initialize, Param_StateName) == 0x000000, "Member 'WPB_CharaselectDebugbButton_C_Initialize::Param_StateName' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_Initialize, Param_Command) == 0x000010, "Member 'WPB_CharaselectDebugbButton_C_Initialize::Param_Command' has a wrong offset!");
static_assert(offsetof(WPB_CharaselectDebugbButton_C_Initialize, Param_CharacterSelectCaptureOne) == 0x000018, "Member 'WPB_CharaselectDebugbButton_C_Initialize::Param_CharacterSelectCaptureOne' has a wrong offset!");

}

