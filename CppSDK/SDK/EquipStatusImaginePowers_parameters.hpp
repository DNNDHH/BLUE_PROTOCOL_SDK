#pragma once

 

// Package: EquipStatusImaginePowers

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.ExecuteUbergraph_EquipStatusImaginePowers
// 0x0340 (0x0340 - 0x0000)
struct EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue; // 0x0004(0x006C)(NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0070(0x0018)()
	struct FImagineParameter                      CallFunc_CalculatedStackBImagineParams_ReturnValue_1; // 0x0088(0x006C)(NoDestructor)
	uint8                                         Pad_6D2D[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F8(0x0018)()
	struct FOwnItemInfo                           K2Node_CustomEvent_Info;                           // 0x0110(0x0118)(ConstParm)
	struct FOwnItemInfo                           K2Node_CustomEvent_Prev;                           // 0x0228(0x0118)()
};
static_assert(alignof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers) == 0x000008, "Wrong alignment on EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers");
static_assert(sizeof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers) == 0x000340, "Wrong size on EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, EntryPoint) == 0x000000, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, CallFunc_CalculatedStackBImagineParams_ReturnValue) == 0x000004, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::CallFunc_CalculatedStackBImagineParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, CallFunc_CalculatedStackBImagineParams_ReturnValue_1) == 0x000088, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::CallFunc_CalculatedStackBImagineParams_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F8, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, K2Node_CustomEvent_Info) == 0x000110, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::K2Node_CustomEvent_Info' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers, K2Node_CustomEvent_Prev) == 0x000228, "Member 'EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers::K2Node_CustomEvent_Prev' has a wrong offset!");

// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set PrevInfo
// 0x0118 (0x0118 - 0x0000)
struct EquipStatusImaginePowers_C_Set_PrevInfo final
{
public:
	struct FOwnItemInfo                           Param_Prev;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EquipStatusImaginePowers_C_Set_PrevInfo) == 0x000008, "Wrong alignment on EquipStatusImaginePowers_C_Set_PrevInfo");
static_assert(sizeof(EquipStatusImaginePowers_C_Set_PrevInfo) == 0x000118, "Wrong size on EquipStatusImaginePowers_C_Set_PrevInfo");
static_assert(offsetof(EquipStatusImaginePowers_C_Set_PrevInfo, Param_Prev) == 0x000000, "Member 'EquipStatusImaginePowers_C_Set_PrevInfo::Param_Prev' has a wrong offset!");

// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set ItemInfo
// 0x0118 (0x0118 - 0x0000)
struct EquipStatusImaginePowers_C_Set_ItemInfo final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(EquipStatusImaginePowers_C_Set_ItemInfo) == 0x000008, "Wrong alignment on EquipStatusImaginePowers_C_Set_ItemInfo");
static_assert(sizeof(EquipStatusImaginePowers_C_Set_ItemInfo) == 0x000118, "Wrong size on EquipStatusImaginePowers_C_Set_ItemInfo");
static_assert(offsetof(EquipStatusImaginePowers_C_Set_ItemInfo, Info) == 0x000000, "Member 'EquipStatusImaginePowers_C_Set_ItemInfo::Info' has a wrong offset!");

// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.SetColorTxt
// 0x00E0 (0x00E0 - 0x0000)
struct EquipStatusImaginePowers_C_SetColorTxt final
{
public:
	class USBRuntimeTextBlock*                    Txt;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevParam;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AfterParam;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D2E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0068(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0090(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x00B8(0x0028)()
};
static_assert(alignof(EquipStatusImaginePowers_C_SetColorTxt) == 0x000008, "Wrong alignment on EquipStatusImaginePowers_C_SetColorTxt");
static_assert(sizeof(EquipStatusImaginePowers_C_SetColorTxt) == 0x0000E0, "Wrong size on EquipStatusImaginePowers_C_SetColorTxt");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, Txt) == 0x000000, "Member 'EquipStatusImaginePowers_C_SetColorTxt::Txt' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, PrevParam) == 0x000008, "Member 'EquipStatusImaginePowers_C_SetColorTxt::PrevParam' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, AfterParam) == 0x00000C, "Member 'EquipStatusImaginePowers_C_SetColorTxt::AfterParam' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, Temp_bool_Variable) == 0x000010, "Member 'EquipStatusImaginePowers_C_SetColorTxt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'EquipStatusImaginePowers_C_SetColorTxt::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000012, "Member 'EquipStatusImaginePowers_C_SetColorTxt::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, Temp_bool_Variable_1) == 0x000013, "Member 'EquipStatusImaginePowers_C_SetColorTxt::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'EquipStatusImaginePowers_C_SetColorTxt::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'EquipStatusImaginePowers_C_SetColorTxt::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, K2Node_MakeStruct_SlateColor_2) == 0x000068, "Member 'EquipStatusImaginePowers_C_SetColorTxt::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, K2Node_Select_Default) == 0x000090, "Member 'EquipStatusImaginePowers_C_SetColorTxt::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipStatusImaginePowers_C_SetColorTxt, K2Node_Select_Default_1) == 0x0000B8, "Member 'EquipStatusImaginePowers_C_SetColorTxt::K2Node_Select_Default_1' has a wrong offset!");

}

