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
	 * Function NotifyMessage.NotifyMessage_C.OnQuestJingleCancel
	 */
	struct UNotifyMessage_C_OnQuestJingleCancel_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnQuestJingleComplete
	 */
	struct UNotifyMessage_C_OnQuestJingleComplete_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate2
	 */
	struct UNotifyMessage_C_OnQuestJingleUpdate2_Params
	{
	public:
		TArray<int32_t>                                            InputPin;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate
	 */
	struct UNotifyMessage_C_OnQuestJingleUpdate_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnQuestJingleAccepted
	 */
	struct UNotifyMessage_C_OnQuestJingleAccepted_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.TermQuestJingle
	 */
	struct UNotifyMessage_C_TermQuestJingle_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.InitQuestJingle
	 */
	struct UNotifyMessage_C_InitQuestJingle_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.BindQuestJingleAccept
	 */
	struct UNotifyMessage_C_BindQuestJingleAccept_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate
	 */
	struct UNotifyMessage_C_BindQuestJingleUpdate_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.BindQuestJingleClear
	 */
	struct UNotifyMessage_C_BindQuestJingleClear_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.BindQuestJingleCancel
	 */
	struct UNotifyMessage_C_BindQuestJingleCancel_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnReceiveAcceptedQuestEvent
	 */
	struct UNotifyMessage_C_OnReceiveAcceptedQuestEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnReceiveUpdateQuestProgressEvent
	 */
	struct UNotifyMessage_C_OnReceiveUpdateQuestProgressEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnReceiveCompleteQuestEvent
	 */
	struct UNotifyMessage_C_OnReceiveCompleteQuestEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnReceiveCancelQuest
	 */
	struct UNotifyMessage_C_OnReceiveCancelQuest_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate2
	 */
	struct UNotifyMessage_C_BindQuestJingleUpdate2_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate2
	 */
	struct UNotifyMessage_C_UnbindQuestJingleUpdate2_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.OnUpdatedQuestsJoin
	 */
	struct UNotifyMessage_C_OnUpdatedQuestsJoin_Params
	{
	public:
		TArray<int32_t>                                            QuestIndexes;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleAccept
	 */
	struct UNotifyMessage_C_UnbindQuestJingleAccept_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleClear
	 */
	struct UNotifyMessage_C_UnbindQuestJingleClear_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate
	 */
	struct UNotifyMessage_C_UnbindQuestJingleUpdate_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleCancel
	 */
	struct UNotifyMessage_C_UnbindQuestJingleCancel_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.Construct
	 */
	struct UNotifyMessage_C_Construct_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddQuestAccepted
	 */
	struct UNotifyMessage_C_AddQuestAccepted_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddNotifyMessageItem
	 */
	struct UNotifyMessage_C_AddNotifyMessageItem_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       Sound;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNeedSound;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddQuestCompleted
	 */
	struct UNotifyMessage_C_AddQuestCompleted_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.Tick
	 */
	struct UNotifyMessage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddQuestUpdateProgress
	 */
	struct UNotifyMessage_C_AddQuestUpdateProgress_Params
	{
	public:
		struct FAcceptedQuestInfo                                  PrevAcceptedQuestInfo;                                   // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FAcceptedQuestInfo                                  AfterAcceptedQuestInfo;                                  // 0x0060(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddInterruptQuestAwake
	 */
	struct UNotifyMessage_C_AddInterruptQuestAwake_Params
	{
	public:
		class FName                                                QuestID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddAchievementGained
	 */
	struct UNotifyMessage_C_AddAchievementGained_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddTutorialHelp
	 */
	struct UNotifyMessage_C_AddTutorialHelp_Params
	{
	public:
		class FName                                                InTutorialHelp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddAdventurerRank
	 */
	struct UNotifyMessage_C_AddAdventurerRank_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddQuestSynopsis
	 */
	struct UNotifyMessage_C_AddQuestSynopsis_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddQuestUpdateSimple
	 */
	struct UNotifyMessage_C_AddQuestUpdateSimple_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddWishlist
	 */
	struct UNotifyMessage_C_AddWishlist_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBWishListType                                            Type;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddAutoDeliveryQuestComplete
	 */
	struct UNotifyMessage_C_AddAutoDeliveryQuestComplete_Params
	{
	public:
		class FString                                              InQuestName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBSeasonPassQuestCycleType                                InCycleType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddWarehouseAbilityUpdated
	 */
	struct UNotifyMessage_C_AddWarehouseAbilityUpdated_Params
	{
	public:
		class FText                                                AbilityName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBWarehouseAbilityCharacterStatus                         Status;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddRecipeUpdated
	 */
	struct UNotifyMessage_C_AddRecipeUpdated_Params
	{
	public:
		ESBRecipeType                                              RecipeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TVRW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddNetworkCafePlayTimeNotification
	 */
	struct UNotifyMessage_C_AddNetworkCafePlayTimeNotification_Params
	{
	public:
		int32_t                                                    NetworkCafeTotalTimePlayedToday;                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddLoginBonusNotifyMessage
	 */
	struct UNotifyMessage_C_AddLoginBonusNotifyMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddNetworkCafeRewardNotification
	 */
	struct UNotifyMessage_C_AddNetworkCafeRewardNotification_Params
	{
	public:
		struct FSBNetworkCafeReward                                InNetwordCafeReward;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddMemberDead
	 */
	struct UNotifyMessage_C_AddMemberDead_Params
	{
	public:
		class FText                                                MemberName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.Destruct
	 */
	struct UNotifyMessage_C_Destruct_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddMailAcceptLimitNotification
	 */
	struct UNotifyMessage_C_AddMailAcceptLimitNotification_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddRankingRewardNotifyMessage
	 */
	struct UNotifyMessage_C_AddRankingRewardNotifyMessage_Params
	{	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddLine1NotifyMessage
	 */
	struct UNotifyMessage_C_AddLine1NotifyMessage_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddLine1LNotifyMessage
	 */
	struct UNotifyMessage_C_AddLine1LNotifyMessage_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddLine2NotifyMessage
	 */
	struct UNotifyMessage_C_AddLine2NotifyMessage_Params
	{
	public:
		class FText                                                InTextMain;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InTextSub;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.AddItemExpiryNotifyMessage
	 */
	struct UNotifyMessage_C_AddItemExpiryNotifyMessage_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessage.NotifyMessage_C.ExecuteUbergraph_NotifyMessage
	 */
	struct UNotifyMessage_C_ExecuteUbergraph_NotifyMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
