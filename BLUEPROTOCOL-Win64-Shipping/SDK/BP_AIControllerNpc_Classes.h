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
	 * BlueprintGeneratedClass BP_AIControllerNpc.BP_AIControllerNpc_C
	 * Size -> 0x0019 (FullSize[0x0369] - InheritedSize[0x0350])
	 */
	class ABP_AIControllerNpc_C : public ASBAIController_Npc
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class USBUtilityOption*>                            UtilityOptions;                                          // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsBindnteraction;                                        // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void StartTalk(class AActor* TalkTarget);
		void RegisterUtilityOption();
		void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void OnOwnerDeactivate(class ASBMobCharacter* InMobCharacter);
		void OnOwnerActivate(class ASBMobCharacter* InMobCharacter);
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_BP_AIControllerNpc(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
