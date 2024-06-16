#pragma once

 

// Package: BP_RootCoordinator

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RootCoordinator.BP_RootCoordinator_C
// 0x0008 (0x02B0 - 0x02A8)
class ABP_RootCoordinator_C final : public ASBRootCoordinator
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RootCoordinator_C">();
	}
	static class ABP_RootCoordinator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RootCoordinator_C>();
	}
};
static_assert(alignof(ABP_RootCoordinator_C) == 0x000008, "Wrong alignment on ABP_RootCoordinator_C");
static_assert(sizeof(ABP_RootCoordinator_C) == 0x0002B0, "Wrong size on ABP_RootCoordinator_C");
static_assert(offsetof(ABP_RootCoordinator_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_RootCoordinator_C::DefaultSceneRoot' has a wrong offset!");

}

