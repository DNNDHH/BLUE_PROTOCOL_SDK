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
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSeasonPassRewardExtraInfo
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo_Params
	{	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ClearProductItemData
	 */
	struct UFlatShop_ProductItem_DescItem_C_ClearProductItemData_Params
	{	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetDetailType
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      InDetailType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HQKT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetRate
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_03TX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSwitchType
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetSwitchType_Params
	{
	public:
		int32_t                                                    SwitchId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductItemData
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetProductItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfoReward
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetProductInfoReward_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QLEY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfo
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetProductInfo_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FUZJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFlatShop_ProductItem_DescItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFlatShop_ProductItem_DescItem_C_BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeVisibility
	 */
	struct UFlatShop_ProductItem_DescItem_C_OnChangeVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.PreConstruct
	 */
	struct UFlatShop_ProductItem_DescItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.UpdateLayout
	 */
	struct UFlatShop_ProductItem_DescItem_C_UpdateLayout_Params
	{	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.LayoutCheck
	 */
	struct UFlatShop_ProductItem_DescItem_C_LayoutCheck_Params
	{
	public:
		E_SBProductDetailType                                      DetailType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetTrying
	 */
	struct UFlatShop_ProductItem_DescItem_C_SetTrying_Params
	{
	public:
		bool                                                       bTrying;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeTrying
	 */
	struct UFlatShop_ProductItem_DescItem_C_OnChangeTrying_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.Construct
	 */
	struct UFlatShop_ProductItem_DescItem_C_Construct_Params
	{	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ExecuteUbergraph_FlatShop_ProductItem_DescItem
	 */
	struct UFlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked2__DelegateSignature
	 */
	struct UFlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked__DelegateSignature
	 */
	struct UFlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature_Params
	{
	public:
		bool                                                       IsSetItem;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
