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
	 * Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostBySeasonPass
	 */
	struct UFlatShop_Credit_C_UpdateProductCostBySeasonPass_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLack;                                                  // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5A1X[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetSelectNum
	 */
	struct UFlatShop_Credit_C_SetSelectNum_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.IsExpiredDay
	 */
	struct UFlatShop_Credit_C_IsExpiredDay_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsExpired;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3H7I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostByCoupon
	 */
	struct UFlatShop_Credit_C_UpdateProductCostByCoupon_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLack;                                                  // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DTQS[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetProductCost
	 */
	struct UFlatShop_Credit_C_SetProductCost_Params
	{
	public:
		int32_t                                                    Cost;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLack;                                                 // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.Reset Count Move
	 */
	struct UFlatShop_Credit_C_ResetCountMove_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.Init
	 */
	struct UFlatShop_Credit_C_Init_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetBPPoint
	 */
	struct UFlatShop_Credit_C_SetBPPoint_Params
	{
	public:
		int32_t                                                    BPPoint;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KX8X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetRoseOrb
	 */
	struct UFlatShop_Credit_C_SetRoseOrb_Params
	{
	public:
		int32_t                                                    Free;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Paid;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           FreeExpired;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           PaidExpired;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetSeasonPoint
	 */
	struct UFlatShop_Credit_C_SetSeasonPoint_Params
	{
	public:
		int32_t                                                    SeasonPoint;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetSwitchType
	 */
	struct UFlatShop_Credit_C_SetSwitchType_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.ChangeToTicketType
	 */
	struct UFlatShop_Credit_C_ChangeToTicketType_Params
	{
	public:
		TArray<int32_t>                                            TicketIdList;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            TicketPriceList;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetGashaCreditType
	 */
	struct UFlatShop_Credit_C_SetGashaCreditType_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.Set Gasha Credit Num
	 */
	struct UFlatShop_Credit_C_SetGashaCreditNum_Params
	{
	public:
		int32_t                                                    Free;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Paid;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkyCoin;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8GNS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           FreeExpired;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           PaidExpired;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           BPPointExpired;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetCreditNum
	 */
	struct UFlatShop_Credit_C_SetCreditNum_Params
	{
	public:
		int32_t                                                    Free;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Paid;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.SetShopType
	 */
	struct UFlatShop_Credit_C_SetShopType_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDialog;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.Construct
	 */
	struct UFlatShop_Credit_C_Construct_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.ResetFlag
	 */
	struct UFlatShop_Credit_C_ResetFlag_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.ExecuteUbergraph_FlatShop_Credit
	 */
	struct UFlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H7QM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.OnBPPointClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_OnBPPointClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.OnRoseOrbClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_OnRoseOrbClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Credit.FlatShop_Credit_C.OnGashaClicked__DelegateSignature
	 */
	struct UFlatShop_Credit_C_OnGashaClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
