#pragma once

 

// Package: AnimNotify_BP_FootPrintLocomotion

#include "Basic.hpp"

#include "AnimNotify_BP_FootPrintBase_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C
// 0x0000 (0x00E0 - 0x00E0)
class UAnimNotify_BP_FootPrintLocomotion_C final : public UAnimNotify_BP_FootPrintBase_C
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	void GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType) const;
	bool IsLocomotion() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_BP_FootPrintLocomotion_C">();
	}
	static class UAnimNotify_BP_FootPrintLocomotion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_BP_FootPrintLocomotion_C>();
	}
};
static_assert(alignof(UAnimNotify_BP_FootPrintLocomotion_C) == 0x000008, "Wrong alignment on UAnimNotify_BP_FootPrintLocomotion_C");
static_assert(sizeof(UAnimNotify_BP_FootPrintLocomotion_C) == 0x0000E0, "Wrong size on UAnimNotify_BP_FootPrintLocomotion_C");

}

