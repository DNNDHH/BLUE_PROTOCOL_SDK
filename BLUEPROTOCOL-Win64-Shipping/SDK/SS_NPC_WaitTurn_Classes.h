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
	 * BlueprintGeneratedClass SS_NPC_WaitTurn.SS_NPC_WaitTurn_C
	 * Size -> 0x0014 (FullSize[0x0054] - InheritedSize[0x0040])
	 */
	class USS_NPC_WaitTurn_C : public USBCustomState_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Start_Ratio;                                             // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      End_Ratio;                                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Complete_Ratio;                                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool* IsCompleted);
		void SetCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool IsCompleted);
		void GetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeLength);
		void GetTempAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeRatio);
		void SetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeLength);
		void SetTempAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeRatio);
		void GetStartTime(class USBNpcCharacterAnimInstance* AnimInstance, struct FDateTime* StartTime);
		void SetStartTime(class USBNpcCharacterAnimInstance* AnimInstance);
		void EndProcess(class ASBMobCharacter* MobCharacter, class USBNpcCharacterAnimInstance* AnimInstance);
		void TickDelegateProcess(class AActor* Actor, class USBNpcCharacterAnimInstance* AnimInstance);
		void TickProcess(class USBNpcCharacterAnimInstance* AnimInstance);
		void BeginProcess(class ASBMobCharacter* MobCharacer, class USBNpcCharacterAnimInstance* AnimInstance);
		void ReceiveEndPlay(class UAnimInstance* AnimInstance);
		void TickDelegate(class ASBMobCharacter* InMobCharacter);
		void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
		void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
		void ExecuteUbergraph_SS_NPC_WaitTurn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
