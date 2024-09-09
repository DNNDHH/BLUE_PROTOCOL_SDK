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
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmount
	 */
	struct UBP_RsDialog_ProductAmount_C_SetAmount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.Construct
	 */
	struct UBP_RsDialog_ProductAmount_C_Construct_Params
	{	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetPaymentType
	 */
	struct UBP_RsDialog_ProductAmount_C_SetPaymentType_Params
	{
	public:
		ERsDialogPaymentType                                       Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.PreConstruct
	 */
	struct UBP_RsDialog_ProductAmount_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmountColor
	 */
	struct UBP_RsDialog_ProductAmount_C_SetAmountColor_Params
	{
	public:
		bool                                                       IsLack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetSelectNum
	 */
	struct UBP_RsDialog_ProductAmount_C_SetSelectNum_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetRibbon_PaidOnly
	 */
	struct UBP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly_Params
	{
	public:
		bool                                                       PaidOnly;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.ExecuteUbergraph_BP_RsDialog_ProductAmount
	 */
	struct UBP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
