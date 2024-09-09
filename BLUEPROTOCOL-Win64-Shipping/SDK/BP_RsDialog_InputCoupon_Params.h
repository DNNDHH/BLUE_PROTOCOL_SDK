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
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_InputCoupon_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_InputCoupon_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.SetDialogInfo
	 */
	struct UBP_RsDialog_InputCoupon_C_SetDialogInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTilteType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E9WP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.Construct
	 */
	struct UBP_RsDialog_InputCoupon_C_Construct_Params
	{	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.PreConstruct
	 */
	struct UBP_RsDialog_InputCoupon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.ExecuteUbergraph_BP_RsDialog_InputCoupon
	 */
	struct UBP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.OnUseCoupon__DelegateSignature
	 */
	struct UBP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
