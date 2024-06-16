#pragma once

 

// Package: IconEngramCannon

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconEngramCannon.IconEngramCannon_C
// 0x0000 (0x02B0 - 0x02B0)
class UIconEngramCannon_C final : public USBMapEngramCannonIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconEngramCannon_C">();
	}
	static class UIconEngramCannon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconEngramCannon_C>();
	}
};
static_assert(alignof(UIconEngramCannon_C) == 0x000008, "Wrong alignment on UIconEngramCannon_C");
static_assert(sizeof(UIconEngramCannon_C) == 0x0002B0, "Wrong size on UIconEngramCannon_C");

}

