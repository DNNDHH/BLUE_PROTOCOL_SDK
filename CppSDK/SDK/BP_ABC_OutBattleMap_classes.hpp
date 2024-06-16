#pragma once

 

// Package: BP_ABC_OutBattleMap

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABC_OutBattleMap.BP_ABC_OutBattleMap_C
// 0x0000 (0x0038 - 0x0038)
class UBP_ABC_OutBattleMap_C final : public USBAbilityConditionInBattleMap
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABC_OutBattleMap_C">();
	}
	static class UBP_ABC_OutBattleMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABC_OutBattleMap_C>();
	}
};
static_assert(alignof(UBP_ABC_OutBattleMap_C) == 0x000008, "Wrong alignment on UBP_ABC_OutBattleMap_C");
static_assert(sizeof(UBP_ABC_OutBattleMap_C) == 0x000038, "Wrong size on UBP_ABC_OutBattleMap_C");

}

