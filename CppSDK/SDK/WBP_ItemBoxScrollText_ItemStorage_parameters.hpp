#pragma once

 

// Package: WBP_ItemBoxScrollText_ItemStorage

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemSingle
// 0x0090 (0x0090 - 0x0000)
struct WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle final
{
public:
	class FText                                   Param_ItemName;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowNum;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Expectation;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanNotLost;                                       // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5B[0x3];                                      // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5C[0x3];                                      // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C5D[0x4];                                      // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0068(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5E[0x3];                                      // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle");
static_assert(sizeof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle) == 0x000090, "Wrong size on WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, Param_ItemName) == 0x000000, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::Param_ItemName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, NowNum) == 0x000018, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, MaxNum) == 0x00001C, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, Expectation) == 0x000020, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::Expectation' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, bCanNotLost) == 0x000024, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::bCanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, Temp_int_Variable) == 0x000028, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000050, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000068, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, Temp_int_Variable_1) == 0x000080, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, Temp_bool_Variable) == 0x000084, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, K2Node_Select_Default) == 0x000088, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_MakeLiteralByte_ReturnValue) == 0x00008C, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00008D, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, Temp_bool_Variable_1) == 0x00008E, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle, K2Node_Select_Default_1) == 0x00008F, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemRange
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange final
{
public:
	class FText                                   Param_ItemName;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowNum;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMin;                                 // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpectationNamMax;                                 // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanNotLost;                                       // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5F[0x3];                                      // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C60[0x7];                                      // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C61[0x4];                                      // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0088(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C62[0x3];                                      // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange");
static_assert(sizeof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange) == 0x0000B8, "Wrong size on WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, Param_ItemName) == 0x000000, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::Param_ItemName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, NowNum) == 0x000018, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, MaxNum) == 0x00001C, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::MaxNum' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, ExpectationNamMin) == 0x000020, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::ExpectationNamMin' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, ExpectationNamMax) == 0x000024, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::ExpectationNamMax' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, bCanNotLost) == 0x000028, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::bCanNotLost' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000050, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000070, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000088, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, Temp_int_Variable) == 0x0000A0, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, Temp_int_Variable_1) == 0x0000A4, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, Temp_bool_Variable) == 0x0000A8, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, K2Node_Select_Default) == 0x0000AC, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000B0, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B1, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, Temp_bool_Variable_1) == 0x0000B2, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange, K2Node_Select_Default_1) == 0x0000B3, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.GetNumColor
// 0x0090 (0x0090 - 0x0000)
struct WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            SlateColor;                                        // 0x0008(0x0028)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C63[0x2];                                      // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C64[0x4];                                      // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
};
static_assert(alignof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor");
static_assert(sizeof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor) == 0x000090, "Wrong size on WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, Num) == 0x000000, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::Num' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, Max) == 0x000004, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::Max' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, SlateColor) == 0x000008, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, Temp_bool_Variable) == 0x000030, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, Temp_struct_Variable) == 0x000034, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, Temp_struct_Variable_1) == 0x000044, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, K2Node_Select_Default) == 0x000054, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

