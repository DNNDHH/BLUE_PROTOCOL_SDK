#pragma once

 

// Package: MiniMapIconNPCBuff

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconNPCBuff.MiniMapIconNPCBuff_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconNPCBuff_C final : public USBMiniMapIconBuffNpcObj
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconNPCBuff_C">();
	}
	static class UMiniMapIconNPCBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconNPCBuff_C>();
	}
};
static_assert(alignof(UMiniMapIconNPCBuff_C) == 0x000008, "Wrong alignment on UMiniMapIconNPCBuff_C");
static_assert(sizeof(UMiniMapIconNPCBuff_C) == 0x000290, "Wrong size on UMiniMapIconNPCBuff_C");

}

