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
	 * WidgetBlueprintGeneratedClass CmnBtn08Effect.CmnBtn08Effect_C
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class UCmnBtn08Effect_C : public USBBindInputActionButtonBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    BtnAnim;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_416;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable

	public:
		void SetDefaultTextColor();
		void SetDecideTextColor();
		void OnOutAnimEnd();
		void StopAnimation();
		void PlayAnimation();
		void BndEvt__CmnBtn08Effect_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CmnBtn08Effect_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CmnBtn08Effect_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnSetIsEnabled(bool bInIsEnabled);
		void ExecuteUbergraph_CmnBtn08Effect(int32_t EntryPoint);
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
