#pragma once

 

// Package: BP_Player_Nappo

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Player_Nappo.BP_Player_Nappo_C
// 0x0000 (0x05F0 - 0x05F0)
class ABP_Player_Nappo_C final : public ASBPlayerTransformCharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Player_Nappo_C">();
	}
	static class ABP_Player_Nappo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Player_Nappo_C>();
	}
};
static_assert(alignof(ABP_Player_Nappo_C) == 0x000010, "Wrong alignment on ABP_Player_Nappo_C");
static_assert(sizeof(ABP_Player_Nappo_C) == 0x0005F0, "Wrong size on ABP_Player_Nappo_C");

}

