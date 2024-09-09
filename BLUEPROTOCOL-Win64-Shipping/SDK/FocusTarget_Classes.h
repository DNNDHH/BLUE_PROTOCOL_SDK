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
	 * WidgetBlueprintGeneratedClass FocusTarget.FocusTarget_C
	 * Size -> 0x0018 (FullSize[0x0338] - InheritedSize[0x0320])
	 */
	class UFocusTarget_C : public USBFocusTargetWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0328(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimHide;                                                // 0x0330(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		void OnStopAnimOut();
		void OnPlayAnimOut();
		void OnStopAnimIn();
		void OnPlayAnimIn();
		void OnFadeOutDeath();
		void OnBindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter);
		void OnUnbindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter);
		void WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_FocusTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
