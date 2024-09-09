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
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkSelected
	 */
	struct UInhelitPerkSelector_C_IsPerkSelected_Params
	{
	public:
		struct FSBStackBPerk                                       Perk;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bSelected;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9IYY[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkContains
	 */
	struct UInhelitPerkSelector_C_IsPerkContains_Params
	{
	public:
		bool                                                       isContains;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EPHZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.AllSelectNone
	 */
	struct UInhelitPerkSelector_C_AllSelectNone_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.GenerateList
	 */
	struct UInhelitPerkSelector_C_GenerateList_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.Construct
	 */
	struct UInhelitPerkSelector_C_Construct_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectListItem
	 */
	struct UInhelitPerkSelector_C_OnSelectListItem_Params
	{
	public:
		class UPlugSetMenuPartSlotButton_C*                        SelectedButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.ExecuteUbergraph_InhelitPerkSelector
	 */
	struct UInhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9MQG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.OnClose__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectChange__DelegateSignature
	 */
	struct UInhelitPerkSelector_C_OnSelectChange__DelegateSignature_Params
	{
	public:
		struct FSBStackBPerk                                       Before;                                                  // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBStackBPerk                                       Select;                                                  // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
