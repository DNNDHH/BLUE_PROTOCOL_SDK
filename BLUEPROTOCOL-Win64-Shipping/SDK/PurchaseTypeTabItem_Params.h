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
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.SetBtnSelected
	 */
	struct UPurchaseTypeTabItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U0CA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.GetBtnText
	 */
	struct UPurchaseTypeTabItem_C_GetBtnText_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPurchaseTypeTabItem_C_BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPurchaseTypeTabItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UPurchaseTypeTabItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UPurchaseTypeTabItem_C_BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.PreConstruct
	 */
	struct UPurchaseTypeTabItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.ExecuteUbergraph_PurchaseTypeTabItem
	 */
	struct UPurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.OnBtnClicked__DelegateSignature
	 */
	struct UPurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    BtnId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
