#pragma once

 

// Package: BP_DHC_OutPortal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PartyPortal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DHC_OutPortal.BP_DHC_OutPortal_C
// 0x0018 (0x02D0 - 0x02B8)
class ABP_DHC_OutPortal_C final : public ABP_PartyPortal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DHC_OutPortal_C;                 // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APlayerController*>              PlayerMembers;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_DHC_OutPortal(int32 EntryPoint);
	void CustomEvent();
	void TeleportOut(const TArray<class APlayerController*>& Param_PlayerMembers);
	void Interacted(class AActor* Other_Actor, const struct FRotator& View_Rotation);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DHC_OutPortal_C">();
	}
	static class ABP_DHC_OutPortal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DHC_OutPortal_C>();
	}
};
static_assert(alignof(ABP_DHC_OutPortal_C) == 0x000008, "Wrong alignment on ABP_DHC_OutPortal_C");
static_assert(sizeof(ABP_DHC_OutPortal_C) == 0x0002D0, "Wrong size on ABP_DHC_OutPortal_C");
static_assert(offsetof(ABP_DHC_OutPortal_C, UberGraphFrame_BP_DHC_OutPortal_C) == 0x0002B8, "Member 'ABP_DHC_OutPortal_C::UberGraphFrame_BP_DHC_OutPortal_C' has a wrong offset!");
static_assert(offsetof(ABP_DHC_OutPortal_C, PlayerMembers) == 0x0002C0, "Member 'ABP_DHC_OutPortal_C::PlayerMembers' has a wrong offset!");

}

