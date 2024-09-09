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
	 * Function ChatLogWindowList.ChatLogWindowList_C.GetChatUnreadNotify
	 */
	struct UChatLogWindowList_C_GetChatUnreadNotify_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.UpdateChatLogStatus
	 */
	struct UChatLogWindowList_C_UpdateChatLogStatus_Params
	{
	public:
		struct FSBChatLogWindowStatusSave                          InStatus;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.ChatCloseUnreadUpdate
	 */
	struct UChatLogWindowList_C_ChatCloseUnreadUpdate_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.CheckUnread
	 */
	struct UChatLogWindowList_C_CheckUnread_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetChatLogSlot
	 */
	struct UChatLogWindowList_C_SetChatLogSlot_Params
	{
	public:
		ESBChatLogWindowSlot                                       Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.Get Tab Type to Slot
	 */
	struct UChatLogWindowList_C_GetTabTypetoSlot_Params
	{
	public:
		ESBChatLogWindowSlot                                       Slot;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetTab
	 */
	struct UChatLogWindowList_C_SetTab_Params
	{
	public:
		ESBChatLogWindowSlot                                       InSlot;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdd;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.ClearLogList
	 */
	struct UChatLogWindowList_C_ClearLogList_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.IsScrollEndListView
	 */
	struct UChatLogWindowList_C_IsScrollEndListView_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.Create Message Entry
	 */
	struct UChatLogWindowList_C_CreateMessageEntry_Params
	{
	public:
		struct FSBChatUIMessage                                    InMess;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bRecieve;                                                // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8S6P[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.GetWindowSize
	 */
	struct UChatLogWindowList_C_GetWindowSize_Params
	{
	public:
		struct FVector2D                                           retSize;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetWindowSize
	 */
	struct UChatLogWindowList_C_SetWindowSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetSeparationButtonEnabled
	 */
	struct UChatLogWindowList_C_SetSeparationButtonEnabled_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetFullChildWindow
	 */
	struct UChatLogWindowList_C_SetFullChildWindow_Params
	{
	public:
		bool                                                       InFull;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetForceUnhover
	 */
	struct UChatLogWindowList_C_SetForceUnhover_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.SetListScrollEnd
	 */
	struct UChatLogWindowList_C_SetListScrollEnd_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.RefreshLog
	 */
	struct UChatLogWindowList_C_RefreshLog_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.InitChidMode
	 */
	struct UChatLogWindowList_C_InitChidMode_Params
	{
	public:
		int32_t                                                    InTabTextId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.ChangeDetailFilter
	 */
	struct UChatLogWindowList_C_ChangeDetailFilter_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBChatDetailFilterType                                    InDetailFilterType;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TNFR[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.ChangeFilter
	 */
	struct UChatLogWindowList_C_ChangeFilter_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBChatFilterType                                          InFilterType;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OIO0[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.IsDirectChatPlayer
	 */
	struct UChatLogWindowList_C_IsDirectChatPlayer_Params
	{
	public:
		struct FSBChatUIMessage                                    InMess;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Ret;                                                     // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DX3X[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.CreateChatLogList
	 */
	struct UChatLogWindowList_C_CreateChatLogList_Params
	{
	public:
		int32_t                                                    InFilterType;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDetailFilterType;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.Set Filter List Visible
	 */
	struct UChatLogWindowList_C_SetFilterListVisible_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBRA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.NextTabSelection
	 */
	struct UChatLogWindowList_C_NextTabSelection_Params
	{
	public:
		bool                                                       bPrevious;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2RHK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.Change Tab Mode
	 */
	struct UChatLogWindowList_C_ChangeTabMode_Params
	{
	public:
		ESBChatLogTabType                                          InTabType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInit;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.InitFilterCheckBox
	 */
	struct UChatLogWindowList_C_InitFilterCheckBox_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.Init
	 */
	struct UChatLogWindowList_C_Init_Params
	{
	public:
		class UUMG_ChatLogWindow_C*                                InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InFilterType;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDetailFilterType;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBChatLogTabType                                          InTabType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.CloseFilter
	 */
	struct UChatLogWindowList_C_CloseFilter_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnReciveMessage
	 */
	struct UChatLogWindowList_C_OnReciveMessage_Params
	{
	public:
		struct FSBChatUIMessage                                    InMess;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bRecieve;                                                // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogWindowList_C_BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.ExecuteUbergraph_ChatLogWindowList
	 */
	struct UChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChangeUnreadVisible__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChangeChatUnreadNotify__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature_Params
	{
	public:
		bool                                                       IsChatUnreadNotify;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChangeTab__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChangeTab__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabCloseRequest__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature_Params
	{
	public:
		ESBChatLogWindowSlot                                       RequestSlot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabAddRequest__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChatLogTabAddRequest__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChangeFilterType__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChangeFilterType__DelegateSignature_Params
	{
	public:
		int32_t                                                    InType;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InDetailType;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowCloseRequest__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChatLogWindowCloseRequest__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowAddRequest__DelegateSignature
	 */
	struct UChatLogWindowList_C_OnChatLogWindowAddRequest__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
