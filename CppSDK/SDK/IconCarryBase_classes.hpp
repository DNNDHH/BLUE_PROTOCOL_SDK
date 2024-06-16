#pragma once

 

// Package: IconCarryBase

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconCarryBase.IconCarryBase_C
// 0x0000 (0x02A0 - 0x02A0)
class UIconCarryBase_C final : public USBMapCarryBaseIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconCarryBase_C">();
	}
	static class UIconCarryBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconCarryBase_C>();
	}
};
static_assert(alignof(UIconCarryBase_C) == 0x000008, "Wrong alignment on UIconCarryBase_C");
static_assert(sizeof(UIconCarryBase_C) == 0x0002A0, "Wrong size on UIconCarryBase_C");

}

