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
	 * BlueprintGeneratedClass BP_NpcCharacter.BP_NpcCharacter_C
	 * Size -> 0x0070 (FullSize[0x0980] - InheritedSize[0x0910])
	 */
	class ABP_NpcCharacter_C : public ASBNpcCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0910(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBBreathComponent*                                  SBBreath;                                                // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBStateInitializerComponent*                        SBStateInitializer;                                      // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBFootprintComponent*                               SBFootprint;                                             // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_BalloonComponent_C*                              BP_BalloonComponent;                                     // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASAnimationSet*                                     AnimSet;                                                 // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Warp_Threshold;                                          // 0x0940(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        WarpColor;                                               // 0x0944(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      EyeHighlightEmissive;                                    // 0x0954(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyDeath;                                              // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class FName                                                NPC_Stance;                                              // 0x095C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Before_Stance;                                           // 0x0964(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0ZJX[0x4];                                   // 0x096C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Enable_InteractionTags;                                  // 0x0970(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool IsInteractionDisable(class AActor* InOtherActor);
		void ReceiveTick(float DeltaSeconds);
		void NotifyDeactivated();
		void ReceivePostSpawnBySpawner();
		void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
		void ExecuteUbergraph_BP_NpcCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
