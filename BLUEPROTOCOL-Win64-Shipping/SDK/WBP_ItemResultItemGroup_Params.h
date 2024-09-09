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
	 * Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.SetItem
	 */
	struct UWBP_ItemResultItemGroup_C_SetItem_Params
	{
	public:
		TArray<struct FSBItemBoxResultItemData>                    ItemList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.ExecuteUbergraph_WBP_ItemResultItemGroup
	 */
	struct UWBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
