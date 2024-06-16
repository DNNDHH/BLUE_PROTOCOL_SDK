#pragma once

 

// Package: BP_TitleGameMode

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TitleGameMode.BP_TitleGameMode_C
// 0x0008 (0x0318 - 0x0310)
class ABP_TitleGameMode_C final : public AGameMode
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TitleGameMode_C">();
	}
	static class ABP_TitleGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TitleGameMode_C>();
	}
};
static_assert(alignof(ABP_TitleGameMode_C) == 0x000008, "Wrong alignment on ABP_TitleGameMode_C");
static_assert(sizeof(ABP_TitleGameMode_C) == 0x000318, "Wrong size on ABP_TitleGameMode_C");
static_assert(offsetof(ABP_TitleGameMode_C, DefaultSceneRoot) == 0x000310, "Member 'ABP_TitleGameMode_C::DefaultSceneRoot' has a wrong offset!");

}

