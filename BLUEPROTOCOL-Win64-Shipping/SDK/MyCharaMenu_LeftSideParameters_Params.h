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
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipBattleScore
	 */
	struct UMyCharaMenu_LeftSideParameters_C_GetEquipBattleScore_Params
	{
	public:
		TArray<struct FSBPlayerPresetEquipItem>                    InPresetEquipItemList;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    OutBattleScore;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassTypeForTutorialHelp
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp_Params
	{
	public:
		bool                                                       bInIsUsingClassTypeForTutorialHelp;                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetIsExpOverflowInvalid
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid_Params
	{
	public:
		bool                                                       bInIsInvalid;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupExpOverflowGrp
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp_Params
	{
	public:
		bool                                                       bInIsClassLevelCounterStop;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsClassLevelLimit;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsClassLevelLimitSmallerThanCounterStop;              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.AdjustClassInfoLayout
	 */
	struct UMyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParamByDhcBattleScoreInfo
	 */
	struct UMyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo_Params
	{
	public:
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0000(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetDhcBattleTopMenuMode
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode_Params
	{
	public:
		bool                                                       InIsDhcBattleTopMenuMode;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GYZP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetItemTypeByUniqueId
	 */
	struct UMyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EItemType                                                  OutItemType;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBImagineCategoryType                                     OutImagineCategoryType;                                  // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetLevelSyncTargetByUniqueId
	 */
	struct UMyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OutLevelSyncTarget;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               OutClassType;                                            // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_53EC[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetCurrLevelSyncTarget
	 */
	struct UMyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget_Params
	{
	public:
		int32_t                                                    OutLevelSyncTarget;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5C4S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetExpGaugeUpdateStop
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParam
	 */
	struct UMyCharaMenu_LeftSideParameters_C_UpdateAllParam_Params
	{
	public:
		bool                                                       InIncludeClassInfo;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateClassInfoDiff
	 */
	struct UMyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff_Params
	{
	public:
		class FString                                              InEquippedWeaponUniqueId;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNewWeaponUniqueId;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiff
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetClassInfoDiff_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IQVF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiffVisibility
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateLevelSync
	 */
	struct UMyCharaMenu_LeftSideParameters_C_UpdateLevelSync_Params
	{
	public:
		bool                                                       InIsLevelSync;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6WM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Switch All Status Value for Level Sync
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueforLevelSync_Params
	{
	public:
		bool                                                       InIsLevelSync;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsParamSync;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.InitLevelSyncValueColor
	 */
	struct UMyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementAndCharaNameVisibility
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMarkBattleSet
	 */
	struct UMyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FM1N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBPlayerPresetEquipItem>                    InPresetEquipItemList;                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.DestroyAchievementList
	 */
	struct UMyCharaMenu_LeftSideParameters_C_DestroyAchievementList_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipStatusDiff
	 */
	struct UMyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff_Params
	{
	public:
		class FString                                              InCurrEquipmentUniqueId;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNewEquipmentUniqueId;                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutIsVallid;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2TNJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterStatus                                  OutNewEquipmentStatus;                                   // 0x0024(0x0040)  (Parm, OutParm, NoDestructor)
		unsigned char                                              UnknownData_RVJV[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetStatusDiffMarkInBulk
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk_Params
	{
	public:
		int32_t                                                    InDiff;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMark
	 */
	struct UMyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8JQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InCurrEquipmentUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNewEquipmentUniqueId;                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupStatusGrp
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetupStatusGrp_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetTotalPower
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetTotalPower_Params
	{
	public:
		int32_t                                                    InTotalPower;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JA3Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetPlayerLevel
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetPlayerLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TAWD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupClassGrp
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetupClassGrp_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupNameGrp
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetupNameGrp_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementName
	 */
	struct UMyCharaMenu_LeftSideParameters_C_SetAchievementName_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnCloseAchievementList_イベント
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnCloseAchievementList__Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement_イベント
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnLoadAchievement__Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSelectAchievement_イベント
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnSelectAchievement__Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievementSelectedDelegate_イベント
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate__Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Const_Achievement
	 */
	struct UMyCharaMenu_LeftSideParameters_C_Const_Achievement_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Dest_Achievement
	 */
	struct UMyCharaMenu_LeftSideParameters_C_Dest_Achievement_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnRenamed
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnRenamed_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.カスタムイベント_1
	 */
	struct UMyCharaMenu_LeftSideParameters_C__1_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Close
	 */
	struct UMyCharaMenu_LeftSideParameters_C_Close_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Construct
	 */
	struct UMyCharaMenu_LeftSideParameters_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Destruct
	 */
	struct UMyCharaMenu_LeftSideParameters_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.PreConstruct
	 */
	struct UMyCharaMenu_LeftSideParameters_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnStatusDiffAtRecalc2ndStatus
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnStatusDiffAtRecalc2ndStatus_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLevelUpDelegate
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate_Params
	{
	public:
		int32_t                                                    InPrevLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCurLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBExtraExpParse                                    InExtraExpParse;                                         // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_LeftSideParameters
	 */
	struct UMyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnDetailedStatusClicked__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnDetailedStatusClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievement__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnClicked_AchievementChangeButton__DelegateSignature
	 */
	struct UMyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature_Params
	{
	public:
		class UMyCharaMenu_AchievementList_C*                      InAchievementListRef;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
