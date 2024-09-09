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
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.TermRequest
	 */
	struct ULibraryMenu_Imagine_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateFilter
	 */
	struct ULibraryMenu_Imagine_C_UpdateFilter_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateCategoryNewIcon
	 */
	struct ULibraryMenu_Imagine_C_UpdateCategoryNewIcon_Params
	{
	public:
		int32_t                                                    InListIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCheckAllRead;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.IsSecretItem
	 */
	struct ULibraryMenu_Imagine_C_IsSecretItem_Params
	{
	public:
		int32_t                                                    ImagineId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JKYD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateImagineList
	 */
	struct ULibraryMenu_Imagine_C_CreateImagineList_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateCategoryList
	 */
	struct ULibraryMenu_Imagine_C_CreateCategoryList_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnClickImagineEvent
	 */
	struct ULibraryMenu_Imagine_C_OnClickImagineEvent_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.Construct
	 */
	struct ULibraryMenu_Imagine_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct ULibraryMenu_Imagine_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSubMenuUpdate
	 */
	struct ULibraryMenu_Imagine_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSameMenuBookmarkAccessNew
	 */
	struct ULibraryMenu_Imagine_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnRMShopClosed
	 */
	struct ULibraryMenu_Imagine_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnParentTerm
	 */
	struct ULibraryMenu_Imagine_C_OnParentTerm_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CloseFilter
	 */
	struct ULibraryMenu_Imagine_C_CloseFilter_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.GetIdListCallback
	 */
	struct ULibraryMenu_Imagine_C_GetIdListCallback_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E665[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryPictureBookType                                  Type;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ExecuteUbergraph_LibraryMenu_Imagine
	 */
	struct ULibraryMenu_Imagine_C_ExecuteUbergraph_LibraryMenu_Imagine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.AllReadImagine__DelegateSignature
	 */
	struct ULibraryMenu_Imagine_C_AllReadImagine__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
