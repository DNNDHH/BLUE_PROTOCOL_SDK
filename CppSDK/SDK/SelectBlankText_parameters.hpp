#pragma once

 

// Package: SelectBlankText

#include "Basic.hpp"


namespace SDK::Params
{

// Function SelectBlankText.SelectBlankText_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct SelectBlankText_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SelectBlankText_C_SetText) == 0x000008, "Wrong alignment on SelectBlankText_C_SetText");
static_assert(sizeof(SelectBlankText_C_SetText) == 0x000018, "Wrong size on SelectBlankText_C_SetText");
static_assert(offsetof(SelectBlankText_C_SetText, InText) == 0x000000, "Member 'SelectBlankText_C_SetText::InText' has a wrong offset!");

}

