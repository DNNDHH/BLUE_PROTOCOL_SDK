#pragma once

 

// Package: BP_BattleStatusManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleStatusManager.BP_BattleStatusManager_C
// 0x0000 (0x01A0 - 0x01A0)
class UBP_BattleStatusManager_C final : public USBBattleStatusManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleStatusManager_C">();
	}
	static class UBP_BattleStatusManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleStatusManager_C>();
	}
};
static_assert(alignof(UBP_BattleStatusManager_C) == 0x000008, "Wrong alignment on UBP_BattleStatusManager_C");
static_assert(sizeof(UBP_BattleStatusManager_C) == 0x0001A0, "Wrong size on UBP_BattleStatusManager_C");

}

