#pragma once

 

// Package: ClassIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassIcon.ClassIcon_C
// 0x0000 (0x0290 - 0x0290)
class UClassIcon_C final : public USBClassIcon
{
public:
	class UTexture2D* GetIconTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassIcon_C">();
	}
	static class UClassIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassIcon_C>();
	}
};
static_assert(alignof(UClassIcon_C) == 0x000008, "Wrong alignment on UClassIcon_C");
static_assert(sizeof(UClassIcon_C) == 0x000290, "Wrong size on UClassIcon_C");

}

