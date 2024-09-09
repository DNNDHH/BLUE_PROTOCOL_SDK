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
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateProductList
	 */
	struct UGashaShopSubWindow_Rate_C_UpdateProductList_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SetInfo
	 */
	struct UGashaShopSubWindow_Rate_C_SetInfo_Params
	{
	public:
		TArray<struct FSBGashaReward>                              InRewardList;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.InitUpdateTab
	 */
	struct UGashaShopSubWindow_Rate_C_InitUpdateTab_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateStapUpGasha
	 */
	struct UGashaShopSubWindow_Rate_C_UpdateStapUpGasha_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature_Params
	{
	public:
		struct FSBGashaInfo                                        GashaInfo;                                               // 0x0000(0x01C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateBanner
	 */
	struct UGashaShopSubWindow_Rate_C_UpdateBanner_Params
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Banner;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.Construct
	 */
	struct UGashaShopSubWindow_Rate_C_Construct_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.OnClose_SubWindow
	 */
	struct UGashaShopSubWindow_Rate_C_OnClose_SubWindow_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.Destruct
	 */
	struct UGashaShopSubWindow_Rate_C_Destruct_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SubWindow_Close
	 */
	struct UGashaShopSubWindow_Rate_C_SubWindow_Close_Params
	{	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.ExecuteUbergraph_GashaShopSubWindow_Rate
	 */
	struct UGashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.OnClose__DelegateSignature
	 */
	struct UGashaShopSubWindow_Rate_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
