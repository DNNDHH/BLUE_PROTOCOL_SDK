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
	 * BlueprintGeneratedClass GA_Action_Movement.GA_Action_Movement_C
	 * Size -> 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
	 */
	class UGA_Action_Movement_C : public USBGameplayAbility_EnemyAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EventReceived_DC6488B9460FBDBF1C592493913CCCF7(const struct FGameplayEventData& Payload);
		void OnCancelled_F0A7509B4F9F16E6439C7895753943AC();
		void OnRefused_F0A7509B4F9F16E6439C7895753943AC();
		void OnCompleted_F0A7509B4F9F16E6439C7895753943AC();
		void EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Action_Movement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
