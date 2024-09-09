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
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.Set Caution Text
	 */
	struct UBP_RsDialog_Purchase_C_SetCautionText_Params
	{	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetShopType
	 */
	struct UBP_RsDialog_Purchase_C_SetShopType_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetTitle
	 */
	struct UBP_RsDialog_Purchase_C_SetTitle_Params
	{	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Purchase_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Purchase_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDialogInfo
	 */
	struct UBP_RsDialog_Purchase_C_SetDialogInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTilteType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T9P1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    RankFrom;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankTo;                                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowPurchaseNum;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PHAL[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchaseNum;                                             // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogPaymentType                                       PaymentType;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQOQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice;                                           // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLack;                                                 // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PaidOnly;                                                // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDiscountRate
	 */
	struct UBP_RsDialog_Purchase_C_SetDiscountRate_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDiscountRate_SeasonPass
	 */
	struct UBP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetState_Lack
	 */
	struct UBP_RsDialog_Purchase_C_SetState_Lack_Params
	{
	public:
		bool                                                       IsLack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.ExecuteUbergraph_BP_RsDialog_Purchase
	 */
	struct UBP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
