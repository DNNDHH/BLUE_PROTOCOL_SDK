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
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Get Price
	 */
	struct UWBP_BaseMultiSelectBlock_C_GetPrice_Params
	{
	public:
		bool                                                       LockExcluded;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N3O3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Price;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetOneItem
	 */
	struct UWBP_BaseMultiSelectBlock_C_SetOneItem_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetStorageItem
	 */
	struct UWBP_BaseMultiSelectBlock_C_SetStorageItem_Params
	{
	public:
		class UWBP_StorageRowListItem_C*                           InStorageListItem;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.AllCollapsed
	 */
	struct UWBP_BaseMultiSelectBlock_C_AllCollapsed_Params
	{	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Construct
	 */
	struct UWBP_BaseMultiSelectBlock_C_Construct_Params
	{	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_1
	 */
	struct UWBP_BaseMultiSelectBlock_C_CustomEvent_1_Params
	{	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_2
	 */
	struct UWBP_BaseMultiSelectBlock_C_CustomEvent_2_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.ExecuteUbergraph_WBP_BaseMultiSelectBlock
	 */
	struct UWBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E6TV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnClick__DelegateSignature
	 */
	struct UWBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  NewParam;                                                // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnUpdatePrice__DelegateSignature
	 */
	struct UWBP_BaseMultiSelectBlock_C_OnUpdatePrice__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
