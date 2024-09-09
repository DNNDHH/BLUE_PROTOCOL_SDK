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
	 * Function ChatHUD.ChatHUD_C.SetFishHUD
	 */
	struct UChatHUD_C_SetFishHUD_Params
	{
	public:
		class UFishingHUD_C*                                       HUD;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.Get Log Window Visible Status List
	 */
	struct UChatHUD_C_GetLogWindowVisibleStatusList_Params
	{
	public:
		TArray<bool>                                               IsVisibleStatusList;                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.UpdateUnread
	 */
	struct UChatHUD_C_UpdateUnread_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CheckLogWindowFilter
	 */
	struct UChatHUD_C_CheckLogWindowFilter_Params
	{
	public:
		ESBChatLogType                                             logType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBChatLogWindowSlot                                       NewParam;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.CheckReceivedMessageSound
	 */
	struct UChatHUD_C_CheckReceivedMessageSound_Params
	{
	public:
		ESBChatLogType                                             logType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCloseArea;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.UpdateMouseCursorIcon
	 */
	struct UChatHUD_C_UpdateMouseCursorIcon_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.ForceClose
	 */
	struct UChatHUD_C_ForceClose_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.IsActive
	 */
	struct UChatHUD_C_IsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.On_TextSizeComboBox_GenerateWidget_1
	 */
	struct UChatHUD_C_On_TextSizeComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.ResetAllLayout
	 */
	struct UChatHUD_C_ResetAllLayout_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnMouseButtonDown
	 */
	struct UChatHUD_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.LoadStampHisoryData
	 */
	struct UChatHUD_C_LoadStampHisoryData_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.InitChatHUDLayout
	 */
	struct UChatHUD_C_InitChatHUDLayout_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.InitStampEmoteHUDLayout
	 */
	struct UChatHUD_C_InitStampEmoteHUDLayout_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.SaveLayoutWindowSizeData
	 */
	struct UChatHUD_C_SaveLayoutWindowSizeData_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnDragOver
	 */
	struct UChatHUD_C_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnDrop
	 */
	struct UChatHUD_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.Refresh Chat Logs
	 */
	struct UChatHUD_C_RefreshChatLogs_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.SetChatLogsWindow
	 */
	struct UChatHUD_C_SetChatLogsWindow_Params
	{
	public:
		bool                                                       InWindow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J1JD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatHUD.ChatHUD_C.InitChatLogSlots
	 */
	struct UChatHUD_C_InitChatLogSlots_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.SaveHudLayout
	 */
	struct UChatHUD_C_SaveHudLayout_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.SaveLayoutData
	 */
	struct UChatHUD_C_SaveLayoutData_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.LoadHudLayout
	 */
	struct UChatHUD_C_LoadHudLayout_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.InitChatLogsHUDLayout
	 */
	struct UChatHUD_C_InitChatLogsHUDLayout_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.AddTab
	 */
	struct UChatHUD_C_AddTab_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.AddChatLogWindow
	 */
	struct UChatHUD_C_AddChatLogWindow_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.IsFullChildLogWindows
	 */
	struct UChatHUD_C_IsFullChildLogWindows_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.Hide
	 */
	struct UChatHUD_C_Hide_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Show
	 */
	struct UChatHUD_C_Show_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.KeyShortcut_TextMode
	 */
	struct UChatHUD_C_KeyShortcut_TextMode_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.KeyShortcut_FixedPhrase
	 */
	struct UChatHUD_C_KeyShortcut_FixedPhrase_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.KeyShortcut_Stamp
	 */
	struct UChatHUD_C_KeyShortcut_Stamp_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.KeyShortcut_ChatTypeList
	 */
	struct UChatHUD_C_KeyShortcut_ChatTypeList_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.KeyShortcut_PlayerList
	 */
	struct UChatHUD_C_KeyShortcut_PlayerList_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.KeyShortcut_TabChange
	 */
	struct UChatHUD_C_KeyShortcut_TabChange_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.InputPadButton
	 */
	struct UChatHUD_C_InputPadButton_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OpenCursorModeToOtherPCMenu
	 */
	struct UChatHUD_C_OpenCursorModeToOtherPCMenu_Params
	{
	public:
		class ASBPlayerCharacter*                                  InOtherPC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnCloseAdminWindow
	 */
	struct UChatHUD_C_OnCloseAdminWindow_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnMouseButtonDownByAdminMode
	 */
	struct UChatHUD_C_OnMouseButtonDownByAdminMode_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Construct_Admin
	 */
	struct UChatHUD_C_Construct_Admin_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnAdminCommandRequest
	 */
	struct UChatHUD_C_OnAdminCommandRequest_Params
	{
	public:
		ESBAdminCommandCallbackRequest                             Request;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.OpenGotoBookmarkWindow
	 */
	struct UChatHUD_C_OpenGotoBookmarkWindow_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Hide_Admin
	 */
	struct UChatHUD_C_Hide_Admin_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.UnbindAdminCommandCallbeck
	 */
	struct UChatHUD_C_UnbindAdminCommandCallbeck_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Emite_Construct
	 */
	struct UChatHUD_C_Emite_Construct_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnChang_ChatMode_Event
	 */
	struct UChatHUD_C_OnChang_ChatMode_Event_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Construct_Chat
	 */
	struct UChatHUD_C_Construct_Chat_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnClosedChatWindow
	 */
	struct UChatHUD_C_OnClosedChatWindow_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.RequestChatLogAdd
	 */
	struct UChatHUD_C_RequestChatLogAdd_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.CloseRequestChatLogs
	 */
	struct UChatHUD_C_CloseRequestChatLogs_Params
	{
	public:
		ESBChatLogWindowSlot                                       SlotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnChatRoomMessageReceived
	 */
	struct UChatHUD_C_OnChatRoomMessageReceived_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.RequestDirectChat
	 */
	struct UChatHUD_C_RequestDirectChat_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnClickedClose
	 */
	struct UChatHUD_C_OnClickedClose_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.ChatTempLogs_Init
	 */
	struct UChatHUD_C_ChatTempLogs_Init_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.RequestTabAdd
	 */
	struct UChatHUD_C_RequestTabAdd_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.RequestTabClose
	 */
	struct UChatHUD_C_RequestTabClose_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FN1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InFilterType;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDetailFilterType;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.DelayUpdateMouseCursorIcon
	 */
	struct UChatHUD_C_DelayUpdateMouseCursorIcon_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.UpdateCursorMode
	 */
	struct UChatHUD_C_UpdateCursorMode_Params
	{
	public:
		bool                                                       Flag;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.EndChatSettingWindow
	 */
	struct UChatHUD_C_EndChatSettingWindow_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.ChatSettingWindow_OnClose_Event
	 */
	struct UChatHUD_C_ChatSettingWindow_OnClose_Event_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnRefreshChatLogs_event
	 */
	struct UChatHUD_C_OnRefreshChatLogs_event_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnLogDispTime_event
	 */
	struct UChatHUD_C_OnLogDispTime_event_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Construct
	 */
	struct UChatHUD_C_Construct_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.Init
	 */
	struct UChatHUD_C_Init_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnChangeVisibility
	 */
	struct UChatHUD_C_OnChangeVisibility_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnReceivedMessage
	 */
	struct UChatHUD_C_OnReceivedMessage_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBChatUIMessage                                    Mess;                                                    // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.Destruct
	 */
	struct UChatHUD_C_Destruct_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnGameOverDelegate_Event_1
	 */
	struct UChatHUD_C_OnGameOverDelegate_Event_1_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct UChatHUD_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.MouseInteraction
	 */
	struct UChatHUD_C_MouseInteraction_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.MouseInteractionRelease
	 */
	struct UChatHUD_C_MouseInteractionRelease_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnRequestTutorialHelp
	 */
	struct UChatHUD_C_OnRequestTutorialHelp_Params
	{
	public:
		bool                                                       CheckUnlock;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Up
	 */
	struct UChatHUD_C_CameraCtrl_Up_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Up_Rel
	 */
	struct UChatHUD_C_CameraCtrl_Up_Rel_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Down
	 */
	struct UChatHUD_C_CameraCtrl_Down_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Down_Rel
	 */
	struct UChatHUD_C_CameraCtrl_Down_Rel_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Left
	 */
	struct UChatHUD_C_CameraCtrl_Left_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Left_Rel
	 */
	struct UChatHUD_C_CameraCtrl_Left_Rel_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Right
	 */
	struct UChatHUD_C_CameraCtrl_Right_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.CameraCtrl_Right_Rel
	 */
	struct UChatHUD_C_CameraCtrl_Right_Rel_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnClosePCList_Event_1
	 */
	struct UChatHUD_C_OnClosePCList_Event_1_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.OnClose_Event_1
	 */
	struct UChatHUD_C_OnClose_Event_1_Params
	{	};

	/**
	 * Function ChatHUD.ChatHUD_C.ResultClose
	 */
	struct UChatHUD_C_ResultClose_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatHUD.ChatHUD_C.ExecuteUbergraph_ChatHUD
	 */
	struct UChatHUD_C_ExecuteUbergraph_ChatHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
