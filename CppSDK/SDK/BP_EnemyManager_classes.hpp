#pragma once

 

// Package: BP_EnemyManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyManager.BP_EnemyManager_C
// 0x0000 (0x01D8 - 0x01D8)
class UBP_EnemyManager_C final : public USBEnemyManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyManager_C">();
	}
	static class UBP_EnemyManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EnemyManager_C>();
	}
};
static_assert(alignof(UBP_EnemyManager_C) == 0x000008, "Wrong alignment on UBP_EnemyManager_C");
static_assert(sizeof(UBP_EnemyManager_C) == 0x0001D8, "Wrong size on UBP_EnemyManager_C");

}

