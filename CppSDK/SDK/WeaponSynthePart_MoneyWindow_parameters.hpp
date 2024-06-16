#pragma once

 

// Package: WeaponSynthePart_MoneyWindow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_MoneyWindow.WeaponSynthePart_MoneyWindow_C.SetMoney
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_MoneyWindow_C_SetMoney final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WeaponSynthePart_MoneyWindow_C_SetMoney) == 0x000008, "Wrong alignment on WeaponSynthePart_MoneyWindow_C_SetMoney");
static_assert(sizeof(WeaponSynthePart_MoneyWindow_C_SetMoney) == 0x000020, "Wrong size on WeaponSynthePart_MoneyWindow_C_SetMoney");
static_assert(offsetof(WeaponSynthePart_MoneyWindow_C_SetMoney, InValue) == 0x000000, "Member 'WeaponSynthePart_MoneyWindow_C_SetMoney::InValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_MoneyWindow_C_SetMoney, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_MoneyWindow_C_SetMoney::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_MoneyWindow.WeaponSynthePart_MoneyWindow_C.SetColorMode
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthePart_MoneyWindow_C_SetColorMode final
{
public:
	bool                                          bIsLackChangeColor;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
};
static_assert(alignof(WeaponSynthePart_MoneyWindow_C_SetColorMode) == 0x000008, "Wrong alignment on WeaponSynthePart_MoneyWindow_C_SetColorMode");
static_assert(sizeof(WeaponSynthePart_MoneyWindow_C_SetColorMode) == 0x000030, "Wrong size on WeaponSynthePart_MoneyWindow_C_SetColorMode");
static_assert(offsetof(WeaponSynthePart_MoneyWindow_C_SetColorMode, bIsLackChangeColor) == 0x000000, "Member 'WeaponSynthePart_MoneyWindow_C_SetColorMode::bIsLackChangeColor' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_MoneyWindow_C_SetColorMode, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WeaponSynthePart_MoneyWindow_C_SetColorMode::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

