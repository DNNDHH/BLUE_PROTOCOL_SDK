#pragma once

 

// Package: PassiveSkill_FFF_HealItem_HealAmountUp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_FFF_HealItem_HealAmountUp.PassiveSkill_FFF_HealItem_HealAmountUp_C
// 0x0000 (0x0058 - 0x0058)
class UPassiveSkill_FFF_HealItem_HealAmountUp_C final : public USBPlayerPassiveParamModifySkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_FFF_HealItem_HealAmountUp_C">();
	}
	static class UPassiveSkill_FFF_HealItem_HealAmountUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_FFF_HealItem_HealAmountUp_C>();
	}
};
static_assert(alignof(UPassiveSkill_FFF_HealItem_HealAmountUp_C) == 0x000008, "Wrong alignment on UPassiveSkill_FFF_HealItem_HealAmountUp_C");
static_assert(sizeof(UPassiveSkill_FFF_HealItem_HealAmountUp_C) == 0x000058, "Wrong size on UPassiveSkill_FFF_HealItem_HealAmountUp_C");

}

