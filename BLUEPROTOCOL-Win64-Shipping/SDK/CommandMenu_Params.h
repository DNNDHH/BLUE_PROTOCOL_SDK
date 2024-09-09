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
	 * Function CommandMenu.CommandMenu_C.CheckReadDemoIdList
	 */
	struct UCommandMenu_C_CheckReadDemoIdList_Params
	{
	public:
		TArray<class FName>                                        In;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.SetSkyShopBtn
	 */
	struct UCommandMenu_C_SetSkyShopBtn_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.SetIsEnabledBtnSkyStore
	 */
	struct UCommandMenu_C_SetIsEnabledBtnSkyStore_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnCancelMatch
	 */
	struct UCommandMenu_C_OnCancelMatch_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnFailedMatch
	 */
	struct UCommandMenu_C_OnFailedMatch_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnMatchedGame
	 */
	struct UCommandMenu_C_OnMatchedGame_Params
	{
	public:
		class USBMatchingGameState*                                MatchedGame;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateQuestButton
	 */
	struct UCommandMenu_C_UpdateQuestButton_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Update Button Inventory
	 */
	struct UCommandMenu_C_UpdateButtonInventory_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.CommandMenu_AutoGenFunc
	 */
	struct UCommandMenu_C_CommandMenu_AutoGenFunc_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IGH8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ApprovalMax;                                             // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNoOverride;                                             // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PV3J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FContactListData>                            ItemListData;                                            // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQF0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindConsent
	 */
	struct UCommandMenu_C_UnbindConsent_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateConsent
	 */
	struct UCommandMenu_C_UpdateConsent_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.SetCmnBackBtnVIsibility
	 */
	struct UCommandMenu_C_SetCmnBackBtnVIsibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateMatchingMenuButtonExclamation
	 */
	struct UCommandMenu_C_UpdateMatchingMenuButtonExclamation_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateGuildButtonExclamation
	 */
	struct UCommandMenu_C_UpdateGuildButtonExclamation_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.GetGuildComp
	 */
	struct UCommandMenu_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateGuildButton
	 */
	struct UCommandMenu_C_UpdateGuildButton_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.GetIsRmShopDisplayed
	 */
	struct UCommandMenu_C_GetIsRmShopDisplayed_Params
	{
	public:
		bool                                                       OutIsRmShopOpen;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateLetterButton
	 */
	struct UCommandMenu_C_UpdateLetterButton_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateSeasonPassMenuButton
	 */
	struct UCommandMenu_C_UpdateSeasonPassMenuButton_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.TsCheck
	 */
	struct UCommandMenu_C_TsCheck_Params
	{
	public:
		class FString                                              InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6KT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Get Now Page
	 */
	struct UCommandMenu_C_GetNowPage_Params
	{
	public:
		class FString                                              NowBookMarkType;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.IsBookmarkType
	 */
	struct UCommandMenu_C_IsBookmarkType_Params
	{
	public:
		ESBKeyConfigAction                                         Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBookmark;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.GetBookmarkType
	 */
	struct UCommandMenu_C_GetBookmarkType_Params
	{
	public:
		ESBKeyConfigAction                                         Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_653T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.GetCommondMenuType
	 */
	struct UCommandMenu_C_GetCommondMenuType_Params
	{
	public:
		ESBKeyConfigAction                                         Action;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCommandMenuType                                         ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Create Child Menu
	 */
	struct UCommandMenu_C_CreateChildMenu_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBCommandMenuChildBase*                             CreateChildWidget;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Update Library New Icon
	 */
	struct UCommandMenu_C_UpdateLibraryNewIcon_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.SetActiveMenuButtonAnim
	 */
	struct UCommandMenu_C_SetActiveMenuButtonAnim_Params
	{
	public:
		ESBCommandMenuType                                         ActiveMenuType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.DisableMenuButtons
	 */
	struct UCommandMenu_C_DisableMenuButtons_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.GetFirstMenuType_Internal
	 */
	struct UCommandMenu_C_GetFirstMenuType_Internal_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.IsEnableMenu
	 */
	struct UCommandMenu_C_IsEnableMenu_Params
	{
	public:
		ESBCommandMenuType                                         InMenuType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnable;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.RequestDirectChat
	 */
	struct UCommandMenu_C_RequestDirectChat_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Add BGGroup Contents
	 */
	struct UCommandMenu_C_AddBGGroupContents_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.IsRememberMenu
	 */
	struct UCommandMenu_C_IsRememberMenu_Params
	{
	public:
		ESBCommandMenuType                                         InMenuType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRet;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.GetFirstMenuType
	 */
	struct UCommandMenu_C_GetFirstMenuType_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZR0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu.CommandMenu_C.SetActiveMenuButton
	 */
	struct UCommandMenu_C_SetActiveMenuButton_Params
	{
	public:
		ESBCommandMenuType                                         ActiveMenuType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.CollectMenuButton
	 */
	struct UCommandMenu_C_CollectMenuButton_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnLoaded_A56FA3C649A13B2523A4D78B50954D35
	 */
	struct UCommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnLoaded_6ACEB693478345863D5B688D8FC8E59D
	 */
	struct UCommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnLoaded_AE38282A462780609F3445B36A750DC5
	 */
	struct UCommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OpenCommandMenu
	 */
	struct UCommandMenu_C_Event_OpenCommandMenu_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_CloseCommandMenu
	 */
	struct UCommandMenu_C_Event_CloseCommandMenu_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnPress_QuickAccess
	 */
	struct UCommandMenu_C_OnPress_QuickAccess_Params
	{
	public:
		ESBKeyConfigAction                                         QuickAccess;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.StartQuickAccess
	 */
	struct UCommandMenu_C_StartQuickAccess_Params
	{
	public:
		ESBCommandMenuType                                         InMenuType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.TransitionMenuFromSubMenu
	 */
	struct UCommandMenu_C_TransitionMenuFromSubMenu_Params
	{
	public:
		ESBCommandMenuType                                         InMenuType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ROFV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBookMarkType;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                InParamName;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BookmarkProcessing
	 */
	struct UCommandMenu_C_BookmarkProcessing_Params
	{
	public:
		class FString                                              BookmarkType;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_2
	 */
	struct UCommandMenu_C_CustomEvent_2_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_3
	 */
	struct UCommandMenu_C_CustomEvent_3_Params
	{
	public:
		ESBBookMarkerSlot                                          BookmarkSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N99F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              KeyString;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BookmarkRegistration
	 */
	struct UCommandMenu_C_BookmarkRegistration_Params
	{
	public:
		class FString                                              BookmarkType;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BookmarkDelete
	 */
	struct UCommandMenu_C_BookmarkDelete_Params
	{
	public:
		class FString                                              InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_4
	 */
	struct UCommandMenu_C_CustomEvent_4_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BookmarkUpdateRequest
	 */
	struct UCommandMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BookmarkUpdate
	 */
	struct UCommandMenu_C_BookmarkUpdate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.RequestTransitionMenuNew
	 */
	struct UCommandMenu_C_RequestTransitionMenuNew_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2NN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              BookmarkType;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                InParamName;                                             // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Destruct
	 */
	struct UCommandMenu_C_Destruct_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Construct
	 */
	struct UCommandMenu_C_Construct_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_1
	 */
	struct UCommandMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnUnreadUpdate
	 */
	struct UCommandMenu_C_OnUnreadUpdate_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CLPH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UnreadCount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindUpdatedUnreadCount
	 */
	struct UCommandMenu_C_UnbindUpdatedUnreadCount_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindUpdatedUnreadCount
	 */
	struct UCommandMenu_C_BindUpdatedUnreadCount_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnRequestTermCommandMenuDelegate_Event_1
	 */
	struct UCommandMenu_C_OnRequestTermCommandMenuDelegate_Event_1_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindOnRequestTermCommandMenuDelegate
	 */
	struct UCommandMenu_C_UnbindOnRequestTermCommandMenuDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindOnRequestTermCommandMenuDelegate
	 */
	struct UCommandMenu_C_BindOnRequestTermCommandMenuDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.DemoPlayStartDelegate_Event_1
	 */
	struct UCommandMenu_C_DemoPlayStartDelegate_Event_1_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindDemoPlayStartDelegate
	 */
	struct UCommandMenu_C_UnbindDemoPlayStartDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindDemoPlayStartDelegate
	 */
	struct UCommandMenu_C_BindDemoPlayStartDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindGameOverDelegate
	 */
	struct UCommandMenu_C_UnbindGameOverDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindOnDeathDelegate
	 */
	struct UCommandMenu_C_UnbindOnDeathDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.QuitCommandMenuDelegate
	 */
	struct UCommandMenu_C_QuitCommandMenuDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindDungeonClearDelegate
	 */
	struct UCommandMenu_C_UnbindDungeonClearDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindOnDeathDelegate
	 */
	struct UCommandMenu_C_BindOnDeathDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindGameOverDelegate
	 */
	struct UCommandMenu_C_BindGameOverDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindDungeonClearDelegate
	 */
	struct UCommandMenu_C_BindDungeonClearDelegate_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindUpdateItemNew
	 */
	struct UCommandMenu_C_BindUpdateItemNew_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_5
	 */
	struct UCommandMenu_C_CustomEvent_5_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindUpdateItemNew
	 */
	struct UCommandMenu_C_UnbindUpdateItemNew_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindUpdateQuestButtonNew
	 */
	struct UCommandMenu_C_BindUpdateQuestButtonNew_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.カスタムイベント_4
	 */
	struct UCommandMenu_C__4_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompleteCommandMenuGetDelegate
	 */
	struct UCommandMenu_C_Event_OnCompleteCommandMenuGetDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindUpdateMatchingMenuButtonNew
	 */
	struct UCommandMenu_C_BindUpdateMatchingMenuButtonNew_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnUpdateMatchingMenuButtonNew
	 */
	struct UCommandMenu_C_OnUpdateMatchingMenuButtonNew_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_6
	 */
	struct UCommandMenu_C_CustomEvent_6_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.CustomEvent_7
	 */
	struct UCommandMenu_C_CustomEvent_7_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AL20[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.TryAchievementDataLoad
	 */
	struct UCommandMenu_C_TryAchievementDataLoad_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.ExitGame
	 */
	struct UCommandMenu_C_ExitGame_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.StartExitGame
	 */
	struct UCommandMenu_C_StartExitGame_Params
	{
	public:
		bool                                                       QuitFlag;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWMV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DlalogMsgID;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnHide_Event_1
	 */
	struct UCommandMenu_C_OnHide_Event_1_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.ExitGame_TermMenu
	 */
	struct UCommandMenu_C_ExitGame_TermMenu_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Term
	 */
	struct UCommandMenu_C_Term_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.TryTerm
	 */
	struct UCommandMenu_C_TryTerm_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.ForceTerm
	 */
	struct UCommandMenu_C_ForceTerm_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.CallTryTerm
	 */
	struct UCommandMenu_C_CallTryTerm_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.TryStartChildMenu
	 */
	struct UCommandMenu_C_TryStartChildMenu_Params
	{
	public:
		ESBCommandMenuType                                         InMenuType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SDJH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InParamName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.StartChildMenu
	 */
	struct UCommandMenu_C_StartChildMenu_Params
	{
	public:
		ESBCommandMenuType                                         InMenuType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsStartup;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       First;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.ResetMouseCursorTypeToDefault
	 */
	struct UCommandMenu_C_ResetMouseCursorTypeToDefault_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnStartOption
	 */
	struct UCommandMenu_C_OnStartOption_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UpdateUnreadMark
	 */
	struct UCommandMenu_C_UpdateUnreadMark_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params
	{
	public:
		ESBCommandMenuType                                         MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.RequestUpdateLibraryNewIcon
	 */
	struct UCommandMenu_C_RequestUpdateLibraryNewIcon_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnCloseOptionMenu
	 */
	struct UCommandMenu_C_OnCloseOptionMenu_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.DisplayRmShop
	 */
	struct UCommandMenu_C_DisplayRmShop_Params
	{
	public:
		ESBRmShopMenuType                                          StartUpShopType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnCommandMenuVisible_Event_1
	 */
	struct UCommandMenu_C_OnCommandMenuVisible_Event_1_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnUpdateSeasonPassAnyInfo
	 */
	struct UCommandMenu_C_OnUpdateSeasonPassAnyInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature_Params
	{
	public:
		class UCommandMenu_MenuItem_C*                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnCloseRmShopMenuEvent
	 */
	struct UCommandMenu_C_OnCloseRmShopMenuEvent_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedGetEntries
	 */
	struct UCommandMenu_C_Event_OnCompletedGetEntries_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedGetInviteList
	 */
	struct UCommandMenu_C_Event_OnCompletedGetInviteList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedWithDraw
	 */
	struct UCommandMenu_C_Event_OnCompletedWithDraw_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedGGetEntryList
	 */
	struct UCommandMenu_C_Event_OnCompletedGGetEntryList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedInviteArraignment
	 */
	struct UCommandMenu_C_Event_OnCompletedInviteArraignment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYF6[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedCancelEntry
	 */
	struct UCommandMenu_C_Event_OnCompletedCancelEntry_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnIsCmnBackBtnVisible
	 */
	struct UCommandMenu_C_OnIsCmnBackBtnVisible_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.ForceCloseRmShop
	 */
	struct UCommandMenu_C_ForceCloseRmShop_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.Event_OnCompletedGuildAddedNewMember
	 */
	struct UCommandMenu_C_Event_OnCompletedGuildAddedNewMember_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature_Params
	{
	public:
		bool                                                       IsStart;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnDelegateMails
	 */
	struct UCommandMenu_C_OnDelegateMails_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnMailDelegateEvents
	 */
	struct UCommandMenu_C_OnMailDelegateEvents_Params
	{
	public:
		bool                                                       bIsAleat;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.BindMailComponent
	 */
	struct UCommandMenu_C_BindMailComponent_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.UnbindMailComponent
	 */
	struct UCommandMenu_C_UnbindMailComponent_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnPress_MainMenu
	 */
	struct UCommandMenu_C_OnPress_MainMenu_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnAnimationFinished
	 */
	struct UCommandMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnPress_Cancel
	 */
	struct UCommandMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnSubMenuTermReady
	 */
	struct UCommandMenu_C_OnSubMenuTermReady_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnRequestDirectChat
	 */
	struct UCommandMenu_C_OnRequestDirectChat_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UCommandMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnAddBgGroupContents
	 */
	struct UCommandMenu_C_OnAddBgGroupContents_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.ExecuteUbergraph_CommandMenu
	 */
	struct UCommandMenu_C_ExecuteUbergraph_CommandMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnFinishCreateChildWidget__DelegateSignature
	 */
	struct UCommandMenu_C_OnFinishCreateChildWidget__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnTerm__DelegateSignature
	 */
	struct UCommandMenu_C_OnTerm__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu.CommandMenu_C.OnTermed__DelegateSignature
	 */
	struct UCommandMenu_C_OnTermed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
