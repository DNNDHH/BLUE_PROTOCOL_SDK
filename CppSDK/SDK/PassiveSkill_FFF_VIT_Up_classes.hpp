#pragma once

 

// Package: PassiveSkill_FFF_VIT_Up

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_FFF_VIT_Up.PassiveSkill_FFF_VIT_Up_C
// 0x0000 (0x0058 - 0x0058)
class UPassiveSkill_FFF_VIT_Up_C final : public USBPlayerPassiveParamModifySkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_FFF_VIT_Up_C">();
	}
	static class UPassiveSkill_FFF_VIT_Up_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_FFF_VIT_Up_C>();
	}
};
static_assert(alignof(UPassiveSkill_FFF_VIT_Up_C) == 0x000008, "Wrong alignment on UPassiveSkill_FFF_VIT_Up_C");
static_assert(sizeof(UPassiveSkill_FFF_VIT_Up_C) == 0x000058, "Wrong size on UPassiveSkill_FFF_VIT_Up_C");

}

