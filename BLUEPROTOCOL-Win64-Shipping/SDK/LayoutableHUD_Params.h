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
	 * Function LayoutableHUD.LayoutableHUD_C.GetShortcutRing
	 */
	struct ULayoutableHUD_C_GetShortcutRing_Params
	{
	public:
		class USBShortcutRingWidget*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.GetNewStepListWidget
	 */
	struct ULayoutableHUD_C_GetNewStepListWidget_Params
	{
	public:
		class USBStepList*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ReleaseDialogWidget
	 */
	struct ULayoutableHUD_C_ReleaseDialogWidget_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.GetPlayerGaugeBaseWidget
	 */
	struct ULayoutableHUD_C_GetPlayerGaugeBaseWidget_Params
	{
	public:
		class USBPlayerGaugeBaseWidget*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.GetWholemapWidget
	 */
	struct ULayoutableHUD_C_GetWholemapWidget_Params
	{
	public:
		class USBWholeMap*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.GetMinimapWidget
	 */
	struct ULayoutableHUD_C_GetMinimapWidget_Params
	{
	public:
		class USBMiniMapWidget*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightRepeat
	 */
	struct ULayoutableHUD_C_ItemSelectorMoveRightRepeat_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightPress
	 */
	struct ULayoutableHUD_C_ItemSelectorMoveRightPress_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftRepeat
	 */
	struct ULayoutableHUD_C_ItemSelectorMoveLeftRepeat_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftPress
	 */
	struct ULayoutableHUD_C_ItemSelectorMoveLeftPress_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ItemSelectorExe
	 */
	struct ULayoutableHUD_C_ItemSelectorExe_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.NextStepList
	 */
	struct ULayoutableHUD_C_NextStepList_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnDragOver
	 */
	struct ULayoutableHUD_C_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5508[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.EditMap
	 */
	struct ULayoutableHUD_C_EditMap_Params
	{
	public:
		float                                                      PressTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A4WE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SwitchingMap
	 */
	struct ULayoutableHUD_C_SwitchingMap_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ChatTempLogsInit
	 */
	struct ULayoutableHUD_C_ChatTempLogsInit_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.GetHitFlash
	 */
	struct ULayoutableHUD_C_GetHitFlash_Params
	{
	public:
		class UHitFlash_C*                                         HitFlash;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnMouseButtonDown
	 */
	struct ULayoutableHUD_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Get_PartyInfo_Visibility_1
	 */
	struct ULayoutableHUD_C_Get_PartyInfo_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ZSort
	 */
	struct ULayoutableHUD_C_ZSort_Params
	{
	public:
		class UUserWidget*                                         SortWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.CreateClippingAnchors
	 */
	struct ULayoutableHUD_C_CreateClippingAnchors_Params
	{
	public:
		struct FAnchors                                            Anchors;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnKeyDown
	 */
	struct ULayoutableHUD_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.CollectMovealObject
	 */
	struct ULayoutableHUD_C_CollectMovealObject_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Term
	 */
	struct ULayoutableHUD_C_Term_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Init
	 */
	struct ULayoutableHUD_C_Init_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnDrop
	 */
	struct ULayoutableHUD_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P55P[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.BindForceCloseEvent
	 */
	struct ULayoutableHUD_C_BindForceCloseEvent_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.UnbindForceCloseEvent
	 */
	struct ULayoutableHUD_C_UnbindForceCloseEvent_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnRequestTerm
	 */
	struct ULayoutableHUD_C_OnRequestTerm_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnClosedMenuDetected
	 */
	struct ULayoutableHUD_C_OnClosedMenuDetected_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Bind DeadCheck
	 */
	struct ULayoutableHUD_C_BindDeadCheck_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.UnBind DeadCheck
	 */
	struct ULayoutableHUD_C_UnBindDeadCheck_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnDeadPlayer
	 */
	struct ULayoutableHUD_C_OnDeadPlayer_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.BindVisibleSettingChangeDelegate
	 */
	struct ULayoutableHUD_C_BindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.UnbindVisibleSettingChangeDelegate
	 */
	struct ULayoutableHUD_C_UnbindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnChangeVisibility
	 */
	struct ULayoutableHUD_C_OnChangeVisibility_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.BindWholeMap
	 */
	struct ULayoutableHUD_C_BindWholeMap_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.UnbindWholeMap
	 */
	struct ULayoutableHUD_C_UnbindWholeMap_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnOpenWholeMapEditWindow
	 */
	struct ULayoutableHUD_C_OnOpenWholeMapEditWindow_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnCloseWholeMapEditWindow
	 */
	struct ULayoutableHUD_C_OnCloseWholeMapEditWindow_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OpenContinueCheckDialog
	 */
	struct ULayoutableHUD_C_OpenContinueCheckDialog_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ContinueDialogFinish
	 */
	struct ULayoutableHUD_C_ContinueDialogFinish_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheck
	 */
	struct ULayoutableHUD_C_PresetSelectContinueCheck_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheckFinish
	 */
	struct ULayoutableHUD_C_PresetSelectContinueCheckFinish_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PresetEndCheck
	 */
	struct ULayoutableHUD_C_PresetEndCheck_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PresetEndCheckFinish
	 */
	struct ULayoutableHUD_C_PresetEndCheckFinish_Params
	{
	public:
		bool                                                       bIsCancel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.BindShortcutRing
	 */
	struct ULayoutableHUD_C_BindShortcutRing_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.UnbindShortcutRing
	 */
	struct ULayoutableHUD_C_UnbindShortcutRing_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRing
	 */
	struct ULayoutableHUD_C_OnOpenShortcutRing_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRing
	 */
	struct ULayoutableHUD_C_OnCloseShortcutRing_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRingEdit
	 */
	struct ULayoutableHUD_C_OnOpenShortcutRingEdit_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRingEdit
	 */
	struct ULayoutableHUD_C_OnCloseShortcutRingEdit_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Chat_Construct
	 */
	struct ULayoutableHUD_C_Chat_Construct_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetChatLogEditMode
	 */
	struct ULayoutableHUD_C_SetChatLogEditMode_Params
	{
	public:
		bool                                                       InEdit;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.LoadChatTempLogWindowSize
	 */
	struct ULayoutableHUD_C_LoadChatTempLogWindowSize_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SaveChatTempLogWindowSize
	 */
	struct ULayoutableHUD_C_SaveChatTempLogWindowSize_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetEditModeWidgets
	 */
	struct ULayoutableHUD_C_SetEditModeWidgets_Params
	{
	public:
		bool                                                       IsEditMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.StepListEditMode
	 */
	struct ULayoutableHUD_C_StepListEditMode_Params
	{
	public:
		bool                                                       bEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PartyInfoEditMode
	 */
	struct ULayoutableHUD_C_PartyInfoEditMode_Params
	{
	public:
		bool                                                       bEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetTutorialPlayerGaugeHighlight
	 */
	struct ULayoutableHUD_C_SetTutorialPlayerGaugeHighlight_Params
	{
	public:
		EPlayerGaugeHighlight                                      HighLight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.FocusTargetEditMode
	 */
	struct ULayoutableHUD_C_FocusTargetEditMode_Params
	{
	public:
		bool                                                       IsEditMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetFocusActor
	 */
	struct ULayoutableHUD_C_SetFocusActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetBufIconEditMode
	 */
	struct ULayoutableHUD_C_SetBufIconEditMode_Params
	{
	public:
		bool                                                       IsEdit;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetTutorialSkillHighlight
	 */
	struct ULayoutableHUD_C_SetTutorialSkillHighlight_Params
	{
	public:
		ESkillPaletteTutorialFocus                                 FocusMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetTutorialSpecialGaugeHighlight
	 */
	struct ULayoutableHUD_C_SetTutorialSpecialGaugeHighlight_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetTutorialImagineGaugeHighlight
	 */
	struct ULayoutableHUD_C_SetTutorialImagineGaugeHighlight_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.KeyGuideEditMode
	 */
	struct ULayoutableHUD_C_KeyGuideEditMode_Params
	{
	public:
		bool                                                       IsEditMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.HPSTEditMode
	 */
	struct ULayoutableHUD_C_HPSTEditMode_Params
	{
	public:
		bool                                                       IsEditMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SkillInfoEditMode
	 */
	struct ULayoutableHUD_C_SkillInfoEditMode_Params
	{
	public:
		bool                                                       IsEditMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ShortcutRingEditMode
	 */
	struct ULayoutableHUD_C_ShortcutRingEditMode_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetEditModeClassHuds
	 */
	struct ULayoutableHUD_C_SetEditModeClassHuds_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P007EditMode
	 */
	struct ULayoutableHUD_C_P007EditMode_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Class EditMode Disable
	 */
	struct ULayoutableHUD_C_ClassEditModeDisable_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P011EditMode
	 */
	struct ULayoutableHUD_C_P011EditMode_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.DesignMode
	 */
	struct ULayoutableHUD_C_DesignMode_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P012EditMode
	 */
	struct ULayoutableHUD_C_P012EditMode_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P019 EditMode
	 */
	struct ULayoutableHUD_C_P019EditMode_Params
	{
	public:
		bool                                                       bEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P020EditMode
	 */
	struct ULayoutableHUD_C_P020EditMode_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.MiniMapEditMode
	 */
	struct ULayoutableHUD_C_MiniMapEditMode_Params
	{
	public:
		bool                                                       IsEditMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P006EditMode
	 */
	struct ULayoutableHUD_C_P006EditMode_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ReticleEditMode
	 */
	struct ULayoutableHUD_C_ReticleEditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.P021EditMode
	 */
	struct ULayoutableHUD_C_P021EditMode_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ItemSelectorEditMode
	 */
	struct ULayoutableHUD_C_ItemSelectorEditMode_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ContentActionEditMode
	 */
	struct ULayoutableHUD_C_ContentActionEditMode_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SaveHudRayoutPosition
	 */
	struct ULayoutableHUD_C_SaveHudRayoutPosition_Params
	{
	public:
		class UMovable_C*                                          ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCustomHudLayoutSlot                                     Slot;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.LoadHudRayoutPosition
	 */
	struct ULayoutableHUD_C_LoadHudRayoutPosition_Params
	{
	public:
		class UMovable_C*                                          ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCustomHudLayoutSlot                                     HudSlot;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SaveToFile
	 */
	struct ULayoutableHUD_C_SaveToFile_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.LoadFromFile
	 */
	struct ULayoutableHUD_C_LoadFromFile_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnExitEditMode
	 */
	struct ULayoutableHUD_C_OnExitEditMode_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Event_OpenMenu
	 */
	struct ULayoutableHUD_C_Event_OpenMenu_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Event_CloseMenu
	 */
	struct ULayoutableHUD_C_Event_CloseMenu_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnUpdateHudBeltVisible
	 */
	struct ULayoutableHUD_C_OnUpdateHudBeltVisible_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.InitGeneral
	 */
	struct ULayoutableHUD_C_InitGeneral_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.UnbindOnUpdateHudBeltVisible
	 */
	struct ULayoutableHUD_C_UnbindOnUpdateHudBeltVisible_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.LoadPreset
	 */
	struct ULayoutableHUD_C_LoadPreset_Params
	{
	public:
		ELayoutPresetTypes                                         eLayoutPreset;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PresetLoad
	 */
	struct ULayoutableHUD_C_PresetLoad_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.LoadCustomSave
	 */
	struct ULayoutableHUD_C_LoadCustomSave_Params
	{
	public:
		ESBCustomHudLayoutSlot                                     LoadCustomSlot;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Show Custom SlotMenu
	 */
	struct ULayoutableHUD_C_ShowCustomSlotMenu_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Save CustomSlot
	 */
	struct ULayoutableHUD_C_SaveCustomSlot_Params
	{
	public:
		ESBCustomHudLayoutSlot                                     Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OpenInitSelect
	 */
	struct ULayoutableHUD_C_OpenInitSelect_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.InitLoadPreset
	 */
	struct ULayoutableHUD_C_InitLoadPreset_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.OnFinishedPreset
	 */
	struct ULayoutableHUD_C_OnFinishedPreset_Params
	{
	public:
		bool                                                       bIsCancel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Event_LayoutMenuClose
	 */
	struct ULayoutableHUD_C_Event_LayoutMenuClose_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.LayoutMenuExit
	 */
	struct ULayoutableHUD_C_LayoutMenuExit_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ApplyPreset
	 */
	struct ULayoutableHUD_C_ApplyPreset_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.CloseHudCustomMenu
	 */
	struct ULayoutableHUD_C_CloseHudCustomMenu_Params
	{
	public:
		bool                                                       bIsCancel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.PreConstruct
	 */
	struct ULayoutableHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Construct
	 */
	struct ULayoutableHUD_C_Construct_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetEditMode
	 */
	struct ULayoutableHUD_C_SetEditMode_Params
	{
	public:
		bool                                                       bEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.CheckVisibleDescription
	 */
	struct ULayoutableHUD_C_CheckVisibleDescription_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Reinit
	 */
	struct ULayoutableHUD_C_Reinit_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ResetZOrderForBaseOrders
	 */
	struct ULayoutableHUD_C_ResetZOrderForBaseOrders_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.FocusForTutorialWidget
	 */
	struct ULayoutableHUD_C_FocusForTutorialWidget_Params
	{
	public:
		ELayoutableHUD_FocusableWidets                             FocusWidget;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.TitorialHudInit
	 */
	struct ULayoutableHUD_C_TitorialHudInit_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.Destruct
	 */
	struct ULayoutableHUD_C_Destruct_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2
	 */
	struct ULayoutableHUD_C_WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3
	 */
	struct ULayoutableHUD_C_WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.AnimationFinish
	 */
	struct ULayoutableHUD_C_AnimationFinish_Params
	{	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.SetVisibleDescription
	 */
	struct ULayoutableHUD_C_SetVisibleDescription_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ExecuteUbergraph_LayoutableHUD
	 */
	struct ULayoutableHUD_C_ExecuteUbergraph_LayoutableHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VX0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.ChangeEditMode__DelegateSignature
	 */
	struct ULayoutableHUD_C_ChangeEditMode__DelegateSignature_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LayoutableHUD.LayoutableHUD_C.CloseOnDown__DelegateSignature
	 */
	struct ULayoutableHUD_C_CloseOnDown__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
