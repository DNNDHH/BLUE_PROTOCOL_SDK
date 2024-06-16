#pragma once

 

// Package: ClassIconPlate

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassIconPlate.ClassIconPlate_C
// 0x0000 (0x0290 - 0x0290)
class UClassIconPlate_C final : public USBClassIcon
{
public:
	class UTexture2D* GetIconTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassIconPlate_C">();
	}
	static class UClassIconPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassIconPlate_C>();
	}
};
static_assert(alignof(UClassIconPlate_C) == 0x000008, "Wrong alignment on UClassIconPlate_C");
static_assert(sizeof(UClassIconPlate_C) == 0x000290, "Wrong size on UClassIconPlate_C");

}

