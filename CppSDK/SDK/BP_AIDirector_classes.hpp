#pragma once

 

// Package: BP_AIDirector

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIDirector.BP_AIDirector_C
// 0x0008 (0x0288 - 0x0280)
class ABP_AIDirector_C final : public ASBAIDirector
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIDirector_C">();
	}
	static class ABP_AIDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AIDirector_C>();
	}
};
static_assert(alignof(ABP_AIDirector_C) == 0x000008, "Wrong alignment on ABP_AIDirector_C");
static_assert(sizeof(ABP_AIDirector_C) == 0x000288, "Wrong size on ABP_AIDirector_C");
static_assert(offsetof(ABP_AIDirector_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_AIDirector_C::DefaultSceneRoot' has a wrong offset!");

}

