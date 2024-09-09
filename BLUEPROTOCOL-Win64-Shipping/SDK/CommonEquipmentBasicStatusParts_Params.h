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
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdatePrevAbilityTextColor
	 */
	struct UCommonEquipmentBasicStatusParts_C_UpdatePrevAbilityTextColor_Params
	{
	public:
		struct FOwnItemInfo                                        Prev;                                                    // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetVisibleInventoryTagInfoIcon
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetVisibleInventoryTagInfoIcon_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetVisibleSPEffectBonusInfo
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetVisibleSPEffectBonusInfo_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetBattleScoreTextColor
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetBattleScoreTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetStackBToolTipTagStatus
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetStackBToolTipTagStatus_Params
	{
	public:
		bool                                                       bIsIconOff;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetBattleScoreVisibility
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetBattleScoreVisibility_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateSocketsInfoByWeaponId
	 */
	struct UCommonEquipmentBasicStatusParts_C_UpdateSocketsInfoByWeaponId_Params
	{
	public:
		int32_t                                                    RecipiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpImagineUniqueStatusSets
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpImagineUniqueStatusSets_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpSockets
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpSockets_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpSPEffects
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpSPEffects_Params
	{
	public:
		bool                                                       bInIsSPEffectsNewFormat;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.InitView
	 */
	struct UCommonEquipmentBasicStatusParts_C_InitView_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpBattleScoreTitleTxt
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpBattleScoreTitleTxt_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevelHeadingTxt
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpLevelHeadingTxt_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevelSync
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpLevelSync_Params
	{
	public:
		bool                                                       bNeedLevelSync;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpLevel
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpLevel_Params
	{
	public:
		int32_t                                                    LevelValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BattleScoreValue;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetWishListMode
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetWishListMode_Params
	{
	public:
		bool                                                       bForWishList;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ShowBasicTagInfos
	 */
	struct UCommonEquipmentBasicStatusParts_C_ShowBasicTagInfos_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByWeaponMaster
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByWeaponMaster_Params
	{
	public:
		struct FSBWeaponMasterData                                 LocalWeaponMaster;                                       // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetUpWeaponSkinIconAndTagsByImagineMaster
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetUpWeaponSkinIconAndTagsByImagineMaster_Params
	{
	public:
		struct FSBMasterImagine                                    LocalImagineMaster;                                      // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetPrevInfo
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetPrevInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Prev;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByImagineId
	 */
	struct UCommonEquipmentBasicStatusParts_C_UpdateLimitInfoByImagineId_Params
	{
	public:
		int32_t                                                    RecipiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitInfoByWeaponId
	 */
	struct UCommonEquipmentBasicStatusParts_C_UpdateLimitInfoByWeaponId_Params
	{
	public:
		int32_t                                                    RecipiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByImagine
	 */
	struct UCommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByImagine_Params
	{
	public:
		struct FMasterImagineRecepi                                MasterData;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.UpdateLimitRecepiByWeapon
	 */
	struct UCommonEquipmentBasicStatusParts_C_UpdateLimitRecepiByWeapon_Params
	{
	public:
		struct FCraftMasterData                                    MasterData;                                              // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetSPEffectTextAsRecipi
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetSPEffectTextAsRecipi_Params
	{
	public:
		int32_t                                                    InRecipiId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R1HX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.HideBasicTagInfos
	 */
	struct UCommonEquipmentBasicStatusParts_C_HideBasicTagInfos_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set Int to Text
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetInttoText_Params
	{
	public:
		class UTextBlock*                                          Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseGrouping;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_24A0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Set SPEffect Text Color
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetSPEffectTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelSync
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetLevelSync_Params
	{
	public:
		bool                                                       bIsLevelSync;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByRecepiId
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupByRecepiId_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByRecepiId
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupImagineStatusByRecepiId_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByRecepiId
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupWeaponStatusByRecepiId_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetLevelAndExpLevelSync
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetLevelAndExpLevelSync_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToImagineStatusMode
	 */
	struct UCommonEquipmentBasicStatusParts_C_AdjustToImagineStatusMode_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.AdjustToWeaponStatusMode
	 */
	struct UCommonEquipmentBasicStatusParts_C_AdjustToWeaponStatusMode_Params
	{
	public:
		bool                                                       bInIsSPEffectsNewFormat;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByMasterData
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupImagineStatusByMasterData_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitTagsByMaster;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3SIQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByMasterData
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupWeaponStatusByMasterData_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitTagsByMaster;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1KUU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByMasterData
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupByMasterData_Params
	{
	public:
		int32_t                                                    InEquipmentId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  InEquipmentItemType;                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInitTagsByMaster;                                       // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YHX9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InRecipiId;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupImagineStatusByOwnItemInfo
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupImagineStatusByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsForStorage;                                          // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B295[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupWeaponStatusByOwnItemInfo
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupWeaponStatusByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsForStorage;                                          // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IVZJ[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.SetupByOwnItemInfo
	 */
	struct UCommonEquipmentBasicStatusParts_C_SetupByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsForStorage;                                          // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.Construct
	 */
	struct UCommonEquipmentBasicStatusParts_C_Construct_Params
	{	};

	/**
	 * Function CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicStatusParts
	 */
	struct UCommonEquipmentBasicStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicStatusParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
