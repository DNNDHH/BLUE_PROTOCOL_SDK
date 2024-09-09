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
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Update Chat Log Status
	 */
	struct UUMG_ChatLogWindow_C_UpdateChatLogStatus_Params
	{
	public:
		struct FSBChatLogWindowStatusSave                          InStatus;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsLoad;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Next Tab Selection
	 */
	struct UUMG_ChatLogWindow_C_NextTabSelection_Params
	{
	public:
		bool                                                       bPrevious;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Set Tab
	 */
	struct UUMG_ChatLogWindow_C_SetTab_Params
	{
	public:
		ESBChatLogWindowSlot                                       InSlot;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdd;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFullChildWindow
	 */
	struct UUMG_ChatLogWindow_C_SetFullChildWindow_Params
	{
	public:
		bool                                                       InFull;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.HideWindow
	 */
	struct UUMG_ChatLogWindow_C_HideWindow_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ShowWindow
	 */
	struct UUMG_ChatLogWindow_C_ShowWindow_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.RefreshLog
	 */
	struct UUMG_ChatLogWindow_C_RefreshLog_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsShowNewMessageIcon
	 */
	struct UUMG_ChatLogWindow_C_IsShowNewMessageIcon_Params
	{
	public:
		struct FSBChatUIMessage                                    InMess;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Ret;                                                     // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.InitChildMode
	 */
	struct UUMG_ChatLogWindow_C_InitChildMode_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleTab
	 */
	struct UUMG_ChatLogWindow_C_IsVisibleTab_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleLog
	 */
	struct UUMG_ChatLogWindow_C_IsVisibleLog_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetChatLogSlot
	 */
	struct UUMG_ChatLogWindow_C_SetChatLogSlot_Params
	{
	public:
		ESBChatLogWindowSlot                                       ChatLogSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z9HP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetVisible
	 */
	struct UUMG_ChatLogWindow_C_SetVisible_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsTab;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LHCE[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetEditMode
	 */
	struct UUMG_ChatLogWindow_C_SetEditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowMode
	 */
	struct UUMG_ChatLogWindow_C_SetWindowMode_Params
	{
	public:
		bool                                                       bWindow;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Construct
	 */
	struct UUMG_ChatLogWindow_C_Construct_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnReceiveMessageDelegate_Event
	 */
	struct UUMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBChatUIMessage                                    Mess;                                                    // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Destruct
	 */
	struct UUMG_ChatLogWindow_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddWindow
	 */
	struct UUMG_ChatLogWindow_C_OnClickedAddWindow_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseWindow
	 */
	struct UUMG_ChatLogWindow_C_OnClickedCloseWindow_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateFilterType
	 */
	struct UUMG_ChatLogWindow_C_OnUpdateFilterType_Params
	{
	public:
		int32_t                                                    InType;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDetailType;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnAnimationFinished
	 */
	struct UUMG_ChatLogWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateTempLogList
	 */
	struct UUMG_ChatLogWindow_C_OnUpdateTempLogList_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddTab
	 */
	struct UUMG_ChatLogWindow_C_OnClickedAddTab_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseTab
	 */
	struct UUMG_ChatLogWindow_C_OnClickedCloseTab_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeTab
	 */
	struct UUMG_ChatLogWindow_C_OnChangeTab_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowSize
	 */
	struct UUMG_ChatLogWindow_C_SetWindowSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeUnreadVisibleEvent
	 */
	struct UUMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnPopTimeUpdate
	 */
	struct UUMG_ChatLogWindow_C_OnPopTimeUpdate_Params
	{	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFilterType
	 */
	struct UUMG_ChatLogWindow_C_SetFilterType_Params
	{
	public:
		int32_t                                                    InType;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InFilterType;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ExecuteUbergraph_UMG_ChatLogWindow
	 */
	struct UUMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabCloseRequest__DelegateSignature
	 */
	struct UUMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VWK3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FilterType;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DetailFilterType;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabAddRequest__DelegateSignature
	 */
	struct UUMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowCloseRequest__DelegateSignature
	 */
	struct UUMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature_Params
	{
	public:
		ESBChatLogWindowSlot                                       SlotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowAddRequest__DelegateSignature
	 */
	struct UUMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatRoomMessaageReceived__DelegateSignature
	 */
	struct UUMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
