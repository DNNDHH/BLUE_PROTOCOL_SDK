#pragma once

 

// Package: TokenTooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function TokenTooltip.TokenTooltip_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TokenTooltip_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TokenTooltip_C_SetText) == 0x000008, "Wrong alignment on TokenTooltip_C_SetText");
static_assert(sizeof(TokenTooltip_C_SetText) == 0x000018, "Wrong size on TokenTooltip_C_SetText");
static_assert(offsetof(TokenTooltip_C_SetText, InText) == 0x000000, "Member 'TokenTooltip_C_SetText::InText' has a wrong offset!");

}

