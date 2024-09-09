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
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetEquipmentIcon
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon_Params
	{	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetImagineParam
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_SetImagineParam_Params
	{
	public:
		struct FImagineParameter                                   ImagineParameter;                                        // 0x0000(0x006C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_NNC9[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.GetPrice
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_GetPrice_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetOneItem
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_SetOneItem_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnClick__DelegateSignature
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnUpdatePrice__DelegateSignature
	 */
	struct UWBP_MultiSelectInnerImagineBlock_C_OnUpdatePrice__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
