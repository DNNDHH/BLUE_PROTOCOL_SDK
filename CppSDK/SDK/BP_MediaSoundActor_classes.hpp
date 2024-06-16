#pragma once

 

// Package: BP_MediaSoundActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MediaSoundActor.BP_MediaSoundActor_C
// 0x0010 (0x0238 - 0x0228)
class ABP_MediaSoundActor_C final : public AActor
{
public:
	class UMediaSoundComponent*                   MediaSound;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MediaSoundActor_C">();
	}
	static class ABP_MediaSoundActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MediaSoundActor_C>();
	}
};
static_assert(alignof(ABP_MediaSoundActor_C) == 0x000008, "Wrong alignment on ABP_MediaSoundActor_C");
static_assert(sizeof(ABP_MediaSoundActor_C) == 0x000238, "Wrong size on ABP_MediaSoundActor_C");
static_assert(offsetof(ABP_MediaSoundActor_C, MediaSound) == 0x000228, "Member 'ABP_MediaSoundActor_C::MediaSound' has a wrong offset!");
static_assert(offsetof(ABP_MediaSoundActor_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_MediaSoundActor_C::DefaultSceneRoot' has a wrong offset!");

}

