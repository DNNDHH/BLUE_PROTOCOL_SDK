#pragma once

 

// Package: CommandIcon_Tooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function CommandIcon_Tooltip.CommandIcon_Tooltip_C.Setup
// 0x0018 (0x0018 - 0x0000)
struct CommandIcon_Tooltip_C_Setup final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommandIcon_Tooltip_C_Setup) == 0x000008, "Wrong alignment on CommandIcon_Tooltip_C_Setup");
static_assert(sizeof(CommandIcon_Tooltip_C_Setup) == 0x000018, "Wrong size on CommandIcon_Tooltip_C_Setup");
static_assert(offsetof(CommandIcon_Tooltip_C_Setup, InText) == 0x000000, "Member 'CommandIcon_Tooltip_C_Setup::InText' has a wrong offset!");

}

