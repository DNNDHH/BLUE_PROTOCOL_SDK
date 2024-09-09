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
	 * BlueprintGeneratedClass GA_Action_Attack.GA_Action_Attack_C
	 * Size -> 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
	 */
	class UGA_Action_Attack_C : public USBGameplayAbility_EnemyAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EventReceived_CF64C8B04D1460C574E183BA1F5D33C8(const struct FGameplayEventData& Payload);
		void OnCancelled_5CFEF54C48E99683B2F15DB38298EA15();
		void OnRefused_5CFEF54C48E99683B2F15DB38298EA15();
		void OnCompleted_5CFEF54C48E99683B2F15DB38298EA15();
		void OnCancelled_A44F33CB4EB8E05E9A81EBB8A3499722();
		void OnRefused_A44F33CB4EB8E05E9A81EBB8A3499722();
		void OnCompleted_A44F33CB4EB8E05E9A81EBB8A3499722();
		void EventReceived_6EF7D6834E0D17349213C7B878C9E94B(const struct FGameplayEventData& Payload);
		void EventReceived_D04A5F7146685BC738583AA5F1379270(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void SubCommand();
		void ExecuteUbergraph_GA_Action_Attack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
