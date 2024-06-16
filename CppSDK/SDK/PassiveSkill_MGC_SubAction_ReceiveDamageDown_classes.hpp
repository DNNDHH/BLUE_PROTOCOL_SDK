#pragma once

 

// Package: PassiveSkill_MGC_SubAction_ReceiveDamageDown

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_MGC_SubAction_ReceiveDamageDown.PassiveSkill_MGC_SubAction_ReceiveDamageDown_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C final : public USBMagicianSubActionReceiveDamageDownPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_MGC_SubAction_ReceiveDamageDown_C">();
	}
	static class UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C>();
	}
};
static_assert(alignof(UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C) == 0x000008, "Wrong alignment on UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C");
static_assert(sizeof(UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C) == 0x000050, "Wrong size on UPassiveSkill_MGC_SubAction_ReceiveDamageDown_C");

}

