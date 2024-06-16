#pragma once

 

// Package: WBP_ItemBoxScrollText_Bag

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemSingle
// 0x0058 (0x0058 - 0x0000)
struct WBP_ItemBoxScrollText_Bag_C_SetItemSingle final
{
public:
	int32                                         NowNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Expectation;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0040(0x0018)()
};
static_assert(alignof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Bag_C_SetItemSingle");
static_assert(sizeof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle) == 0x000058, "Wrong size on WBP_ItemBoxScrollText_Bag_C_SetItemSingle");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, NowNum) == 0x000000, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, MaxNum) == 0x000004, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, Expectation) == 0x000008, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::Expectation' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemSingle, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000040, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemSingle::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRange
// 0x0078 (0x0078 - 0x0000)
struct WBP_ItemBoxScrollText_Bag_C_SetItemRange final
{
public:
	int32                                         NowNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMax;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMin;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0060(0x0018)()
};
static_assert(alignof(WBP_ItemBoxScrollText_Bag_C_SetItemRange) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Bag_C_SetItemRange");
static_assert(sizeof(WBP_ItemBoxScrollText_Bag_C_SetItemRange) == 0x000078, "Wrong size on WBP_ItemBoxScrollText_Bag_C_SetItemRange");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, NowNum) == 0x000000, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, MaxNum) == 0x000004, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, ExpectationNamMax) == 0x000008, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::ExpectationNamMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, ExpectationNamMin) == 0x00000C, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::ExpectationNamMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000048, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000060, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.GetNumColor
// 0x0090 (0x0090 - 0x0000)
struct WBP_ItemBoxScrollText_Bag_C_GetNumColor final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            SlateColor;                                        // 0x0008(0x0028)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7305[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7306[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
};
static_assert(alignof(WBP_ItemBoxScrollText_Bag_C_GetNumColor) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Bag_C_GetNumColor");
static_assert(sizeof(WBP_ItemBoxScrollText_Bag_C_GetNumColor) == 0x000090, "Wrong size on WBP_ItemBoxScrollText_Bag_C_GetNumColor");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, Num) == 0x000000, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::Num' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, Max) == 0x000004, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::Max' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, SlateColor) == 0x000008, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, Temp_bool_Variable) == 0x000030, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, Temp_struct_Variable) == 0x000034, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, Temp_struct_Variable_1) == 0x000044, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, K2Node_Select_Default) == 0x000054, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_GetNumColor, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'WBP_ItemBoxScrollText_Bag_C_GetNumColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRandomRange
// 0x0058 (0x0058 - 0x0000)
struct WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange final
{
public:
	int32                                         NowNum;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAdd;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7307[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0040(0x0018)()
};
static_assert(alignof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange");
static_assert(sizeof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange) == 0x000058, "Wrong size on WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange, NowNum) == 0x000000, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange, MaxNum) == 0x000004, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange, MaxAdd) == 0x000008, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange::MaxAdd' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000040, "Member 'WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

}

