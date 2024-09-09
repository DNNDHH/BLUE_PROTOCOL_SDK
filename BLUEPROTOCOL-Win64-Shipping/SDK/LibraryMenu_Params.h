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
	 * Function LibraryMenu.LibraryMenu_C.TermRequest
	 */
	struct ULibraryMenu_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.CheckReadDemoIdList
	 */
	struct ULibraryMenu_C_CheckReadDemoIdList_Params
	{
	public:
		TArray<class FName>                                        In;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.Setup Library Button Excrametion
	 */
	struct ULibraryMenu_C_SetupLibraryButtonExcrametion_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.GetCharacterAchievementData
	 */
	struct ULibraryMenu_C_GetCharacterAchievementData_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBAchievementInfo                                  Output;                                                  // 0x0004(0x0004)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SetupSelectedSubMenu
	 */
	struct ULibraryMenu_C_SetupSelectedSubMenu_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.BookmarkTypeToMenueType
	 */
	struct ULibraryMenu_C_BookmarkTypeToMenueType_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		ELibraryMenuType                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.Set Title And Help Text Id
	 */
	struct ULibraryMenu_C_SetTitleAndHelpTextId_Params
	{
	public:
		ELibraryMenuType                                           InSelectedMenuType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RMA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.RefleshNewIcon
	 */
	struct ULibraryMenu_C_RefleshNewIcon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GU40[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SetupTheaterButtonExcrametion
	 */
	struct ULibraryMenu_C_SetupTheaterButtonExcrametion_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SetupAchievementButtonExcrametion
	 */
	struct ULibraryMenu_C_SetupAchievementButtonExcrametion_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SetupMenuButtonExcrametion
	 */
	struct ULibraryMenu_C_SetupMenuButtonExcrametion_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.Setup Selected Menu
	 */
	struct ULibraryMenu_C_SetupSelectedMenu_Params
	{
	public:
		ELibraryMenuType                                           InSelectedMenuType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3XU3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.GetIdListCallback
	 */
	struct ULibraryMenu_C_GetIdListCallback_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z8BL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryPictureBookType                                  Type;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnParentTerm
	 */
	struct ULibraryMenu_C_OnParentTerm_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnRMShopClosed
	 */
	struct ULibraryMenu_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnSubMenuUpdate
	 */
	struct ULibraryMenu_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct ULibraryMenu_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.Construct
	 */
	struct ULibraryMenu_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnAnimationFinished
	 */
	struct ULibraryMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct ULibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SelectTab
	 */
	struct ULibraryMenu_C_SelectTab_Params
	{
	public:
		ELibraryMenuType                                           InputPin;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.BookmarkUpdateRequest
	 */
	struct ULibraryMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.UpdateBookmarkStatusButton
	 */
	struct ULibraryMenu_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnLoadAchivementDelegate_event
	 */
	struct ULibraryMenu_C_OnLoadAchivementDelegate_event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S51J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBAchievementInfo>                          AchievementList;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SetupAchievement_Event
	 */
	struct ULibraryMenu_C_SetupAchievement_Event_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.SetupTheater_Event
	 */
	struct ULibraryMenu_C_SetupTheater_Event_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnSameMenuBookmarkAccessNew
	 */
	struct ULibraryMenu_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.Library_SubMenu_Open
	 */
	struct ULibraryMenu_C_Library_SubMenu_Open_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct ULibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.ButtonRefreshAchievement
	 */
	struct ULibraryMenu_C_ButtonRefreshAchievement_Params
	{	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.OnLoadAchievementDataDelegate_Event
	 */
	struct ULibraryMenu_C_OnLoadAchievementDataDelegate_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_28IR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu.LibraryMenu_C.ExecuteUbergraph_LibraryMenu
	 */
	struct ULibraryMenu_C_ExecuteUbergraph_LibraryMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
