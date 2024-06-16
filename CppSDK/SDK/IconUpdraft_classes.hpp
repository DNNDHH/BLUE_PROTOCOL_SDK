#pragma once

 

// Package: IconUpdraft

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconUpdraft.IconUpdraft_C
// 0x0000 (0x0298 - 0x0298)
class UIconUpdraft_C final : public USBMapUpdraftIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconUpdraft_C">();
	}
	static class UIconUpdraft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconUpdraft_C>();
	}
};
static_assert(alignof(UIconUpdraft_C) == 0x000008, "Wrong alignment on UIconUpdraft_C");
static_assert(sizeof(UIconUpdraft_C) == 0x000298, "Wrong size on UIconUpdraft_C");

}

