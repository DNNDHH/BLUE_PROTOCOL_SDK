#pragma once

 

// Package: PassiveSkill_RBL_ShieldGaugeDamageMagnification

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_RBL_ShieldGaugeDamageMagnification.PassiveSkill_RBL_ShieldGaugeDamageMagnification_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C final : public USBRebellionShieldGaugeDamageMagnificationPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_RBL_ShieldGaugeDamageMagnification_C">();
	}
	static class UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C>();
	}
};
static_assert(alignof(UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C) == 0x000008, "Wrong alignment on UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C");
static_assert(sizeof(UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C) == 0x000050, "Wrong size on UPassiveSkill_RBL_ShieldGaugeDamageMagnification_C");

}

