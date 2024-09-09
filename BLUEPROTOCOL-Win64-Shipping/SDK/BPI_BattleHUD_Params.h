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
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF12
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF12_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF11
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF11_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF10
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF10_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF9
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF9_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF8
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF8_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF7
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF7_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF6
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF6_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingExecuteF5
	 */
	struct UBPI_BattleHUD_C_ShortcutRingExecuteF5_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.InitDhcBattleHUD
	 */
	struct UBPI_BattleHUD_C_InitDhcBattleHUD_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.InitTimerRespawnHUD
	 */
	struct UBPI_BattleHUD_C_InitTimerRespawnHUD_Params
	{
	public:
		ETimerHUDType                                              HUDType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.SetKeyGuideTextVisible
	 */
	struct UBPI_BattleHUD_C_SetKeyGuideTextVisible_Params
	{
	public:
		ESkillActionPosition                                       InSkillActionPosition;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsVisible;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.SetBattleInfoHUDVisible
	 */
	struct UBPI_BattleHUD_C_SetBattleInfoHUDVisible_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.BattleAreaDisableMessage
	 */
	struct UBPI_BattleHUD_C_BattleAreaDisableMessage_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ChangeKeyGuide1_2Visibility
	 */
	struct UBPI_BattleHUD_C_ChangeKeyGuide1_2Visibility_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OpenInitSelect
	 */
	struct UBPI_BattleHUD_C_OpenInitSelect_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.SetEditMode
	 */
	struct UBPI_BattleHUD_C_SetEditMode_Params
	{
	public:
		bool                                                       bEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnUpdateRespawnGauge
	 */
	struct UBPI_BattleHUD_C_OnUpdateRespawnGauge_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowRespawnBattleArea
	 */
	struct UBPI_BattleHUD_C_OnShowRespawnBattleArea_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnDisableRespawn
	 */
	struct UBPI_BattleHUD_C_OnDisableRespawn_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowRespawn
	 */
	struct UBPI_BattleHUD_C_OnShowRespawn_Params
	{
	public:
		float                                                      InRespawnTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnShowCombo
	 */
	struct UBPI_BattleHUD_C_OnShowCombo_Params
	{
	public:
		int32_t                                                    Combo;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnSaveCharaConfigUpdate
	 */
	struct UBPI_BattleHUD_C_OnSaveCharaConfigUpdate_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ChangeKeyGuideUpdate
	 */
	struct UBPI_BattleHUD_C_ChangeKeyGuideUpdate_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnClickedCloseChatHUD
	 */
	struct UBPI_BattleHUD_C_OnClickedCloseChatHUD_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.CallAddMemberDeadNotifyMessage
	 */
	struct UBPI_BattleHUD_C_CallAddMemberDeadNotifyMessage_Params
	{
	public:
		class FText                                                MemberName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OpenCursorModeToOtherPCMenu
	 */
	struct UBPI_BattleHUD_C_OpenCursorModeToOtherPCMenu_Params
	{
	public:
		class ABP_PlayerCharacter_C*                               InOtherPC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.HitIndicatorAddMarker
	 */
	struct UBPI_BattleHUD_C_HitIndicatorAddMarker_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.SetFocusActor
	 */
	struct UBPI_BattleHUD_C_SetFocusActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.Switching Map
	 */
	struct UBPI_BattleHUD_C_SwitchingMap_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.IsEditMap
	 */
	struct UBPI_BattleHUD_C_IsEditMap_Params
	{
	public:
		float                                                      PressTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.NextQuestInfo
	 */
	struct UBPI_BattleHUD_C_NextQuestInfo_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorExe
	 */
	struct UBPI_BattleHUD_C_ItemSelectorExe_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveLeftPress
	 */
	struct UBPI_BattleHUD_C_ItemSelectorMoveLeftPress_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveLeftRepeat
	 */
	struct UBPI_BattleHUD_C_ItemSelectorMoveLeftRepeat_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveRightPress
	 */
	struct UBPI_BattleHUD_C_ItemSelectorMoveRightPress_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ItemSelectorMoveRightRepeat
	 */
	struct UBPI_BattleHUD_C_ItemSelectorMoveRightRepeat_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingClose
	 */
	struct UBPI_BattleHUD_C_ShortcutRingClose_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingOpen
	 */
	struct UBPI_BattleHUD_C_ShortcutRingOpen_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShortcutRingSwitch
	 */
	struct UBPI_BattleHUD_C_ShortcutRingSwitch_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ForceCloseChatHUD
	 */
	struct UBPI_BattleHUD_C_ForceCloseChatHUD_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.ShowChatHUD
	 */
	struct UBPI_BattleHUD_C_ShowChatHUD_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.CallUpdateInteractionNotice
	 */
	struct UBPI_BattleHUD_C_CallUpdateInteractionNotice_Params
	{
	public:
		struct FSBInteractionInfo                                  InteractionInfo;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.IsOtherPCListMenuVisible
	 */
	struct UBPI_BattleHUD_C_IsOtherPCListMenuVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.IsChatWindowActive
	 */
	struct UBPI_BattleHUD_C_IsChatWindowActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.OnRequestTutorialHelp
	 */
	struct UBPI_BattleHUD_C_OnRequestTutorialHelp_Params
	{
	public:
		bool                                                       bCheckUnlock;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.KeyShortcut_Stamp
	 */
	struct UBPI_BattleHUD_C_KeyShortcut_Stamp_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.UpdateMouseCursorIcon
	 */
	struct UBPI_BattleHUD_C_UpdateMouseCursorIcon_Params
	{	};

	/**
	 * Function BPI_BattleHUD.BPI_BattleHUD_C.RequestDirectChat
	 */
	struct UBPI_BattleHUD_C_RequestDirectChat_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
