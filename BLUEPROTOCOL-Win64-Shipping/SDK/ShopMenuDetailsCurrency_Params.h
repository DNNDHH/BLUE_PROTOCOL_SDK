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
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.IsVisibieShowProductForCurrency
	 */
	struct UShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0XS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BRMV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ButtonIndex;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.GetDescription
	 */
	struct UShopMenuDetailsCurrency_C_GetDescription_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BS2F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
		bool                                                       bValid;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TMO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.BndEvt__ShopMenuDetailsCurrency_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_BndEvt__ShopMenuDetailsCurrency_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ResetDisplay
	 */
	struct UShopMenuDetailsCurrency_C_ResetDisplay_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.BndEvt__ShopMenuDetailsCurrency_SBButtonShowProduct_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_BndEvt__ShopMenuDetailsCurrency_SBButtonShowProduct_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.BndEvt__ShopMenuDetailsCurrency_SBButtonItemBoxDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_BndEvt__ShopMenuDetailsCurrency_SBButtonItemBoxDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.Construct
	 */
	struct UShopMenuDetailsCurrency_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ShowDetails
	 */
	struct UShopMenuDetailsCurrency_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.CloseDetails
	 */
	struct UShopMenuDetailsCurrency_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsCurrency_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.SetData
	 */
	struct UShopMenuDetailsCurrency_C_SetData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XDU9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ExecuteUbergraph_ShopMenuDetailsCurrency
	 */
	struct UShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnCheckShowProduct__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5SZX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnClickItemBoxDetail__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_OnClickItemBoxDetail__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
