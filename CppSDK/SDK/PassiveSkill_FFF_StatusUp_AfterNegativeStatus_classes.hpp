#pragma once

 

// Package: PassiveSkill_FFF_StatusUp_AfterNegativeStatus

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_FFF_StatusUp_AfterNegativeStatus.PassiveSkill_FFF_StatusUp_AfterNegativeStatus_C
// 0x0000 (0x0068 - 0x0068)
class UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C final : public USBPlayerPassiveParamModifyConditionSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_FFF_StatusUp_AfterNegativeStatus_C">();
	}
	static class UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C>();
	}
};
static_assert(alignof(UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C) == 0x000008, "Wrong alignment on UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C");
static_assert(sizeof(UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C) == 0x000068, "Wrong size on UPassiveSkill_FFF_StatusUp_AfterNegativeStatus_C");

}

