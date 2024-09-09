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
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.TermRequest
	 */
	struct ULibraryMenu_Theater_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.Check Read Demo Id List
	 */
	struct ULibraryMenu_Theater_C_CheckReadDemoIdList_Params
	{
	public:
		TArray<class FName>                                        In;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.InitExclamationIcon
	 */
	struct ULibraryMenu_Theater_C_InitExclamationIcon_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExtractCategory
	 */
	struct ULibraryMenu_Theater_C_ExtractCategory_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ret;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GW2I[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadAllCategory
	 */
	struct ULibraryMenu_Theater_C_IsReadAllCategory_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.IsReadCategory
	 */
	struct ULibraryMenu_Theater_C_IsReadCategory_Params
	{
	public:
		int32_t                                                    CategoryId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.AddDemoAllList
	 */
	struct ULibraryMenu_Theater_C_AddDemoAllList_Params
	{
	public:
		class FName                                                DemoName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckViewedDemoId
	 */
	struct ULibraryMenu_Theater_C_CheckViewedDemoId_Params
	{
	public:
		class FName                                                DemoId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOk;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.Load Lib Save Data
	 */
	struct ULibraryMenu_Theater_C_LoadLibSaveData_Params
	{
	public:
		class USBLibrarySaveManager*                               LibSaveData;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveLibSaveData
	 */
	struct ULibraryMenu_Theater_C_SaveLibSaveData_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreteGameContentId
	 */
	struct ULibraryMenu_Theater_C_CreteGameContentId_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                GameContentId;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemDetail
	 */
	struct ULibraryMenu_Theater_C_CreateItemDetail_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateItemList
	 */
	struct ULibraryMenu_Theater_C_CreateItemList_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.CheckLevelName
	 */
	struct ULibraryMenu_Theater_C_CheckLevelName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsScript;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDemo;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ARGT[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.GetDemoTypeName
	 */
	struct ULibraryMenu_Theater_C_GetDemoTypeName_Params
	{
	public:
		ESBDemoType                                                Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.CreateCategoryList
	 */
	struct ULibraryMenu_Theater_C_CreateCategoryList_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnLoaded_56ABDCA943F8CB39C0C21897E8372530
	 */
	struct ULibraryMenu_Theater_C_OnLoaded_56ABDCA943F8CB39C0C21897E8372530_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct ULibraryMenu_Theater_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.Construct
	 */
	struct ULibraryMenu_Theater_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 */
	struct ULibraryMenu_Theater_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnClickEvent
	 */
	struct ULibraryMenu_Theater_C_OnClickEvent_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSubMenuUpdate
	 */
	struct ULibraryMenu_Theater_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnSameMenuBookmarkAccessNew
	 */
	struct ULibraryMenu_Theater_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnRMShopClosed
	 */
	struct ULibraryMenu_Theater_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnParentTerm
	 */
	struct ULibraryMenu_Theater_C_OnParentTerm_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.Destruct
	 */
	struct ULibraryMenu_Theater_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.OnEndDialog
	 */
	struct ULibraryMenu_Theater_C_OnEndDialog_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.Initialize
	 */
	struct ULibraryMenu_Theater_C_Initialize_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.LoadThumbnail
	 */
	struct ULibraryMenu_Theater_C_LoadThumbnail_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.Request_SaveDemo
	 */
	struct ULibraryMenu_Theater_C_Request_SaveDemo_Params
	{
	public:
		class FName                                                DemoId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.SaveTheaterSelectedInfo
	 */
	struct ULibraryMenu_Theater_C_SaveTheaterSelectedInfo_Params
	{
	public:
		int32_t                                                    CategoryId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ListId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CategoryOffset;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ListOffset;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct ULibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_Theater_C_BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.ReleaseUIBlocker
	 */
	struct ULibraryMenu_Theater_C_ReleaseUIBlocker_Params
	{	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.ExecuteUbergraph_LibraryMenu_Theater
	 */
	struct ULibraryMenu_Theater_C_ExecuteUbergraph_LibraryMenu_Theater_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJJN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Theater.LibraryMenu_Theater_C.UpdateNewIcon__DelegateSignature
	 */
	struct ULibraryMenu_Theater_C_UpdateNewIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
