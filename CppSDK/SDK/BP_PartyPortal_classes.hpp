#pragma once

 

// Package: BP_PartyPortal

#include "Basic.hpp"

#include "BP_InteractionSwBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PartyPortal.BP_PartyPortal_C
// 0x0048 (0x02B8 - 0x0270)
class ABP_PartyPortal_C : public ABP_InteractionSwBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PartyPortal_C;                   // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               PS_ENV_WarpDevicePedestal_S_Active;                // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WarpStone_SM_ENV_cmn_warp001_a_01;              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_InteractionWarpGoal_C*              GoalActor;                                         // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             PartyWarpEnd;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PartyWarpStart;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PartyWarpEnd__DelegateSignature();
	void PartyWarpStart__DelegateSignature(class ASBPlayerCharacter* WarpTarget);
	void ExecuteUbergraph_BP_PartyPortal(int32 EntryPoint);
	void LocalWarpEnd();
	void Interacted(class AActor* Other_Actor, const struct FRotator& View_Rotation);
	void Teleport_FadeIn(class ABP_InteractionWarpGoal_C* WarpGoal, class ASBPlayerCharacter* AccessPlayer);
	void ReceiveBeginPlay();
	void DebugPrint(const class FString& InString);
	void SetGoalActor(class ABP_InteractionWarpGoal_C* GoalTargetActor);
	void ClearGoalActor();
	void GetWarpPlayers(const class ASBPlayerCharacter* Param_Owner, TArray<class ASBPlayerCharacter*>* WarpPlayers);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PartyPortal_C">();
	}
	static class ABP_PartyPortal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PartyPortal_C>();
	}
};
static_assert(alignof(ABP_PartyPortal_C) == 0x000008, "Wrong alignment on ABP_PartyPortal_C");
static_assert(sizeof(ABP_PartyPortal_C) == 0x0002B8, "Wrong size on ABP_PartyPortal_C");
static_assert(offsetof(ABP_PartyPortal_C, UberGraphFrame_BP_PartyPortal_C) == 0x000270, "Member 'ABP_PartyPortal_C::UberGraphFrame_BP_PartyPortal_C' has a wrong offset!");
static_assert(offsetof(ABP_PartyPortal_C, PS_ENV_WarpDevicePedestal_S_Active) == 0x000278, "Member 'ABP_PartyPortal_C::PS_ENV_WarpDevicePedestal_S_Active' has a wrong offset!");
static_assert(offsetof(ABP_PartyPortal_C, SM_WarpStone_SM_ENV_cmn_warp001_a_01) == 0x000280, "Member 'ABP_PartyPortal_C::SM_WarpStone_SM_ENV_cmn_warp001_a_01' has a wrong offset!");
static_assert(offsetof(ABP_PartyPortal_C, Sphere) == 0x000288, "Member 'ABP_PartyPortal_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_PartyPortal_C, GoalActor) == 0x000290, "Member 'ABP_PartyPortal_C::GoalActor' has a wrong offset!");
static_assert(offsetof(ABP_PartyPortal_C, PartyWarpEnd) == 0x000298, "Member 'ABP_PartyPortal_C::PartyWarpEnd' has a wrong offset!");
static_assert(offsetof(ABP_PartyPortal_C, PartyWarpStart) == 0x0002A8, "Member 'ABP_PartyPortal_C::PartyWarpStart' has a wrong offset!");

}

