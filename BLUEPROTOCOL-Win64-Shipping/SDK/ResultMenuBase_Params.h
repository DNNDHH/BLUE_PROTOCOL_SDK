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
	 * Function ResultMenuBase.ResultMenuBase_C.OpenDialogTokenTreasureBoxDrawItems
	 */
	struct UResultMenuBase_C_OpenDialogTokenTreasureBoxDrawItems_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.HasTokenTreasureBoxDrawItems
	 */
	struct UResultMenuBase_C_HasTokenTreasureBoxDrawItems_Params
	{
	public:
		bool                                                       HasItems;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X84K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetDialogDropTreasureTicketReward
	 */
	struct UResultMenuBase_C_GetDialogDropTreasureTicketReward_Params
	{
	public:
		class UResultDialog_DropTreasureTicketReward_C*            OutDialog;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetFooter
	 */
	struct UResultMenuBase_C_GetFooter_Params
	{
	public:
		class USBResultFooter*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetResultWidget
	 */
	struct UResultMenuBase_C_GetResultWidget_Params
	{
	public:
		class USBResultPanelBaseWidget*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetResultKeyGuide
	 */
	struct UResultMenuBase_C_GetResultKeyGuide_Params
	{
	public:
		class USBResultKeyGuide*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetResultShortcutRing
	 */
	struct UResultMenuBase_C_GetResultShortcutRing_Params
	{
	public:
		class USBShortcutRingWidget*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OpenDialogLetter
	 */
	struct UResultMenuBase_C_OpenDialogLetter_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.SetVisibleMouseCursor
	 */
	struct UResultMenuBase_C_SetVisibleMouseCursor_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.ExecuteMenu
	 */
	struct UResultMenuBase_C_ExecuteMenu_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.ExecuteShortcutRing
	 */
	struct UResultMenuBase_C_ExecuteShortcutRing_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OnEnd
	 */
	struct UResultMenuBase_C_OnEnd_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OnTerminate
	 */
	struct UResultMenuBase_C_OnTerminate_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OnInitialize
	 */
	struct UResultMenuBase_C_OnInitialize_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.IsKeyDownJust
	 */
	struct UResultMenuBase_C_IsKeyDownJust_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.IsSimpleMode
	 */
	struct UResultMenuBase_C_IsSimpleMode_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.IsKeyDownAll
	 */
	struct UResultMenuBase_C_IsKeyDownAll_Params
	{
	public:
		TArray<struct FKey>                                        InKeyList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetDialogAbility
	 */
	struct UResultMenuBase_C_GetDialogAbility_Params
	{
	public:
		class UDialog_TacticalAbilityLearning_C*                   OutDialog;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetDialogLetter
	 */
	struct UResultMenuBase_C_GetDialogLetter_Params
	{
	public:
		class UResultDialog_Letter_C*                              OutDialog;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetScreenOverWidget
	 */
	struct UResultMenuBase_C_GetScreenOverWidget_Params
	{
	public:
		class UWidgetSwitcher*                                     OutWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.SetActiveScreenOver
	 */
	struct UResultMenuBase_C_SetActiveScreenOver_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A62Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.SetVisibleScreenOver
	 */
	struct UResultMenuBase_C_SetVisibleScreenOver_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.GetKeyMenu
	 */
	struct UResultMenuBase_C_GetKeyMenu_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.isKeyDownMenu
	 */
	struct UResultMenuBase_C_isKeyDownMenu_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.isKeyDownShortcutRing
	 */
	struct UResultMenuBase_C_isKeyDownShortcutRing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OpenDialogAbility
	 */
	struct UResultMenuBase_C_OpenDialogAbility_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OnInitializeKeyGuide
	 */
	struct UResultMenuBase_C_OnInitializeKeyGuide_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.DisableControl
	 */
	struct UResultMenuBase_C_DisableControl_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EnableControl
	 */
	struct UResultMenuBase_C_EnableControl_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OnEventKeyDown
	 */
	struct UResultMenuBase_C_OnEventKeyDown_Params
	{
	public:
		struct FKeyEvent                                           Event;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.OnEventKeyUp
	 */
	struct UResultMenuBase_C_OnEventKeyUp_Params
	{
	public:
		struct FKeyEvent                                           Event;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.CustomEvent_1
	 */
	struct UResultMenuBase_C_CustomEvent_1_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.BindShortcutRing
	 */
	struct UResultMenuBase_C_BindShortcutRing_Params
	{
	public:
		class USBShortcutRingWidget*                               InShortcutRing;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.UnbindShortcutRing
	 */
	struct UResultMenuBase_C_UnbindShortcutRing_Params
	{
	public:
		class USBShortcutRingWidget*                               InShortcutRing;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventTelopStart
	 */
	struct UResultMenuBase_C_EventTelopStart_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventTelopWait
	 */
	struct UResultMenuBase_C_EventTelopWait_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventOpen
	 */
	struct UResultMenuBase_C_EventOpen_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndOpenResultPanel
	 */
	struct UResultMenuBase_C_EventEndOpenResultPanel_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndAnimInResultFooter
	 */
	struct UResultMenuBase_C_EventEndAnimInResultFooter_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventOpenEnd
	 */
	struct UResultMenuBase_C_EventOpenEnd_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogAbility
	 */
	struct UResultMenuBase_C_EventEndAnimOutDialogAbility_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventClose
	 */
	struct UResultMenuBase_C_EventClose_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndCloseResultPanel
	 */
	struct UResultMenuBase_C_EventEndCloseResultPanel_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogLetter
	 */
	struct UResultMenuBase_C_EventEndAnimOutDialogLetter_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutResultFooter
	 */
	struct UResultMenuBase_C_EventEndAnimOutResultFooter_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventCloseEnd
	 */
	struct UResultMenuBase_C_EventCloseEnd_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndPendingReward
	 */
	struct UResultMenuBase_C_EventEndPendingReward_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndUseTokenTreasureBoxDrawItems
	 */
	struct UResultMenuBase_C_EventEndUseTokenTreasureBoxDrawItems_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogTokenTreasureTickerDrawItems
	 */
	struct UResultMenuBase_C_EventEndAnimOutDialogTokenTreasureTickerDrawItems_Params
	{	};

	/**
	 * Function ResultMenuBase.ResultMenuBase_C.ExecuteUbergraph_ResultMenuBase
	 */
	struct UResultMenuBase_C_ExecuteUbergraph_ResultMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EGS9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
