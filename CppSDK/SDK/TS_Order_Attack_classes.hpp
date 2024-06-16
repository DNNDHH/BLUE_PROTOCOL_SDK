#pragma once

 

// Package: TS_Order_Attack

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TS_Order_Attack.TS_Order_Attack_C
// 0x0000 (0x0180 - 0x0180)
class UTS_Order_Attack_C final : public USBAITacticalSkill_HTNBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TS_Order_Attack_C">();
	}
	static class UTS_Order_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTS_Order_Attack_C>();
	}
};
static_assert(alignof(UTS_Order_Attack_C) == 0x000008, "Wrong alignment on UTS_Order_Attack_C");
static_assert(sizeof(UTS_Order_Attack_C) == 0x000180, "Wrong size on UTS_Order_Attack_C");

}

