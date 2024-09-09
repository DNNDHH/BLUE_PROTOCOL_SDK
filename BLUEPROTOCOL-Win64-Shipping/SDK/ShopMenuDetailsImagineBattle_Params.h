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
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetBattleScore
	 */
	struct UShopMenuDetailsImagineBattle_C_GetBattleScore_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetLotteryGroupsId
	 */
	struct UShopMenuDetailsImagineBattle_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    LotteryGroupsId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowRateDialog
	 */
	struct UShopMenuDetailsImagineBattle_C_ShowRateDialog_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetAbilityName
	 */
	struct UShopMenuDetailsImagineBattle_C_GetAbilityName_Params
	{
	public:
		bool                                                       bHasValidAbility;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MB3N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                AbilityName;                                             // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetToolTipWidgetByAbilityNameScaleBox
	 */
	struct UShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.Construct
	 */
	struct UShopMenuDetailsImagineBattle_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowDetails
	 */
	struct UShopMenuDetailsImagineBattle_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.CloseDetails
	 */
	struct UShopMenuDetailsImagineBattle_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsImagineBattle_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetData
	 */
	struct UShopMenuDetailsImagineBattle_C_SetData_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GS0F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bShowProduct;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBRewardItemType                                          OriginalRewardType;                                      // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7AL6[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OriginalItemIndex;                                       // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.Destruct
	 */
	struct UShopMenuDetailsImagineBattle_C_Destruct_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ExecuteUbergraph_ShopMenuDetailsImagineBattle
	 */
	struct UShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickShowOriginal__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_OnClickShowOriginal__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
