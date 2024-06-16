#pragma once

 

// Package: IconNPCBuff

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconNPCBuff.IconNPCBuff_C
// 0x0000 (0x02B8 - 0x02B8)
class UIconNPCBuff_C final : public USBMapBuffIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconNPCBuff_C">();
	}
	static class UIconNPCBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconNPCBuff_C>();
	}
};
static_assert(alignof(UIconNPCBuff_C) == 0x000008, "Wrong alignment on UIconNPCBuff_C");
static_assert(sizeof(UIconNPCBuff_C) == 0x0002B8, "Wrong size on UIconNPCBuff_C");

}

