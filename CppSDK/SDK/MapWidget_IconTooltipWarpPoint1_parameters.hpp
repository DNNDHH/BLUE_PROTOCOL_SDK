#pragma once

 

// Package: MapWidget_IconTooltipWarpPoint1

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_IconTooltipWarpPoint1.MapWidget_IconTooltipWarpPoint1_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltipWarpPoint1_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltipWarpPoint1_C_SetText) == 0x000008, "Wrong alignment on MapWidget_IconTooltipWarpPoint1_C_SetText");
static_assert(sizeof(MapWidget_IconTooltipWarpPoint1_C_SetText) == 0x000018, "Wrong size on MapWidget_IconTooltipWarpPoint1_C_SetText");
static_assert(offsetof(MapWidget_IconTooltipWarpPoint1_C_SetText, InText) == 0x000000, "Member 'MapWidget_IconTooltipWarpPoint1_C_SetText::InText' has a wrong offset!");

}

