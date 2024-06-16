#pragma once

 

// Package: BP_PlayerCameraComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerCameraComponent.BP_PlayerCameraComponent_C
// 0x0000 (0x0B00 - 0x0B00)
class UBP_PlayerCameraComponent_C final : public USBPlayerCameraComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerCameraComponent_C">();
	}
	static class UBP_PlayerCameraComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerCameraComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerCameraComponent_C) == 0x000010, "Wrong alignment on UBP_PlayerCameraComponent_C");
static_assert(sizeof(UBP_PlayerCameraComponent_C) == 0x000B00, "Wrong size on UBP_PlayerCameraComponent_C");

}

