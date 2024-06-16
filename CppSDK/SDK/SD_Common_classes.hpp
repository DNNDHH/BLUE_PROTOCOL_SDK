#pragma once

 

// Package: SD_Common

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SD_Common.SD_Common_C
// 0x0000 (0x0188 - 0x0188)
class USD_Common_C final : public USBAttributeSlashDiskList
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SD_Common_C">();
	}
	static class USD_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USD_Common_C>();
	}
};
static_assert(alignof(USD_Common_C) == 0x000008, "Wrong alignment on USD_Common_C");
static_assert(sizeof(USD_Common_C) == 0x000188, "Wrong size on USD_Common_C");

}

