#pragma once

 

// Package: PlaceGuidetInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlaceGuidetInterface.PlaceGuidetInterface_C
// 0x0000 (0x0028 - 0x0028)
class IPlaceGuidetInterface_C final : public IInterface
{
public:
	void GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlaceGuidetInterface_C">();
	}
	static class IPlaceGuidetInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPlaceGuidetInterface_C>();
	}
};
static_assert(alignof(IPlaceGuidetInterface_C) == 0x000008, "Wrong alignment on IPlaceGuidetInterface_C");
static_assert(sizeof(IPlaceGuidetInterface_C) == 0x000028, "Wrong size on IPlaceGuidetInterface_C");

}

