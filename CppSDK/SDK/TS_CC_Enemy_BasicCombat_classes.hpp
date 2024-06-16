#pragma once

 

// Package: TS_CC_Enemy_BasicCombat

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TS_CC_Enemy_BasicCombat.TS_CC_Enemy_BasicCombat_C
// 0x0000 (0x0180 - 0x0180)
class UTS_CC_Enemy_BasicCombat_C final : public USBAITacticalSkill_HTNBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TS_CC_Enemy_BasicCombat_C">();
	}
	static class UTS_CC_Enemy_BasicCombat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTS_CC_Enemy_BasicCombat_C>();
	}
};
static_assert(alignof(UTS_CC_Enemy_BasicCombat_C) == 0x000008, "Wrong alignment on UTS_CC_Enemy_BasicCombat_C");
static_assert(sizeof(UTS_CC_Enemy_BasicCombat_C) == 0x000180, "Wrong size on UTS_CC_Enemy_BasicCombat_C");

}

