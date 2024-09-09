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
	 * Function NeedItemList_Item.NeedItemList_Item_C.Initialize Data
	 */
	struct UNeedItemList_Item_C_InitializeData_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.GetTokenName
	 */
	struct UNeedItemList_Item_C_GetTokenName_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YU0S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.InitializeItemLock
	 */
	struct UNeedItemList_Item_C_InitializeItemLock_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.InitializeAmountNum
	 */
	struct UNeedItemList_Item_C_InitializeAmountNum_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7MMW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.SetItemNum
	 */
	struct UNeedItemList_Item_C_SetItemNum_Params
	{
	public:
		int32_t                                                    ItemNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6RWJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.InitializeItem
	 */
	struct UNeedItemList_Item_C_InitializeItem_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.InitializeEventTerm
	 */
	struct UNeedItemList_Item_C_InitializeEventTerm_Params
	{
	public:
		class FString                                              InEventTerm;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.SetupToken
	 */
	struct UNeedItemList_Item_C_SetupToken_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.InitWidthSize
	 */
	struct UNeedItemList_Item_C_InitWidthSize_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.IsCraftable
	 */
	struct UNeedItemList_Item_C_IsCraftable_Params
	{
	public:
		bool                                                       Craftable;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.getStorageItemAmount
	 */
	struct UNeedItemList_Item_C_getStorageItemAmount_Params
	{
	public:
		int32_t                                                    ItemIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIsAmount;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.getInventoryItemAmount
	 */
	struct UNeedItemList_Item_C_getInventoryItemAmount_Params
	{
	public:
		int32_t                                                    ItemIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutIsAmount;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.GetItemName
	 */
	struct UNeedItemList_Item_C_GetItemName_Params
	{
	public:
		int32_t                                                    ItemIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KR8K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutIsItemNameText;                                       // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.Construct
	 */
	struct UNeedItemList_Item_C_Construct_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.OnOwnItemChangeDelegate
	 */
	struct UNeedItemList_Item_C_OnOwnItemChangeDelegate_Params
	{
	public:
		struct FSBChangeItemAmountParam                            InParam;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.UnbindItemChangeAmountDelegate
	 */
	struct UNeedItemList_Item_C_UnbindItemChangeAmountDelegate_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.Destruct
	 */
	struct UNeedItemList_Item_C_Destruct_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.PreConstruct
	 */
	struct UNeedItemList_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.BindItemChangeAmountDelegate
	 */
	struct UNeedItemList_Item_C_BindItemChangeAmountDelegate_Params
	{	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.Set Need Item Data
	 */
	struct UNeedItemList_Item_C_SetNeedItemData_Params
	{
	public:
		struct FCraftNeedItems                                     NeedItem;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function NeedItemList_Item.NeedItemList_Item_C.ExecuteUbergraph_NeedItemList_Item
	 */
	struct UNeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
