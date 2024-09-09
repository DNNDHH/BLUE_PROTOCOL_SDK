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
	 * Function CommonIconSimple.CommonIconSimple_C.SetUnidentifiedIcon
	 */
	struct UCommonIconSimple_C_SetUnidentifiedIcon_Params
	{	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetItemBoxContent
	 */
	struct UCommonIconSimple_C_SetItemBoxContent_Params
	{
	public:
		struct FSBItemBoxContentParam                              Data;                                                    // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetProductData
	 */
	struct UCommonIconSimple_C_SetProductData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValid;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetMasterReward
	 */
	struct UCommonIconSimple_C_SetMasterReward_Params
	{
	public:
		struct FSBMasterReward                                     Data;                                                    // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.Set Reward Icon
	 */
	struct UCommonIconSimple_C_SetRewardIcon_Params
	{
	public:
		ESBRewardItemType                                          InRewardType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XHXE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InId;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmountMin;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.GetRewardItemIcon
	 */
	struct UCommonIconSimple_C_GetRewardItemIcon_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Z8L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_G9W7[0x2F];                                  // 0x0001(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetSkyCoin
	 */
	struct UCommonIconSimple_C_SetSkyCoin_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.ItemTypeToToolTipType
	 */
	struct UCommonIconSimple_C_ItemTypeToToolTipType_Params
	{
	public:
		EItemType                                                  InItemType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EToolTipType                                               ToolTipType;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetClassExp
	 */
	struct UCommonIconSimple_C_SetClassExp_Params
	{
	public:
		int32_t                                                    Exp;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetGrayOut
	 */
	struct UCommonIconSimple_C_SetGrayOut_Params
	{
	public:
		bool                                                       IsGrayOut;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetEmptyStamp
	 */
	struct UCommonIconSimple_C_SetEmptyStamp_Params
	{	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetBrokenData
	 */
	struct UCommonIconSimple_C_SetBrokenData_Params
	{	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetBP
	 */
	struct UCommonIconSimple_C_SetBP_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetEmotion
	 */
	struct UCommonIconSimple_C_SetEmotion_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetMoney
	 */
	struct UCommonIconSimple_C_SetMoney_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159
	 */
	struct UCommonIconSimple_C_OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconStamp
	 */
	struct UCommonIconSimple_C_SetIconStamp_Params
	{
	public:
		class FString                                              StampId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconMountImagine
	 */
	struct UCommonIconSimple_C_SetIconMountImagine_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DA8Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InUniqueId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.IconLoadRequest
	 */
	struct UCommonIconSimple_C_IconLoadRequest_Params
	{	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.IconLoadStart
	 */
	struct UCommonIconSimple_C_IconLoadStart_Params
	{	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.IconLoadRequestCheckStart
	 */
	struct UCommonIconSimple_C_IconLoadRequestCheckStart_Params
	{	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconWeapon
	 */
	struct UCommonIconSimple_C_SetIconWeapon_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDetailsMode;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQWX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InItemUniqueId;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageNumber;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconBasic
	 */
	struct UCommonIconSimple_C_SetIconBasic_Params
	{
	public:
		EItemType                                                  Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AZKM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InItemIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconCostume
	 */
	struct UCommonIconSimple_C_SetIconCostume_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisplayLockIcon;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.Set RewardCategory
	 */
	struct UCommonIconSimple_C_SetRewardCategory_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconImagine
	 */
	struct UCommonIconSimple_C_SetIconImagine_Params
	{
	public:
		int32_t                                                    InImagineItemId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRRE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    StorageNumber;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconStampCategory
	 */
	struct UCommonIconSimple_C_SetIconStampCategory_Params
	{
	public:
		int32_t                                                    CategoryId;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconToken
	 */
	struct UCommonIconSimple_C_SetIconToken_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconRecipe
	 */
	struct UCommonIconSimple_C_SetIconRecipe_Params
	{
	public:
		ESBRewardItemType                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R2DZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconAchivement
	 */
	struct UCommonIconSimple_C_SetIconAchivement_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconItem
	 */
	struct UCommonIconSimple_C_SetIconItem_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InItemAmount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDisplayLockIcon;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnidentified;                                          // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconLiquidMemory
	 */
	struct UCommonIconSimple_C_SetIconLiquidMemory_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconStampWithToolTip
	 */
	struct UCommonIconSimple_C_SetIconStampWithToolTip_Params
	{
	public:
		int32_t                                                    StampId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.SetIconRecipeSet
	 */
	struct UCommonIconSimple_C_SetIconRecipeSet_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconSimple.CommonIconSimple_C.ExecuteUbergraph_CommonIconSimple
	 */
	struct UCommonIconSimple_C_ExecuteUbergraph_CommonIconSimple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FTVO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
