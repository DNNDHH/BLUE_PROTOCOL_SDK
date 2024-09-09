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
	 * BlueprintGeneratedClass BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class UBP_PlayerInteractionComponent_C : public USBPlayerInteractionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                ResurrectionTutorialHelpId;                              // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateInteractionInfo();
		void TutorialHelp();
		void OnChangeInteractionUI();
		void ExecuteUbergraph_BP_PlayerInteractionComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
