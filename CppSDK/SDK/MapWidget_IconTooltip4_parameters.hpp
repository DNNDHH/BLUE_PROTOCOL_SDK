#pragma once

 

// Package: MapWidget_IconTooltip4

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_IconTooltip4.MapWidget_IconTooltip4_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltip4_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltip4_C_SetName) == 0x000008, "Wrong alignment on MapWidget_IconTooltip4_C_SetName");
static_assert(sizeof(MapWidget_IconTooltip4_C_SetName) == 0x000018, "Wrong size on MapWidget_IconTooltip4_C_SetName");
static_assert(offsetof(MapWidget_IconTooltip4_C_SetName, InText) == 0x000000, "Member 'MapWidget_IconTooltip4_C_SetName::InText' has a wrong offset!");

// Function MapWidget_IconTooltip4.MapWidget_IconTooltip4_C.SetDesc
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_IconTooltip4_C_SetDesc final
{
public:
	class FText                                   InDesc;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_IconTooltip4_C_SetDesc) == 0x000008, "Wrong alignment on MapWidget_IconTooltip4_C_SetDesc");
static_assert(sizeof(MapWidget_IconTooltip4_C_SetDesc) == 0x000018, "Wrong size on MapWidget_IconTooltip4_C_SetDesc");
static_assert(offsetof(MapWidget_IconTooltip4_C_SetDesc, InDesc) == 0x000000, "Member 'MapWidget_IconTooltip4_C_SetDesc::InDesc' has a wrong offset!");

}

