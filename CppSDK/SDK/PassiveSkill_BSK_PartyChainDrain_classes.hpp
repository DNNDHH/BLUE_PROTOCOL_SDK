#pragma once

 

// Package: PassiveSkill_BSK_PartyChainDrain

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PassiveSkill_BSK_PartyChainDrain.PassiveSkill_BSK_PartyChainDrain_C
// 0x0000 (0x0058 - 0x0058)
class UPassiveSkill_BSK_PartyChainDrain_C final : public USBBerserkerPartyChainDrainPassiveSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveSkill_BSK_PartyChainDrain_C">();
	}
	static class UPassiveSkill_BSK_PartyChainDrain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveSkill_BSK_PartyChainDrain_C>();
	}
};
static_assert(alignof(UPassiveSkill_BSK_PartyChainDrain_C) == 0x000008, "Wrong alignment on UPassiveSkill_BSK_PartyChainDrain_C");
static_assert(sizeof(UPassiveSkill_BSK_PartyChainDrain_C) == 0x000058, "Wrong size on UPassiveSkill_BSK_PartyChainDrain_C");

}

