#pragma once

 

// Package: MapWidget_PlaceNamePlate

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_PlaceNamePlate.MapWidget_PlaceNamePlate_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_PlaceNamePlate_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_PlaceNamePlate_C_SetText) == 0x000008, "Wrong alignment on MapWidget_PlaceNamePlate_C_SetText");
static_assert(sizeof(MapWidget_PlaceNamePlate_C_SetText) == 0x000018, "Wrong size on MapWidget_PlaceNamePlate_C_SetText");
static_assert(offsetof(MapWidget_PlaceNamePlate_C_SetText, InText) == 0x000000, "Member 'MapWidget_PlaceNamePlate_C_SetText::InText' has a wrong offset!");

// Function MapWidget_PlaceNamePlate.MapWidget_PlaceNamePlate_C.SetTextId
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PlaceNamePlate_C_SetTextId final
{
public:
	class FName                                   InTextID;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PlaceNamePlate_C_SetTextId) == 0x000004, "Wrong alignment on MapWidget_PlaceNamePlate_C_SetTextId");
static_assert(sizeof(MapWidget_PlaceNamePlate_C_SetTextId) == 0x000008, "Wrong size on MapWidget_PlaceNamePlate_C_SetTextId");
static_assert(offsetof(MapWidget_PlaceNamePlate_C_SetTextId, InTextID) == 0x000000, "Member 'MapWidget_PlaceNamePlate_C_SetTextId::InTextID' has a wrong offset!");

}

