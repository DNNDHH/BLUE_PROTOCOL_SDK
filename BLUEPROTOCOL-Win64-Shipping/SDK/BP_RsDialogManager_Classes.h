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
	 * WidgetBlueprintGeneratedClass BP_RsDialogManager.BP_RsDialogManager_C
	 * Size -> 0x01EA (FullSize[0x047A] - InheritedSize[0x0290])
	 */
	class UBP_RsDialogManager_C : public USBRmShopMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut_Dialog;                                          // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn_Dialog;                                           // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut_Base;                                            // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn_Base;                                             // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_RsDialog_Caution_C*                              BP_RsDialog_Caution;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_ChargeRoseOrb_C*                        BP_RsDialog_ChargeRoseOrb;                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_Completed_C*                            BP_RsDialog_Completed;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_ErrorCode_C*                            BP_RsDialog_ErrorCode;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_InputCoupon_C*                          BP_RsDialog_InputCoupon;                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_LimitCondition_C*                       BP_RsDialog_LimitCondition;                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_Payment_C*                              BP_RsDialog_Payment;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_Processing_C*                           BP_RsDialog_Processing;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_Purchase_C*                             BP_RsDialog_Purchase;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_UseItem_C*                              BP_RsDialog_UseItem;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem2_C*                             Btn_Commerce;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        Btn_Exit;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_100;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_01;                                                 // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_02;                                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_03;                                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_04;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_05;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_06;                                                 // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_07;                                                 // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_08;                                                 // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DBtn_09;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFlatShop_Credit_C*                                  FlatShop_Credit;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Base;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Cover;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBCursorStateHandle                                CursorHandle;                                            // 0x0388(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		ESBRmShopMenuType                                          ShopType;                                                // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsExecUI;                                                // 0x038D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsExecDialog;                                            // 0x038E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAnim_Base;                                             // 0x038F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAnim_Dialog;                                           // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsProcessing;                                            // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ERsDialogType                                              NowDialog;                                               // 0x0392(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERsDialogType                                              NextDialog;                                              // 0x0393(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HTAK[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ERsDialogType                                              NextDialog_Reserve;                                      // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OMJZ[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FST_RsDialogCommonInfo                              DialogCommonInfo;                                        // 0x03B0(0x0048) Edit, BlueprintVisible, HasGetValueTypeHash
		ERsDialogButtonType                                        PaymentType;                                             // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ECBQ[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PassedTime;                                              // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Input_CouponCode;                                        // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUseCoupon;                                             // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       LockDialog;                                              // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ERsDialogCurrencyPaidType                                  CurrencyPaidType;                                        // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YN8P[0x6];                                   // 0x0422(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ERsDialogCurrencyPaidType, class UAkAudioEvent*>      SeMap;                                                   // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsESC;                                                   // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsLack;                                                 // 0x0479(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExitClickedEscBtn();
		void SwitchNextDialog();
		void SetNextDialog(ERsDialogType NextDialog);
		void SetShopType(ESBRmShopMenuType ShopType);
		void Initialize();
		void SetErrorMessage(int32_t MessageId, int32_t ErrorCode);
		void BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void ShowDialog_InputCoupon();
		void BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature(const class FString& Code);
		void ShowDialog_LimitCondition();
		void BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void AddItem_LimitCondition(bool IsAchieve, const class FString& Text);
		void ShowDialog_ChargeRoseOrb();
		void BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void ShowDialog_ErrorMessage(int32_t ErrorCode);
		void BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void ShowDialog_Processing();
		void BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature();
		void ShowDialog_UseItem(const class FText& EffectDescription);
		void BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType);
		void BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void PlaySE_Completed();
		void ShowDialog_Payment();
		void BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void ShowDialog_Purchase();
		void BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		void SetDiscountRate(int32_t Rate);
		void SetDiscountRate_SeasonPass(int32_t Rate);
		void Construct();
		void Destruct();
		void ShowDialog_Caution();
		void Show();
		void Hide();
		void StartUI();
		void EndUI();
		void EndAnimIn_Base();
		void EndAnimOut_Base();
		void EndAnimIn_Dialog();
		void EndAnimOut_Dialog();
		void BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SwitchDialog(ERsDialogType Type);
		void BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void HideDialog();
		void SetCommonInfo(ERsDialogProductTitleType ProductTilteType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, bool ShowPurchaseNum, int32_t PurchaseNum, ERsDialogPaymentType PaymentType01, int32_t PurchasePrice01, ERsDialogPaymentType PaymentType02, int32_t PurchasePrice02, bool PaidOnly);
		void BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void CloseDialog_Force();
		void BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature();
		void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature();
		void JumpShopMenu(ESBRmShopMenuType Shop);
		void NextDialog_Event();
		void SetRoseOrb(int32_t Free, int32_t Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired);
		void SetBPPoint(int32_t BP);
		void SetSeasonPoint(int32_t SP);
		void CheckEndAnimIn_Event();
		void BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
		void RegistInput();
		void OnCloseDialog();
		void BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_BP_RsDialogManager(int32_t EntryPoint);
		void OnUseCoupon__DelegateSignature(const class FString& CouponCode);
		void OnButtonClicked__DelegateSignature(ERsDialogType RsDialogType, ERsDialogButtonType ClickedButtonType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
