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
	 * Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecutionConfirmText
	 */
	struct UBP_RsDialog_PaymentSelect_C_ExecutionConfirmText_Params
	{
	public:
		ERsDialogPaymentType                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UNIZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.SetPaymentInfo
	 */
	struct UBP_RsDialog_PaymentSelect_C_SetPaymentInfo_Params
	{
	public:
		ERsDialogPaymentType                                       PaymentType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZKYF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_PaymentSelect_C_BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecuteUbergraph_BP_RsDialog_PaymentSelect
	 */
	struct UBP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_PaymentSelect_C_OnButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
