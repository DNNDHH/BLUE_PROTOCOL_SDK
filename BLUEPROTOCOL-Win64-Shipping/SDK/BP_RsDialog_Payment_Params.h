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
	 * Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Payment_C_BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.SetDialogInfo
	 */
	struct UBP_RsDialog_Payment_C_SetDialogInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTilteType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z6Q5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    RankFrom;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankTo;                                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowPurchaseNum;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNXN[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchaseNum;                                             // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogPaymentType                                       PaymentType01;                                           // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUXS[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice01;                                         // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogPaymentType                                       PaymentType02;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GGH3[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice02;                                         // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Payment_C_BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Payment_C_BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.ExecuteUbergraph_BP_RsDialog_Payment
	 */
	struct UBP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
