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
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.SetTitle
	 */
	struct UBP_RsDialog_LimitCondition_C_SetTitle_Params
	{	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_LimitCondition_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.SetDialogInfo
	 */
	struct UBP_RsDialog_LimitCondition_C_SetDialogInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTilteType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VV5W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.AddItem_LimitCondition
	 */
	struct UBP_RsDialog_LimitCondition_C_AddItem_LimitCondition_Params
	{
	public:
		bool                                                       IsAchieve;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E00V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_LimitCondition_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.Construct
	 */
	struct UBP_RsDialog_LimitCondition_C_Construct_Params
	{	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.ResetText
	 */
	struct UBP_RsDialog_LimitCondition_C_ResetText_Params
	{	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.ExecuteUbergraph_BP_RsDialog_LimitCondition
	 */
	struct UBP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NBL3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
