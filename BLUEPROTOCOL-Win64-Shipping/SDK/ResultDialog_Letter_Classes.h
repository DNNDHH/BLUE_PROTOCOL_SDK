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
	 * WidgetBlueprintGeneratedClass ResultDialog_Letter.ResultDialog_Letter_C
	 * Size -> 0x0079 (FullSize[0x02F1] - InheritedSize[0x0278])
	 */
	class UResultDialog_Letter_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButton_C*                                         Btn_Decide;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               Btn_FullScreen;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose03_C*                                       CmnClose03;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResultRewardList_C*                                 LostItemList;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResultRewardList_C*                                 SendItemList;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextDecide;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBLost;                                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBSend;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EndAnimIn;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EndAnimOut;                                              // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsOpen;                                                  // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetEnableButtonClose(bool bInIsEnabled);
		void SetEnableButtonFullScreen(bool bInIsEnabled);
		void SetEnableButtonDecide(bool bInIsEnabled);
		void SetEnableButton(bool bInIsEnabled);
		void Closed();
		void PlayAnimationOut();
		void PlayAnimationIn();
		void Close();
		void Opened();
		void Open();
		void SetVisibleVBSend(bool IsVisible);
		void SetVisibleVBLost(bool IsVisible);
		void SetupSendItem(TArray<struct FOwnItemInfo>* InSendItems, int32_t InSkyCoin);
		void SetupLostItem(TArray<struct FOwnItemInfo>* InLostItems, const struct FSBOverLimit& InOverLimit);
		void Setup(const struct FSBLetter& InLetter, const struct FSBOverLimit& InOverLimit);
		void BindEscapeKey();
		void UnbindEscapeKey();
		void CustomEvent();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__ResultDialog_Letter_Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ResultDialog_Letter_CmnClose03_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void OnPressEsc();
		void Construct();
		void Destruct();
		void BndEvt__ResultDialog_Letter_Btn_FullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_ResultDialog_Letter(int32_t EntryPoint);
		void EndAnimOut__DelegateSignature();
		void EndAnimIn__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
