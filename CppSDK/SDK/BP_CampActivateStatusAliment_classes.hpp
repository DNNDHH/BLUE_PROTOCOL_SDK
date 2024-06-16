#pragma once

 

// Package: BP_CampActivateStatusAliment

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampActivateStatusAliment.BP_CampActivateStatusAliment_C
// 0x0000 (0x0070 - 0x0070)
class UBP_CampActivateStatusAliment_C final : public USBAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampActivateStatusAliment_C">();
	}
	static class UBP_CampActivateStatusAliment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CampActivateStatusAliment_C>();
	}
};
static_assert(alignof(UBP_CampActivateStatusAliment_C) == 0x000008, "Wrong alignment on UBP_CampActivateStatusAliment_C");
static_assert(sizeof(UBP_CampActivateStatusAliment_C) == 0x000070, "Wrong size on UBP_CampActivateStatusAliment_C");

}

