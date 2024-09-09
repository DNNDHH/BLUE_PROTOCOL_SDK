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
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.CanOpenPlayerDetailByTargetCharacterId
	 */
	struct UCommonPlayerListPannel_C_CanOpenPlayerDetailByTargetCharacterId_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bCanOpen;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateCommandBtnStatus
	 */
	struct UCommonPlayerListPannel_C_UpdateCommandBtnStatus_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VU9F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendProgressText
	 */
	struct UCommonPlayerListPannel_C_SetFriendProgressText_Params
	{
	public:
		struct FDateTime                                           inProgressDate;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       InExtraVisible;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MYVL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Is PSOnly Diff
	 */
	struct UCommonPlayerListPannel_C_SetIsPSOnlyDiff_Params
	{
	public:
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerIcon
	 */
	struct UCommonPlayerListPannel_C_UpdatePlayerIcon_Params
	{
	public:
		bool                                                       Download;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENLH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerCommet
	 */
	struct UCommonPlayerListPannel_C_UpdatePlayerCommet_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerName
	 */
	struct UCommonPlayerListPannel_C_UpdatePlayerName_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckOpenAdventureCard
	 */
	struct UCommonPlayerListPannel_C_CheckOpenAdventureCard_Params
	{
	public:
		int32_t                                                    InWarning;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OQJ5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetErrorType
	 */
	struct UCommonPlayerListPannel_C_SetErrorType_Params
	{
	public:
		int32_t                                                    InWarning;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UnbindPlayerProfile
	 */
	struct UCommonPlayerListPannel_C_UnbindPlayerProfile_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.BindPlayerProfile
	 */
	struct UCommonPlayerListPannel_C_BindPlayerProfile_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.ShowSendAdventureCardError
	 */
	struct UCommonPlayerListPannel_C_ShowSendAdventureCardError_Params
	{
	public:
		bool                                                       InWasSuccessful;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSendAdventureCardResult                            InSendAdventureResult;                                   // 0x0001(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Show Player Profile Error Message
	 */
	struct UCommonPlayerListPannel_C_ShowPlayerProfileErrorMessage_Params
	{
	public:
		class FName                                                InTextNameId;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetConsent
	 */
	struct UCommonPlayerListPannel_C_PreSetConsent_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetContact
	 */
	struct UCommonPlayerListPannel_C_PreSetContact_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyIcon
	 */
	struct UCommonPlayerListPannel_C_SetPartyIcon_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeBtn
	 */
	struct UCommonPlayerListPannel_C_InitLikeBtn_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetLikeSend
	 */
	struct UCommonPlayerListPannel_C_PreSetLikeSend_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPannelVersion
	 */
	struct UCommonPlayerListPannel_C_SetPannelVersion_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildRoleIcon
	 */
	struct UCommonPlayerListPannel_C_SetGuildRoleIcon_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetGuild
	 */
	struct UCommonPlayerListPannel_C_PreSetGuild_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetMailInBox
	 */
	struct UCommonPlayerListPannel_C_PreSetMailInBox_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.DeleteResponseWaitUIblocker
	 */
	struct UCommonPlayerListPannel_C_DeleteResponseWaitUIblocker_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.CreateResponseWaitUIblocker
	 */
	struct UCommonPlayerListPannel_C_CreateResponseWaitUIblocker_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Like Btn
	 */
	struct UCommonPlayerListPannel_C_SetLikeBtn_Params
	{
	public:
		bool                                                       IsSendLIke;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GT4X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OnlineStatus;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPSOnlyDiff;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0BVZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckProfileEnable
	 */
	struct UCommonPlayerListPannel_C_CheckProfileEnable_Params
	{
	public:
		ESBProfilePublicSettingType                                PublicSetting;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFriend;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOk;                                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.RefreshPannel
	 */
	struct UCommonPlayerListPannel_C_RefreshPannel_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.TurnOnCommonUI
	 */
	struct UCommonPlayerListPannel_C_TurnOnCommonUI_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetBlock
	 */
	struct UCommonPlayerListPannel_C_PreSetBlock_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Profile Variables
	 */
	struct UCommonPlayerListPannel_C_SetProfileVariables_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetSearch
	 */
	struct UCommonPlayerListPannel_C_PreSetSearch_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsSelected
	 */
	struct UCommonPlayerListPannel_C_IsSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetFriend
	 */
	struct UCommonPlayerListPannel_C_PreSetFriend_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetParty
	 */
	struct UCommonPlayerListPannel_C_PreSetParty_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetOnlineStateTagInfo
	 */
	struct UCommonPlayerListPannel_C_SetOnlineStateTagInfo_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetTensionTagIcon
	 */
	struct UCommonPlayerListPannel_C_SetTensionTagIcon_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetComment
	 */
	struct UCommonPlayerListPannel_C_SetComment_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassLevel
	 */
	struct UCommonPlayerListPannel_C_SetClassLevel_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassIcon
	 */
	struct UCommonPlayerListPannel_C_SetClassIcon_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFaceImage
	 */
	struct UCommonPlayerListPannel_C_SetFaceImage_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendIcon
	 */
	struct UCommonPlayerListPannel_C_SetFriendIcon_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPlayerName
	 */
	struct UCommonPlayerListPannel_C_SetPlayerName_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsCommandMode
	 */
	struct UCommonPlayerListPannel_C_IsCommandMode_Params
	{
	public:
		class FString                                              InMyCharacterId;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsPromoteMember;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEnableCommandModeButton
	 */
	struct UCommonPlayerListPannel_C_SetEnableCommandModeButton_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEmpty
	 */
	struct UCommonPlayerListPannel_C_SetEmpty_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsOwnPartyLeader
	 */
	struct UCommonPlayerListPannel_C_IsOwnPartyLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6BGG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSendLikeInfo
	 */
	struct UCommonPlayerListPannel_C_SetSendLikeInfo_Params
	{
	public:
		bool                                                       bIsSendLike;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_85BQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitMailInbox
	 */
	struct UCommonPlayerListPannel_C_InitMailInbox_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetMailInBoxPlayerPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetMailInBoxPlayerPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeSendPlayerList
	 */
	struct UCommonPlayerListPannel_C_InitLikeSendPlayerList_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitContact
	 */
	struct UCommonPlayerListPannel_C_InitContact_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetContactPlayerPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetContactPlayerPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateContact
	 */
	struct UCommonPlayerListPannel_C_UpdateContact_Params
	{
	public:
		EPlayerPannelTypeEnum                                      NewPlayerPannelMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ACZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FContactListData                                    NewContactListData;                                      // 0x0008(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitConsent
	 */
	struct UCommonPlayerListPannel_C_InitConsent_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetConsentPlayerPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetConsentPlayerPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateConsent
	 */
	struct UCommonPlayerListPannel_C_UpdateConsent_Params
	{
	public:
		EPlayerPannelTypeEnum                                      NewPlayerPannelMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BJPA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FContactListData                                    NewContactListData;                                      // 0x0008(0x00C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetBlockPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetBlockPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitBlock
	 */
	struct UCommonPlayerListPannel_C_InitBlock_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateBlock
	 */
	struct UCommonPlayerListPannel_C_UpdateBlock_Params
	{
	public:
		EPlayerPannelTypeEnum                                      NewPlayerPannelMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SDRS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileSummaryData                           NewPlayerProfileSummaryData;                             // 0x0008(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitSearch
	 */
	struct UCommonPlayerListPannel_C_InitSearch_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSearchPlayerPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetSearchPlayerPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberData
	 */
	struct UCommonPlayerListPannel_C_SetGuildMemberData_Params
	{
	public:
		struct FGuildMemberData                                    GuildMemberData;                                         // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bGuildMemberInviteList;                                  // 0x00D8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateSearch
	 */
	struct UCommonPlayerListPannel_C_UpdateSearch_Params
	{
	public:
		EPlayerPannelTypeEnum                                      NewPlayerPannelMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WAZA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileSummaryData                           NewPlayerProfileSummaryData;                             // 0x0008(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitFriend
	 */
	struct UCommonPlayerListPannel_C_InitFriend_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendMemberPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetFriendMemberPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateFriend
	 */
	struct UCommonPlayerListPannel_C_UpdateFriend_Params
	{
	public:
		EPlayerPannelTypeEnum                                      NewPlayerPannelMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HHH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileSummaryData                           NewPlayerProfileSummaryData;                             // 0x0008(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitPartyMember
	 */
	struct UCommonPlayerListPannel_C_InitPartyMember_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetPartyMemberPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.EnableInviteCommand
	 */
	struct UCommonPlayerListPannel_C_EnableInviteCommand_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetVisibleConvocation
	 */
	struct UCommonPlayerListPannel_C_SetVisibleConvocation_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberProfileData
	 */
	struct UCommonPlayerListPannel_C_SetPartyMemberProfileData_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteChangeConvocationDelegate_Event
	 */
	struct UCommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event_Params
	{
	public:
		bool                                                       bConvocation;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendAdventureCard
	 */
	struct UCommonPlayerListPannel_C_SendAdventureCard_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCharactersAdventurerCardSendDelegate_Event
	 */
	struct UCommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSendAdventureCardResult                            SendAdventureCardResult;                                 // 0x0001(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetGuildMemberPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitGuildMember
	 */
	struct UCommonPlayerListPannel_C_InitGuildMember_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearProfileButtonStyle_Event
	 */
	struct UCommonPlayerListPannel_C_ClearProfileButtonStyle_Event_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearBlackListButtonStyle_Event
	 */
	struct UCommonPlayerListPannel_C_ClearBlackListButtonStyle_Event_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SelectProfileButtonStyle_Event
	 */
	struct UCommonPlayerListPannel_C_SelectProfileButtonStyle_Event_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Construct
	 */
	struct UCommonPlayerListPannel_C_Construct_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Destruct
	 */
	struct UCommonPlayerListPannel_C_Destruct_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreConstruct
	 */
	struct UCommonPlayerListPannel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCommonProfileData
	 */
	struct UCommonPlayerListPannel_C_SetCommonProfileData_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLike
	 */
	struct UCommonPlayerListPannel_C_SendLike_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCaptureImageFace
	 */
	struct UCommonPlayerListPannel_C_SetCaptureImageFace_Params
	{
	public:
		bool                                                       Download;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OpenPlayerProfile
	 */
	struct UCommonPlayerListPannel_C_OpenPlayerProfile_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.Complete_OpenPlayerProfile_Event
	 */
	struct UCommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F44C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat_Event
	 */
	struct UCommonPlayerListPannel_C_OnRequestDirectChat_Event_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestTransitonMenu
	 */
	struct UCommonPlayerListPannel_C_OnRequestTransitonMenu_Params
	{
	public:
		class FString                                              MenuType;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.PlayerProfile_OnClose_Event
	 */
	struct UCommonPlayerListPannel_C_PlayerProfile_OnClose_Event_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackListEvent
	 */
	struct UCommonPlayerListPannel_C_OnUpdateBlackListEvent_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnSendAdvCard
	 */
	struct UCommonPlayerListPannel_C_OnSendAdvCard_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCheckBlockStatus
	 */
	struct UCommonPlayerListPannel_C_OnCheckBlockStatus_Params
	{
	public:
		bool                                                       bCheckBlockStatus;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetLikeSendPannelMode
	 */
	struct UCommonPlayerListPannel_C_SetLikeSendPannelMode_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateInfoAll
	 */
	struct UCommonPlayerListPannel_C_UpdateInfoAll_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.ExecuteUbergraph_CommonPlayerListPannel
	 */
	struct UCommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackList__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnUpdateBlackList__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnPlayerProfileClose__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnPlayerProfileClose__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLikeEvent__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_SendLikeEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDungeonPartyMemberButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberInviteCancel__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestGuildMemberInviteCancel__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestMailInBoxButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteAdventureCardSend__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnCompleteAdventureCardSend__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestContactButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestConsentButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestSearchButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestBlockButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.RequestTransitonMenu__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature_Params
	{
	public:
		class FString                                              MenuType;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestDirectChat__DelegateSignature_Params
	{	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestFriendButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature_Params
	{
	public:
		class UCommonPlayerListPannel_C*                           TargetPlayerListPannel;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestPartyMemberButtonClicked__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature_Params
	{
	public:
		class USBPartyMemberState*                                 MemberState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPlayerProfileSummaryData                           ProfileData;                                             // 0x0008(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestCancelInvite__DelegateSignature
	 */
	struct UCommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature_Params
	{
	public:
		class USBPartyMemberState*                                 MemberState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
