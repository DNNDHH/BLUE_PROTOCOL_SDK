#pragma once

 

// Package: Skill_PFM_GenerateSpeaker

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_PFM_GenerateSpeaker.Skill_PFM_GenerateSpeaker_C
// 0x0000 (0x03C0 - 0x03C0)
class USkill_PFM_GenerateSpeaker_C final : public USBPerformerGenerateSpeakerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_PFM_GenerateSpeaker_C">();
	}
	static class USkill_PFM_GenerateSpeaker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_PFM_GenerateSpeaker_C>();
	}
};
static_assert(alignof(USkill_PFM_GenerateSpeaker_C) == 0x000008, "Wrong alignment on USkill_PFM_GenerateSpeaker_C");
static_assert(sizeof(USkill_PFM_GenerateSpeaker_C) == 0x0003C0, "Wrong size on USkill_PFM_GenerateSpeaker_C");

}

