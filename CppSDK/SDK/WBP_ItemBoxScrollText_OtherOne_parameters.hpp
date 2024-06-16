#pragma once

 

// Package: WBP_ItemBoxScrollText_OtherOne

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxScrollText_OtherOne.WBP_ItemBoxScrollText_OtherOne_C.SetTypeOtherOne
// 0x0020 (0x0020 - 0x0000)
struct WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne final
{
public:
	class FText                                   Param_ItemName;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bExcess;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne) == 0x000008, "Wrong alignment on WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne");
static_assert(sizeof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne) == 0x000020, "Wrong size on WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne");
static_assert(offsetof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne, Param_ItemName) == 0x000000, "Member 'WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne::Param_ItemName' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne, bExcess) == 0x000018, "Member 'WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne::bExcess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne, CallFunc_MakeLiteralByte_ReturnValue) == 0x000019, "Member 'WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00001A, "Member 'WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne, Temp_bool_Variable) == 0x00001B, "Member 'WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne, K2Node_Select_Default) == 0x00001C, "Member 'WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne::K2Node_Select_Default' has a wrong offset!");

}

