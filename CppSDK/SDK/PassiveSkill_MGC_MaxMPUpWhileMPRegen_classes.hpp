#pragma once

 

// Package: PassiveSkill_MGC_MaxMPUpWhileMPRegen

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_MGC_MaxMPUpWhileMPRegen.PassiveSkill_MGC_MaxMPUpWhileMPRegen_C
// 0x0000 (0x0048 - 0x0048)
class UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C final : public USBMagicianMaxMPUpWhileBattleEffectPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_MGC_MaxMPUpWhileMPRegen_C">();
	}
	static class UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C>();
	}
};
static_assert(alignof(UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C) == 0x000008, "Wrong alignment on UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C");
static_assert(sizeof(UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C) == 0x000048, "Wrong size on UPassiveSkill_MGC_MaxMPUpWhileMPRegen_C");

}

