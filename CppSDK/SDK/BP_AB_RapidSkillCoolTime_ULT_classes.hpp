#pragma once

 

// Package: BP_AB_RapidSkillCoolTime_ULT

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_RapidSkillCoolTime_ULT.BP_AB_RapidSkillCoolTime_ULT_C
// 0x0000 (0x0098 - 0x0098)
class UBP_AB_RapidSkillCoolTime_ULT_C final : public USBAbilitySkillSkillCoolTime
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_RapidSkillCoolTime_ULT_C">();
	}
	static class UBP_AB_RapidSkillCoolTime_ULT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_RapidSkillCoolTime_ULT_C>();
	}
};
static_assert(alignof(UBP_AB_RapidSkillCoolTime_ULT_C) == 0x000008, "Wrong alignment on UBP_AB_RapidSkillCoolTime_ULT_C");
static_assert(sizeof(UBP_AB_RapidSkillCoolTime_ULT_C) == 0x000098, "Wrong size on UBP_AB_RapidSkillCoolTime_ULT_C");

}

