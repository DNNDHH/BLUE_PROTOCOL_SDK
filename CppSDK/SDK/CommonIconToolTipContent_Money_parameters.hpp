#pragma once

 

// Package: CommonIconToolTipContent_Money

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.ExecuteUbergraph_CommonIconToolTipContent_Money
// 0x0004 (0x0004 - 0x0000)
struct CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money) == 0x000004, "Wrong alignment on CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money");
static_assert(sizeof(CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money) == 0x000004, "Wrong size on CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money");
static_assert(offsetof(CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money::EntryPoint' has a wrong offset!");

// Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.SetAmount
// 0x0050 (0x0050 - 0x0000)
struct CommonIconToolTipContent_Money_C_SetAmount final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A57[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InAmountText;                                      // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A58[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_FormatNumberToCommaFormat_ReturnValue;    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(CommonIconToolTipContent_Money_C_SetAmount) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Money_C_SetAmount");
static_assert(sizeof(CommonIconToolTipContent_Money_C_SetAmount) == 0x000050, "Wrong size on CommonIconToolTipContent_Money_C_SetAmount");
static_assert(offsetof(CommonIconToolTipContent_Money_C_SetAmount, InAmount) == 0x000000, "Member 'CommonIconToolTipContent_Money_C_SetAmount::InAmount' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_SetAmount, InAmountText) == 0x000008, "Member 'CommonIconToolTipContent_Money_C_SetAmount::InAmountText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_SetAmount, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContent_Money_C_SetAmount::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_SetAmount, CallFunc_FormatNumberToCommaFormat_ReturnValue) == 0x000028, "Member 'CommonIconToolTipContent_Money_C_SetAmount::CallFunc_FormatNumberToCommaFormat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_SetAmount, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'CommonIconToolTipContent_Money_C_SetAmount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.Set Option
// 0x0020 (0x0020 - 0x0000)
struct CommonIconToolTipContent_Money_C_Set_Option final
{
public:
	class FText                                   InOptionText;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_Money_C_Set_Option) == 0x000008, "Wrong alignment on CommonIconToolTipContent_Money_C_Set_Option");
static_assert(sizeof(CommonIconToolTipContent_Money_C_Set_Option) == 0x000020, "Wrong size on CommonIconToolTipContent_Money_C_Set_Option");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, InOptionText) == 0x000000, "Member 'CommonIconToolTipContent_Money_C_Set_Option::InOptionText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, CallFunc_MakeLiteralByte_ReturnValue) == 0x000018, "Member 'CommonIconToolTipContent_Money_C_Set_Option::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'CommonIconToolTipContent_Money_C_Set_Option::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'CommonIconToolTipContent_Money_C_Set_Option::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00001B, "Member 'CommonIconToolTipContent_Money_C_Set_Option::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, Temp_bool_Variable) == 0x00001C, "Member 'CommonIconToolTipContent_Money_C_Set_Option::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_Money_C_Set_Option, K2Node_Select_Default) == 0x00001D, "Member 'CommonIconToolTipContent_Money_C_Set_Option::K2Node_Select_Default' has a wrong offset!");

}

