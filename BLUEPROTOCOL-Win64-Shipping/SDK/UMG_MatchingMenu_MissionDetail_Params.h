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
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckNeedPlayers
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_CheckNeedPlayers_Params
	{
	public:
		ESBEntryConditionPartyState                                PartyState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_36BX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NeedPlayers;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Passed;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Reward Search Name
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_GetRewardSearchName_Params
	{
	public:
		int32_t                                                    ModeId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SearchName;                                              // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ClearRewardList
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_ClearRewardList_Params
	{
	public:
		bool                                                       IsHelpMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Ex Rank by Class Lv
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_GetExRankbyClassLv_Params
	{
	public:
		int32_t                                                    Lv;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionScb
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb_Params
	{
	public:
		int32_t                                                    Lv;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ret;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UO8P[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionQuest
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest_Params
	{
	public:
		TArray<class FName>                                        Quest;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Passed;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TF9I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionClass
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass_Params
	{
	public:
		TArray<ESBClassType>                                       Class;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Passed;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ISSU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetStackB
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetStackB_Params
	{
	public:
		ESBStackBEnableType                                        StackB;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_DropTreasure
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_DropTreasure_Params
	{
	public:
		int32_t                                                    TreasureId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_HelpBonus
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RewardId;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q0OJ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus2
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RewardId;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RewardId;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_LimitTermFirst
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RewardId;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal2
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RewardId;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RewardId;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_NormalRanked
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0018(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstRanked
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                DungeonId;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0018(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList2
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList2_Params
	{
	public:
		class FName                                                DungeonId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                DungeonRewardId;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DungeonGameMode;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetRewardList_Params
	{
	public:
		class FName                                                DungeonId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                DungeonRewardId;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DungeonGameMode;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DropTreasureID;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetWebButton
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetWebButton_Params
	{
	public:
		class FString                                              InSiteUrl;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition2
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetEntryCondition2_Params
	{
	public:
		int32_t                                                    RequiredBattleScore;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RequiredClassLevel;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetEntryCondition_Params
	{
	public:
		int32_t                                                    RequiredBattleScore;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LevelSync;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RequiredAdventurerRank;                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EntryConditionId;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBEntryConditionPartyState                                RequiredPartyState;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9OG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RequiredClassLevel;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        EntryConditionQuest;                                     // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<ESBClassType>                                       EntryConditionClass;                                     // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NeedPlayers;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EntryConditionSubClassLv;                                // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EntryConditionScbNum;                                    // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit2
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetTimeLimit2_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetTimeLimit_Params
	{
	public:
		int32_t                                                    TimeLimit;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo2
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2_Params
	{
	public:
		struct FSBMapInfo                                          DungeonMapInfo;                                          // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_SetDungeonInfo_Params
	{
	public:
		struct FSBMapInfo                                          DungeonMapInfo;                                          // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Construct
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIconEvent
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature_Params
	{
	public:
		EntryConditionType                                         EntryConditionType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WCJS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseEntryCondition
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnCloseEntryCondition_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Quest
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnClose_Quest_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Class
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnClose_Class_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ExecuteUbergraph_UMG_MatchingMenu_MissionDetail
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FUIO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseButtonClicked__DelegateSignature
	 */
	struct UUMG_MatchingMenu_MissionDetail_C_OnCloseButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
