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
	 * Function BP_SBProductData.BP_SBProductData_C.GetItemBoxDepthIndex
	 */
	struct UBP_SBProductData_C_GetItemBoxDepthIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.IsItemBox
	 */
	struct UBP_SBProductData_C_IsItemBox_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LFA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetIconItemData
	 */
	struct UBP_SBProductData_C_GetIconItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             ItemData;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.IsCostumeSet
	 */
	struct UBP_SBProductData_C_IsCostumeSet_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9262[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetDetailType
	 */
	struct UBP_SBProductData_C_GetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      DetailType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetSelectedData
	 */
	struct UBP_SBProductData_C_GetSelectedData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetItemDataList
	 */
	struct UBP_SBProductData_C_GetItemDataList_Params
	{
	public:
		TArray<class UBP_SBProductItemData_C*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetScrollOffset
	 */
	struct UBP_SBProductData_C_GetScrollOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetParentData
	 */
	struct UBP_SBProductData_C_GetParentData_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97DJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDropTreasureData
	 */
	struct UBP_SBProductData_C_InitFromDetailMenuByDropTreasureData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OHZF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBonus;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4NRS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RewardLotId;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RB3L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.IsSoldOut
	 */
	struct UBP_SBProductData_C_IsSoldOut_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.SetPrice
	 */
	struct UBP_SBProductData_C_SetPrice_Params
	{
	public:
		int32_t                                                    Price;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitDungeonSupply_Internal
	 */
	struct UBP_SBProductData_C_InitDungeonSupply_Internal_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.IsTryingFirstItem
	 */
	struct UBP_SBProductData_C_IsTryingFirstItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitMasterReward_Internal
	 */
	struct UBP_SBProductData_C_InitMasterReward_Internal_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_PA9C[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByRewardData
	 */
	struct UBP_SBProductData_C_InitFromDetailMenuByRewardData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5B1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBonus;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8OG[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByUniqueId
	 */
	struct UBP_SBProductData_C_InitFromDetailMenuByUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OverrideAmount;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMailDatas
	 */
	struct UBP_SBProductData_C_InitFromDetailMenuByMailDatas_Params
	{
	public:
		TArray<struct FSBMailData>                                 MailDatas;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDungeonSupply
	 */
	struct UBP_SBProductData_C_InitFromDetailMenuByDungeonSupply_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMasterReward
	 */
	struct UBP_SBProductData_C_InitFromDetailMenuByMasterReward_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenu
	 */
	struct UBP_SBProductData_C_InitFromDetailMenu_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.IsSelectFirstItem
	 */
	struct UBP_SBProductData_C_IsSelectFirstItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.IsHideList
	 */
	struct UBP_SBProductData_C_IsHideList_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromAdventureBoard
	 */
	struct UBP_SBProductData_C_InitFromAdventureBoard_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriod
	 */
	struct UBP_SBProductData_C_GetPurchasePeriod_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromGashaRewardList
	 */
	struct UBP_SBProductData_C_InitFromGashaRewardList_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FSBGashaReward>                              GashaRewardList;                                         // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonPassRewardItemData
	 */
	struct UBP_SBProductData_C_InitFromSeasonPassRewardItemData_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonRankPointShopProductData
	 */
	struct UBP_SBProductData_C_InitFromSeasonRankPointShopProductData_Params
	{
	public:
		struct FSBProductData                                      ProductData;                                             // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromFlatShopProductData
	 */
	struct UBP_SBProductData_C_InitFromFlatShopProductData_Params
	{
	public:
		struct FSBProductData                                      ProductData;                                             // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromDummyItemBox
	 */
	struct UBP_SBProductData_C_InitFromDummyItemBox_Params
	{	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromRoseOrbShopItemMaster
	 */
	struct UBP_SBProductData_C_InitFromRoseOrbShopItemMaster_Params
	{
	public:
		struct FSBRoseOrbShopItemMasterData                        RoseOrbShopItemMaster;                                   // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.InitFromShopItemInfoList
	 */
	struct UBP_SBProductData_C_InitFromShopItemInfoList_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<struct FShopItemInfo>                               ShopItemInfoList;                                        // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBRmShopMenuType                                          ShopType;                                                // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_709N[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriodText
	 */
	struct UBP_SBProductData_C_GetPurchasePeriodText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetPurchaseRestrictionCountText
	 */
	struct UBP_SBProductData_C_GetPurchaseRestrictionCountText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.SetShopType
	 */
	struct UBP_SBProductData_C_SetShopType_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.SetDetailType
	 */
	struct UBP_SBProductData_C_SetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.HasPurchaseRestriction
	 */
	struct UBP_SBProductData_C_HasPurchaseRestriction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.GetProductIconItemData
	 */
	struct UBP_SBProductData_C_GetProductIconItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             ItemData;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.HasPurchasePeriod
	 */
	struct UBP_SBProductData_C_HasPurchasePeriod_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HYV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.CreateItemBoxDummyData
	 */
	struct UBP_SBProductData_C_CreateItemBoxDummyData_Params
	{	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.CreateDummyData2
	 */
	struct UBP_SBProductData_C_CreateDummyData2_Params
	{	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.CreateDummyData
	 */
	struct UBP_SBProductData_C_CreateDummyData_Params
	{	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.SetScrollOffset
	 */
	struct UBP_SBProductData_C_SetScrollOffset_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.SetSelectedData
	 */
	struct UBP_SBProductData_C_SetSelectedData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductData.BP_SBProductData_C.ExecuteUbergraph_BP_SBProductData
	 */
	struct UBP_SBProductData_C_ExecuteUbergraph_BP_SBProductData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5YXR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
