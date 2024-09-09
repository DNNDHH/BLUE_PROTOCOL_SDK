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
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.SetPlayerAvatarImageVisibility
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.InitCostumeChangeMenu
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu_Params
	{
	public:
		class UMyCharaMenu_Costume_C*                              InCostumeChangeMenu;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.IsBattleSetButtonEnable
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable_Params
	{
	public:
		bool                                                       OutIsEnable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Update Sub Button Excramation Icon
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_UpdateSubButtonExcramationIcon_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Construct
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_Construct_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_Init_Params
	{
	public:
		bool                                                       IsFirstOpen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DFXT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OpenBookMarkType;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Destruct
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_Destruct_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden_イベント
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ChangeTab
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_ChangeTab_Params
	{
	public:
		int32_t                                                    TmpClickedTabButtonId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClicked_BattleSet_DetailedStatus
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnClicked_BattleSet_DetailedStatus_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BookmarkUpdateRequest
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init_BattleSet_FullSrnBtn
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_Init_BattleSet_FullSrnBtn_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.EscDetailedStatus
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_EscDetailedStatus_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClickedDetailedStatus
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnClickedDetailedStatus_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Free_BattleSet_FullSrnBtn
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_Free_BattleSet_FullSrnBtn_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAdventureBoardBtn_Event
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnAdventureBoardBtn_Event_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InIsRotateActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ExecuteUbergraph_MyCharacterMenu_StatusSwitcher
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature_Params
	{
	public:
		bool                                                       InIsCostumeOn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnResetPlayerAvatarRotate__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnEquippedWeaponSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSelectAchievementSaved__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature_Params
	{
	public:
		class UMyCharaMenu_AchievementList_C*                      InAchievementList;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSubMenuChanged__DelegateSignature
	 */
	struct UMyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
