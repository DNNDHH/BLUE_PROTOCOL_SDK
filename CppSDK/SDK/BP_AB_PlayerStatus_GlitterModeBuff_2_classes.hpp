#pragma once

 

// Package: BP_AB_PlayerStatus_GlitterModeBuff_2

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_PlayerStatus_GlitterModeBuff_2.BP_AB_PlayerStatus_GlitterModeBuff_2_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AB_PlayerStatus_GlitterModeBuff_2_C final : public USBAbilityOnlyPlayerStatus
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_PlayerStatus_GlitterModeBuff_2_C">();
	}
	static class UBP_AB_PlayerStatus_GlitterModeBuff_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_PlayerStatus_GlitterModeBuff_2_C>();
	}
};
static_assert(alignof(UBP_AB_PlayerStatus_GlitterModeBuff_2_C) == 0x000008, "Wrong alignment on UBP_AB_PlayerStatus_GlitterModeBuff_2_C");
static_assert(sizeof(UBP_AB_PlayerStatus_GlitterModeBuff_2_C) == 0x000088, "Wrong size on UBP_AB_PlayerStatus_GlitterModeBuff_2_C");

}

