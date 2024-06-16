#pragma once

 

// Package: MyCharaMenu_Interface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MyCharaMenu_Interface.MyCharaMenu_Interface_C
// 0x0000 (0x0028 - 0x0028)
class IMyCharaMenu_Interface_C final : public IInterface
{
public:
	void OnOpenMenu();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_Interface_C">();
	}
	static class IMyCharaMenu_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMyCharaMenu_Interface_C>();
	}
};
static_assert(alignof(IMyCharaMenu_Interface_C) == 0x000008, "Wrong alignment on IMyCharaMenu_Interface_C");
static_assert(sizeof(IMyCharaMenu_Interface_C) == 0x000028, "Wrong size on IMyCharaMenu_Interface_C");

}

