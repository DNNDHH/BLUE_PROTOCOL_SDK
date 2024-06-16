#pragma once

 

// Package: CS_Script_H1_L

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CS_Script_H1_L.CS_Script_H1_L_C
// 0x0000 (0x01B0 - 0x01B0)
class UCS_Script_H1_L_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CS_Script_H1_L_C">();
	}
	static class UCS_Script_H1_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCS_Script_H1_L_C>();
	}
};
static_assert(alignof(UCS_Script_H1_L_C) == 0x000010, "Wrong alignment on UCS_Script_H1_L_C");
static_assert(sizeof(UCS_Script_H1_L_C) == 0x0001B0, "Wrong size on UCS_Script_H1_L_C");

}

