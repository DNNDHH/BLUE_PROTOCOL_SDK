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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CashExchangeShop.CashExchangeShop_C.IsPurchasePriceCheck
	 */
	struct UCashExchangeShop_C_IsPurchasePriceCheck_Params
	{
	public:
		bool                                                       isOver;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ROEH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CreateProductListRemake
	 */
	struct UCashExchangeShop_C_CreateProductListRemake_Params
	{
	public:
		TArray<struct FSBShopItemRoPS>                             GetList;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CheckRetryByRetCode
	 */
	struct UCashExchangeShop_C_CheckRetryByRetCode_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRetry;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.TryEscVisibility
	 */
	struct UCashExchangeShop_C_TryEscVisibility_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.GetIconTexture
	 */
	struct UCashExchangeShop_C_GetIconTexture_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9ZO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_2FFY[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CloseProductItem
	 */
	struct UCashExchangeShop_C_CloseProductItem_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OpenProductItem
	 */
	struct UCashExchangeShop_C_OpenProductItem_Params
	{
	public:
		int32_t                                                    SelectID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XN3M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.TryEscTerm
	 */
	struct UCashExchangeShop_C_TryEscTerm_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.GetComponentRef
	 */
	struct UCashExchangeShop_C_GetComponentRef_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M9KW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Release
	 */
	struct UCashExchangeShop_C_Release_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Initialize
	 */
	struct UCashExchangeShop_C_Initialize_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CheckWithinLimit
	 */
	struct UCashExchangeShop_C_CheckWithinLimit_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CheckOverLimit
	 */
	struct UCashExchangeShop_C_CheckOverLimit_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnDialogClose01
	 */
	struct UCashExchangeShop_C_OnDialogClose01_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CheckCanPurchase
	 */
	struct UCashExchangeShop_C_CheckCanPurchase_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.CheckCertification
	 */
	struct UCashExchangeShop_C_CheckCertification_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Request_Purchase
	 */
	struct UCashExchangeShop_C_Request_Purchase_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Request_GetRoseOrb
	 */
	struct UCashExchangeShop_C_Request_GetRoseOrb_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnGetCurrency_Event
	 */
	struct UCashExchangeShop_C_OnGetCurrency_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GB64[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCryptoCurrency                                   Cryptocurrency;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnPaymentDecide_Event
	 */
	struct UCashExchangeShop_C_OnPaymentDecide_Event_Params
	{
	public:
		class FString                                              Payment;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnPaymentCancel_Event
	 */
	struct UCashExchangeShop_C_OnPaymentCancel_Event_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Payment_WebMoney
	 */
	struct UCashExchangeShop_C_Payment_WebMoney_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnPurchaseRoPS_Event
	 */
	struct UCashExchangeShop_C_OnPurchaseRoPS_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MOA1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBPurchaseRoPSResponse                             ResponseData;                                            // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Payment_SBPS
	 */
	struct UCashExchangeShop_C_Payment_SBPS_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Request_RetryPurchase
	 */
	struct UCashExchangeShop_C_Request_RetryPurchase_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnRetryPurchase_Event
	 */
	struct UCashExchangeShop_C_OnRetryPurchase_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L03D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Payment_Notify
	 */
	struct UCashExchangeShop_C_Payment_Notify_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FRJB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBPurchaseRoPSResponse                             ResponseData;                                            // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Continue_RetryPurchase
	 */
	struct UCashExchangeShop_C_Continue_RetryPurchase_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnCancelPurchase_Event
	 */
	struct UCashExchangeShop_C_OnCancelPurchase_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PACR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Request_GetShopItems
	 */
	struct UCashExchangeShop_C_Request_GetShopItems_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnGetShopItems_Event
	 */
	struct UCashExchangeShop_C_OnGetShopItems_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9Y7L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBShopItemRoPS>                             ResponseData;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PruchasePrice;                                           // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.DoRequest_Purchase
	 */
	struct UCashExchangeShop_C_DoRequest_Purchase_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Event_MaintenanceShop
	 */
	struct UCashExchangeShop_C_Event_MaintenanceShop_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Event_MaintenanceAll
	 */
	struct UCashExchangeShop_C_Event_MaintenanceAll_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnClose_MainteAll
	 */
	struct UCashExchangeShop_C_OnClose_MainteAll_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Event_MaintenanceUpdate
	 */
	struct UCashExchangeShop_C_Event_MaintenanceUpdate_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.カスタムイベント_1
	 */
	struct UCashExchangeShop_C__1_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnCloseEvent
	 */
	struct UCashExchangeShop_C_OnCloseEvent_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Payment_ErrorHandling
	 */
	struct UCashExchangeShop_C_Payment_ErrorHandling_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Construct
	 */
	struct UCashExchangeShop_C_Construct_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Destruct
	 */
	struct UCashExchangeShop_C_Destruct_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnListItemSelected
	 */
	struct UCashExchangeShop_C_OnListItemSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.Close_Event
	 */
	struct UCashExchangeShop_C_Close_Event_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UCashExchangeShop_C_WidgetAnimationEvt_AnimDetailOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.SetProductData
	 */
	struct UCashExchangeShop_C_SetProductData_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature
	 */
	struct UCashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 */
	struct UCashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature
	 */
	struct UCashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_5_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature
	 */
	struct UCashExchangeShop_C_BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_6_OnSelectedItemData__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnDialogButtonClicked_Event
	 */
	struct UCashExchangeShop_C_OnDialogButtonClicked_Event_Params
	{
	public:
		ERsDialogType                                              DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogButtonType                                        ButtonType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnCloseProductItem
	 */
	struct UCashExchangeShop_C_OnCloseProductItem_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.ShopInAnim
	 */
	struct UCashExchangeShop_C_ShopInAnim_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.ShopOutAnim
	 */
	struct UCashExchangeShop_C_ShopOutAnim_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnEnd_InAnim
	 */
	struct UCashExchangeShop_C_OnEnd_InAnim_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnEnd_OutAnim
	 */
	struct UCashExchangeShop_C_OnEnd_OutAnim_Params
	{	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.ListenInput
	 */
	struct UCashExchangeShop_C_ListenInput_Params
	{
	public:
		bool                                                       IsStart;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.ExecuteUbergraph_CashExchangeShop
	 */
	struct UCashExchangeShop_C_ExecuteUbergraph_CashExchangeShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashExchangeShop.CashExchangeShop_C.OnClose__DelegateSignature
	 */
	struct UCashExchangeShop_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
