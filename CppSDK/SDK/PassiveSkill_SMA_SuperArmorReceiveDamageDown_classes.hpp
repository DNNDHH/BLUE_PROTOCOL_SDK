#pragma once

 

// Package: PassiveSkill_SMA_SuperArmorReceiveDamageDown

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_SMA_SuperArmorReceiveDamageDown.PassiveSkill_SMA_SuperArmorReceiveDamageDown_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C final : public USBSmasherSuperArmorReceiveDamageDownPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_SMA_SuperArmorReceiveDamageDown_C">();
	}
	static class UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C>();
	}
};
static_assert(alignof(UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C) == 0x000008, "Wrong alignment on UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C");
static_assert(sizeof(UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C) == 0x000050, "Wrong size on UPassiveSkill_SMA_SuperArmorReceiveDamageDown_C");

}
