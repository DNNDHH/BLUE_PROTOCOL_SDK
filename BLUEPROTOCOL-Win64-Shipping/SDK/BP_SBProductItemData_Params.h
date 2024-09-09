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
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemBoxDepthIndex
	 */
	struct UBP_SBProductItemData_C_GetItemBoxDepthIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.IsItemBox
	 */
	struct UBP_SBProductItemData_C_IsItemBox_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetIconItemData
	 */
	struct UBP_SBProductItemData_C_GetIconItemData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             ItemData;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeSet
	 */
	struct UBP_SBProductItemData_C_IsCostumeSet_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetDetailType
	 */
	struct UBP_SBProductItemData_C_GetDetailType_Params
	{
	public:
		E_SBProductDetailType                                      DetailType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJ3P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetSelectedData
	 */
	struct UBP_SBProductItemData_C_GetSelectedData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemDataList
	 */
	struct UBP_SBProductItemData_C_GetItemDataList_Params
	{
	public:
		TArray<class UBP_SBProductItemData_C*>                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetScrollOffset
	 */
	struct UBP_SBProductItemData_C_GetScrollOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetParentData
	 */
	struct UBP_SBProductItemData_C_GetParentData_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BOQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_0Y4M[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryId
	 */
	struct UBP_SBProductItemData_C_SetLotteryId_Params
	{
	public:
		int32_t                                                    RewardLotId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetAmount
	 */
	struct UBP_SBProductItemData_C_SetAmount_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryAbility
	 */
	struct UBP_SBProductItemData_C_SetLotteryAbility_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetBonus
	 */
	struct UBP_SBProductItemData_C_SetBonus_Params
	{
	public:
		bool                                                       bBonus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetRewardType
	 */
	struct UBP_SBProductItemData_C_GetRewardType_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitSeasonPassRewardExtraData
	 */
	struct UBP_SBProductItemData_C_InitSeasonPassRewardExtraData_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     InSeasonPassMenuRewardItemData;                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.IsShowRate
	 */
	struct UBP_SBProductItemData_C_IsShowRate_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMailData
	 */
	struct UBP_SBProductItemData_C_InitFromMailData_Params
	{
	public:
		struct FSBMailData                                         MailData;                                                // 0x0000(0x0190)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromEventShopProductData
	 */
	struct UBP_SBProductItemData_C_InitFromEventShopProductData_Params
	{
	public:
		struct FSBEventShopProduct                                 ProductData;                                             // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemIndex
	 */
	struct UBP_SBProductItemData_C_GetItemIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeData
	 */
	struct UBP_SBProductItemData_C_IsCostumeData_Params
	{
	public:
		bool                                                       bFlag;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.ToItemType(IntegerFromMasterData)
	 */
	struct UBP_SBProductItemData_C_ToItemTypeIntegerFromMasterData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  ItemType;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.HasWight
	 */
	struct UBP_SBProductItemData_C_HasWight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromGashaReward
	 */
	struct UBP_SBProductItemData_C_InitFromGashaReward_Params
	{
	public:
		struct FSBGashaReward                                      GashaReward;                                             // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.IsSetItem
	 */
	struct UBP_SBProductItemData_C_IsSetItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetVisibility
	 */
	struct UBP_SBProductItemData_C_GetVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetVisibility
	 */
	struct UBP_SBProductItemData_C_SetVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetTrying
	 */
	struct UBP_SBProductItemData_C_SetTrying_Params
	{
	public:
		bool                                                       bTrying;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetTrying
	 */
	struct UBP_SBProductItemData_C_GetTrying_Params
	{
	public:
		bool                                                       bTrying;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.GetCostumeMasterData
	 */
	struct UBP_SBProductItemData_C_GetCostumeMasterData_Params
	{
	public:
		struct FSBMasterCostume                                    CostumeMasterData;                                       // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.HasRewardType
	 */
	struct UBP_SBProductItemData_C_HasRewardType_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.HasMasterReward
	 */
	struct UBP_SBProductItemData_C_HasMasterReward_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.HasItemBoxContent
	 */
	struct UBP_SBProductItemData_C_HasItemBoxContent_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.HasUniqueId
	 */
	struct UBP_SBProductItemData_C_HasUniqueId_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemBox
	 */
	struct UBP_SBProductItemData_C_InitFromDummyItemBox_Params
	{	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyCostumeSetBox
	 */
	struct UBP_SBProductItemData_C_InitFromDummyCostumeSetBox_Params
	{
	public:
		int32_t                                                    DummyDataIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRO6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInCostumeSet
	 */
	struct UBP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet_Params
	{
	public:
		int32_t                                                    DummyCostumeSetIndex;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DummyDataIndex;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInItemBox
	 */
	struct UBP_SBProductItemData_C_InitFromDummyItemDataInItemBox_Params
	{
	public:
		int32_t                                                    DummyDataIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemData
	 */
	struct UBP_SBProductItemData_C_InitFromDummyItemData_Params
	{
	public:
		int32_t                                                    DummyDataIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromShopItemInfo
	 */
	struct UBP_SBProductItemData_C_InitFromShopItemInfo_Params
	{
	public:
		struct FShopItemInfo                                       ShopItemInfo;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitIfItemBox
	 */
	struct UBP_SBProductItemData_C_InitIfItemBox_Params
	{	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.initFromItemBoxContentParam
	 */
	struct UBP_SBProductItemData_C_initFromItemBoxContentParam_Params
	{
	public:
		struct FSBItemBoxContentParam                              ItemBoxContentParam;                                     // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bCanParentBppExchange;                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMasterReward
	 */
	struct UBP_SBProductItemData_C_InitFromMasterReward_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_O480[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromRewardData
	 */
	struct UBP_SBProductItemData_C_InitFromRewardData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C9II[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromItemData
	 */
	struct UBP_SBProductItemData_C_InitFromItemData_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OFTS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SUP6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromUniqueId
	 */
	struct UBP_SBProductItemData_C_InitFromUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetScrollOffset
	 */
	struct UBP_SBProductItemData_C_SetScrollOffset_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.SetSelectedData
	 */
	struct UBP_SBProductItemData_C_SetSelectedData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.ExecuteUbergraph_BP_SBProductItemData
	 */
	struct UBP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R9CQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeVisibility__DelegateSignature
	 */
	struct UBP_SBProductItemData_C_OnChangeVisibility__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeTrying__DelegateSignature
	 */
	struct UBP_SBProductItemData_C_OnChangeTrying__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
