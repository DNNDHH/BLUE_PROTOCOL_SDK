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
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.GetWidgetSwitcherActiveWidget
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget_Params
	{
	public:
		class UWidget*                                             OutWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.InitCostumeChangeMenu
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu_Params
	{
	public:
		class UMyCharaMenu_Costume_C*                              InCostumeChangeMenu;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.IsBattleSetButtonEnable
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable_Params
	{
	public:
		bool                                                       OutIsEnable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Update Sub Button Excramation Icon
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_UpdateSubButtonExcramationIcon_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Destruct
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_Destruct_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Construct
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_Construct_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.SetTab
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_SetTab_Params
	{
	public:
		class FString                                              ItemToFind;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_Init_Params
	{
	public:
		bool                                                       IsFirstOpen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TC41[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OpenBookMarkType;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden_イベント
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ChangeTab
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab_Params
	{
	public:
		int32_t                                                    TmpClickedTabButtonId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BookmarkUpdateRequest
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.UpdateBookmarkStatusButton
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClicked_BattleSet_DetailedStatus
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnClicked_BattleSet_DetailedStatus_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init_BattleSet_FullSrnBtn
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_Init_BattleSet_FullSrnBtn_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.EscDetailedStatus
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_EscDetailedStatus_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClickedDetailedStatus
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnClickedDetailedStatus_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Free_BattleSet_FullSrnBtn
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_Free_BattleSet_FullSrnBtn_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAdventureBoardBtn_Event
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnAdventureBoardBtn_Event_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQ9E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature_Params
	{
	public:
		bool                                                       InIsCostumeOn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnResetPlayerAvatarRotate__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnEquippedWeaponSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSelectAchievementSaved__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature_Params
	{
	public:
		class UMyCharaMenu_AchievementList_C*                      InAchievementList;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSubMenuChanged__DelegateSignature
	 */
	struct UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
