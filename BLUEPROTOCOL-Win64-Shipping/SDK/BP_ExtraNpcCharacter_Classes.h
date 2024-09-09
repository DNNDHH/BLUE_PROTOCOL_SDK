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
	 * BlueprintGeneratedClass BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C
	 * Size -> 0x00C0 (FullSize[0x09E0] - InheritedSize[0x0920])
	 */
	class ABP_ExtraNpcCharacter_C : public ASBExtraNpcCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0920(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBBreathComponent*                                  SBBreath;                                                // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBFootprintComponent*                               SBFootprint;                                             // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        InteractEvents;                                          // 0x0938(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        SelectEvents;                                            // 0x0948(0x0010) Edit, BlueprintVisible
		float                                                      Warp_Threshold;                                          // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      EyeEmissive;                                             // 0x095C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        WarpEmissiveColor;                                       // 0x0960(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class FString>                           ScriptParamMap;                                          // 0x0970(0x0050) Edit, BlueprintVisible
		class FName                                                NPC_Stance;                                              // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Before_Stance;                                           // 0x09C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Enable_InteractionTags;                                  // 0x09D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool IsInteractionDisable(class AActor* InOtherActor);
		bool CanBeTargetedNow();
		struct FVector GetTargetLocation();
		bool IsValidTargetFor(class AActor* TargetingActor);
		void RegisterWithManager();
		void UnregisterFromManager();
		void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
		void NotifyDeactivated();
		void ReceivePostSpawnBySpawner();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_ExtraNpcCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
