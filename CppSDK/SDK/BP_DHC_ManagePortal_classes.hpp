#pragma once

 

// Package: BP_DHC_ManagePortal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PartyPortal_classes.hpp"
#include "EN_DHC_InteractResult_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DHC_ManagePortal.BP_DHC_ManagePortal_C
// 0x0030 (0x02E8 - 0x02B8)
class ABP_DHC_ManagePortal_C final : public ABP_PartyPortal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DHC_ManagePortal_C;              // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_DHCMeasurer_C*>              DBSTarget;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         LoopIdx;                                           // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_638C[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DHC_Interacted;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void DHC_Interacted__DelegateSignature(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result);
	void ExecuteUbergraph_BP_DHC_ManagePortal(int32 EntryPoint);
	void DHCInteractionResult(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result);
	void GetFreeDHCMesasurer(class ABP_DHCMeasurer_C** VacantArea);
	void GetPlayerNowDHC(class APlayerController* Controller, class ABP_DHCMeasurer_C** NowDHC);
	void CheckPartyId(class ASBPlayerCharacter* PlayerCharacter, bool* IsValid);
	void CheckPartyMemberMenu(class ASBPlayerCharacter* PlayerCharacter, bool* CanStart);
	void Interacted(class AActor* Other_Actor, const struct FRotator& View_Rotation);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DHC_ManagePortal_C">();
	}
	static class ABP_DHC_ManagePortal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DHC_ManagePortal_C>();
	}
};
static_assert(alignof(ABP_DHC_ManagePortal_C) == 0x000008, "Wrong alignment on ABP_DHC_ManagePortal_C");
static_assert(sizeof(ABP_DHC_ManagePortal_C) == 0x0002E8, "Wrong size on ABP_DHC_ManagePortal_C");
static_assert(offsetof(ABP_DHC_ManagePortal_C, UberGraphFrame_BP_DHC_ManagePortal_C) == 0x0002B8, "Member 'ABP_DHC_ManagePortal_C::UberGraphFrame_BP_DHC_ManagePortal_C' has a wrong offset!");
static_assert(offsetof(ABP_DHC_ManagePortal_C, DBSTarget) == 0x0002C0, "Member 'ABP_DHC_ManagePortal_C::DBSTarget' has a wrong offset!");
static_assert(offsetof(ABP_DHC_ManagePortal_C, LoopIdx) == 0x0002D0, "Member 'ABP_DHC_ManagePortal_C::LoopIdx' has a wrong offset!");
static_assert(offsetof(ABP_DHC_ManagePortal_C, DHC_Interacted) == 0x0002D8, "Member 'ABP_DHC_ManagePortal_C::DHC_Interacted' has a wrong offset!");

}

