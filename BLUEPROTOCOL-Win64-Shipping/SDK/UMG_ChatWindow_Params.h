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
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.RequestAPICheckOnlineStatus
	 */
	struct UUMG_ChatWindow_C_RequestAPICheckOnlineStatus_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Open Server Reconnection Notice Tool Tip Widget
	 */
	struct UUMG_ChatWindow_C_OpenServerReconnectionNoticeToolTipWidget_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7FMR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetServerReconnectionMode
	 */
	struct UUMG_ChatWindow_C_SetServerReconnectionMode_Params
	{
	public:
		bool                                                       OnServerReconnection;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.GetChatType
	 */
	struct UUMG_ChatWindow_C_GetChatType_Params
	{
	public:
		E_ChatWindowChatType                                       ChatType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.CheckChatModeIsValid
	 */
	struct UUMG_ChatWindow_C_CheckChatModeIsValid_Params
	{
	public:
		ESBChatLogType                                             ChatType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.IsTextInputFocus
	 */
	struct UUMG_ChatWindow_C_IsTextInputFocus_Params
	{
	public:
		bool                                                       Resurl;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.IsVisibleChatType
	 */
	struct UUMG_ChatWindow_C_IsVisibleChatType_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SpecialCommandProcess
	 */
	struct UUMG_ChatWindow_C_SpecialCommandProcess_Params
	{
	public:
		class FString                                              InChatMessage;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutChatMessage;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		ESBChatLogType                                             ChatLogType;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetIcon
	 */
	struct UUMG_ChatWindow_C_SetIcon_Params
	{
	public:
		ESBChatLogType                                             logType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatType
	 */
	struct UUMG_ChatWindow_C_SetChatType_Params
	{
	public:
		E_ChatWindowChatType                                       InChatType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.LoadChatSendData
	 */
	struct UUMG_ChatWindow_C_LoadChatSendData_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SaveChatSendData
	 */
	struct UUMG_ChatWindow_C_SaveChatSendData_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetTeamParameter
	 */
	struct UUMG_ChatWindow_C_SetTeamParameter_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatParameter
	 */
	struct UUMG_ChatWindow_C_SetDirectChatParameter_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.ShowErrorDirectChatSearch
	 */
	struct UUMG_ChatWindow_C_ShowErrorDirectChatSearch_Params
	{
	public:
		int32_t                                                    TextIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZCTE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.GetPlayerSearchList
	 */
	struct UUMG_ChatWindow_C_GetPlayerSearchList_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.UpdatePartyIcon
	 */
	struct UUMG_ChatWindow_C_UpdatePartyIcon_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.UpdateDirectChatLogButton
	 */
	struct UUMG_ChatWindow_C_UpdateDirectChatLogButton_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatMode
	 */
	struct UUMG_ChatWindow_C_SetChatMode_Params
	{
	public:
		ESBChatLogType                                             NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Hide
	 */
	struct UUMG_ChatWindow_C_Hide_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Show
	 */
	struct UUMG_ChatWindow_C_Show_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SendChatMessage
	 */
	struct UUMG_ChatWindow_C_SendChatMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBChatLogType                                             ChatLogType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnEventTypeSelected
	 */
	struct UUMG_ChatWindow_C_OnEventTypeSelected_Params
	{
	public:
		ESBChatLogType                                             SelectedType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatMode
	 */
	struct UUMG_ChatWindow_C_SetDirectChatMode_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       SearchShortID;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OpenChatType
	 */
	struct UUMG_ChatWindow_C_OpenChatType_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.CloseChatType
	 */
	struct UUMG_ChatWindow_C_CloseChatType_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Construct
	 */
	struct UUMG_ChatWindow_C_Construct_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetUserFocusAtITextInput
	 */
	struct UUMG_ChatWindow_C_SetUserFocusAtITextInput_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnPress_EndChat
	 */
	struct UUMG_ChatWindow_C_OnPress_EndChat_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnAnimationFinished
	 */
	struct UUMG_ChatWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnEnterClose
	 */
	struct UUMG_ChatWindow_C_OnEnterClose_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Destruct
	 */
	struct UUMG_ChatWindow_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnGetPlayerProfileDetailMenuDelegate_Event
	 */
	struct UUMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3KKJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              shortId;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    RetCode;                                                 // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Init
	 */
	struct UUMG_ChatWindow_C_Init_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Errorr
	 */
	struct UUMG_ChatWindow_C_Errorr_Params
	{
	public:
		ESBChatSendErrorType                                       ErrorType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.SetInputFocus
	 */
	struct UUMG_ChatWindow_C_SetInputFocus_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.PreConstruct
	 */
	struct UUMG_ChatWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnChanged_ConnectionChatServer
	 */
	struct UUMG_ChatWindow_C_OnChanged_ConnectionChatServer_Params
	{
	public:
		bool                                                       IsLogin;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.RemoveDirectChatSenderLogs
	 */
	struct UUMG_ChatWindow_C_RemoveDirectChatSenderLogs_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnNotificationBlackListedDelegate_Event
	 */
	struct UUMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event_Params
	{
	public:
		bool                                                       bBlackListed;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CSJ8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SenderId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.Unbind
	 */
	struct UUMG_ChatWindow_C_Unbind_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnDirectChatSenderRemoveDelegate_Event
	 */
	struct UUMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnIsGetPlayerSearchListDelegate_Event
	 */
	struct UUMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ROZI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPlayerProfileSummaryData>                   PlayerSearchListData;                                    // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsOver;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3DZ6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.ExecuteUbergraph_UMG_ChatWindow
	 */
	struct UUMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnChangeChatMode__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_OnChangeChatMode__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnRemoveDirectChatWindow__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnAddDirectChatWindow__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatWindow.UMG_ChatWindow_C.OnClose__DelegateSignature
	 */
	struct UUMG_ChatWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
