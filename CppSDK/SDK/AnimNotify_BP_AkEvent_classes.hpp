#pragma once

 

// Package: AnimNotify_BP_AkEvent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_BP_AkEvent.AnimNotify_BP_AkEvent_C
// 0x0018 (0x00B8 - 0x00A0)
class UAnimNotify_BP_AkEvent_C final : public USBAnimNotify_AkEvent
{
public:
	class FString                                 Attach_Name;                                       // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          StopWhenOwnerDestroyed;                            // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CanReuseAkComponent;                               // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_BP_AkEvent_C">();
	}
	static class UAnimNotify_BP_AkEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_BP_AkEvent_C>();
	}
};
static_assert(alignof(UAnimNotify_BP_AkEvent_C) == 0x000008, "Wrong alignment on UAnimNotify_BP_AkEvent_C");
static_assert(sizeof(UAnimNotify_BP_AkEvent_C) == 0x0000B8, "Wrong size on UAnimNotify_BP_AkEvent_C");
static_assert(offsetof(UAnimNotify_BP_AkEvent_C, Attach_Name) == 0x0000A0, "Member 'UAnimNotify_BP_AkEvent_C::Attach_Name' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_AkEvent_C, StopWhenOwnerDestroyed) == 0x0000B0, "Member 'UAnimNotify_BP_AkEvent_C::StopWhenOwnerDestroyed' has a wrong offset!");
static_assert(offsetof(UAnimNotify_BP_AkEvent_C, CanReuseAkComponent) == 0x0000B1, "Member 'UAnimNotify_BP_AkEvent_C::CanReuseAkComponent' has a wrong offset!");

}

