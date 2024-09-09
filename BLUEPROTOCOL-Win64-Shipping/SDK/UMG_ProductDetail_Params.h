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
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetButtonPosition_Posing
	 */
	struct UUMG_ProductDetail_C_SetButtonPosition_Posing_Params
	{
	public:
		EShopType                                                  IsExchangeShop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedSimpleItemData
	 */
	struct UUMG_ProductDetail_C_SetSelectedSimpleItemData_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3EDL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bToggleTrying;                                           // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTrying;                                            // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_STFP[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetSelectedItemData
	 */
	struct UUMG_ProductDetail_C_UnsetSelectedItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetTryingCostumeItemData
	 */
	struct UUMG_ProductDetail_C_UnsetTryingCostumeItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedItemData
	 */
	struct UUMG_ProductDetail_C_SetSelectedItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bToggleTrying;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTrying;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingAllIfCostumeSet
	 */
	struct UUMG_ProductDetail_C_SetTryingAllIfCostumeSet_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingCostumeItemData
	 */
	struct UUMG_ProductDetail_C_SetTryingCostumeItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUpdateCapture;                                          // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F752[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.Construct
	 */
	struct UUMG_ProductDetail_C_Construct_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.PreConstruct
	 */
	struct UUMG_ProductDetail_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature_Params
	{
	public:
		class ABP_PlayerSceneCapture2D_Studio_C*                   PlayerCapture;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetZoomFlag
	 */
	struct UUMG_ProductDetail_C_SetZoomFlag_Params
	{
	public:
		bool                                                       bZoomIn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOnlyDisplay;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnimation;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.SetData
	 */
	struct UUMG_ProductDetail_C_SetData_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.CloseItemDetail
	 */
	struct UUMG_ProductDetail_C_CloseItemDetail_Params
	{
	public:
		bool                                                       bAnimation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.Destruct
	 */
	struct UUMG_ProductDetail_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.ExecuteUbergraph_UMG_ProductDetail
	 */
	struct UUMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_93Z2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickItemBoxDetail__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickZoomIn__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetail.UMG_ProductDetail_C.OnShowDetails__DelegateSignature
	 */
	struct UUMG_ProductDetail_C_OnShowDetails__DelegateSignature_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
