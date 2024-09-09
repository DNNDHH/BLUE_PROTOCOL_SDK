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
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetVisibleInventoryTagInfoIcon
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetVisibleInventoryTagInfoIcon_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetVisibleSPEffectBonusInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetVisibleSPEffectBonusInfo_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetBattleScoreTextColor
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetBattleScoreTextColor_Params
	{
	public:
		struct FOwnItemInfo                                        InBeforeItem;                                            // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FOwnItemInfo                                        InAfterItem;                                             // 0x0150(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetStackBToolTipStatus
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetStackBToolTipStatus_Params
	{
	public:
		bool                                                       bIsIconOff;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWishListMode
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetWishListMode_Params
	{
	public:
		bool                                                       bWishList;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Show Basic Status Parts Tags
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_ShowBasicStatusPartsTags_Params
	{	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetPrevInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetPrevInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Prev;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescPosition
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetDescPosition_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescSPEffectByRecipi
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetWeaponDescSPEffectByRecipi_Params
	{
	public:
		int32_t                                                    InRecipiId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.HideBasicStatusPartsTags
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_HideBasicStatusPartsTags_Params
	{	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetImagineDescByOwnItemInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetImagineDescByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set SPEffect Txt Color
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetSPEffectTxtColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetLevelSync
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetLevelSync_Params
	{
	public:
		bool                                                       bIsLevelSync;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadImagineAsset
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_LoadImagineAsset_Params
	{
	public:
		int32_t                                                    WeaponItemId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Imagine Desc By Character Imagine Recepi Data
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetImagineDescByCharacterImagineRecepiData_Params
	{
	public:
		struct FCharacterCraftRecepi                               MasterData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDrawMode
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateDrawMode_Params
	{	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.LoadWeaponAsset
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_LoadWeaponAsset_Params
	{
	public:
		int32_t                                                    WeaponItemId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Set Weapon Desc By Character Craft Recepi Data
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetWeaponDescByCharacterCraftRecepiData_Params
	{
	public:
		struct FCharacterCraftRecepi                               MasterData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetWeaponDescByOwnItemInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetWeaponDescByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InWeaponUniqueId;                                        // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SwitchBaseBgType
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SwitchBaseBgType_Params
	{
	public:
		bool                                                       InIsNormalType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetDescToDefault
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetDescToDefault_Params
	{
	public:
		bool                                                       InIsDescDefault;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentModelCaptureImageVisibility
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetEquipmentModelCaptureImageVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetUsingEquipmentImage2Dor3D
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetUsingEquipmentImage2Dor3D_Params
	{
	public:
		bool                                                       InUse3D;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByMasterData
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByMasterData_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitTagsByMaster;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1BW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByMasterData
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByMasterData_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinLevel;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxLevel;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRecipiId;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitTagsByMaster;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W85Z[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByMasterData
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateDescByMasterData_Params
	{
	public:
		int32_t                                                    InEquipmentItemId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R3N2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateImagineDescByOwnItemInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateImagineDescByOwnItemInfo_Params
	{
	public:
		class FString                                              inImagineUniqueId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateWeaponDescByOwnItemInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateWeaponDescByOwnItemInfo_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.UpdateDescByOwnItemInfo
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_UpdateDescByOwnItemInfo_Params
	{
	public:
		class FString                                              InEquipmentUniqueId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.SetEquipmentType
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_SetEquipmentType_Params
	{
	public:
		ESBCharaEquipType                                          InEquipType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.PreConstruct
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.Construct
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_Construct_Params
	{	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.ExecuteUbergraph_CommonEquipmentStatusDescWithImageView
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_ExecuteUbergraph_CommonEquipmentStatusDescWithImageView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestBattleImagineModelLoad__DelegateSignature
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_OnRequestBattleImagineModelLoad__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InBattleImagineInventoryItemData;                        // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C.OnRequestWeaponModelLoad__DelegateSignature
	 */
	struct UCommonEquipmentStatusDescWithImageView_C_OnRequestWeaponModelLoad__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InWeaponInventoryItemData;                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
