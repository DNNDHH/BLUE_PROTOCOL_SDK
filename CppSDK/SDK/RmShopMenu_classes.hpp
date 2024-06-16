#pragma once

 

// Package: RmShopMenu

#include "Basic.hpp"

#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ESBCashExchangeType_structs.hpp"
#include "RsDialogCurrencyPaidType_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogType_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RmShopMenu.RmShopMenu_C
// 0x02D8 (0x0598 - 0x02C0)
class URmShopMenu_C final : public USBRmShopMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShopOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MenuOut;                                           // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShopIn;                                            // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MenuIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Mask_Black;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BgBlur;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCertificationWindow_C*                 Bp_Certification;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           Btn_Exit;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_BPPE;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_BPPS;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_Gasya;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem3_C*                Btn_Shop_NEWS;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_ROP;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_ROS;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_SPP;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_SPRP;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 Btn_Shop_SPS;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ExtraGrp;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_89;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LeftSideGrp;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                MenuItem2_BpHistory;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                MenuItem2_Certification;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                MenuItem2_Commerce;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                MenuItem2_RoHistory;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RightSideGrp;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenuBg_C*                        RmShopMenuBg;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBoxBpHistory;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBoxCertification;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBoxCommerce;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBoxRoHistory;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubWidgetGrp;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Base;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Float;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Float_Ex;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Menu;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRmShopMenuChildBase*                 CurrentShop;                                       // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B9F[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<ESBRmShopMenuType, TSoftClassPtr<class UClass>> RmShopMap;                                         // 0x0400(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsCertification;                                   // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHistory;                                         // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BA0[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    PlayerController;                                  // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     RmShopCmp;                                         // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URmShopMenu_MenuItem_C*                 LastSelctedMenu;                                   // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRmShopMenuType                             StartUpShopType;                                   // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8BA1[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCommandMenuVisible;                              // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBCryptoCurrency                      VirtualCurrency;                                   // 0x0488(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UBP_RsDialogManager_C*                  DialogManager;                                     // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDialogButtonClicked;                             // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCertificated;                                    // 0x04C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BA2[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDialogUseCoupon;                                 // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFinished;                                        // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             NextShopType;                                      // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BA3[0x6];                                     // 0x04E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRmShopMenuChildBase*                 ExtraWindow;                                       // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExtra;                                           // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BA4[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCountryConfigMasterData             CountryConfig;                                     // 0x04F8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSkipBtnChange;                                   // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDelAmount;                                       // 0x0541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BA5[0x6];                                     // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Date_Time;                                         // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_RmShopMaintenanceAll_C*            Maintenance;                                       // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_StatusCheck;                             // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHistoryWindow_C*                       BP_History;                                        // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UHistoryWindow_C>        BP_History_soft;                                   // 0x0568(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	bool                                          IsReadyEx;                                         // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRevertEx;                                        // 0x0591(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void OnCommandMenuVisible__DelegateSignature(bool Param_IsVisible);
	void OnDialogButtonClicked__DelegateSignature(ERsDialogType DialogType, ERsDialogButtonType ButtonType);
	void OnDialogUseCoupon__DelegateSignature(const class FString& CouponCode);
	void ExecuteUbergraph_RmShopMenu(int32 EntryPoint);
	void OnSubMenuTermReady_RoPurchaseEx();
	void OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param);
	void ForceClose();
	void CustomEvent_1(const ESBRmShopErrorStatus Result, const int32 RetCode);
	void CreateMaintenanceALL();
	void CustomEvent_2();
	void Destruct();
	void OnSet_BirthdayInfo();
	void OnRegist_BirthdayInfo(int32 Year, int32 Month);
	void OnEndOutAnim();
	void OnEndInAnim();
	void OnUseCoupon_Event(const class FString& CouponCode);
	void OnButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType);
	void OnGetCryptocurrency_Event(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
	void OnAnimeEnd_MenuIn();
	void OnCloseShopMenu();
	void OnEndRmShopMenu_Event();
	void BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature();
	void Construct();
	void DoClose_ExWindow();
	void OnRequestDel_BpHistory(ESBHistoryType Type);
	void OnRequest_BpHistory(ESBHistoryType Type, int32 Year, int32 Month, int32 Count);
	void OnClose_BpHistory();
	void BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void SwitchExtraWindow(ESBRmShopMenuType NextShop);
	void CloseExtraWindow();
	void OpenExtraWindow(ESBRmShopMenuType ExtraType);
	void OnRsDialogManagerCloseReady();
	void OnSubDialogCloseReady();
	void DialogOpen_Certification();
	void SetEscIconVisibility(bool IsShow);
	void SetCertificationButton(ESBRmShopMenuType ShopType);
	void SetCommerceButton(ESBRmShopMenuType ShopType);
	void SetBpHistoryButton(ESBRmShopMenuType ShopType);
	void SetSubButtonVisibility(ESBRmShopMenuType ShopType);
	void BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SetRoHistoryButton(ESBRmShopMenuType ShopType);
	void OnEndInAnim_Event();
	void OnSubMenuTermReady();
	void BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature();
	void BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature();
	void BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature();
	void Close_Event();
	void OpenHistoryWindow(ESBHistoryType Type);
	void BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature();
	void BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature(int32 Year, int32 Month);
	void OpenCertWindow();
	void StartChildShopMenu(ESBRmShopMenuType ShopType);
	void TryStartShopMenu(ESBRmShopMenuType ShopType, bool IsReload);
	void BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void LanchWebBrowser(ESBCashExchangeType Type);
	void GetHistoryExpired_Event(const bool Result, const int32 RetCode, const struct FSBHistoryExpired& HistoryExpired);
	void Request_GetHistoryExpired(ESBHistoryType Type);
	void OnGetHistory_Event(const bool Result, const int32 RetCode, const TArray<struct FSBCashHistory>& HistoryData);
	void Request_GetHistory(ESBHistoryType Type, int32 Year, int32 Month, int32 Count);
	void OnCertification_Event(const bool Result, const int32 RetCode);
	void Request_Certification(int32 Year, int32 Month);
	void SetDiscountRate_SeasonPass(int32 Rate);
	void SetSeasonPoint(int32 SP);
	void SetBPPoint(int32 BP);
	void SetRoseOrb(int32 Free, int32 Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired);
	void SetDiscountRate(int32 Rate);
	void ShowDialog_Caution();
	void ShowDialog_ChargeRoseOrb();
	void ShowDialog_InputCoupon();
	void AddItem_LimitCondition(bool IsAchieve, const class FString& Text);
	void ShowDialog_LimitCondition();
	void CloseDialog();
	void ShowDialog_Processing();
	void SetDialog_CommonInfo(ERsDialogProductTitleType ProductTitleType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType, int32 PurchasePrice, bool PaidOnly);
	void ShowDialog_UseItem(const class FText& EffectDescription);
	void ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType);
	void ShowDialog_Payment();
	void ShowDialog_ErrorMessage(int32 ErrorCode);
	void ShowDialog_Purchase();
	void OnLoaded_41D74A5F49658128DFE26A8ECAB6D644(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55(TSubclassOf<class UObject> Loaded);
	void ExecSubWindow(bool IsOpen);
	void GetComponentRef(bool* Ret);
	void SelectShopBtn(class URmShopMenu_MenuItem_C* InShopBtn);
	void SetCommandMenuVisible(bool IsVisivle);
	void InitButtonState();
	void SetBirthdayInfo(int32 Year, int32 Month, int32 Count, bool IsRegister);
	void SetShopBtn_ExtraWindow(bool Open, bool Close, bool Swtich, ESBRmShopMenuType NextShop);
	void GetOutSiteURL(ESBCashExchangeType Type, class FString* URL);
	void SetIconCaution();
	void GetBpHistory(class UHistoryWindow_C** Widget);
	void GetExpiredTimeRoseOrb(struct FDateTime* Date);
	void SetMaskBGVisibility(bool IsVisibility);
	void Set_Esc_Extra(bool IsShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RmShopMenu_C">();
	}
	static class URmShopMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URmShopMenu_C>();
	}
};
static_assert(alignof(URmShopMenu_C) == 0x000008, "Wrong alignment on URmShopMenu_C");
static_assert(sizeof(URmShopMenu_C) == 0x000598, "Wrong size on URmShopMenu_C");
static_assert(offsetof(URmShopMenu_C, UberGraphFrame) == 0x0002C0, "Member 'URmShopMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, ShopOut) == 0x0002C8, "Member 'URmShopMenu_C::ShopOut' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, MenuOut) == 0x0002D0, "Member 'URmShopMenu_C::MenuOut' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, ShopIn) == 0x0002D8, "Member 'URmShopMenu_C::ShopIn' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, MenuIn) == 0x0002E0, "Member 'URmShopMenu_C::MenuIn' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, BG_Mask_Black) == 0x0002E8, "Member 'URmShopMenu_C::BG_Mask_Black' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, BgBlur) == 0x0002F0, "Member 'URmShopMenu_C::BgBlur' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Bp_Certification) == 0x0002F8, "Member 'URmShopMenu_C::Bp_Certification' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Exit) == 0x000300, "Member 'URmShopMenu_C::Btn_Exit' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_BPPE) == 0x000308, "Member 'URmShopMenu_C::Btn_Shop_BPPE' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_BPPS) == 0x000310, "Member 'URmShopMenu_C::Btn_Shop_BPPS' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_Gasya) == 0x000318, "Member 'URmShopMenu_C::Btn_Shop_Gasya' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_NEWS) == 0x000320, "Member 'URmShopMenu_C::Btn_Shop_NEWS' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_ROP) == 0x000328, "Member 'URmShopMenu_C::Btn_Shop_ROP' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_ROS) == 0x000330, "Member 'URmShopMenu_C::Btn_Shop_ROS' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_SPP) == 0x000338, "Member 'URmShopMenu_C::Btn_Shop_SPP' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_SPRP) == 0x000340, "Member 'URmShopMenu_C::Btn_Shop_SPRP' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Btn_Shop_SPS) == 0x000348, "Member 'URmShopMenu_C::Btn_Shop_SPS' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, ExtraGrp) == 0x000350, "Member 'URmShopMenu_C::ExtraGrp' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Image_89) == 0x000358, "Member 'URmShopMenu_C::Image_89' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, LeftSideGrp) == 0x000360, "Member 'URmShopMenu_C::LeftSideGrp' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, MenuItem2_BpHistory) == 0x000368, "Member 'URmShopMenu_C::MenuItem2_BpHistory' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, MenuItem2_Certification) == 0x000370, "Member 'URmShopMenu_C::MenuItem2_Certification' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, MenuItem2_Commerce) == 0x000378, "Member 'URmShopMenu_C::MenuItem2_Commerce' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, MenuItem2_RoHistory) == 0x000380, "Member 'URmShopMenu_C::MenuItem2_RoHistory' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, RightSideGrp) == 0x000388, "Member 'URmShopMenu_C::RightSideGrp' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, RmShopMenuBg) == 0x000390, "Member 'URmShopMenu_C::RmShopMenuBg' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, SBoxBpHistory) == 0x000398, "Member 'URmShopMenu_C::SBoxBpHistory' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, SBoxCertification) == 0x0003A0, "Member 'URmShopMenu_C::SBoxCertification' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, SBoxCommerce) == 0x0003A8, "Member 'URmShopMenu_C::SBoxCommerce' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, SBoxRoHistory) == 0x0003B0, "Member 'URmShopMenu_C::SBoxRoHistory' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, SubWidgetGrp) == 0x0003B8, "Member 'URmShopMenu_C::SubWidgetGrp' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, UIBlocker_Base) == 0x0003C0, "Member 'URmShopMenu_C::UIBlocker_Base' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, UIBlocker_Float) == 0x0003C8, "Member 'URmShopMenu_C::UIBlocker_Float' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, UIBlocker_Float_Ex) == 0x0003D0, "Member 'URmShopMenu_C::UIBlocker_Float_Ex' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, UIBlocker_Menu) == 0x0003D8, "Member 'URmShopMenu_C::UIBlocker_Menu' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, CurrentShop) == 0x0003E0, "Member 'URmShopMenu_C::CurrentShop' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, CurrentShopType) == 0x0003E8, "Member 'URmShopMenu_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, OnClose) == 0x0003F0, "Member 'URmShopMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, RmShopMap) == 0x000400, "Member 'URmShopMenu_C::RmShopMap' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsCertification) == 0x000450, "Member 'URmShopMenu_C::IsCertification' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsHistory) == 0x000451, "Member 'URmShopMenu_C::IsHistory' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, PlayerController) == 0x000458, "Member 'URmShopMenu_C::PlayerController' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, RmShopCmp) == 0x000460, "Member 'URmShopMenu_C::RmShopCmp' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, LastSelctedMenu) == 0x000468, "Member 'URmShopMenu_C::LastSelctedMenu' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, StartUpShopType) == 0x000470, "Member 'URmShopMenu_C::StartUpShopType' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, OnCommandMenuVisible) == 0x000478, "Member 'URmShopMenu_C::OnCommandMenuVisible' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, VirtualCurrency) == 0x000488, "Member 'URmShopMenu_C::VirtualCurrency' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, DialogManager) == 0x0004B0, "Member 'URmShopMenu_C::DialogManager' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, OnDialogButtonClicked) == 0x0004B8, "Member 'URmShopMenu_C::OnDialogButtonClicked' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsCertificated) == 0x0004C8, "Member 'URmShopMenu_C::IsCertificated' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, OnDialogUseCoupon) == 0x0004D0, "Member 'URmShopMenu_C::OnDialogUseCoupon' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsFinished) == 0x0004E0, "Member 'URmShopMenu_C::IsFinished' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, NextShopType) == 0x0004E1, "Member 'URmShopMenu_C::NextShopType' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, ExtraWindow) == 0x0004E8, "Member 'URmShopMenu_C::ExtraWindow' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsExtra) == 0x0004F0, "Member 'URmShopMenu_C::IsExtra' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, CountryConfig) == 0x0004F8, "Member 'URmShopMenu_C::CountryConfig' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsSkipBtnChange) == 0x000540, "Member 'URmShopMenu_C::IsSkipBtnChange' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsDelAmount) == 0x000541, "Member 'URmShopMenu_C::IsDelAmount' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Date_Time) == 0x000548, "Member 'URmShopMenu_C::Date_Time' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, Maintenance) == 0x000550, "Member 'URmShopMenu_C::Maintenance' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, UIBlocker_StatusCheck) == 0x000558, "Member 'URmShopMenu_C::UIBlocker_StatusCheck' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, BP_History) == 0x000560, "Member 'URmShopMenu_C::BP_History' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, BP_History_soft) == 0x000568, "Member 'URmShopMenu_C::BP_History_soft' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsReadyEx) == 0x000590, "Member 'URmShopMenu_C::IsReadyEx' has a wrong offset!");
static_assert(offsetof(URmShopMenu_C, IsRevertEx) == 0x000591, "Member 'URmShopMenu_C::IsRevertEx' has a wrong offset!");

}

