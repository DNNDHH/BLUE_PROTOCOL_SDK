#pragma once

 

// Package: BP_PlayerHoldHandComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerHoldHandComponent.BP_PlayerHoldHandComponent_C
// 0x0000 (0x0130 - 0x0130)
class UBP_PlayerHoldHandComponent_C final : public USBPlayerHoldHandComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerHoldHandComponent_C">();
	}
	static class UBP_PlayerHoldHandComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerHoldHandComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerHoldHandComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerHoldHandComponent_C");
static_assert(sizeof(UBP_PlayerHoldHandComponent_C) == 0x000130, "Wrong size on UBP_PlayerHoldHandComponent_C");

}

