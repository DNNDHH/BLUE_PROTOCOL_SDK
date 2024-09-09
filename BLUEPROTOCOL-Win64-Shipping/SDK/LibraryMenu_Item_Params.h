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
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.TermRequest
	 */
	struct ULibraryMenu_Item_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.IsSecretItem
	 */
	struct ULibraryMenu_Item_C_IsSecretItem_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFD7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateCategoryNewIcon
	 */
	struct ULibraryMenu_Item_C_UpdateCategoryNewIcon_Params
	{
	public:
		int32_t                                                    InCategoryId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InListIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCheckAllRead;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateListItemNewIcon
	 */
	struct ULibraryMenu_Item_C_UpdateListItemNewIcon_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I71I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.CreateItemList
	 */
	struct ULibraryMenu_Item_C_CreateItemList_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.CreateCategoryList
	 */
	struct ULibraryMenu_Item_C_CreateCategoryList_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct ULibraryMenu_Item_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.Construct
	 */
	struct ULibraryMenu_Item_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.OnClickEvent
	 */
	struct ULibraryMenu_Item_C_OnClickEvent_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.OnSubMenuUpdate
	 */
	struct ULibraryMenu_Item_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.OnSameMenuBookmarkAccessNew
	 */
	struct ULibraryMenu_Item_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.OnRMShopClosed
	 */
	struct ULibraryMenu_Item_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.OnParentTerm
	 */
	struct ULibraryMenu_Item_C_OnParentTerm_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.CloseFilter
	 */
	struct ULibraryMenu_Item_C_CloseFilter_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature_Params
	{
	public:
		EPictureBookMakeListSortType                               SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.GetIdListCallback
	 */
	struct ULibraryMenu_Item_C_GetIdListCallback_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7XD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryPictureBookType                                  Type;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.ExecuteUbergraph_LibraryMenu_Item
	 */
	struct ULibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Item.LibraryMenu_Item_C.AllReadItem__DelegateSignature
	 */
	struct ULibraryMenu_Item_C_AllReadItem__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
