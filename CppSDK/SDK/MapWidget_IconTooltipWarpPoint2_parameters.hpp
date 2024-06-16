#pragma once

 

// Package: MapWidget_IconTooltipWarpPoint2

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_IconTooltipWarpPoint2.MapWidget_IconTooltipWarpPoint2_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltipWarpPoint2_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltipWarpPoint2_C_SetText) == 0x000008, "Wrong alignment on MapWidget_IconTooltipWarpPoint2_C_SetText");
static_assert(sizeof(MapWidget_IconTooltipWarpPoint2_C_SetText) == 0x000018, "Wrong size on MapWidget_IconTooltipWarpPoint2_C_SetText");
static_assert(offsetof(MapWidget_IconTooltipWarpPoint2_C_SetText, InText) == 0x000000, "Member 'MapWidget_IconTooltipWarpPoint2_C_SetText::InText' has a wrong offset!");

// Function MapWidget_IconTooltipWarpPoint2.MapWidget_IconTooltipWarpPoint2_C.SetInfo
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltipWarpPoint2_C_SetInfo final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltipWarpPoint2_C_SetInfo) == 0x000008, "Wrong alignment on MapWidget_IconTooltipWarpPoint2_C_SetInfo");
static_assert(sizeof(MapWidget_IconTooltipWarpPoint2_C_SetInfo) == 0x000018, "Wrong size on MapWidget_IconTooltipWarpPoint2_C_SetInfo");
static_assert(offsetof(MapWidget_IconTooltipWarpPoint2_C_SetInfo, InText) == 0x000000, "Member 'MapWidget_IconTooltipWarpPoint2_C_SetInfo::InText' has a wrong offset!");

}

