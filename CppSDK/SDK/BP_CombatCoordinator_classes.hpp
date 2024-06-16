#pragma once

 

// Package: BP_CombatCoordinator

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CombatCoordinator.BP_CombatCoordinator_C
// 0x0008 (0x0438 - 0x0430)
class ABP_CombatCoordinator_C final : public ASBCombatCoordinator
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CombatCoordinator_C">();
	}
	static class ABP_CombatCoordinator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CombatCoordinator_C>();
	}
};
static_assert(alignof(ABP_CombatCoordinator_C) == 0x000008, "Wrong alignment on ABP_CombatCoordinator_C");
static_assert(sizeof(ABP_CombatCoordinator_C) == 0x000438, "Wrong size on ABP_CombatCoordinator_C");
static_assert(offsetof(ABP_CombatCoordinator_C, DefaultSceneRoot) == 0x000430, "Member 'ABP_CombatCoordinator_C::DefaultSceneRoot' has a wrong offset!");

}

