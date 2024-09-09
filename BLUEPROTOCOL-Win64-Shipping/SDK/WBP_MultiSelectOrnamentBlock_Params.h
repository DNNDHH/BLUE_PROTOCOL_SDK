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
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.GetPrice
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_GetPrice_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.SetOneItem
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_SetOneItem_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.SetStorageItem
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_SetStorageItem_Params
	{
	public:
		class UWBP_StorageRowListItem_C*                           InStorageListItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.UpdateDisplay
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_UpdateDisplay_Params
	{	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.ExecuteUbergraph_WBP_MultiSelectOrnamentBlock
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_ExecuteUbergraph_WBP_MultiSelectOrnamentBlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.OnClick__DelegateSignature
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C.OnUpdatePrice__DelegateSignature
	 */
	struct UWBP_MultiSelectOrnamentBlock_C_OnUpdatePrice__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
