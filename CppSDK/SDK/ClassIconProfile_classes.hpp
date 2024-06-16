#pragma once

 

// Package: ClassIconProfile

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassIconProfile.ClassIconProfile_C
// 0x0000 (0x0290 - 0x0290)
class UClassIconProfile_C final : public USBClassIcon
{
public:
	class UTexture2D* GetIconTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassIconProfile_C">();
	}
	static class UClassIconProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassIconProfile_C>();
	}
};
static_assert(alignof(UClassIconProfile_C) == 0x000008, "Wrong alignment on UClassIconProfile_C");
static_assert(sizeof(UClassIconProfile_C) == 0x000290, "Wrong size on UClassIconProfile_C");

}

