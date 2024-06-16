#pragma once

 

// Package: BP_NpcSpawner

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcSpawner.BP_NpcSpawner_C
// 0x0008 (0x0318 - 0x0310)
class ABP_NpcSpawner_C final : public ASBNpcSpawner
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcSpawner_C">();
	}
	static class ABP_NpcSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NpcSpawner_C>();
	}
};
static_assert(alignof(ABP_NpcSpawner_C) == 0x000008, "Wrong alignment on ABP_NpcSpawner_C");
static_assert(sizeof(ABP_NpcSpawner_C) == 0x000318, "Wrong size on ABP_NpcSpawner_C");
static_assert(offsetof(ABP_NpcSpawner_C, DefaultSceneRoot) == 0x000310, "Member 'ABP_NpcSpawner_C::DefaultSceneRoot' has a wrong offset!");

}

