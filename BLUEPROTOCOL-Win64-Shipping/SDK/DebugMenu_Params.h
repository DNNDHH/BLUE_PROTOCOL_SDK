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
	 * Function DebugMenu.DebugMenu_C.GetItemStrageNumber
	 */
	struct UDebugMenu_C_GetItemStrageNumber_Params
	{
	public:
		int32_t                                                    AllSouko;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StorageNumber;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.Set Item Command
	 */
	struct UDebugMenu_C_SetItemCommand_Params
	{
	public:
		class FName                                                ItemSetName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AllSouko;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZE6Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugMenu.DebugMenu_C.GetText
	 */
	struct UDebugMenu_C_GetText_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTableAsset;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InTextId;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InOldTextId;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateChildButton
	 */
	struct UDebugMenu_C_CreateChildButton_Params
	{
	public:
		class UDebugChildButton_C*                                 OutDebugButton;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.AddMenuItem
	 */
	struct UDebugMenu_C_AddMenuItem_Params
	{
	public:
		class USBUserWidget*                                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.SetTitle
	 */
	struct UDebugMenu_C_SetTitle_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.AddChildMenu
	 */
	struct UDebugMenu_C_AddChildMenu_Params
	{
	public:
		class UUserWidget*                                         ChildMenu;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.GetCurrentValue
	 */
	struct UDebugMenu_C_GetCurrentValue_Params
	{
	public:
		class FText                                                CurrentValue;                                            // 0x0000(0x0018)  (Parm, OutParm)
		bool                                                       ValueExists;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.ProcFocusCursorMoveUpDown
	 */
	struct UDebugMenu_C_ProcFocusCursorMoveUpDown_Params
	{
	public:
		bool                                                       InMoveUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_707I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugMenu.DebugMenu_C.SetDebugMenuVisibility
	 */
	struct UDebugMenu_C_SetDebugMenuVisibility_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DCK7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugMenu.DebugMenu_C.InputDebugMenuButton
	 */
	struct UDebugMenu_C_InputDebugMenuButton_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateButton
	 */
	struct UDebugMenu_C_CreateButton_Params
	{
	public:
		class UDebugButton_C*                                      OutDebugButton;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateCommand
	 */
	struct UDebugMenu_C_CreateCommand_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateComboBox
	 */
	struct UDebugMenu_C_CreateComboBox_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateString
	 */
	struct UDebugMenu_C_CreateString_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateFloat
	 */
	struct UDebugMenu_C_CreateFloat_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateInt32
	 */
	struct UDebugMenu_C_CreateInt32_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.CreateCheckBox
	 */
	struct UDebugMenu_C_CreateCheckBox_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_102A04CB4074E1F46BB26DB6C4891B24
	 */
	struct UDebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_BCFFDC8A4AF2D3E733074AB599485936
	 */
	struct UDebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77
	 */
	struct UDebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_4F44425143BDF3C769780FB39763FAA8
	 */
	struct UDebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_27772D90466B1887FF9CA8BA68DDE282
	 */
	struct UDebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_B6543B2E423821130C7933B54E69A6C5
	 */
	struct UDebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_8950531E42034202AFA24B8A7E7E2D11
	 */
	struct UDebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E
	 */
	struct UDebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnGetFocus
	 */
	struct UDebugMenu_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnLostFocus
	 */
	struct UDebugMenu_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnPressOk
	 */
	struct UDebugMenu_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.ChectCommand_BulkGetItemMenu
	 */
	struct UDebugMenu_C_ChectCommand_BulkGetItemMenu_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_RecepiBroker
	 */
	struct UDebugMenu_C_CheatCommand_RecepiBroker_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_ScriptExecutor
	 */
	struct UDebugMenu_C_CheatCommand_ScriptExecutor_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_LevelScriptList
	 */
	struct UDebugMenu_C_CheatCommand_LevelScriptList_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_ItemSupplyer
	 */
	struct UDebugMenu_C_CheatCommand_ItemSupplyer_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_Party_Create_Invite_Send
	 */
	struct UDebugMenu_C_CheatCommand_Party_Create_Invite_Send_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_ResponseChecker
	 */
	struct UDebugMenu_C_CheatCommand_ResponseChecker_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.ChectCommand_AddMasterItemsMenu
	 */
	struct UDebugMenu_C_ChectCommand_AddMasterItemsMenu_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_BulkGetItemSet
	 */
	struct UDebugMenu_C_CheatCommand_BulkGetItemSet_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.CheatCommand_NotificationMenu
	 */
	struct UDebugMenu_C_CheatCommand_NotificationMenu_Params
	{
	public:
		class UObject*                                             InSender;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InParam;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.NotificationLoaded
	 */
	struct UDebugMenu_C_NotificationLoaded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.Construct
	 */
	struct UDebugMenu_C_Construct_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UDebugMenu_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose_Event
	 */
	struct UDebugMenu_C_EventDispatcher_OnClose_Event_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.DebugButton_OnClicked_イベント
	 */
	struct UDebugMenu_C_DebugButton_OnClicked__Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnPress_Cancel
	 */
	struct UDebugMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnSetFocusItem
	 */
	struct UDebugMenu_C_OnSetFocusItem_Params
	{
	public:
		int32_t                                                    InFocusId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnRepeat_Up
	 */
	struct UDebugMenu_C_OnRepeat_Up_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.OnRepeat_Down
	 */
	struct UDebugMenu_C_OnRepeat_Down_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.ProcVisibleSettingChange
	 */
	struct UDebugMenu_C_ProcVisibleSettingChange_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.Destruct
	 */
	struct UDebugMenu_C_Destruct_Params
	{	};

	/**
	 * Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
	 */
	struct UDebugMenu_C_ExecuteUbergraph_DebugMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMenu.DebugMenu_C.EventDispatcher_OnClose__DelegateSignature
	 */
	struct UDebugMenu_C_EventDispatcher_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
