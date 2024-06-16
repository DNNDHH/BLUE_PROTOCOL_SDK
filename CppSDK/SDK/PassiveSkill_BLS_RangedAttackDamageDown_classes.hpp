#pragma once

 

// Package: PassiveSkill_BLS_RangedAttackDamageDown

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_BLS_RangedAttackDamageDown.PassiveSkill_BLS_RangedAttackDamageDown_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_BLS_RangedAttackDamageDown_C final : public USBPlayerModifyTakeDamageByDistancePassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_BLS_RangedAttackDamageDown_C">();
	}
	static class UPassiveSkill_BLS_RangedAttackDamageDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_BLS_RangedAttackDamageDown_C>();
	}
};
static_assert(alignof(UPassiveSkill_BLS_RangedAttackDamageDown_C) == 0x000008, "Wrong alignment on UPassiveSkill_BLS_RangedAttackDamageDown_C");
static_assert(sizeof(UPassiveSkill_BLS_RangedAttackDamageDown_C) == 0x000050, "Wrong size on UPassiveSkill_BLS_RangedAttackDamageDown_C");

}

