#pragma once

 

// Package: BP_InteractionWarpGoal

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractionWarpGoal.BP_InteractionWarpGoal_C
// 0x0050 (0x0278 - 0x0228)
class ABP_InteractionWarpGoal_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow5;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow4;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow3;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UArrowComponent*>                GoarArrowlist;                                     // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                   GoalTag;                                           // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractionWarpGoal_C">();
	}
	static class ABP_InteractionWarpGoal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractionWarpGoal_C>();
	}
};
static_assert(alignof(ABP_InteractionWarpGoal_C) == 0x000008, "Wrong alignment on ABP_InteractionWarpGoal_C");
static_assert(sizeof(ABP_InteractionWarpGoal_C) == 0x000278, "Wrong size on ABP_InteractionWarpGoal_C");
static_assert(offsetof(ABP_InteractionWarpGoal_C, Arrow5) == 0x000228, "Member 'ABP_InteractionWarpGoal_C::Arrow5' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, Arrow4) == 0x000230, "Member 'ABP_InteractionWarpGoal_C::Arrow4' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, Arrow3) == 0x000238, "Member 'ABP_InteractionWarpGoal_C::Arrow3' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, Arrow2) == 0x000240, "Member 'ABP_InteractionWarpGoal_C::Arrow2' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, Arrow1) == 0x000248, "Member 'ABP_InteractionWarpGoal_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, Arrow) == 0x000250, "Member 'ABP_InteractionWarpGoal_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, DefaultSceneRoot) == 0x000258, "Member 'ABP_InteractionWarpGoal_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, GoarArrowlist) == 0x000260, "Member 'ABP_InteractionWarpGoal_C::GoarArrowlist' has a wrong offset!");
static_assert(offsetof(ABP_InteractionWarpGoal_C, GoalTag) == 0x000270, "Member 'ABP_InteractionWarpGoal_C::GoalTag' has a wrong offset!");

}

