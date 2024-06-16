#pragma once

 

// Package: BP_EnemySpawner

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C
// 0x0008 (0x02F8 - 0x02F0)
class ABP_EnemySpawner_C final : public ASBEnemySpawner
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EnemySpawner_C">();
	}
	static class ABP_EnemySpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EnemySpawner_C>();
	}
};
static_assert(alignof(ABP_EnemySpawner_C) == 0x000008, "Wrong alignment on ABP_EnemySpawner_C");
static_assert(sizeof(ABP_EnemySpawner_C) == 0x0002F8, "Wrong size on ABP_EnemySpawner_C");
static_assert(offsetof(ABP_EnemySpawner_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_EnemySpawner_C::DefaultSceneRoot' has a wrong offset!");

}

