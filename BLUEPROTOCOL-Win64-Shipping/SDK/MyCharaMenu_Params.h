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
	 * Function MyCharaMenu.MyCharaMenu_C.TermRequest
	 */
	struct UMyCharaMenu_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.UpdatePlayerAvatarWeapon
	 */
	struct UMyCharaMenu_C_UpdatePlayerAvatarWeapon_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Current Mode Motion
	 */
	struct UMyCharaMenu_C_SetPlayerAvaterCurrentModeMotion_Params
	{
	public:
		EMyCharaMenu_ItemType                                      InMyCharaMenuItemType;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceEnable;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CN34[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Motion Mode
	 */
	struct UMyCharaMenu_C_SetPlayerAvaterMotionMode_Params
	{
	public:
		EMyCharaMenu_ItemType                                      InMyCharaMenuItemType;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsIdleMotionPlaying;                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.UpdateArmamentChangeButtonEnable
	 */
	struct UMyCharaMenu_C_UpdateArmamentChangeButtonEnable_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Initialize Open Menu Type
	 */
	struct UMyCharaMenu_C_InitializeOpenMenuType_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SetPlayerAvatarStudioHidden
	 */
	struct UMyCharaMenu_C_SetPlayerAvatarStudioHidden_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.FindCurrMapPlayerAvatarTransform
	 */
	struct UMyCharaMenu_C_FindCurrMapPlayerAvatarTransform_Params
	{
	public:
		class FString                                              InCurrMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTransform                                          OutTransform;                                            // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Setup Selected Menu
	 */
	struct UMyCharaMenu_C_SetupSelectedMenu_Params
	{
	public:
		EMyCharaMenu_ItemType                                      InSelectedItemType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnParentTerm
	 */
	struct UMyCharaMenu_C_OnParentTerm_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnRMShopClosed
	 */
	struct UMyCharaMenu_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnSubMenuUpdate
	 */
	struct UMyCharaMenu_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct UMyCharaMenu_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.StartUploadImage
	 */
	struct UMyCharaMenu_C_StartUploadImage_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnSaveCommandMenuPlayerAvatarPoseId_イベント
	 */
	struct UMyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId__Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAvatarPoseId;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnUploadImageCompleted_イベント
	 */
	struct UMyCharaMenu_C_OnUploadImageCompleted__Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.StartPlayerAvatarUploadImage
	 */
	struct UMyCharaMenu_C_StartPlayerAvatarUploadImage_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnUploadImageEnded
	 */
	struct UMyCharaMenu_C_OnUploadImageEnded_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.AchievementChangeButtonClicked
	 */
	struct UMyCharaMenu_C_AchievementChangeButtonClicked_Params
	{
	public:
		class UMyCharaMenu_AchievementList_C*                      InAchievementList;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.AcquiredAchievementLoaded
	 */
	struct UMyCharaMenu_C_AcquiredAchievementLoaded_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SelectAchievementSaved
	 */
	struct UMyCharaMenu_C_SelectAchievementSaved_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Construct
	 */
	struct UMyCharaMenu_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Destruct
	 */
	struct UMyCharaMenu_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.Init
	 */
	struct UMyCharaMenu_C_Init_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature
	 */
	struct UMyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SetUIBlockerVisibility
	 */
	struct UMyCharaMenu_C_SetUIBlockerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarRotateActive_イベント
	 */
	struct UMyCharaMenu_C_OnPlayerAvatarRotateActive__Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.ChangeCostumeProc
	 */
	struct UMyCharaMenu_C_ChangeCostumeProc_Params
	{
	public:
		bool                                                       InProcStart;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnAnimationFinished
	 */
	struct UMyCharaMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnRequestDirectChat_Event
	 */
	struct UMyCharaMenu_C_OnRequestDirectChat_Event_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.CustomEvent_1
	 */
	struct UMyCharaMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.BattleSetSubMenuChanged
	 */
	struct UMyCharaMenu_C_BattleSetSubMenuChanged_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.EffectListSubMenuChanged
	 */
	struct UMyCharaMenu_C_EffectListSubMenuChanged_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarSwitchPosing_イベント
	 */
	struct UMyCharaMenu_C_OnPlayerAvatarSwitchPosing__Params
	{
	public:
		class FName                                                OnPosingCommandName;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSwitchPosingToPrev;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarStudio_CharaPartsLoaded_イベント
	 */
	struct UMyCharaMenu_C_OnPlayerAvatarStudio_CharaPartsLoaded__Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnAvatarPoseChangeState_イベント
	 */
	struct UMyCharaMenu_C_OnAvatarPoseChangeState__Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.StartOpenMenuAnimation
	 */
	struct UMyCharaMenu_C_StartOpenMenuAnimation_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnChangeStateByCostumeChange_イベント
	 */
	struct UMyCharaMenu_C_OnChangeStateByCostumeChange__Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoadedDelegate_ByChangeCostume_イベント
	 */
	struct UMyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume__Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.DoMenuClose
	 */
	struct UMyCharaMenu_C_DoMenuClose_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnSetPlayerCaptureStudioHidden_イベント
	 */
	struct UMyCharaMenu_C_OnSetPlayerCaptureStudioHidden__Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.BookmarkUpdateRequest
	 */
	struct UMyCharaMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.UpdateBookmarkStatusButton
	 */
	struct UMyCharaMenu_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnCostumeSwitchOnOffEvent
	 */
	struct UMyCharaMenu_C_OnCostumeSwitchOnOffEvent_Params
	{
	public:
		bool                                                       InIsCostumeOn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnChangeEquipCostumeOccuredAtOtherEquipChange
	 */
	struct UMyCharaMenu_C_OnChangeEquipCostumeOccuredAtOtherEquipChange_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnSameMenuBookmarkAccessNew
	 */
	struct UMyCharaMenu_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnIsCmnBackBtnVisibleEvent
	 */
	struct UMyCharaMenu_C_OnIsCmnBackBtnVisibleEvent_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnEquippedWeaponSpawned
	 */
	struct UMyCharaMenu_C_OnEquippedWeaponSpawned_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnResetPlayerAvatarRotate_イベント
	 */
	struct UMyCharaMenu_C_OnResetPlayerAvatarRotate__Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SetCostumePreviewParameter
	 */
	struct UMyCharaMenu_C_SetCostumePreviewParameter_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Start;                                                   // 0x03C0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SetAvatarImageReuploadFlag
	 */
	struct UMyCharaMenu_C_SetAvatarImageReuploadFlag_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.RefreshPreviewCostume
	 */
	struct UMyCharaMenu_C_RefreshPreviewCostume_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoaded_CostumePreviewRefresh
	 */
	struct UMyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnIsCostumeOn
	 */
	struct UMyCharaMenu_C_OnIsCostumeOn_Params
	{
	public:
		bool                                                       InIsCostumeOn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnCostumeAndMountsSubMenuChanged
	 */
	struct UMyCharaMenu_C_OnCostumeAndMountsSubMenuChanged_Params
	{
	public:
		int32_t                                                    InSubMenuId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.OnResetAvatarCostumeOnOffToDefault
	 */
	struct UMyCharaMenu_C_OnResetAvatarCostumeOnOffToDefault_Params
	{	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.CostumeAndMountsSubMenuChanged
	 */
	struct UMyCharaMenu_C_CostumeAndMountsSubMenuChanged_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SkillBoardSetSubMenuChanged
	 */
	struct UMyCharaMenu_C_SkillBoardSetSubMenuChanged_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.AdventurerRankSubMenuChanged
	 */
	struct UMyCharaMenu_C_AdventurerRankSubMenuChanged_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.ExecuteUbergraph_MyCharaMenu
	 */
	struct UMyCharaMenu_C_ExecuteUbergraph_MyCharaMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu.MyCharaMenu_C.SetBackBtnVisibility__DelegateSignature
	 */
	struct UMyCharaMenu_C_SetBackBtnVisibility__DelegateSignature_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
