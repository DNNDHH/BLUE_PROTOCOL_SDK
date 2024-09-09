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
	 * WidgetBlueprintGeneratedClass CashExchangeShop.CashExchangeShop_C
	 * Size -> 0x0191 (FullSize[0x0421] - InheritedSize[0x0290])
	 */
	class UCashExchangeShop_C : public USBRmShopMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimShopOut;                                             // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimShopIn;                                              // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimDetailOut;                                           // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimDetailIn;                                            // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UFlatShop_Credit_C*                                  Bp_Credit;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DetailGrp;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFlatShop_ProductDetail_C*                           FlatShop_ProductDetail;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HeaderBg;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_ShopLogo;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_221;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ItemDetailGrp;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          List_Product;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MaintenanceOwner;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Detail;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ProductItem_C*                                  UMG_ProductItem;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBCashExchangeShopComponent*                        CashExShopCmp;                                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerController*                                 PlayerController;                                        // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBRmShopComponent*                                  RmShopCmp;                                               // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SelectPayment;                                           // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsDialog;                                                // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WRCQ[0x3];                                   // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IsDeltaTime;                                             // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBRsDialog*                                         RsDialog;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBMasterDataManager*                                MDMng;                                                   // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSBRoseOrbShopItemMasterData>                ProductListBase;                                         // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBRoseOrbShopItemMasterData>                ProductList;                                             // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SelectIndex;                                             // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EUBV[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBPurchaseRoPSResponse                             PurchaseRoPSData;                                        // 0x0388(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              ProductData[0x10];                                       // 0x03B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FString                                              CampaignURL;                                             // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                Message;                                                 // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PurchasePrice;                                           // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PaymentBalance;                                          // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDialogOpend;                                           // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRegist;                                                // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W5ME[0x6];                                   // 0x03FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_RmShopMaintenanceAll_C*                         MaintenanceAll;                                          // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_RmShopMaintenanceShop_C*                        MaintenanceShop;                                         // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_StatusCheck;                                   // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_RmShopMaintenanceUpdeta_C*                      MaintenanceUpdate;                                       // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWaitPayment;                                           // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsPurchasePriceCheck(bool* isOver);
		void CreateProductListRemake(TArray<struct FSBShopItemRoPS>* GetList);
		void CheckRetryByRetCode(int32_t RetCode, bool* IsRetry);
		void TryEscVisibility(bool IsShow);
		void GetIconTexture(int32_t ID);
		void CloseProductItem();
		void OpenProductItem(int32_t SelectID);
		void TryEscTerm();
		void GetComponentRef(bool* Ret);
		void Release();
		void Initialize();
		void CheckWithinLimit();
		void CheckOverLimit();
		void OnDialogClose01(EYesNoDialogResult Result);
		void CheckCanPurchase();
		void CheckCertification();
		void Request_Purchase();
		void Request_GetRoseOrb();
		void OnGetCurrency_Event(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
		void OnPaymentDecide_Event(const class FString& Payment);
		void OnPaymentCancel_Event();
		void Payment_WebMoney();
		void OnPurchaseRoPS_Event(bool Result, int32_t RetCode, const struct FSBPurchaseRoPSResponse& ResponseData);
		void Payment_SBPS();
		void Request_RetryPurchase();
		void OnRetryPurchase_Event(bool Result, int32_t RetCode);
		void Payment_Notify(bool Result, int32_t RetCode, const struct FSBPurchaseRoPSResponse& ResponseData);
		void Continue_RetryPurchase();
		void OnCancelPurchase_Event(bool Result, int32_t RetCode);
		void Request_GetShopItems();
		void OnGetShopItems_Event(bool Result, int32_t RetCode, TArray<struct FSBShopItemRoPS> ResponseData, int32_t PruchasePrice);
		void DoRequest_Purchase();
		void Event_MaintenanceShop();
		void Event_MaintenanceAll();
		void OnClose_MainteAll();
		void Event_MaintenanceUpdate();
		void _1();
		void OnCloseEvent();
		void Payment_ErrorHandling(int32_t RetCode);
		void Construct();
		void Destruct();
		void OnListItemSelected(int32_t Index);
		void Close_Event();
		void WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_1();
		void SetProductData();
		void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature();
		void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
		void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data);
		void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying);
		void OnDialogButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType);
		void OnCloseProductItem();
		void ShopInAnim();
		void ShopOutAnim();
		void OnEnd_InAnim();
		void OnEnd_OutAnim();
		void ListenInput(bool IsStart);
		void ExecuteUbergraph_CashExchangeShop(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
