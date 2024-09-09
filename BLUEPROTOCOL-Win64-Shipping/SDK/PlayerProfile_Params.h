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
	 * Function PlayerProfile.PlayerProfile_C.UpdatePlayerComment
	 */
	struct UPlayerProfile_C_UpdatePlayerComment_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Update Player Screenshot
	 */
	struct UPlayerProfile_C_UpdatePlayerScreenshot_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.UpdatePlayerName
	 */
	struct UPlayerProfile_C_UpdatePlayerName_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.IsAbleToTeleport
	 */
	struct UPlayerProfile_C_IsAbleToTeleport_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetBtnGroup1Visibility
	 */
	struct UPlayerProfile_C_SetBtnGroup1Visibility_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.IsPlayingMission
	 */
	struct UPlayerProfile_C_IsPlayingMission_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UDX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetActiveGuildInviteButton
	 */
	struct UPlayerProfile_C_SetActiveGuildInviteButton_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.UnbindBlackList
	 */
	struct UPlayerProfile_C_UnbindBlackList_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BindBlackList
	 */
	struct UPlayerProfile_C_BindBlackList_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetCommunicateBtn
	 */
	struct UPlayerProfile_C_SetCommunicateBtn_Params
	{
	public:
		bool                                                       IsComunicateMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetRankingBtn
	 */
	struct UPlayerProfile_C_SetRankingBtn_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Show Send Adventure Card Error
	 */
	struct UPlayerProfile_C_ShowSendAdventureCardError_Params
	{
	public:
		bool                                                       InWasSuccessful;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSendAdventureCardResult                            InSendAdventureResult;                                   // 0x0001(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Show Player Profile Error Message
	 */
	struct UPlayerProfile_C_ShowPlayerProfileErrorMessage_Params
	{
	public:
		class FName                                                InTextNameId;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.IsCalledCommandGuildMenu
	 */
	struct UPlayerProfile_C_IsCalledCommandGuildMenu_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JM0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetBG
	 */
	struct UPlayerProfile_C_SetBG_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InPosition;                                              // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2G3O[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2DDynamic*                                   InTexture;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetSwitcher*                                     InWidgetSwitcher;                                        // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitTeleportBtnInfo
	 */
	struct UPlayerProfile_C_InitTeleportBtnInfo_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitProfilePartyInfo
	 */
	struct UPlayerProfile_C_InitProfilePartyInfo_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitVisibilityForButtons
	 */
	struct UPlayerProfile_C_InitVisibilityForButtons_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitTensionInfo
	 */
	struct UPlayerProfile_C_InitTensionInfo_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitPlayerCharacterPositionInfo
	 */
	struct UPlayerProfile_C_InitPlayerCharacterPositionInfo_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitScreenshotInfo
	 */
	struct UPlayerProfile_C_InitScreenshotInfo_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitProfileLikeInfo
	 */
	struct UPlayerProfile_C_InitProfileLikeInfo_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitComment
	 */
	struct UPlayerProfile_C_InitComment_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetPlayerProfileMenuDetailData
	 */
	struct UPlayerProfile_C_SetPlayerProfileMenuDetailData_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        DetailData;                                              // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Set Equip LIstData
	 */
	struct UPlayerProfile_C_SetEquipLIstData_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.InitReport
	 */
	struct UPlayerProfile_C_InitReport_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.IsInvited
	 */
	struct UPlayerProfile_C_IsInvited_Params
	{
	public:
		bool                                                       bIsInvited;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QTDR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.CanSendPartyInvitation
	 */
	struct UPlayerProfile_C_CanSendPartyInvitation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SG3R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.RemoveBlocker
	 */
	struct UPlayerProfile_C_RemoveBlocker_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.AddBlocker
	 */
	struct UPlayerProfile_C_AddBlocker_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.UpdateClassData
	 */
	struct UPlayerProfile_C_UpdateClassData_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        Data;                                                    // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.GetClassLevel
	 */
	struct UPlayerProfile_C_GetClassLevel_Params
	{
	public:
		ESBClassType                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q6HK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Exp;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.AllDataButtonDisabled
	 */
	struct UPlayerProfile_C_AllDataButtonDisabled_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetActiveDirectChatButton
	 */
	struct UPlayerProfile_C_SetActiveDirectChatButton_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetActivePartyInviteButton
	 */
	struct UPlayerProfile_C_SetActivePartyInviteButton_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_bIsEnabled_1
	 */
	struct UPlayerProfile_C_Get_PartyInviteButton_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_024H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Get_DirectChatButton_Visibility_1
	 */
	struct UPlayerProfile_C_Get_DirectChatButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_Visibility_1
	 */
	struct UPlayerProfile_C_Get_PartyInviteButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Get_BlackListButtonText_Text_1
	 */
	struct UPlayerProfile_C_Get_BlackListButtonText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Get_AddBlackListTextLabel_Text_1
	 */
	struct UPlayerProfile_C_Get_AddBlackListTextLabel_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetLocationFollowerUIVisible
	 */
	struct UPlayerProfile_C_SetLocationFollowerUIVisible_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.UpdateFollow
	 */
	struct UPlayerProfile_C_UpdateFollow_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Init_BlackList
	 */
	struct UPlayerProfile_C_Init_BlackList_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Init
	 */
	struct UPlayerProfile_C_Init_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        DetailData;                                              // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsFavorite;                                              // 0x0468(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMe;                                                    // 0x0469(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDungeon;                                               // 0x046A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSaveName;                                              // 0x046B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSearchMode;                                            // 0x046C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.CloseMenu
	 */
	struct UPlayerProfile_C_CloseMenu_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnLoaded_112687964F2BE7FAB45CE180EB11CC13
	 */
	struct UPlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67
	 */
	struct UPlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4
	 */
	struct UPlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnGetedGuildDetailData_Event
	 */
	struct UPlayerProfile_C_OnGetedGuildDetailData_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ROME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuildData                                          InGuildData;                                             // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UPlayerProfile_C_WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnCompletedGuildEntry_Event
	 */
	struct UPlayerProfile_C_OnCompletedGuildEntry_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.UnbindGuildDetailDelegate
	 */
	struct UPlayerProfile_C_UnbindGuildDetailDelegate_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnPress_QuickAccess
	 */
	struct UPlayerProfile_C_OnPress_QuickAccess_Params
	{
	public:
		ESBKeyConfigAction                                         QuickAccess;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Construct
	 */
	struct UPlayerProfile_C_Construct_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Destruct
	 */
	struct UPlayerProfile_C_Destruct_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BlackListDialogResult
	 */
	struct UPlayerProfile_C_BlackListDialogResult_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnAddBlackListPlayerDelegate_Event
	 */
	struct UPlayerProfile_C_OnAddBlackListPlayerDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnRemoveBlackListPlayerDelegate_Event
	 */
	struct UPlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnPress_Cancel
	 */
	struct UPlayerProfile_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnAnimationFinished
	 */
	struct UPlayerProfile_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnCloseParentsMenu
	 */
	struct UPlayerProfile_C_OnCloseParentsMenu_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.CloseByQuickAccess
	 */
	struct UPlayerProfile_C_CloseByQuickAccess_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListedDelegate_Event
	 */
	struct UPlayerProfile_C_OnNotificationBlackListedDelegate_Event_Params
	{
	public:
		bool                                                       bBlackListed;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76C9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SenderId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnGuildDataArriverd
	 */
	struct UPlayerProfile_C_OnGuildDataArriverd_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnNotifyBlocked_Event
	 */
	struct UPlayerProfile_C_OnNotifyBlocked_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnTeleport_Event
	 */
	struct UPlayerProfile_C_OnTeleport_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnInvited
	 */
	struct UPlayerProfile_C_OnInvited_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Teleport
	 */
	struct UPlayerProfile_C_Teleport_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SendFriend
	 */
	struct UPlayerProfile_C_SendFriend_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSendAdventureCardResult                            SendAdventureCardResult;                                 // 0x0001(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnGetBlackListDataEvent
	 */
	struct UPlayerProfile_C_OnGetBlackListDataEvent_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_80OO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPlayerProfileSummaryData>                   CharacterName;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    totalPageNum;                                            // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    currentPageNum;                                          // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Initialize Guilds
	 */
	struct UPlayerProfile_C_InitializeGuilds_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SendLike
	 */
	struct UPlayerProfile_C_SendLike_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.PhotoViewerCloseCompleteEvent
	 */
	struct UPlayerProfile_C_PhotoViewerCloseCompleteEvent_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.GuildDetailsClose
	 */
	struct UPlayerProfile_C_GuildDetailsClose_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UPlayerProfile_C_WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 */
	struct UPlayerProfile_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.CustomEvent_1
	 */
	struct UPlayerProfile_C_CustomEvent_1_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnClosedFromPlayerReport
	 */
	struct UPlayerProfile_C_OnClosedFromPlayerReport_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.AddBlackListEvent
	 */
	struct UPlayerProfile_C_AddBlackListEvent_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.RemoveBlackListEvent
	 */
	struct UPlayerProfile_C_RemoveBlackListEvent_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnCheckBlockStatus
	 */
	struct UPlayerProfile_C_OnCheckBlockStatus_Params
	{
	public:
		bool                                                       bCheckBlockStatus;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetDecoFrame
	 */
	struct UPlayerProfile_C_SetDecoFrame_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JKA3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              InWG;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetBgPattern
	 */
	struct UPlayerProfile_C_SetBgPattern_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.SetAdventureCardFrame
	 */
	struct UPlayerProfile_C_SetAdventureCardFrame_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature_Params
	{
	public:
		int32_t                                                    OutItemId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IHVK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              outUniqueId;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.ProductDetailMenuCloseEvent
	 */
	struct UPlayerProfile_C_ProductDetailMenuCloseEvent_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature
	 */
	struct UPlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            outLikeCountList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               outLikeBtnEnableList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.PartyInvite_Dialog_Event
	 */
	struct UPlayerProfile_C_PartyInvite_Dialog_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.Matched_Cancel_Invite_Dialog_Event
	 */
	struct UPlayerProfile_C_Matched_Cancel_Invite_Dialog_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.ExecuteUbergraph_PlayerProfile
	 */
	struct UPlayerProfile_C_ExecuteUbergraph_PlayerProfile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnClickedPhotoLikeBtn__DelegateSignature
	 */
	struct UPlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            outLikeCountList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               outLikeBtnEnbaleList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnSendAdventureCard__DelegateSignature
	 */
	struct UPlayerProfile_C_OnSendAdventureCard__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnUpdateBlackList__DelegateSignature
	 */
	struct UPlayerProfile_C_OnUpdateBlackList__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnSendLikeEvent__DelegateSignature
	 */
	struct UPlayerProfile_C_OnSendLikeEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnTravel__DelegateSignature
	 */
	struct UPlayerProfile_C_OnTravel__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnDestructForPlayerList__DelegateSignature
	 */
	struct UPlayerProfile_C_OnDestructForPlayerList__DelegateSignature_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        Data;                                                    // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       AnyClose;                                                // 0x0468(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListed__DelegateSignature
	 */
	struct UPlayerProfile_C_OnNotificationBlackListed__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.RemoveBlackList__DelegateSignature
	 */
	struct UPlayerProfile_C_RemoveBlackList__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.RequestTransitionMenu__DelegateSignature
	 */
	struct UPlayerProfile_C_RequestTransitionMenu__DelegateSignature_Params
	{
	public:
		class FString                                              MenuType;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnDestruct__DelegateSignature
	 */
	struct UPlayerProfile_C_OnDestruct__DelegateSignature_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        Data;                                                    // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnRequestDirectChat__DelegateSignature
	 */
	struct UPlayerProfile_C_OnRequestDirectChat__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.AddBlackList__DelegateSignature
	 */
	struct UPlayerProfile_C_AddBlackList__DelegateSignature_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        ProfileData;                                             // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.UpdateFollowData__DelegateSignature
	 */
	struct UPlayerProfile_C_UpdateFollowData__DelegateSignature_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        DetailData;                                              // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsUnFollow;                                              // 0x0468(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerProfile.PlayerProfile_C.OnClose__DelegateSignature
	 */
	struct UPlayerProfile_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
