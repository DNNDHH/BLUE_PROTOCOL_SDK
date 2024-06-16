#pragma once

 

// Package: BPI_SetTextColor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_SetTextColor.BPI_SetTextColor_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct BPI_SetTextColor_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SetTextColor_C_SetTextColor) == 0x000004, "Wrong alignment on BPI_SetTextColor_C_SetTextColor");
static_assert(sizeof(BPI_SetTextColor_C_SetTextColor) == 0x000010, "Wrong size on BPI_SetTextColor_C_SetTextColor");
static_assert(offsetof(BPI_SetTextColor_C_SetTextColor, Color) == 0x000000, "Member 'BPI_SetTextColor_C_SetTextColor::Color' has a wrong offset!");

}

