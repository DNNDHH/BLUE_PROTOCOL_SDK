#pragma once

 

// Package: Skill_LAN_PrepareStyle

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LAN_PrepareStyle.Skill_LAN_PrepareStyle_C
// 0x0000 (0x0300 - 0x0300)
class USkill_LAN_PrepareStyle_C final : public USBLancerPrepareStyleSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LAN_PrepareStyle_C">();
	}
	static class USkill_LAN_PrepareStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LAN_PrepareStyle_C>();
	}
};
static_assert(alignof(USkill_LAN_PrepareStyle_C) == 0x000008, "Wrong alignment on USkill_LAN_PrepareStyle_C");
static_assert(sizeof(USkill_LAN_PrepareStyle_C) == 0x000300, "Wrong size on USkill_LAN_PrepareStyle_C");

}

