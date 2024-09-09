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
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.GetPrice
	 */
	struct UWBP_MultiSelectItemBlock_C_GetPrice_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.SetOneItem
	 */
	struct UWBP_MultiSelectItemBlock_C_SetOneItem_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.SetStorageItem
	 */
	struct UWBP_MultiSelectItemBlock_C_SetStorageItem_Params
	{
	public:
		class UWBP_StorageRowListItem_C*                           InStorageListItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.UpdateDisplay
	 */
	struct UWBP_MultiSelectItemBlock_C_UpdateDisplay_Params
	{	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Plus_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_BndEvt__SBButton_Plus_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Minus_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_BndEvt__SBButton_Minus_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_BndEvt__SBButton_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.ExecuteUbergraph_WBP_MultiSelectItemBlock
	 */
	struct UWBP_MultiSelectItemBlock_C_ExecuteUbergraph_WBP_MultiSelectItemBlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.OnClick__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C.OnUpdatePrice__DelegateSignature
	 */
	struct UWBP_MultiSelectItemBlock_C_OnUpdatePrice__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
