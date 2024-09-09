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
	 * WidgetBlueprintGeneratedClass WeaponStackBBaseView.WeaponStackBBaseView_C
	 * Size -> 0x03D9 (FullSize[0x0651] - InheritedSize[0x0278])
	 */
	class UWeaponStackBBaseView_C : public USBStackBMainViewBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InAnim;                                                  // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn08Effect_C*                                   Btn_Execute;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBonusLarge_C*                                    CmnBonus;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_Base2;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_Execute;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_204;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnAnim_LiquidMemoryActive_C*                       LiquidMemory;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBFailedAnimation_C*                            StackBFailedAnimation;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBNetworkLoadView_C*                            StackBNetworkLoadView;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBSuccessAnimation_C*                           StackBSuccessAnimation;                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 StepBtn1;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 StepBtn2;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 StepBtn3;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStackBStepButton_C*                                 StepBtn4;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponStackBResult_C*                               WeaponStackBResult;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Animations;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        TargetWeapon;                                            // 0x0318(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FOwnItemInfo>                                Materials;                                               // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseTicket;                                               // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_14SR[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBStackBPerk>                               SelectedPerks;                                           // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TokenID;                                                 // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VIG8[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SpecialUID;                                              // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSBStackBUseTicket                                  MaterialTickets;                                         // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UBP_Dialog_C*                                        Dialog;                                                  // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        AfterStackUpWeapon;                                      // 0x04B8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWeaponInheritSelect_C*                              InhelitView;                                             // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USelectMaterial_C*                                   MaterialSelect;                                          // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EnumStackBStep                                             ButtonPhase;                                             // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockClose;                                              // 0x0629(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GCI4[0x6];                                   // 0x062A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTicketSelectWeapon_C*                               TicketSelect;                                            // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsResultSuccess;                                         // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3B51[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SubAbilityWeaponUID;                                     // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bExecuting;                                              // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBlockClose(bool BlockClose);
		void StepResetSelectedData();
		void RewindStep4();
		void ResultUpdateSteps();
		void UpdateReward();
		void InitializeStep();
		void InitializeButtonNumber();
		void ResetAll();
		void UpdateStackButton();
		void GetStackBParams(class FString* UID, TArray<class FString>* Materials, TArray<struct FSBStackBUseTicket>* Tickets, TArray<struct FSBStackBSelect>* Perks, struct FSBStackBSelect* Vital, struct FSBStackBSelect* SubAbility);
		void FindMaterialByUniqueId(const class FString& UniqueId, struct FOwnItemInfo* ArrayElement);
		void UpdateLiquidMemory();
		void Construct();
		void BndEvt__WeaponStackBoostBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature();
		void EventOnSelectedWeapon(const struct FOwnItemInfo& ItemInfo);
		void ReselectWeapon();
		void BndEvt__WeaponStackBoostBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature();
		void EventOnSelectedMaterial(TArray<struct FOwnItemInfo>* Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket);
		void ReselectMaterial();
		void BndEvt__WeaponStackBoostBaseView_StepBtn4_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature();
		void BndEvt__WeaponStackBoostBaseView_StepBtn3_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature();
		void BndEvt__WeaponStackBoostBaseView_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
		void OnInhelitSelected(const class FString& SpecialPerkUID, const class FString& SubPerkUID, TArray<struct FSBStackBPerk>* SelectedPerks);
		void ReselectInherit();
		void OnSelectedBtn4(int32_t UseTokenId);
		void ReselectBt4();
		void Init();
		void Term();
		void OnCompleteWeaponStackB(int32_t RetCode, const struct FOwnItemInfo& Weapon, bool bSuccess);
		void EndDialog(EDialogResult Result);
		void BndEvt__WeaponStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_8_OnAnimPlayed__DelegateSignature();
		void BndEvt__WeaponStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_9_OnAnimPlayed__DelegateSignature();
		void BndEvt__WeaponStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void Close();
		void BindWatchdog_UI_Esc();
		void OnCloseWeaponSelect();
		void OnCloseMaterial();
		void OnCloseTicket();
		void OnCloseInhelit();
		void OnCloseEndDialog(EDialogResult Result);
		void Step2Open();
		void Step3Open();
		void Step4Open();
		void BndEvt__WeaponStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void EventOnBeginSelectWeapon();
		void EventOnEndSelectWeapon();
		void EventOnBeginSelectMaterial();
		void EventOnEndSelectMaterial();
		void EventOnBeginSelectWeaponInherit();
		void EventOnEndSelectWeaponInherit();
		void EventOnBeginSelectTicket();
		void EventOnEndSelectTicket();
		void EventOnBeginExecute();
		void EventOnEndExecute();
		void ExecuteUbergraph_WeaponStackBBaseView(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
