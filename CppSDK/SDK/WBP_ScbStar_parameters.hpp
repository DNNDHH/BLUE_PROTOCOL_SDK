#pragma once

 

// Package: WBP_ScbStar

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ScbStar.WBP_ScbStar_C.ExecuteUbergraph_WBP_ScbStar
// 0x0018 (0x0018 - 0x0000)
struct WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89E3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Value;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89E4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar) == 0x000004, "Wrong alignment on WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar");
static_assert(sizeof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar) == 0x000018, "Wrong size on WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar");
static_assert(offsetof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar, EntryPoint) == 0x000000, "Member 'WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar, Temp_bool_Variable) == 0x000004, "Member 'WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar, Temp_int_Variable) == 0x000008, "Member 'WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar, K2Node_CustomEvent_Value) == 0x000010, "Member 'WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar, K2Node_Select_Default) == 0x000014, "Member 'WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ScbStar.WBP_ScbStar_C.SetActive
// 0x0001 (0x0001 - 0x0000)
struct WBP_ScbStar_C_SetActive final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ScbStar_C_SetActive) == 0x000001, "Wrong alignment on WBP_ScbStar_C_SetActive");
static_assert(sizeof(WBP_ScbStar_C_SetActive) == 0x000001, "Wrong size on WBP_ScbStar_C_SetActive");
static_assert(offsetof(WBP_ScbStar_C_SetActive, Value) == 0x000000, "Member 'WBP_ScbStar_C_SetActive::Value' has a wrong offset!");

}

