#pragma once

 

// Package: BP_CampDeactivateStatusAliment

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampDeactivateStatusAliment.BP_CampDeactivateStatusAliment_C
// 0x0000 (0x0070 - 0x0070)
class UBP_CampDeactivateStatusAliment_C final : public USBAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampDeactivateStatusAliment_C">();
	}
	static class UBP_CampDeactivateStatusAliment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CampDeactivateStatusAliment_C>();
	}
};
static_assert(alignof(UBP_CampDeactivateStatusAliment_C) == 0x000008, "Wrong alignment on UBP_CampDeactivateStatusAliment_C");
static_assert(sizeof(UBP_CampDeactivateStatusAliment_C) == 0x000070, "Wrong size on UBP_CampDeactivateStatusAliment_C");

}

