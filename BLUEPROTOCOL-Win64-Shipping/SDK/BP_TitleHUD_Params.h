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
	 * Function BP_TitleHUD.BP_TitleHUD_C.CreateHUD
	 */
	struct ABP_TitleHUD_C_CreateHUD_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.CreateNotifyMessage
	 */
	struct ABP_TitleHUD_C_CreateNotifyMessage_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.DeleteNotifyMessage
	 */
	struct ABP_TitleHUD_C_DeleteNotifyMessage_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.DeleteHUD
	 */
	struct ABP_TitleHUD_C_DeleteHUD_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.GetTermsOfUseIds
	 */
	struct ABP_TitleHUD_C_GetTermsOfUseIds_Params
	{
	public:
		TArray<int32_t>                                            IDs;                                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.Get Terms Of Service
	 */
	struct ABP_TitleHUD_C_GetTermsOfService_Params
	{
	public:
		int32_t                                                    IndexPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Create;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QZSL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBTermsOfUseInfo                                   Output;                                                  // 0x0008(0x0060)  (Parm, OutParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.OnLoaded_B892930043DB34F90488159C5989E221
	 */
	struct ABP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddAchievementGainedMessage
	 */
	struct ABP_TitleHUD_C_AddAchievementGainedMessage_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankupCompleteMessage
	 */
	struct ABP_TitleHUD_C_AddAdventurerRankupCompleteMessage_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankUpdateCompleteMessage
	 */
	struct ABP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            Slot;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddAutoDeliveryQuestCompleteMessage
	 */
	struct ABP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycle;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I0SO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              QuestName;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddAwakeInterruptQuestMessage
	 */
	struct ABP_TitleHUD_C_AddAwakeInterruptQuestMessage_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddItemExpiryNotifyMessage
	 */
	struct ABP_TitleHUD_C_AddItemExpiryNotifyMessage_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddLine1LNotifyMessage
	 */
	struct ABP_TitleHUD_C_AddLine1LNotifyMessage_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddLine1NotifyMessage
	 */
	struct ABP_TitleHUD_C_AddLine1NotifyMessage_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddLine2NotifyMessage
	 */
	struct ABP_TitleHUD_C_AddLine2NotifyMessage_Params
	{
	public:
		class FText                                                InMainMessage;                                           // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                InSubMessage;                                            // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddLoginBonusNotifyMessage
	 */
	struct ABP_TitleHUD_C_AddLoginBonusNotifyMessage_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddMailAcceptLimitNotifyMessage
	 */
	struct ABP_TitleHUD_C_AddMailAcceptLimitNotifyMessage_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddRankingRewardNotifyMessage
	 */
	struct ABP_TitleHUD_C_AddRankingRewardNotifyMessage_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddRecipeMessage
	 */
	struct ABP_TitleHUD_C_AddRecipeMessage_Params
	{
	public:
		ESBRecipeType                                              RecipeType;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KI62[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RecepiId;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddTutorialHelpMessage
	 */
	struct ABP_TitleHUD_C_AddTutorialHelpMessage_Params
	{
	public:
		class FName                                                InTutorialHelpId;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
	 */
	struct ABP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage_Params
	{
	public:
		int32_t                                                    NetworkCafeTotalTimePlayedToday;                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLoginTimeOnly;                                        // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.BeginWaitAssetLoad
	 */
	struct ABP_TitleHUD_C_BeginWaitAssetLoad_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.WaitAssetLoad
	 */
	struct ABP_TitleHUD_C_WaitAssetLoad_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.OnSoundAssetLoaded
	 */
	struct ABP_TitleHUD_C_OnSoundAssetLoaded_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.ReceiveBeginPlay
	 */
	struct ABP_TitleHUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.StartTitle
	 */
	struct ABP_TitleHUD_C_StartTitle_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.StartLogo
	 */
	struct ABP_TitleHUD_C_StartLogo_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.OnFinish_Event_1
	 */
	struct ABP_TitleHUD_C_OnFinish_Event_1_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.LoginMenu
	 */
	struct ABP_TitleHUD_C_LoginMenu_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.OnLoginCompleted_Event_1
	 */
	struct ABP_TitleHUD_C_OnLoginCompleted_Event_1_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.ReceiveEndPlay
	 */
	struct ABP_TitleHUD_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.ExecNetworkCafe_Event
	 */
	struct ABP_TitleHUD_C_ExecNetworkCafe_Event_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.StartTermsOfService
	 */
	struct ABP_TitleHUD_C_StartTermsOfService_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.CustomEvent_1
	 */
	struct ABP_TitleHUD_C_CustomEvent_1_Params
	{
	public:
		bool                                                       Approval;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.TryCreateTermsOfService
	 */
	struct ABP_TitleHUD_C_TryCreateTermsOfService_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfUse
	 */
	struct ABP_TitleHUD_C_OnTermsOfUse_Params
	{
	public:
		TArray<struct FSBTermsOfUseInfo>                           TermsOfUseList;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfRead
	 */
	struct ABP_TitleHUD_C_OnTermsOfRead_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.LogoFinish
	 */
	struct ABP_TitleHUD_C_LogoFinish_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.LoadCharaLayer
	 */
	struct ABP_TitleHUD_C_LoadCharaLayer_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.ReceiveDestroyed
	 */
	struct ABP_TitleHUD_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_TitleHUD.BP_TitleHUD_C.ExecuteUbergraph_BP_TitleHUD
	 */
	struct ABP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8VUV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
