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
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.ListenCancelKey
	 */
	struct UGashaShopSubWindow_C_ListenCancelKey_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.SetText
	 */
	struct UGashaShopSubWindow_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Update Warning Comment
	 */
	struct UGashaShopSubWindow_C_UpdateWarningComment_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Set Credit
	 */
	struct UGashaShopSubWindow_C_SetCredit_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBGashaCurrencyType                                       CurrencyType;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F37U[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.SetWarningComment
	 */
	struct UGashaShopSubWindow_C_SetWarningComment_Params
	{
	public:
		class FString                                              GashaId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicket
	 */
	struct UGashaShopSubWindow_C_SelectTicket_Params
	{
	public:
		struct FSBGashaTickets                                     TicketData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.SetExecutionInfo
	 */
	struct UGashaShopSubWindow_C_SetExecutionInfo_Params
	{
	public:
		bool                                                       IsTickets;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_784B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InTitleName;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBGashaPurchaseType                                       PurchaseType;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T25E[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Amount;                                                  // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Price;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SFAL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBGashaPrices                                      GashaPrice;                                              // 0x0028(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FSBGashaTickets>                             GashaTickets;                                            // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InitSkip;                                                // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5EAY[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Gender;                                                  // 0x005C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Set Info
	 */
	struct UGashaShopSubWindow_C_SetInfo_Params
	{
	public:
		TArray<struct FSBGashaReward>                              InRewardList;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Update Product List
	 */
	struct UGashaShopSubWindow_C_UpdateProductList_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.StepUpConstruct
	 */
	struct UGashaShopSubWindow_C_StepUpConstruct_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature_Params
	{
	public:
		struct FSBGashaInfo                                        GashaInfo;                                               // 0x0000(0x01C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Construct
	 */
	struct UGashaShopSubWindow_C_Construct_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Close
	 */
	struct UGashaShopSubWindow_C_Close_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UGashaShopSubWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicketAnimFinished
	 */
	struct UGashaShopSubWindow_C_SelectTicketAnimFinished_Params
	{
	public:
		struct FSBGashaTickets                                     TicketData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.OnTicketGashaLever
	 */
	struct UGashaShopSubWindow_C_OnTicketGashaLever_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.Destruct
	 */
	struct UGashaShopSubWindow_C_Destruct_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.ExecuteUbergraph_GashaShopSubWindow
	 */
	struct UGashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3SGQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopBPPBtn__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_OnShopBPPBtn__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopRoseOrbBtn__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_OnShopRoseOrbBtn__DelegateSignature_Params
	{	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.OnChangeSkipBtn__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature_Params
	{
	public:
		bool                                                       IsSkip;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.OnExecution__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_OnExecution__DelegateSignature_Params
	{
	public:
		struct FSBGashaTickets                                     TicketData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    TicketPlayCount;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GashaShopSubWindow.GashaShopSubWindow_C.OnClose__DelegateSignature
	 */
	struct UGashaShopSubWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
