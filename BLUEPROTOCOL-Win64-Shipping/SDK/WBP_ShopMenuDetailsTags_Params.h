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
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetOwnItemByUniqueIdForInventoryTagStackB
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetOwnItemByUniqueIdForInventoryTagStackB_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.Set Lottery Groups Id
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    InLotteryGroupsId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetBppExchange
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetBppExchange_Params
	{
	public:
		bool                                                       bCanBppExchange;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsBppIrredeemable
	 */
	struct UWBP_ShopMenuDetailsTags_C_IsBppIrredeemable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AY1J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.IsVisibieShowProductForCurrency
	 */
	struct UWBP_ShopMenuDetailsTags_C_IsVisibieShowProductForCurrency_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TB9F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49XH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.GetEventTermDataForCurrency
	 */
	struct UWBP_ShopMenuDetailsTags_C_GetEventTermDataForCurrency_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIZK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              EventTermId;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DurationMinutes;                                         // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9OGH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCostumeData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetCostumeData_Params
	{
	public:
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetWeaponData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetWeaponData_Params
	{
	public:
		struct FSBWeaponMasterData                                 WeaponMaster;                                            // 0x0000(0x00C8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bSell;                                                   // 0x00C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_95GY[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InUniqueId;                                              // 0x00D0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InRecipeId;                                              // 0x00E0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.PreConstruct
	 */
	struct UWBP_ShopMenuDetailsTags_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetImagineData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetMountImagineData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetMountImagineData_Params
	{
	public:
		struct FSBMasterMountImagine                               MasterMountImagine;                                      // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetCurrencyData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetCurrencyData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y90M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowZoomInButton
	 */
	struct UWBP_ShopMenuDetailsTags_C_ShowZoomInButton_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowRotateIcon
	 */
	struct UWBP_ShopMenuDetailsTags_C_ShowRotateIcon_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ShowViewIllustImagineButton
	 */
	struct UWBP_ShopMenuDetailsTags_C_ShowViewIllustImagineButton_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetItemData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetItemData_Params
	{
	public:
		struct FItemMasterData                                     ItemMaster;                                              // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetAchievementData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetAchievementData_Params
	{
	public:
		struct FAchievementMasterData                              AchievementMaster;                                       // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetEmoteData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetEmoteData_Params
	{
	public:
		struct FSBEmoteMasterData                                  EmoteMaster;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetStampData_Params
	{
	public:
		struct FSBStampMasterData                                  StampMasterData;                                         // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDateTimeTextColor
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetDateTimeTextColor_Params
	{
	public:
		struct FLinearColor                                        LimitTimeColor;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DescColor;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
	 */
	struct UWBP_ShopMenuDetailsTags_C_BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetStampDataByCategory
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetStampDataByCategory_Params
	{
	public:
		struct FSBStampCategoryMasterData                          StampCategoryMaster;                                     // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetDefault
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetDefault_Params
	{	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.SetOrnamentData
	 */
	struct UWBP_ShopMenuDetailsTags_C_SetOrnamentData_Params
	{
	public:
		struct FSBMasterOrnament                                   InOrnamentData;                                          // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.ExecuteUbergraph_WBP_ShopMenuDetailsTags
	 */
	struct UWBP_ShopMenuDetailsTags_C_ExecuteUbergraph_WBP_ShopMenuDetailsTags_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickReturnDisplay__DelegateSignature
	 */
	struct UWBP_ShopMenuDetailsTags_C_OnClickReturnDisplay__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickShowProduct__DelegateSignature
	 */
	struct UWBP_ShopMenuDetailsTags_C_OnClickShowProduct__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C.OnClickZoomIn__DelegateSignature
	 */
	struct UWBP_ShopMenuDetailsTags_C_OnClickZoomIn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
