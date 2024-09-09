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
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetIntervalGrpVisibility
	 */
	struct UShopMenuDetailsItem_C_SetIntervalGrpVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemRecastText
	 */
	struct UShopMenuDetailsItem_C_SetItemRecastText_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemEffectText
	 */
	struct UShopMenuDetailsItem_C_SetItemEffectText_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemIconImage
	 */
	struct UShopMenuDetailsItem_C_SetItemIconImage_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.Construct
	 */
	struct UShopMenuDetailsItem_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ShowDetails
	 */
	struct UShopMenuDetailsItem_C_ShowDetails_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.CloseDetails
	 */
	struct UShopMenuDetailsItem_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnAnimationFinished
	 */
	struct UShopMenuDetailsItem_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ResetDisplay
	 */
	struct UShopMenuDetailsItem_C_ResetDisplay_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetupExtraButton
	 */
	struct UShopMenuDetailsItem_C_SetupExtraButton_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ExecuteUbergraph_ShopMenuDetailsItem
	 */
	struct UShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickShowProduct__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BMEE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickItemBoxDetail__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_OnClickItemBoxDetail__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClose__DelegateSignature
	 */
	struct UShopMenuDetailsItem_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
