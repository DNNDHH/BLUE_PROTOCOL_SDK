#pragma once

 

// Package: Skill_RBL_EnemyStepJump

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_EnemyStepJump.Skill_RBL_EnemyStepJump_C
// 0x0000 (0x02D0 - 0x02D0)
class USkill_RBL_EnemyStepJump_C final : public USBPlayerEnemyStepJumpSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_EnemyStepJump_C">();
	}
	static class USkill_RBL_EnemyStepJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_EnemyStepJump_C>();
	}
};
static_assert(alignof(USkill_RBL_EnemyStepJump_C) == 0x000008, "Wrong alignment on USkill_RBL_EnemyStepJump_C");
static_assert(sizeof(USkill_RBL_EnemyStepJump_C) == 0x0002D0, "Wrong size on USkill_RBL_EnemyStepJump_C");

}

