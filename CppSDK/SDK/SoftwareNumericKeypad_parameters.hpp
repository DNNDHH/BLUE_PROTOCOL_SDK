#pragma once

 

// Package: SoftwareNumericKeypad

#include "Basic.hpp"

#include "SecondPasswordSenderStartType_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.ExecuteUbergraph_SoftwareNumericKeypad
// 0x03C0 (0x03C0 - 0x0000)
struct SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasInputKeyJustPressed_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E46[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00A0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00C8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x00F0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0118(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x0140(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_7;                    // 0x0168(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_8;                    // 0x0190(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_9;                    // 0x01B8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_10;                   // 0x01E0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_11;                   // 0x0208(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_12;                   // 0x0230(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_13;                   // 0x0258(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_14;                   // 0x0280(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_15;                   // 0x02A8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_16;                   // 0x02D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_17;                   // 0x02F8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_18;                   // 0x0320(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_19;                   // 0x0348(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_20;                   // 0x0370(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_21;                   // 0x0398(0x0028)()
};
static_assert(alignof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad");
static_assert(sizeof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad) == 0x0003C0, "Wrong size on SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, EntryPoint) == 0x000000, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::EntryPoint' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_Event_MyGeometry) == 0x000004, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, CallFunc_WasInputKeyJustPressed_ReturnValue) == 0x000048, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::CallFunc_WasInputKeyJustPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_1) == 0x000078, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_2) == 0x0000A0, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_3) == 0x0000C8, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_4) == 0x0000F0, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_5) == 0x000118, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_6) == 0x000140, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_7) == 0x000168, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_7' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_8) == 0x000190, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_8' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_9) == 0x0001B8, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_9' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_10) == 0x0001E0, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_10' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_11) == 0x000208, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_11' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_12) == 0x000230, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_12' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_13) == 0x000258, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_13' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_14) == 0x000280, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_14' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_15) == 0x0002A8, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_15' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_16) == 0x0002D0, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_16' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_17) == 0x0002F8, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_17' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_18) == 0x000320, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_18' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_19) == 0x000348, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_19' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_20) == 0x000370, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_20' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad, K2Node_MakeStruct_SlateColor_21) == 0x000398, "Member 'SoftwareNumericKeypad_C_ExecuteUbergraph_SoftwareNumericKeypad::K2Node_MakeStruct_SlateColor_21' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.Tick
// 0x003C (0x003C - 0x0000)
struct SoftwareNumericKeypad_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SoftwareNumericKeypad_C_Tick) == 0x000004, "Wrong alignment on SoftwareNumericKeypad_C_Tick");
static_assert(sizeof(SoftwareNumericKeypad_C_Tick) == 0x00003C, "Wrong size on SoftwareNumericKeypad_C_Tick");
static_assert(offsetof(SoftwareNumericKeypad_C_Tick, MyGeometry) == 0x000000, "Member 'SoftwareNumericKeypad_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_Tick, InDeltaTime) == 0x000038, "Member 'SoftwareNumericKeypad_C_Tick::InDeltaTime' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetNumber
// 0x0040 (0x0040 - 0x0000)
struct SoftwareNumericKeypad_C_SetNumber final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_GetText_Text;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E47[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SoftwareNumericKeypad_C_SetNumber) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_SetNumber");
static_assert(sizeof(SoftwareNumericKeypad_C_SetNumber) == 0x000040, "Wrong size on SoftwareNumericKeypad_C_SetNumber");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, Temp_int_Array_Index_Variable) == 0x000000, "Member 'SoftwareNumericKeypad_C_SetNumber::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'SoftwareNumericKeypad_C_SetNumber::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, CallFunc_GetText_Text) == 0x000008, "Member 'SoftwareNumericKeypad_C_SetNumber::CallFunc_GetText_Text' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'SoftwareNumericKeypad_C_SetNumber::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, CallFunc_Array_Get_Item) == 0x000014, "Member 'SoftwareNumericKeypad_C_SetNumber::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'SoftwareNumericKeypad_C_SetNumber::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'SoftwareNumericKeypad_C_SetNumber::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetNumber, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'SoftwareNumericKeypad_C_SetNumber::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.GetText
// 0x0028 (0x0028 - 0x0000)
struct SoftwareNumericKeypad_C_GetText final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E48[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             Text;                                              // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SoftwareNumericKeypad_C_GetText) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_GetText");
static_assert(sizeof(SoftwareNumericKeypad_C_GetText) == 0x000028, "Wrong size on SoftwareNumericKeypad_C_GetText");
static_assert(offsetof(SoftwareNumericKeypad_C_GetText, Param_Index) == 0x000000, "Member 'SoftwareNumericKeypad_C_GetText::Param_Index' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_GetText, Text) == 0x000008, "Member 'SoftwareNumericKeypad_C_GetText::Text' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_GetText, K2Node_MakeArray_Array) == 0x000010, "Member 'SoftwareNumericKeypad_C_GetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_GetText, CallFunc_Array_Get_Item) == 0x000020, "Member 'SoftwareNumericKeypad_C_GetText::CallFunc_Array_Get_Item' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.InputNumber
// 0x0038 (0x0038 - 0x0000)
struct SoftwareNumericKeypad_C_InputNumber final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E49[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SoftwareNumericKeypad_C_InputNumber) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_InputNumber");
static_assert(sizeof(SoftwareNumericKeypad_C_InputNumber) == 0x000038, "Wrong size on SoftwareNumericKeypad_C_InputNumber");
static_assert(offsetof(SoftwareNumericKeypad_C_InputNumber, Param_Index) == 0x000000, "Member 'SoftwareNumericKeypad_C_InputNumber::Param_Index' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_InputNumber, CallFunc_Concat_StrStr_ReturnValue) == 0x000008, "Member 'SoftwareNumericKeypad_C_InputNumber::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_InputNumber, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'SoftwareNumericKeypad_C_InputNumber::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_InputNumber, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000028, "Member 'SoftwareNumericKeypad_C_InputNumber::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.DeleteLastNumber
// 0x0020 (0x0020 - 0x0000)
struct SoftwareNumericKeypad_C_DeleteLastNumber final
{
public:
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_LeftChop_ReturnValue_1;                   // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SoftwareNumericKeypad_C_DeleteLastNumber) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_DeleteLastNumber");
static_assert(sizeof(SoftwareNumericKeypad_C_DeleteLastNumber) == 0x000020, "Wrong size on SoftwareNumericKeypad_C_DeleteLastNumber");
static_assert(offsetof(SoftwareNumericKeypad_C_DeleteLastNumber, CallFunc_LeftChop_ReturnValue) == 0x000000, "Member 'SoftwareNumericKeypad_C_DeleteLastNumber::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_DeleteLastNumber, CallFunc_LeftChop_ReturnValue_1) == 0x000010, "Member 'SoftwareNumericKeypad_C_DeleteLastNumber::CallFunc_LeftChop_ReturnValue_1' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetTextInput
// 0x0030 (0x0030 - 0x0000)
struct SoftwareNumericKeypad_C_SetTextInput final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E4A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(SoftwareNumericKeypad_C_SetTextInput) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_SetTextInput");
static_assert(sizeof(SoftwareNumericKeypad_C_SetTextInput) == 0x000030, "Wrong size on SoftwareNumericKeypad_C_SetTextInput");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextInput, Temp_bool_Variable) == 0x000000, "Member 'SoftwareNumericKeypad_C_SetTextInput::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextInput, K2Node_Select_Default) == 0x000008, "Member 'SoftwareNumericKeypad_C_SetTextInput::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextInput, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'SoftwareNumericKeypad_C_SetTextInput::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.GetPassword
// 0x0010 (0x0010 - 0x0000)
struct SoftwareNumericKeypad_C_GetPassword final
{
public:
	class FString                                 Password;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SoftwareNumericKeypad_C_GetPassword) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_GetPassword");
static_assert(sizeof(SoftwareNumericKeypad_C_GetPassword) == 0x000010, "Wrong size on SoftwareNumericKeypad_C_GetPassword");
static_assert(offsetof(SoftwareNumericKeypad_C_GetPassword, Password) == 0x000000, "Member 'SoftwareNumericKeypad_C_GetPassword::Password' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.UpdateButtonState
// 0x0020 (0x0020 - 0x0000)
struct SoftwareNumericKeypad_C_UpdateButtonState final
{
public:
	class FString                                 CallFunc_GetPassword_Password;                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SoftwareNumericKeypad_C_UpdateButtonState) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_UpdateButtonState");
static_assert(sizeof(SoftwareNumericKeypad_C_UpdateButtonState) == 0x000020, "Wrong size on SoftwareNumericKeypad_C_UpdateButtonState");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_GetPassword_Password) == 0x000000, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_GetPassword_Password' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_Len_ReturnValue) == 0x000010, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_Greater_IntInt_ReturnValue) == 0x000015, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000016, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000017, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_UpdateButtonState, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'SoftwareNumericKeypad_C_UpdateButtonState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetTextDigit
// 0x00A8 (0x00A8 - 0x0000)
struct SoftwareNumericKeypad_C_SetTextDigit final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E4B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E4C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E4D[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(SoftwareNumericKeypad_C_SetTextDigit) == 0x000008, "Wrong alignment on SoftwareNumericKeypad_C_SetTextDigit");
static_assert(sizeof(SoftwareNumericKeypad_C_SetTextDigit) == 0x0000A8, "Wrong size on SoftwareNumericKeypad_C_SetTextDigit");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, Temp_bool_Variable) == 0x000000, "Member 'SoftwareNumericKeypad_C_SetTextDigit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, Temp_int_Variable) == 0x000004, "Member 'SoftwareNumericKeypad_C_SetTextDigit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'SoftwareNumericKeypad_C_SetTextDigit::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'SoftwareNumericKeypad_C_SetTextDigit::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'SoftwareNumericKeypad_C_SetTextDigit::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, K2Node_Select_Default) == 0x000038, "Member 'SoftwareNumericKeypad_C_SetTextDigit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'SoftwareNumericKeypad_C_SetTextDigit::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, K2Node_MakeArray_Array) == 0x000080, "Member 'SoftwareNumericKeypad_C_SetTextDigit::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetTextDigit, CallFunc_Format_ReturnValue) == 0x000090, "Member 'SoftwareNumericKeypad_C_SetTextDigit::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetMode
// 0x0001 (0x0001 - 0x0000)
struct SoftwareNumericKeypad_C_SetMode final
{
public:
	bool                                          Param_HidePassword;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SoftwareNumericKeypad_C_SetMode) == 0x000001, "Wrong alignment on SoftwareNumericKeypad_C_SetMode");
static_assert(sizeof(SoftwareNumericKeypad_C_SetMode) == 0x000001, "Wrong size on SoftwareNumericKeypad_C_SetMode");
static_assert(offsetof(SoftwareNumericKeypad_C_SetMode, Param_HidePassword) == 0x000000, "Member 'SoftwareNumericKeypad_C_SetMode::Param_HidePassword' has a wrong offset!");

// Function SoftwareNumericKeypad.SoftwareNumericKeypad_C.SetRole
// 0x0014 (0x0014 - 0x0000)
struct SoftwareNumericKeypad_C_SetRole final
{
public:
	ESecondPasswordSenderStartType                InRole;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderStartType                Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E4E[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SoftwareNumericKeypad_C_SetRole) == 0x000004, "Wrong alignment on SoftwareNumericKeypad_C_SetRole");
static_assert(sizeof(SoftwareNumericKeypad_C_SetRole) == 0x000014, "Wrong size on SoftwareNumericKeypad_C_SetRole");
static_assert(offsetof(SoftwareNumericKeypad_C_SetRole, InRole) == 0x000000, "Member 'SoftwareNumericKeypad_C_SetRole::InRole' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetRole, Temp_byte_Variable) == 0x000001, "Member 'SoftwareNumericKeypad_C_SetRole::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetRole, Temp_int_Variable) == 0x000004, "Member 'SoftwareNumericKeypad_C_SetRole::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetRole, Temp_int_Variable_1) == 0x000008, "Member 'SoftwareNumericKeypad_C_SetRole::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetRole, Temp_int_Variable_2) == 0x00000C, "Member 'SoftwareNumericKeypad_C_SetRole::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SoftwareNumericKeypad_C_SetRole, K2Node_Select_Default) == 0x000010, "Member 'SoftwareNumericKeypad_C_SetRole::K2Node_Select_Default' has a wrong offset!");

}

