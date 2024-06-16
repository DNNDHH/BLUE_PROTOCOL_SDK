#pragma once

 

// Package: BP_BattleManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleManager.BP_BattleManager_C
// 0x0000 (0x02A0 - 0x02A0)
class UBP_BattleManager_C final : public USBBattleManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleManager_C">();
	}
	static class UBP_BattleManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BattleManager_C>();
	}
};
static_assert(alignof(UBP_BattleManager_C) == 0x000008, "Wrong alignment on UBP_BattleManager_C");
static_assert(sizeof(UBP_BattleManager_C) == 0x0002A0, "Wrong size on UBP_BattleManager_C");

}

