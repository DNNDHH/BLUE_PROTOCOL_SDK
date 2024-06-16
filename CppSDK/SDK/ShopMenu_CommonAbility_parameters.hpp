#pragma once

 

// Package: ShopMenu_CommonAbility

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShopMenu_CommonAbility.ShopMenu_CommonAbility_C.SetPerkText
// 0x0028 (0x0028 - 0x0000)
struct ShopMenu_CommonAbility_C_SetPerkText final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ShopMenu_CommonAbility_C_SetPerkText) == 0x000008, "Wrong alignment on ShopMenu_CommonAbility_C_SetPerkText");
static_assert(sizeof(ShopMenu_CommonAbility_C_SetPerkText) == 0x000028, "Wrong size on ShopMenu_CommonAbility_C_SetPerkText");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkText, InText) == 0x000000, "Member 'ShopMenu_CommonAbility_C_SetPerkText::InText' has a wrong offset!");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ShopMenu_CommonAbility_C_SetPerkText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ShopMenu_CommonAbility.ShopMenu_CommonAbility_C.SetPerkTextVisibility
// 0x0005 (0x0005 - 0x0000)
struct ShopMenu_CommonAbility_C_SetPerkTextVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenu_CommonAbility_C_SetPerkTextVisibility) == 0x000001, "Wrong alignment on ShopMenu_CommonAbility_C_SetPerkTextVisibility");
static_assert(sizeof(ShopMenu_CommonAbility_C_SetPerkTextVisibility) == 0x000005, "Wrong size on ShopMenu_CommonAbility_C_SetPerkTextVisibility");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkTextVisibility, InIsVisible) == 0x000000, "Member 'ShopMenu_CommonAbility_C_SetPerkTextVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkTextVisibility, Temp_bool_Variable) == 0x000001, "Member 'ShopMenu_CommonAbility_C_SetPerkTextVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkTextVisibility, Temp_byte_Variable) == 0x000002, "Member 'ShopMenu_CommonAbility_C_SetPerkTextVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkTextVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'ShopMenu_CommonAbility_C_SetPerkTextVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenu_CommonAbility_C_SetPerkTextVisibility, K2Node_Select_Default) == 0x000004, "Member 'ShopMenu_CommonAbility_C_SetPerkTextVisibility::K2Node_Select_Default' has a wrong offset!");

}

