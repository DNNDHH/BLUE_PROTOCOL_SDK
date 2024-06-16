#pragma once

 

// Package: PassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement.PassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C final : public USBPlayerHPRecoveryItemRemoveStatusAndResetElementPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C">();
	}
	static class UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C>();
	}
};
static_assert(alignof(UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C) == 0x000008, "Wrong alignment on UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C");
static_assert(sizeof(UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C) == 0x000050, "Wrong size on UPassiveSkill_FFF_HealItem_RemoveNegativeStatusAndResetElement_C");

}

