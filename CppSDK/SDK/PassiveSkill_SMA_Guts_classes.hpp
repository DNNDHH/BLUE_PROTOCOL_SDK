#pragma once

 

// Package: PassiveSkill_SMA_Guts

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_SMA_Guts.PassiveSkill_SMA_Guts_C
// 0x0000 (0x0050 - 0x0050)
class UPassiveSkill_SMA_Guts_C final : public USBPlayerGutsPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_SMA_Guts_C">();
	}
	static class UPassiveSkill_SMA_Guts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_SMA_Guts_C>();
	}
};
static_assert(alignof(UPassiveSkill_SMA_Guts_C) == 0x000008, "Wrong alignment on UPassiveSkill_SMA_Guts_C");
static_assert(sizeof(UPassiveSkill_SMA_Guts_C) == 0x000050, "Wrong size on UPassiveSkill_SMA_Guts_C");

}

