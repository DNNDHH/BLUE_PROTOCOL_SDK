#pragma once

 

// Package: BP_FactionCoordinator

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FactionCoordinator.BP_FactionCoordinator_C
// 0x0008 (0x02C0 - 0x02B8)
class ABP_FactionCoordinator_C final : public ASBFactionCoordinator
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FactionCoordinator_C">();
	}
	static class ABP_FactionCoordinator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FactionCoordinator_C>();
	}
};
static_assert(alignof(ABP_FactionCoordinator_C) == 0x000008, "Wrong alignment on ABP_FactionCoordinator_C");
static_assert(sizeof(ABP_FactionCoordinator_C) == 0x0002C0, "Wrong size on ABP_FactionCoordinator_C");
static_assert(offsetof(ABP_FactionCoordinator_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_FactionCoordinator_C::DefaultSceneRoot' has a wrong offset!");

}

