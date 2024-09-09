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
	 * WidgetBlueprintGeneratedClass WeaponInheritSelect.WeaponInheritSelect_C
	 * Size -> 0x066A (FullSize[0x08E2] - InheritedSize[0x0278])
	 */
	class UWeaponInheritSelect_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimBtn;                                                 // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimSelect;                                              // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn08Effect_C*                                   Btn_Decide;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_Rest;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnSubAbilityChange;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnVitalChange;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose03_C*                                       CmnClose03;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_SlotChangeView;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_ViewMaster;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_159;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_455;                                               // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInhelitPerkView_C*                                  InhelitPerkView;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpecialViewItem_C*                                  SpecialViewItem;                                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USubAbilityViewItem_C*                               SubAbilityViewItem;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_BtnReset;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponAssetView_C*                                  WeaponAssetView;                                         // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FOwnItemInfo                                        Target;                                                  // 0x0330(0x0150) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FOwnItemInfo>                                Materials;                                               // 0x0480(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FSBStackBPerk>                               StackBPerk;                                              // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FOwnItemInfo                                        SynthedTarget;                                           // 0x04B0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FOwnItemInfo                                        VitalStatus;                                             // 0x0600(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class UUserWidget*                                         ModalWindow;                                             // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SpecialParkUID;                                          // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FSBStackBPerk>                               SelectedPerks;                                           // 0x0768(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class USubAbilityViewSelect_C*                             SubAbilityWindow;                                        // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        SubVitalStatus;                                          // 0x0780(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SubAbilityUID;                                           // 0x08D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bSelectedWeaponInheritState;                             // 0x08E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCloseState;                                             // 0x08E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateBuildData();
		void FindArgSubVitalId(struct FOwnItemInfo* ArrayElement);
		void HowSubManyAbility(TArray<struct FOwnItemInfo>* OwnItems, const struct FOwnItemInfo& Target, int32_t* sum);
		void HowManyAbility(TArray<struct FOwnItemInfo>* OwnItems, const struct FOwnItemInfo& Target, int32_t* sum);
		void CloseSubWindow();
		void FindArgViralId(struct FOwnItemInfo* ArrayElement);
		void IsModalWindowOpen(bool* IsOpen);
		void CloseWindow();
		void AddViewChild(class UWidget* Content);
		void Initialize();
		void OnSelectedNewVitalType(const struct FOwnItemInfo& OnSelect);
		void OnCloseVitalSelect();
		void BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget);
		void OnClosePerkSelect();
		void ChangePerks(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select);
		void BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget);
		void BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
		void BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void Destruct();
		void OnRequestClose();
		void OnCheckedInhelit(EDialogResult Result);
		void BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature();
		void BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void CustomEvent2(const struct FOwnItemInfo& OnSelect);
		void CustomEvent_3();
		void BndEvt__WeaponInheritSelect_BtnVitalChange_1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void RequestClose();
		void EventOnBeginSelectedWeaponInherit();
		void EventOnAbortSelectedWeaponInherit();
		void EventOnEndSelectedWeaponInherit();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_WeaponInheritSelect(int32_t EntryPoint);
		void OnSelected__DelegateSignature(const class FString& SpecialPerkUID, const class FString& SubPerkUID, TArray<struct FSBStackBPerk>* SelectedPerks);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
