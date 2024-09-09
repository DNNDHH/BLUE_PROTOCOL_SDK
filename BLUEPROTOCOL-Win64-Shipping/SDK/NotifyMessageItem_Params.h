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
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetItemExpiry
	 */
	struct UNotifyMessageItem_C_SetItemExpiry_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05BW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetRankingReward
	 */
	struct UNotifyMessageItem_C_SetRankingReward_Params
	{	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshotFileName
	 */
	struct UNotifyMessageItem_C_SetScreenshotFileName_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetAutoDeliveryQuestComplete
	 */
	struct UNotifyMessageItem_C_SetAutoDeliveryQuestComplete_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycleType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H7FY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InQuestName;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateSImple
	 */
	struct UNotifyMessageItem_C_SetQuestUpdateSImple_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ERTQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetQuestSynopsisAdded
	 */
	struct UNotifyMessageItem_C_SetQuestSynopsisAdded_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNQ1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetInterruptQuestAwake
	 */
	struct UNotifyMessageItem_C_SetInterruptQuestAwake_Params
	{
	public:
		class FName                                                QuestID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateProgress
	 */
	struct UNotifyMessageItem_C_SetQuestUpdateProgress_Params
	{
	public:
		struct FAcceptedQuestInfo                                  AcceptedQuestInfo;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bValidProgressUiInfo;                                    // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T49Z[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBQuestProgressItemUIInfo                          SBQuestProgressItemUIInfo;                               // 0x0068(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetQuestCompleted
	 */
	struct UNotifyMessageItem_C_SetQuestCompleted_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DX7R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetQuestAccepted
	 */
	struct UNotifyMessageItem_C_SetQuestAccepted_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K7P8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetWishList
	 */
	struct UNotifyMessageItem_C_SetWishList_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBWishListType                                            Type;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetWarehouseAbility
	 */
	struct UNotifyMessageItem_C_SetWarehouseAbility_Params
	{
	public:
		class FText                                                AbilityName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBWarehouseAbilityCharacterStatus                         Status;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetTutorialHelp
	 */
	struct UNotifyMessageItem_C_SetTutorialHelp_Params
	{
	public:
		class FName                                                TutorialId;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeRewardNotification
	 */
	struct UNotifyMessageItem_C_SetNetworkCafeRewardNotification_Params
	{
	public:
		struct FSBNetworkCafeReward                                SBNetworkCafeReward;                                     // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bSucceed;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AM55[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeLoginTimeNotification
	 */
	struct UNotifyMessageItem_C_SetNetworkCafeLoginTimeNotification_Params
	{
	public:
		int32_t                                                    NetworkCafeTotalTimePlayedToday;                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BL0P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetPartyMemberDead
	 */
	struct UNotifyMessageItem_C_SetPartyMemberDead_Params
	{
	public:
		class FText                                                MemberName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetRecipe
	 */
	struct UNotifyMessageItem_C_SetRecipe_Params
	{
	public:
		ESBRecipeType                                              Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_91OW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetAdventurerRank
	 */
	struct UNotifyMessageItem_C_SetAdventurerRank_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetAchievement
	 */
	struct UNotifyMessageItem_C_SetAchievement_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshot
	 */
	struct UNotifyMessageItem_C_SetScreenshot_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetLine2
	 */
	struct UNotifyMessageItem_C_SetLine2_Params
	{
	public:
		class FText                                                InTextMain;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InTextSub;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetLine1L
	 */
	struct UNotifyMessageItem_C_SetLine1L_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetLine1
	 */
	struct UNotifyMessageItem_C_SetLine1_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.SetSwitcher
	 */
	struct UNotifyMessageItem_C_SetSwitcher_Params
	{
	public:
		ENotifyMessageItemType                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.PreConstruct
	 */
	struct UNotifyMessageItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NotifyMessageItem.NotifyMessageItem_C.ExecuteUbergraph_NotifyMessageItem
	 */
	struct UNotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
