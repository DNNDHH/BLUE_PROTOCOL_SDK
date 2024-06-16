#pragma once

 

// Package: BP_AB_AllyAttack_AttackScale

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_AllyAttack_AttackScale.BP_AB_AllyAttack_AttackScale_C
// 0x0000 (0x0080 - 0x0080)
class UBP_AB_AllyAttack_AttackScale_C final : public USBAbilityAllyAttackAttackScale
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_AllyAttack_AttackScale_C">();
	}
	static class UBP_AB_AllyAttack_AttackScale_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_AllyAttack_AttackScale_C>();
	}
};
static_assert(alignof(UBP_AB_AllyAttack_AttackScale_C) == 0x000008, "Wrong alignment on UBP_AB_AllyAttack_AttackScale_C");
static_assert(sizeof(UBP_AB_AllyAttack_AttackScale_C) == 0x000080, "Wrong size on UBP_AB_AllyAttack_AttackScale_C");

}

