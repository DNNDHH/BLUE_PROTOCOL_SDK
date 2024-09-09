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
	 * BlueprintGeneratedClass GA_Action_Cancel.GA_Action_Cancel_C
	 * Size -> 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
	 */
	class UGA_Action_Cancel_C : public USBGameplayAbility_EnemyAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnCancelled_4565D44A40D52A401330AE96906B75A0();
		void OnRefused_4565D44A40D52A401330AE96906B75A0();
		void OnCompleted_4565D44A40D52A401330AE96906B75A0();
		void EventReceived_B985FB814EB02487BF36918A821F5C0C(const struct FGameplayEventData& Payload);
		void EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Action_Cancel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
