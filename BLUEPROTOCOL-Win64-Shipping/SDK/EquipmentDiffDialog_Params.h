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
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.Set Own Item
	 */
	struct UEquipmentDiffDialog_C_SetOwnItem_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G0EF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        OwnItem;                                                 // 0x0008(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.SetRecepi
	 */
	struct UEquipmentDiffDialog_C_SetRecepi_Params
	{
	public:
		bool                                                       IsImagine;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Left;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O7KL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RecepiId;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.Construct
	 */
	struct UEquipmentDiffDialog_C_Construct_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentDiffDialog_C_BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.Close
	 */
	struct UEquipmentDiffDialog_C_Close_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UEquipmentDiffDialog_C_BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnPressCancel
	 */
	struct UEquipmentDiffDialog_C_OnPressCancel_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.Destruct
	 */
	struct UEquipmentDiffDialog_C_Destruct_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UEquipmentDiffDialog_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.ExecuteUbergraph_EquipmentDiffDialog
	 */
	struct UEquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnClose__DelegateSignature
	 */
	struct UEquipmentDiffDialog_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
