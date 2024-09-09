#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PartyPortal.BP_PartyPortal_C
	 * Size -> 0x004E (FullSize[0x02B8] - InheritedSize[0x026A])
	 */
	class ABP_PartyPortal_C : public ABP_InteractionSwBase_C
	{
	public:
		unsigned char                                              UnknownData_RFWL[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_ENV_WarpDevicePedestal_S_Active;                      // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_WarpStone_SM_ENV_cmn_warp001_a_01;                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_InteractionWarpGoal_C*                           GoalActor;                                               // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PartyWarpEnd;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PartyWarpStart;                                          // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetWarpPlayers(class ASBPlayerCharacter* Owner, TArray<class ASBPlayerCharacter*>* WarpPlayers);
		void ClearGoalActor();
		void SetGoalActor(class ABP_InteractionWarpGoal_C* GoalTargetActor);
		void DebugPrint(const class FString& inString);
		void ReceiveBeginPlay();
		void Teleport_FadeIn(class ABP_InteractionWarpGoal_C* WarpGoal, class ASBPlayerCharacter* AccessPlayer);
		void Interacted(class AActor* OtherActor, const struct FRotator& ViewRotation);
		void LocalWarpEnd();
		void ExecuteUbergraph_BP_PartyPortal(int32_t EntryPoint);
		void PartyWarpStart__DelegateSignature(class ASBPlayerCharacter* WarpTarget);
		void PartyWarpEnd__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
