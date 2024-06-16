#pragma once

 

// Package: PassiveSkill_FFF_DamageDown_Targeted

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_FFF_DamageDown_Targeted.PassiveSkill_FFF_DamageDown_Targeted_C
// 0x0000 (0x0058 - 0x0058)
class UPassiveSkill_FFF_DamageDown_Targeted_C final : public USBPlayerPassiveParamModifySkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_FFF_DamageDown_Targeted_C">();
	}
	static class UPassiveSkill_FFF_DamageDown_Targeted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_FFF_DamageDown_Targeted_C>();
	}
};
static_assert(alignof(UPassiveSkill_FFF_DamageDown_Targeted_C) == 0x000008, "Wrong alignment on UPassiveSkill_FFF_DamageDown_Targeted_C");
static_assert(sizeof(UPassiveSkill_FFF_DamageDown_Targeted_C) == 0x000058, "Wrong size on UPassiveSkill_FFF_DamageDown_Targeted_C");

}

