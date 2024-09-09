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
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryGroupsId
	 */
	struct UShopMenuDetailsSwitcher_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    LotteryGroupsId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryAbility
	 */
	struct UShopMenuDetailsSwitcher_C_SetLotteryAbility_Params
	{
	public:
		bool                                                       bLotteryAbility;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J04F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBppExchange
	 */
	struct UShopMenuDetailsSwitcher_C_SetBppExchange_Params
	{
	public:
		bool                                                       bCanBppExchange;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NRID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetOriginalRewardType
	 */
	struct UShopMenuDetailsSwitcher_C_GetOriginalRewardType_Params
	{
	public:
		ESBRewardItemType                                          OriginalRewardType;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowOriginal
	 */
	struct UShopMenuDetailsSwitcher_C_ShowOriginal_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowProduct
	 */
	struct UShopMenuDetailsSwitcher_C_ShowProduct_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XCGK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBonus
	 */
	struct UShopMenuDetailsSwitcher_C_SetBonus_Params
	{
	public:
		bool                                                       bBonus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TLR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromItemBoxContent
	 */
	struct UShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent_Params
	{
	public:
		struct FSBItemBoxContentParam                              ItemBoxContent;                                          // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromRewardData
	 */
	struct UShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KLQE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShowProduct;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterRewardId
	 */
	struct UShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId_Params
	{
	public:
		class FName                                                MasterRewardId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterReward
	 */
	struct UShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails_Internal
	 */
	struct UShopMenuDetailsSwitcher_C_ShowItemDetails_Internal_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.RewardTypeToDetailType
	 */
	struct UShopMenuDetailsSwitcher_C_RewardTypeToDetailType_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NE71[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValid;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_ItemDetailTypes                                          DetailType;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ItemTypeToDetailType
	 */
	struct UShopMenuDetailsSwitcher_C_ItemTypeToDetailType_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9DD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValid;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_ItemDetailTypes                                          DetailType;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetCurrentItemDetailType
	 */
	struct UShopMenuDetailsSwitcher_C_GetCurrentItemDetailType_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_ItemDetailTypes                                          DetailType;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetailInternal
	 */
	struct UShopMenuDetailsSwitcher_C_CloseItemDetailInternal_Params
	{
	public:
		E_ItemDetailTypes                                          DetailType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U0Q9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails
	 */
	struct UShopMenuDetailsSwitcher_C_ShowItemDetails_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  InItemType;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6LKL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              UniqueId;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bShowProduct;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitItemDetails
	 */
	struct UShopMenuDetailsSwitcher_C_InitItemDetails_Params
	{
	public:
		class FString                                              InCurrMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SpawnSceneCapture2DStudio
	 */
	struct UShopMenuDetailsSwitcher_C_SpawnSceneCapture2DStudio_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShowCostumeModelCaptureImage
	 */
	struct UShopMenuDetailsSwitcher_C_OnShowCostumeModelCaptureImage_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnLoadWeaponAsset
	 */
	struct UShopMenuDetailsSwitcher_C_OnLoadWeaponAsset_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CreateItemDetails
	 */
	struct UShopMenuDetailsSwitcher_C_CreateItemDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation_Event
	 */
	struct UShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.DestroyItemDetails
	 */
	struct UShopMenuDetailsSwitcher_C_DestroyItemDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnSelectCostumeType_Event
	 */
	struct UShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event_Params
	{
	public:
		bool                                                       IsMaleCostumeSelected;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetail
	 */
	struct UShopMenuDetailsSwitcher_C_CloseItemDetail_Params
	{
	public:
		bool                                                       bAnimation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickedItemBoxDetail
	 */
	struct UShopMenuDetailsSwitcher_C_OnClickedItemBoxDetail_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomInEvent
	 */
	struct UShopMenuDetailsSwitcher_C_OnClickZoomInEvent_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Construct
	 */
	struct UShopMenuDetailsSwitcher_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Destruct
	 */
	struct UShopMenuDetailsSwitcher_C_Destruct_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.PreConstruct
	 */
	struct UShopMenuDetailsSwitcher_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetExternalDirectionalLightRotation
	 */
	struct UShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ApplyExternalDirectionalLightRotation
	 */
	struct UShopMenuDetailsSwitcher_C_ApplyExternalDirectionalLightRotation_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesign
	 */
	struct UShopMenuDetailsSwitcher_C_UpdateDesign_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Init
	 */
	struct UShopMenuDetailsSwitcher_C_Init_Params
	{
	public:
		class FName                                                LayoutType;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesignAndData
	 */
	struct UShopMenuDetailsSwitcher_C_UpdateDesignAndData_Params
	{
	public:
		class FName                                                LayoutType;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitInternal
	 */
	struct UShopMenuDetailsSwitcher_C_InitInternal_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ExecuteUbergraph_ShopMenuDetailsSwitcher
	 */
	struct UShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickItemBoxDetail__DelegateSignature
	 */
	struct UShopMenuDetailsSwitcher_C_OnClickItemBoxDetail__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShow__DelegateSignature
	 */
	struct UShopMenuDetailsSwitcher_C_OnShow__DelegateSignature_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
