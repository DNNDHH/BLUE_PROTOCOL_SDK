#pragma once

 

// Package: BP_EnemyFieldSpawner

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemyFieldSpawner.BP_EnemyFieldSpawner_C
// 0x0000 (0x02E8 - 0x02E8)
class ABP_EnemyFieldSpawner_C final : public ASBEnemyFieldSpawner
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemyFieldSpawner_C">();
	}
	static class ABP_EnemyFieldSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnemyFieldSpawner_C>();
	}
};
static_assert(alignof(ABP_EnemyFieldSpawner_C) == 0x000008, "Wrong alignment on ABP_EnemyFieldSpawner_C");
static_assert(sizeof(ABP_EnemyFieldSpawner_C) == 0x0002E8, "Wrong size on ABP_EnemyFieldSpawner_C");

}

