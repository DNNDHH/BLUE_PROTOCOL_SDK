#pragma once

 

// Package: PassiveSkill_RBL_LargeShield_Separation

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_RBL_LargeShield_Separation.PassiveSkill_RBL_LargeShield_Separation_C
// 0x0000 (0x0040 - 0x0040)
class UPassiveSkill_RBL_LargeShield_Separation_C final : public USBRebellionLargeShieldSeparationPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_RBL_LargeShield_Separation_C">();
	}
	static class UPassiveSkill_RBL_LargeShield_Separation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_RBL_LargeShield_Separation_C>();
	}
};
static_assert(alignof(UPassiveSkill_RBL_LargeShield_Separation_C) == 0x000008, "Wrong alignment on UPassiveSkill_RBL_LargeShield_Separation_C");
static_assert(sizeof(UPassiveSkill_RBL_LargeShield_Separation_C) == 0x000040, "Wrong size on UPassiveSkill_RBL_LargeShield_Separation_C");

}

