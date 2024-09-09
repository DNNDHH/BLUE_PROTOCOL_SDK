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
	 * Function UMG_ProductItem.UMG_ProductItem_C.ShowNumberSelect
	 */
	struct UUMG_ProductItem_C_ShowNumberSelect_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.GetInputNum
	 */
	struct UUMG_ProductItem_C_GetInputNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.UnBindCancelKey
	 */
	struct UUMG_ProductItem_C_UnBindCancelKey_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.Set Enable Purchase Button
	 */
	struct UUMG_ProductItem_C_SetEnablePurchaseButton_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetVisibleReceiveButton
	 */
	struct UUMG_ProductItem_C_SetVisibleReceiveButton_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetPrice
	 */
	struct UUMG_ProductItem_C_SetPrice_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankPoint;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetData
	 */
	struct UUMG_ProductItem_C_SetData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetProductData
	 */
	struct UUMG_ProductItem_C_SetProductData_Params
	{
	public:
		class UBP_SBProductData_C*                                 Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetProductInterfaceData
	 */
	struct UUMG_ProductItem_C_SetProductInterfaceData_Params
	{
	public:
		unsigned char                                              UnknownData_K14E[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetDetailType
	 */
	struct UUMG_ProductItem_C_SetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      InDetailType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_27VE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetPurcahseNum
	 */
	struct UUMG_ProductItem_C_SetPurcahseNum_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.GetRemainNum
	 */
	struct UUMG_ProductItem_C_GetRemainNum_Params
	{
	public:
		int32_t                                                    Remain;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetProductInfo
	 */
	struct UUMG_ProductItem_C_SetProductInfo_Params
	{
	public:
		bool                                                       ProductData;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5JOU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Description;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FShopItemInfo>                               ItemInfoList;                                            // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.InitUpdateGasha
	 */
	struct UUMG_ProductItem_C_InitUpdateGasha_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged __DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature_Params
	{
	public:
		struct FSBGashaInfo                                        GashaInfo;                                               // 0x0000(0x01C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnClose_SubWindow
	 */
	struct UUMG_ProductItem_C_OnClose_SubWindow_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.InitStepUp
	 */
	struct UUMG_ProductItem_C_InitStepUp_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.Destruct_Gasha
	 */
	struct UUMG_ProductItem_C_Destruct_Gasha_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.SetProductData_RoPS
	 */
	struct UUMG_ProductItem_C_SetProductData_RoPS_Params
	{
	public:
		struct FSBRoseOrbShopItemMasterData                        ProductData;                                             // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.Construct
	 */
	struct UUMG_ProductItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.PreConstruct
	 */
	struct UUMG_ProductItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.UpdateLayout
	 */
	struct UUMG_ProductItem_C_UpdateLayout_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnInputCancelKey
	 */
	struct UUMG_ProductItem_C_OnInputCancelKey_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.CreateItemList
	 */
	struct UUMG_ProductItem_C_CreateItemList_Params
	{
	public:
		TArray<class UBP_SBProductItemData_C*>                     ItemDataList;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.Destruct
	 */
	struct UUMG_ProductItem_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.ExecuteUbergraph_UMG_ProductItem
	 */
	struct UUMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnChangePurchaseType__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnChangePurchaseType__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnChangeStep__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnChangeStep__DelegateSignature_Params
	{
	public:
		struct FSBGashaInfo                                        GashaInfo;                                               // 0x0000(0x01C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnSelectedItemData__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnSelectedItemData__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnReceiveButtonClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnReceiveButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnItemClicked__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnPurchase__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnPurchase__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductItem.UMG_ProductItem_C.OnClose__DelegateSignature
	 */
	struct UUMG_ProductItem_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
