#pragma once

 

// Package: Skill_BSK_SpinAxe

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BSK_SpinAxe.Skill_BSK_SpinAxe_C
// 0x0000 (0x02B0 - 0x02B0)
class USkill_BSK_SpinAxe_C final : public USBSkillInfoClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BSK_SpinAxe_C">();
	}
	static class USkill_BSK_SpinAxe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BSK_SpinAxe_C>();
	}
};
static_assert(alignof(USkill_BSK_SpinAxe_C) == 0x000008, "Wrong alignment on USkill_BSK_SpinAxe_C");
static_assert(sizeof(USkill_BSK_SpinAxe_C) == 0x0002B0, "Wrong size on USkill_BSK_SpinAxe_C");

}

