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
	 * BlueprintGeneratedClass BP_InteractionSwBase.BP_InteractionSwBase_C
	 * Size -> 0x0042 (FullSize[0x026A] - InheritedSize[0x0228])
	 */
	class ABP_InteractionSwBase_C : public ASBInteractionSwBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_FieldInteractionComponent_C*                     InteractionComponent;                                    // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBFieldStatusComponent*                             FieldStatus;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Replication;                                             // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1MKT[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Interaction;                                             // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Recycle;                                                 // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GW54[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownTime;                                            // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Blocker;                                                 // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheckAlive;                                              // 0x0269(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsInteractionDisable(class AActor* InOtherActor);
		void OnRep_NewDoorStatus();
		void OnRep_DoorStatus();
		void OnRep_status();
		void UserConstructionScript();
		void RecycleSw();
		void CleanupBlocker(EFieldStatus NewStatus);
		void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
		void ReceiveTick(float DeltaSeconds);
		void OnInteractionSw(class AActor* OtherActor, const struct FRotator& Rotator);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_InteractionSwBase(int32_t EntryPoint);
		void Interaction__DelegateSignature(class AActor* OtherActor, const struct FRotator& ViewRotation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
