#pragma once

 

// Package: CashExchangeShop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"
#include "RsDialogType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CashExchangeShop.CashExchangeShop_C
// 0x0198 (0x0428 - 0x0290)
class UCashExchangeShop_C final : public USBRmShopMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimShopOut;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimShopIn;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDetailOut;                                     // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimDetailIn;                                      // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlatShop_Credit_C*                     Bp_Credit;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailGrp;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_ProductDetail_C*              FlatShop_ProductDetail;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBg;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_ShopLogo;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_220;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemDetailGrp;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             List_Product;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MaintenanceOwner;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Detail;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductItem_C*                     UMG_ProductItem;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBCashExchangeShopComponent*           CashExShopCmp;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    PlayerController;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRmShopComponent*                     RmShopCmp;                                         // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SelectPayment;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsDialog;                                          // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A96[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IsDeltaTime;                                       // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRsDialog*                            RsDialog;                                          // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MDMng;                                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBRoseOrbShopItemMasterData>   ProductListBase;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBRoseOrbShopItemMasterData>   ProductList;                                       // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectIndex;                                       // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A97[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPurchaseRoPSResponse                PurchaseRoPSData;                                  // 0x0388(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class IBPI_SBProductData_C>  ProductData;                                       // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FString                                 CampaignURL;                                       // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x03D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PurchasePrice;                                     // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PaymentBalance;                                    // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Dialog_Opend;                                   // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRegist;                                          // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A98[0x6];                                     // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_RmShopMaintenanceAll_C*            MaintenanceAll;                                    // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RmShopMaintenanceShop_C*           MaintenanceShop;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_StatusCheck;                             // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_RmShopMaintenanceUpdeta_C*         MaintenanceUpdate;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWaitPayment;                                     // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_CashExchangeShop(int32 EntryPoint);
	void ListenInput(bool IsStart);
	void OnEnd_OutAnim();
	void OnEnd_InAnim();
	void ShopOutAnim();
	void ShopInAnim();
	void OnCloseProductItem();
	void OnDialogButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType);
	void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying);
	void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
	void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature();
	void SetProductData(TScriptInterface<class IBPI_SBProductData_C> Data);
	void WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_0();
	void Close_Event();
	void OnListItemSelected(int32 Param_Index);
	void Destruct();
	void Construct();
	void Payment_ErrorHandling(int32 RetCode);
	void OnCloseEvent();
	void _________0();
	void Event_MaintenanceUpdate();
	void OnClose_MainteAll();
	void Event_MaintenanceAll();
	void Event_MaintenanceShop();
	void DoRequest_Purchase();
	void OnGetShopItems_Event(const bool Result, const int32 RetCode, const TArray<struct FSBShopItemRoPS>& ResponseData, const int32 PruchasePrice);
	void Request_GetShopItems();
	void OnCancelPurchase_Event(const bool Result, const int32 RetCode);
	void Continue_RetryPurchase();
	void Payment_Notify(const bool Result, const int32 RetCode, const struct FSBPurchaseRoPSResponse& ResponseData);
	void OnRetryPurchase_Event(const bool Result, const int32 RetCode);
	void Request_RetryPurchase();
	void Payment_SBPS();
	void OnPurchaseRoPS_Event(const bool Result, const int32 RetCode, const struct FSBPurchaseRoPSResponse& ResponseData);
	void Payment_WebMoney();
	void OnPaymentCancel_Event();
	void OnPaymentDecide_Event(const class FString& Payment);
	void OnGetCurrency_Event(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
	void Request_GetRoseOrb();
	void Request_Purchase();
	void CheckCertification();
	void CheckCanPurchase();
	void OnDialogClose01(const EYesNoDialogResult Result);
	void CheckOverLimit();
	void CheckWithinLimit();
	void Initialize();
	void Release();
	void GetComponentRef(bool* Ret);
	void TryEscTerm();
	void OpenProductItem(int32 SelectID);
	void CloseProductItem();
	void GetIconTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture);
	void TryEscVisibility(bool IsShow);
	void CheckRetryByRetCode(int32 RetCode, bool* IsRetry);
	void CreateProductListRemake(TArray<struct FSBShopItemRoPS>& GetList);
	void IsPurchasePriceCheck(bool* IsOver);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CashExchangeShop_C">();
	}
	static class UCashExchangeShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCashExchangeShop_C>();
	}
};
static_assert(alignof(UCashExchangeShop_C) == 0x000008, "Wrong alignment on UCashExchangeShop_C");
static_assert(sizeof(UCashExchangeShop_C) == 0x000428, "Wrong size on UCashExchangeShop_C");
static_assert(offsetof(UCashExchangeShop_C, UberGraphFrame) == 0x000290, "Member 'UCashExchangeShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, AnimShopOut) == 0x000298, "Member 'UCashExchangeShop_C::AnimShopOut' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, AnimShopIn) == 0x0002A0, "Member 'UCashExchangeShop_C::AnimShopIn' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, AnimDetailOut) == 0x0002A8, "Member 'UCashExchangeShop_C::AnimDetailOut' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, AnimDetailIn) == 0x0002B0, "Member 'UCashExchangeShop_C::AnimDetailIn' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, Bp_Credit) == 0x0002B8, "Member 'UCashExchangeShop_C::Bp_Credit' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, DetailGrp) == 0x0002C0, "Member 'UCashExchangeShop_C::DetailGrp' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, FlatShop_ProductDetail) == 0x0002C8, "Member 'UCashExchangeShop_C::FlatShop_ProductDetail' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, HeaderBg) == 0x0002D0, "Member 'UCashExchangeShop_C::HeaderBg' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, Icon_ShopLogo) == 0x0002D8, "Member 'UCashExchangeShop_C::Icon_ShopLogo' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, Image_220) == 0x0002E0, "Member 'UCashExchangeShop_C::Image_220' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, ItemDetailGrp) == 0x0002E8, "Member 'UCashExchangeShop_C::ItemDetailGrp' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, List_Product) == 0x0002F0, "Member 'UCashExchangeShop_C::List_Product' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, MaintenanceOwner) == 0x0002F8, "Member 'UCashExchangeShop_C::MaintenanceOwner' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, UIBlocker_Detail) == 0x000300, "Member 'UCashExchangeShop_C::UIBlocker_Detail' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, UMG_ProductItem) == 0x000308, "Member 'UCashExchangeShop_C::UMG_ProductItem' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, OnClose) == 0x000310, "Member 'UCashExchangeShop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, CashExShopCmp) == 0x000320, "Member 'UCashExchangeShop_C::CashExShopCmp' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, PlayerController) == 0x000328, "Member 'UCashExchangeShop_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, RmShopCmp) == 0x000330, "Member 'UCashExchangeShop_C::RmShopCmp' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, SelectPayment) == 0x000338, "Member 'UCashExchangeShop_C::SelectPayment' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, IsDialog) == 0x000348, "Member 'UCashExchangeShop_C::IsDialog' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, IsDeltaTime) == 0x00034C, "Member 'UCashExchangeShop_C::IsDeltaTime' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, RsDialog) == 0x000350, "Member 'UCashExchangeShop_C::RsDialog' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, MDMng) == 0x000358, "Member 'UCashExchangeShop_C::MDMng' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, ProductListBase) == 0x000360, "Member 'UCashExchangeShop_C::ProductListBase' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, ProductList) == 0x000370, "Member 'UCashExchangeShop_C::ProductList' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, SelectIndex) == 0x000380, "Member 'UCashExchangeShop_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, PurchaseRoPSData) == 0x000388, "Member 'UCashExchangeShop_C::PurchaseRoPSData' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, ProductData) == 0x0003B8, "Member 'UCashExchangeShop_C::ProductData' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, CampaignURL) == 0x0003C8, "Member 'UCashExchangeShop_C::CampaignURL' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, Message) == 0x0003D8, "Member 'UCashExchangeShop_C::Message' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, PurchasePrice) == 0x0003F0, "Member 'UCashExchangeShop_C::PurchasePrice' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, PaymentBalance) == 0x0003F4, "Member 'UCashExchangeShop_C::PaymentBalance' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, Is_Dialog_Opend) == 0x0003F8, "Member 'UCashExchangeShop_C::Is_Dialog_Opend' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, IsRegist) == 0x0003F9, "Member 'UCashExchangeShop_C::IsRegist' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, MaintenanceAll) == 0x000400, "Member 'UCashExchangeShop_C::MaintenanceAll' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, MaintenanceShop) == 0x000408, "Member 'UCashExchangeShop_C::MaintenanceShop' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, UIBlocker_StatusCheck) == 0x000410, "Member 'UCashExchangeShop_C::UIBlocker_StatusCheck' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, MaintenanceUpdate) == 0x000418, "Member 'UCashExchangeShop_C::MaintenanceUpdate' has a wrong offset!");
static_assert(offsetof(UCashExchangeShop_C, IsWaitPayment) == 0x000420, "Member 'UCashExchangeShop_C::IsWaitPayment' has a wrong offset!");

}

