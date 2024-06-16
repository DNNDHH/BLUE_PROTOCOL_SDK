#pragma once

 

// Package: BP_PlayerResurrectionComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerResurrectionComponent.BP_PlayerResurrectionComponent_C
// 0x0000 (0x01F8 - 0x01F8)
class UBP_PlayerResurrectionComponent_C final : public USBPlayerResurrectionComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerResurrectionComponent_C">();
	}
	static class UBP_PlayerResurrectionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerResurrectionComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerResurrectionComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerResurrectionComponent_C");
static_assert(sizeof(UBP_PlayerResurrectionComponent_C) == 0x0001F8, "Wrong size on UBP_PlayerResurrectionComponent_C");

}

