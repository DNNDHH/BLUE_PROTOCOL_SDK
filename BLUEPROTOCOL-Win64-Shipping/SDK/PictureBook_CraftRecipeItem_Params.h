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
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.IsCraftable
	 */
	struct UPictureBook_CraftRecipeItem_C_IsCraftable_Params
	{
	public:
		bool                                                       Craftable;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getStorageItemAmount
	 */
	struct UPictureBook_CraftRecipeItem_C_getStorageItemAmount_Params
	{
	public:
		int32_t                                                    ItemIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIsAmount;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getInventoryItemAmount
	 */
	struct UPictureBook_CraftRecipeItem_C_getInventoryItemAmount_Params
	{
	public:
		int32_t                                                    ItemIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIsAmount;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.GetItemName
	 */
	struct UPictureBook_CraftRecipeItem_C_GetItemName_Params
	{
	public:
		int32_t                                                    ItemIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKSR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutIsItemNameText;                                       // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.OnOwnItemChangeDelegate
	 */
	struct UPictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate_Params
	{
	public:
		struct FSBChangeItemAmountParam                            InParam;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.UnbindItemChangeAmountDelegate
	 */
	struct UPictureBook_CraftRecipeItem_C_UnbindItemChangeAmountDelegate_Params
	{	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Destruct
	 */
	struct UPictureBook_CraftRecipeItem_C_Destruct_Params
	{	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Construct
	 */
	struct UPictureBook_CraftRecipeItem_C_Construct_Params
	{	};

	/**
	 * Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.ExecuteUbergraph_PictureBook_CraftRecipeItem
	 */
	struct UPictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
