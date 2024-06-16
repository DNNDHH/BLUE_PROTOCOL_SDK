#pragma once

 

// Package: PassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC.PassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C
// 0x0000 (0x0060 - 0x0060)
class UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C final : public USBLancerElementDamageAtErasedLancerMarkPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C">();
	}
	static class UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C>();
	}
};
static_assert(alignof(UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C) == 0x000008, "Wrong alignment on UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C");
static_assert(sizeof(UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C) == 0x000060, "Wrong size on UPassiveSkill_LAN_ElementDamageAtErasedLancerMark_BC_C");

}

