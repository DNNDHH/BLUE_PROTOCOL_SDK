#pragma once

 

// Package: PassiveSkill_FFF_Resurrection_AttackUp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_FFF_Resurrection_AttackUp.PassiveSkill_FFF_Resurrection_AttackUp_C
// 0x0000 (0x0068 - 0x0068)
class UPassiveSkill_FFF_Resurrection_AttackUp_C final : public USBPlayerResurrectionApplyBattleStatusParamModifyPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_FFF_Resurrection_AttackUp_C">();
	}
	static class UPassiveSkill_FFF_Resurrection_AttackUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_FFF_Resurrection_AttackUp_C>();
	}
};
static_assert(alignof(UPassiveSkill_FFF_Resurrection_AttackUp_C) == 0x000008, "Wrong alignment on UPassiveSkill_FFF_Resurrection_AttackUp_C");
static_assert(sizeof(UPassiveSkill_FFF_Resurrection_AttackUp_C) == 0x000068, "Wrong size on UPassiveSkill_FFF_Resurrection_AttackUp_C");

}

