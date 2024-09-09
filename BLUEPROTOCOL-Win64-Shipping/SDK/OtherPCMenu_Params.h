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
	 * Function OtherPCMenu.OtherPCMenu_C.OnClickedPhotoLikeBtn
	 */
	struct UOtherPCMenu_C_OnClickedPhotoLikeBtn_Params
	{
	public:
		TArray<int32_t>                                            outLikeCountList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               outLikeBtnEnbaleList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Update Player Comment
	 */
	struct UOtherPCMenu_C_UpdatePlayerComment_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerName
	 */
	struct UOtherPCMenu_C_UpdatePlayerName_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerIcon
	 */
	struct UOtherPCMenu_C_UpdatePlayerIcon_Params
	{
	public:
		bool                                                       Download;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Show Player Profile Error Message
	 */
	struct UOtherPCMenu_C_ShowPlayerProfileErrorMessage_Params
	{
	public:
		class FName                                                InTextNameId;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.ShowSendAdventureCardError
	 */
	struct UOtherPCMenu_C_ShowSendAdventureCardError_Params
	{
	public:
		bool                                                       InWasSuccessful;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSendAdventureCardResult                            InSendAdventureResult;                                   // 0x0001(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.SetPlatformIcon
	 */
	struct UOtherPCMenu_C_SetPlatformIcon_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.SetPlayerProfile_LikeBtn
	 */
	struct UOtherPCMenu_C_SetPlayerProfile_LikeBtn_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.GetPlayerCharacter
	 */
	struct UOtherPCMenu_C_GetPlayerCharacter_Params
	{
	public:
		class ASBPlayerCharacter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.GetOtherPlayerState
	 */
	struct UOtherPCMenu_C_GetOtherPlayerState_Params
	{
	public:
		class ASBPlayerState*                                      OutPlayerState;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.ShowMessage_DisableProfile
	 */
	struct UOtherPCMenu_C_ShowMessage_DisableProfile_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.ShowMessage_IsBlackListed
	 */
	struct UOtherPCMenu_C_ShowMessage_IsBlackListed_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.CanSendInvitationSelf
	 */
	struct UOtherPCMenu_C_CanSendInvitationSelf_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E97Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UpdateBlackListState
	 */
	struct UOtherPCMenu_C_UpdateBlackListState_Params
	{
	public:
		bool                                                       IsBlackList;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UpdatePartyIconVisible
	 */
	struct UOtherPCMenu_C_UpdatePartyIconVisible_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.CheckProfileEnable
	 */
	struct UOtherPCMenu_C_CheckProfileEnable_Params
	{
	public:
		bool                                                       IsOk;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.GetSendAdventurerCardButtonLabelText
	 */
	struct UOtherPCMenu_C_GetSendAdventurerCardButtonLabelText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.SetRootVisibility
	 */
	struct UOtherPCMenu_C_SetRootVisibility_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.InitProfileDetail
	 */
	struct UOtherPCMenu_C_InitProfileDetail_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        ProfileData;                                             // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Init
	 */
	struct UOtherPCMenu_C_Init_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBClassType                                               InRole;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBTensionTagType                                          InTensionTagId;                                          // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CDTK[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InComment;                                               // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InAchievementId;                                         // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSendLIke;                                              // 0x003C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3E9M[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OnlineStatus;                                            // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DW6C[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.CloseMenu
	 */
	struct UOtherPCMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Initialize GuildData
	 */
	struct UOtherPCMenu_C_InitializeGuildData_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Construct
	 */
	struct UOtherPCMenu_C_Construct_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Destruct
	 */
	struct UOtherPCMenu_C_Destruct_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.CustomEvent_1
	 */
	struct UOtherPCMenu_C_CustomEvent_1_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnPress_Cancel
	 */
	struct UOtherPCMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnGetPlayerProfileDetailMenuDelegate_Event
	 */
	struct UOtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IHQN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Close
	 */
	struct UOtherPCMenu_C_Close_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnAnimationFinished
	 */
	struct UOtherPCMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnCancelMatching_Dialog_Event
	 */
	struct UOtherPCMenu_C_OnCancelMatching_Dialog_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnGameOverDelegate_Event_1
	 */
	struct UOtherPCMenu_C_OnGameOverDelegate_Event_1_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UnbindPlayerConcernedListDelegate
	 */
	struct UOtherPCMenu_C_UnbindPlayerConcernedListDelegate_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UnbindGameOverDelegate
	 */
	struct UOtherPCMenu_C_UnbindGameOverDelegate_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.AddBlackList_Event
	 */
	struct UOtherPCMenu_C_AddBlackList_Event_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        ProfileData;                                             // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.RemoveBlackList
	 */
	struct UOtherPCMenu_C_RemoveBlackList_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UnbindBlackListDelegate
	 */
	struct UOtherPCMenu_C_UnbindBlackListDelegate_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.Close_Force
	 */
	struct UOtherPCMenu_C_Close_Force_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.start_construct
	 */
	struct UOtherPCMenu_C_start_construct_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnNotificationBlackListedDelegate_Event
	 */
	struct UOtherPCMenu_C_OnNotificationBlackListedDelegate_Event_Params
	{
	public:
		bool                                                       bBlackListed;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HKFN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SenderId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UnBindNotificationBlackListedDelegate
	 */
	struct UOtherPCMenu_C_UnBindNotificationBlackListedDelegate_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnJankenUIDelegate_Event_1
	 */
	struct UOtherPCMenu_C_OnJankenUIDelegate_Event_1_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.UnBindJankenUIDelegate
	 */
	struct UOtherPCMenu_C_UnBindJankenUIDelegate_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.SendMess(SendAdv)
	 */
	struct UOtherPCMenu_C_SendMessSendAdv_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSendAdventureCardResult                            SendAdventureCardResult;                                 // 0x0001(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnRequestDirectChat_Event
	 */
	struct UOtherPCMenu_C_OnRequestDirectChat_Event_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.SendLike
	 */
	struct UOtherPCMenu_C_SendLike_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UOtherPCMenu_C_BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnSendLikeEvent
	 */
	struct UOtherPCMenu_C_OnSendLikeEvent_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnCheckBlockStatus_Event
	 */
	struct UOtherPCMenu_C_OnCheckBlockStatus_Event_Params
	{
	public:
		bool                                                       bCheckBlockStatus;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.ResultClose
	 */
	struct UOtherPCMenu_C_ResultClose_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.CustomEvent_2
	 */
	struct UOtherPCMenu_C_CustomEvent_2_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnSendAdventureCard
	 */
	struct UOtherPCMenu_C_OnSendAdventureCard_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.ExecuteUbergraph_OtherPCMenu
	 */
	struct UOtherPCMenu_C_ExecuteUbergraph_OtherPCMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X4HM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnDirectChat__DelegateSignature
	 */
	struct UOtherPCMenu_C_OnDirectChat__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCMenu.OtherPCMenu_C.OnClose__DelegateSignature
	 */
	struct UOtherPCMenu_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
