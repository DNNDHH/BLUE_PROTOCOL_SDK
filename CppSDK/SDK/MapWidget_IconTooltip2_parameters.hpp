#pragma once

 

// Package: MapWidget_IconTooltip2

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_IconTooltip2.MapWidget_IconTooltip2_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltip2_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltip2_C_SetName) == 0x000008, "Wrong alignment on MapWidget_IconTooltip2_C_SetName");
static_assert(sizeof(MapWidget_IconTooltip2_C_SetName) == 0x000018, "Wrong size on MapWidget_IconTooltip2_C_SetName");
static_assert(offsetof(MapWidget_IconTooltip2_C_SetName, InText) == 0x000000, "Member 'MapWidget_IconTooltip2_C_SetName::InText' has a wrong offset!");

}

