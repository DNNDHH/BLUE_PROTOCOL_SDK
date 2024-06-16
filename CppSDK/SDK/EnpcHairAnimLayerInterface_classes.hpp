#pragma once

 

// Package: EnpcHairAnimLayerInterface

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class IEnpcHairAnimLayerInterface_C final : public IAnimLayerInterface
{
public:
	void HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* Param_HairLayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnpcHairAnimLayerInterface_C">();
	}
	static class IEnpcHairAnimLayerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEnpcHairAnimLayerInterface_C>();
	}
};
static_assert(alignof(IEnpcHairAnimLayerInterface_C) == 0x000008, "Wrong alignment on IEnpcHairAnimLayerInterface_C");
static_assert(sizeof(IEnpcHairAnimLayerInterface_C) == 0x000028, "Wrong size on IEnpcHairAnimLayerInterface_C");

}

