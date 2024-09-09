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
	 * Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_UseItem_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.SetDialogInfo
	 */
	struct UBP_RsDialog_UseItem_C_SetDialogInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTitleType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79EZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    RankFrom;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankTo;                                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                EffectDescription;                                       // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_UseItem_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.ExecuteUbergraph_BP_RsDialog_UseItem
	 */
	struct UBP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
