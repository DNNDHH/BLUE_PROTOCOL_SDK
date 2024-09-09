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
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.GetPrice
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_GetPrice_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetImagineParameter
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_SetImagineParameter_Params
	{	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetLeveldata
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_SetLeveldata_Params
	{	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetOneItem
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_SetOneItem_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.Set Perk Data
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_SetPerkData_Params
	{
	public:
		int32_t                                                    EffectId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.PreConstruct
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnClick__DelegateSignature
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnUpdatePrice__DelegateSignature
	 */
	struct UWBP_MultiSelectBattleImagineBlock_C_OnUpdatePrice__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
