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
	 * BlueprintGeneratedClass BP_OrnamentCreateActor.BP_OrnamentCreateActor_C
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class ABP_OrnamentCreateActor_C : public ASBOrnamentCreateActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void RequestCustomOrnament(const class FName& OrnamentName);
		void BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature(class AActor* InOtherActor, const struct FRotator& ViewRotation);
		void RequestPlayerEmote(class ASBPlayerCharacter* PlayerCharacter);
		void CompleteRoomInfo(int32_t RetCode);
		void AttachedPlayerState(class ASBPlayerController* PlayerController);
		void RequestRoomInfo();
		void RequestInteractEffect();
		void ExecuteUbergraph_BP_OrnamentCreateActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
