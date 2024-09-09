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
	 * Function PaymentSelect.PaymentSelect_C.CheckVersion
	 */
	struct UPaymentSelect_C_CheckVersion_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ok;                                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.On_List_Payment_GenerateWidget_1
	 */
	struct UPaymentSelect_C_On_List_Payment_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.CreatePaymentList
	 */
	struct UPaymentSelect_C_CreatePaymentList_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.Construct
	 */
	struct UPaymentSelect_C_Construct_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UPaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UPaymentSelect_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UPaymentSelect_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UPaymentSelect_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.OnIconClicked
	 */
	struct UPaymentSelect_C_OnIconClicked_Params
	{
	public:
		int32_t                                                    IconIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.OnClickClosed
	 */
	struct UPaymentSelect_C_OnClickClosed_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.Destruct
	 */
	struct UPaymentSelect_C_Destruct_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UPaymentSelect_C_BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPaymentSelect_C_BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.ExecuteUbergraph_PaymentSelect
	 */
	struct UPaymentSelect_C_ExecuteUbergraph_PaymentSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VUFM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.OnCancel__DelegateSignature
	 */
	struct UPaymentSelect_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function PaymentSelect.PaymentSelect_C.OnDecide__DelegateSignature
	 */
	struct UPaymentSelect_C_OnDecide__DelegateSignature_Params
	{
	public:
		class FString                                              Payment;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
