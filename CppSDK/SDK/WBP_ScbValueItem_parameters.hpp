#pragma once

 

// Package: WBP_ScbValueItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ScbValueItem.WBP_ScbValueItem_C.ExecuteUbergraph_WBP_ScbValueItem
// 0x0068 (0x0068 - 0x0000)
struct WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89D8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89D9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Value;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89DA[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0048(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89DB[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem) == 0x000008, "Wrong alignment on WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem");
static_assert(sizeof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem) == 0x000068, "Wrong size on WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, EntryPoint) == 0x000000, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, Temp_bool_Variable) == 0x000018, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, Temp_int_Variable) == 0x000038, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, Temp_int_Variable_1) == 0x00003C, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, K2Node_CustomEvent_Value) == 0x000040, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000061, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem, K2Node_Select_Default) == 0x000064, "Member 'WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ScbValueItem.WBP_ScbValueItem_C.SetValue
// 0x0004 (0x0004 - 0x0000)
struct WBP_ScbValueItem_C_SetValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScbValueItem_C_SetValue) == 0x000004, "Wrong alignment on WBP_ScbValueItem_C_SetValue");
static_assert(sizeof(WBP_ScbValueItem_C_SetValue) == 0x000004, "Wrong size on WBP_ScbValueItem_C_SetValue");
static_assert(offsetof(WBP_ScbValueItem_C_SetValue, Value) == 0x000000, "Member 'WBP_ScbValueItem_C_SetValue::Value' has a wrong offset!");

}

