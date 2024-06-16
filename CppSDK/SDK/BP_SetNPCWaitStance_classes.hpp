#pragma once

 

// Package: BP_SetNPCWaitStance

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SetNPCWaitStance.BP_SetNPCWaitStance_C
// 0x0008 (0x0078 - 0x0070)
class UBP_SetNPCWaitStance_C final : public USBAnimNotify
{
public:
	class FName                                   Stance;                                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SetNPCWaitStance_C">();
	}
	static class UBP_SetNPCWaitStance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SetNPCWaitStance_C>();
	}
};
static_assert(alignof(UBP_SetNPCWaitStance_C) == 0x000008, "Wrong alignment on UBP_SetNPCWaitStance_C");
static_assert(sizeof(UBP_SetNPCWaitStance_C) == 0x000078, "Wrong size on UBP_SetNPCWaitStance_C");
static_assert(offsetof(UBP_SetNPCWaitStance_C, Stance) == 0x000070, "Member 'UBP_SetNPCWaitStance_C::Stance' has a wrong offset!");

}

