#pragma once

 

// Package: MapWidget_IconTooltip3

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_IconTooltip3.MapWidget_IconTooltip3_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltip3_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltip3_C_SetText) == 0x000008, "Wrong alignment on MapWidget_IconTooltip3_C_SetText");
static_assert(sizeof(MapWidget_IconTooltip3_C_SetText) == 0x000018, "Wrong size on MapWidget_IconTooltip3_C_SetText");
static_assert(offsetof(MapWidget_IconTooltip3_C_SetText, InText) == 0x000000, "Member 'MapWidget_IconTooltip3_C_SetText::InText' has a wrong offset!");

}

