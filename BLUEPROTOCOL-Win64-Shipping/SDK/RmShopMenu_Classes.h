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
	 * WidgetBlueprintGeneratedClass RmShopMenu.RmShopMenu_C
	 * Size -> 0x02D2 (FullSize[0x0592] - InheritedSize[0x02C0])
	 */
	class URmShopMenu_C : public USBRmShopMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShopOut;                                                 // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MenuOut;                                                 // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShopIn;                                                  // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MenuIn;                                                  // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BG_Mask_Black;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     BgBlur;                                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCertificationWindow_C*                              Bp_Certification;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        Btn_Exit;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_BPPE;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_BPPS;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_Gasya;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem3_C*                             Btn_Shop_NEWS;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_ROP;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_ROS;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_SPP;                                            // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_SPRP;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              Btn_Shop_SPS;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ExtraGrp;                                                // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_90;                                                // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        LeftSideGrp;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem2_C*                             MenuItem2_BpHistory;                                     // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem2_C*                             MenuItem2_Certification;                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem2_C*                             MenuItem2_Commerce;                                      // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem2_C*                             MenuItem2_RoHistory;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RightSideGrp;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenuBg_C*                                     RmShopMenuBg;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SBoxBpHistory;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SBoxCertification;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SBoxCommerce;                                            // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SBoxRoHistory;                                           // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SubWidgetGrp;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Base;                                          // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Float;                                         // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Float_Ex;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Menu;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRmShopMenuChildBase*                              CurrentShop;                                             // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBRmShopMenuType                                          CurrentShopType;                                         // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U1V9[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              RmShopMap[0x50];                                         // 0x0400(0x0050) UNKNOWN PROPERTY: MapProperty
		bool                                                       IsCertification;                                         // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHistory;                                               // 0x0451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0MRR[0x6];                                   // 0x0452(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBPlayerController*                                 PlayerController;                                        // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBRmShopComponent*                                  RmShopCmp;                                               // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URmShopMenu_MenuItem_C*                              LastSelctedMenu;                                         // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBRmShopMenuType                                          StartUpShopType;                                         // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_DWJ7[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCommandMenuVisible;                                    // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBCryptoCurrency                                   VirtualCurrency;                                         // 0x0488(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UBP_RsDialogManager_C*                               DialogManager;                                           // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDialogButtonClicked;                                   // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCertificated;                                          // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LSPT[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDialogUseCoupon;                                       // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsFinished;                                              // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBRmShopMenuType                                          NextShopType;                                            // 0x04E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y4G8[0x6];                                   // 0x04E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBRmShopMenuChildBase*                              ExtraWindow;                                             // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsExtra;                                                 // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7MIK[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBCountryConfigMasterData                          CountryConfig;                                           // 0x04F8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSkipBtnChange;                                         // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDelAmount;                                             // 0x0541(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TXG5[0x6];                                   // 0x0542(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateTime;                                                // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWBP_RmShopMaintenanceAll_C*                         Maintenance;                                             // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_StatusCheck;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHistoryWindow_C*                                    BP_History;                                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BP_History_soft[0x28];                                   // 0x0568(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsReadyEx;                                               // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRevertEx;                                              // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetEscExtra(bool IsShow);
		void SetMaskBGVisibility(bool IsVisibility);
		void GetExpiredTimeRoseOrb(struct FDateTime* Date);
		void GetBpHistory(class UHistoryWindow_C** Widget);
		void SetIconCaution();
		void GetOutSiteURL(ESBCashExchangeType Type, class FString* URL);
		void SetShopBtn_ExtraWindow(bool Open, bool Close, bool Swtich, ESBRmShopMenuType NextShop);
		void SetBirthdayInfo(int32_t Year, int32_t Month, int32_t Count, bool IsRegister);
		void InitButtonState();
		void SetCommandMenuVisible(bool IsVisivle);
		void SelectShopBtn(class URmShopMenu_MenuItem_C* InShopBtn);
		void GetComponentRef(bool* Ret);
		void ExecSubWindow(bool IsOpen);
		void OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55(class UClass* Loaded);
		void OnLoaded_41D74A5F49658128DFE26A8ECAB6D644(class UClass* Loaded);
		void ShowDialog_Purchase();
		void ShowDialog_ErrorMessage(int32_t ErrorCode);
		void ShowDialog_Payment();
		void ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType);
		void ShowDialog_UseItem(const class FText& EffectDescription);
		void SetDialog_CommonInfo(ERsDialogProductTitleType ProductTitleType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, bool ShowPurchaseNum, int32_t PurchaseNum, ERsDialogPaymentType PaymentType, int32_t PurchasePrice, bool PaidOnly);
		void ShowDialog_Processing();
		void CloseDialog();
		void ShowDialog_LimitCondition();
		void AddItem_LimitCondition(bool IsAchieve, const class FString& Text);
		void ShowDialog_InputCoupon();
		void ShowDialog_ChargeRoseOrb();
		void ShowDialog_Caution();
		void SetDiscountRate(int32_t Rate);
		void SetRoseOrb(int32_t Free, int32_t Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired);
		void SetBPPoint(int32_t BP);
		void SetSeasonPoint(int32_t SP);
		void SetDiscountRate_SeasonPass(int32_t Rate);
		void Request_Certification(int32_t Year, int32_t Month);
		void OnCertification_Event(bool Result, int32_t RetCode);
		void Request_GetHistory(ESBHistoryType Type, int32_t Year, int32_t Month, int32_t Count);
		void OnGetHistory_Event(bool Result, int32_t RetCode, TArray<struct FSBCashHistory> HistoryData);
		void Request_GetHistoryExpired(ESBHistoryType Type);
		void GetHistoryExpired_Event(bool Result, int32_t RetCode, const struct FSBHistoryExpired& HistoryExpired);
		void LanchWebBrowser(ESBCashExchangeType Type);
		void BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void TryStartShopMenu(ESBRmShopMenuType ShopType, bool IsReload);
		void StartChildShopMenu(ESBRmShopMenuType ShopType);
		void OpenCertWindow();
		void BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature(int32_t Year, int32_t Month);
		void BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature();
		void OpenHistoryWindow(ESBHistoryType Type);
		void Close_Event();
		void BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature();
		void BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature();
		void BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature();
		void BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void OnSubMenuTermReady();
		void OnEndInAnim_Event();
		void SetRoHistoryButton(ESBRmShopMenuType ShopType);
		void BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void SetSubButtonVisibility(ESBRmShopMenuType ShopType);
		void SetBpHistoryButton(ESBRmShopMenuType ShopType);
		void SetCommerceButton(ESBRmShopMenuType ShopType);
		void SetCertificationButton(ESBRmShopMenuType ShopType);
		void SetEscIconVisibility(bool IsShow);
		void DialogOpen_Certification();
		void OnSubDialogCloseReady();
		void OnRsDialogManagerCloseReady();
		void OpenExtraWindow(ESBRmShopMenuType ExtraType);
		void CloseExtraWindow();
		void SwitchExtraWindow(ESBRmShopMenuType NextShop);
		void BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void OnClose_BpHistory();
		void OnRequest_BpHistory(ESBHistoryType Type, int32_t Year, int32_t Month, int32_t Count);
		void OnRequestDel_BpHistory(ESBHistoryType Type);
		void DoClose_ExWindow();
		void Construct();
		void BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature();
		void OnEndRmShopMenu_Event();
		void OnCloseShopMenu();
		void OnAnimeEnd_MenuIn();
		void OnGetCryptocurrency_Event(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
		void OnButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType);
		void OnUseCoupon_Event(const class FString& CouponCode);
		void OnEndInAnim();
		void OnEndOutAnim();
		void OnRegist_BirthdayInfo(int32_t Year, int32_t Month);
		void OnSet_BirthdayInfo();
		void Destruct();
		void CustomEvent_3();
		void CreateMaintenanceALL();
		void CustomEvent_2(ESBRmShopErrorStatus Result, int32_t RetCode);
		void ForceClose();
		void OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param);
		void OnSubMenuTermReady_RoPurchaseEx();
		void ExecuteUbergraph_RmShopMenu(int32_t EntryPoint);
		void OnDialogUseCoupon__DelegateSignature(const class FString& CouponCode);
		void OnDialogButtonClicked__DelegateSignature(ERsDialogType DialogType, ERsDialogButtonType ButtonType);
		void OnCommandMenuVisible__DelegateSignature(bool IsVisible);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
