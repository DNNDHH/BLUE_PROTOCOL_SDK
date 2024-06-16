#pragma once

 

// Package: PlaceGuidetInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function PlaceGuidetInterface.PlaceGuidetInterface_C.GetPlaceGuideWidget
// 0x0008 (0x0008 - 0x0000)
struct PlaceGuidetInterface_C_GetPlaceGuideWidget final
{
public:
	class UPlaceGuide_C*                          PlaceGuideWidget;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlaceGuidetInterface_C_GetPlaceGuideWidget) == 0x000008, "Wrong alignment on PlaceGuidetInterface_C_GetPlaceGuideWidget");
static_assert(sizeof(PlaceGuidetInterface_C_GetPlaceGuideWidget) == 0x000008, "Wrong size on PlaceGuidetInterface_C_GetPlaceGuideWidget");
static_assert(offsetof(PlaceGuidetInterface_C_GetPlaceGuideWidget, PlaceGuideWidget) == 0x000000, "Member 'PlaceGuidetInterface_C_GetPlaceGuideWidget::PlaceGuideWidget' has a wrong offset!");

}

