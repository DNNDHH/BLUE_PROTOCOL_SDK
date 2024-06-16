#pragma once

 

// Package: PassiveSkill_MGC_MagicCharge_SuperArmor

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_MGC_MagicCharge_SuperArmor.PassiveSkill_MGC_MagicCharge_SuperArmor_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_MGC_MagicCharge_SuperArmor_C final : public USBPlayerSkillChargeSuperArmorPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_MGC_MagicCharge_SuperArmor_C">();
	}
	static class UPassiveSkill_MGC_MagicCharge_SuperArmor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_MGC_MagicCharge_SuperArmor_C>();
	}
};
static_assert(alignof(UPassiveSkill_MGC_MagicCharge_SuperArmor_C) == 0x000008, "Wrong alignment on UPassiveSkill_MGC_MagicCharge_SuperArmor_C");
static_assert(sizeof(UPassiveSkill_MGC_MagicCharge_SuperArmor_C) == 0x000050, "Wrong size on UPassiveSkill_MGC_MagicCharge_SuperArmor_C");

}

