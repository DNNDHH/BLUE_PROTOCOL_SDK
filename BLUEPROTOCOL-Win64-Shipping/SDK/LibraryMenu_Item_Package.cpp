/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply ULibraryMenu_Item_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.TermRequest");
		
		ULibraryMenu_Item_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.IsSecretItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Item_C::IsSecretItem(int32_t ItemId, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.IsSecretItem");
		
		ULibraryMenu_Item_C_IsSecretItem_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateCategoryNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCategoryId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InListIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCheckAllRead                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Item_C::UpdateCategoryNewIcon(int32_t InCategoryId, int32_t InListIndex, bool IsCheckAllRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateCategoryNewIcon");
		
		ULibraryMenu_Item_C_UpdateCategoryNewIcon_Params params {};
		params.InCategoryId = InCategoryId;
		params.InListIndex = InListIndex;
		params.IsCheckAllRead = IsCheckAllRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateListItemNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::UpdateListItemNewIcon(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.UpdateListItemNewIcon");
		
		ULibraryMenu_Item_C_UpdateListItemNewIcon_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.CreateItemList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::CreateItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.CreateItemList");
		
		ULibraryMenu_Item_C_CreateItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.CreateCategoryList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::CreateCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.CreateCategoryList");
		
		ULibraryMenu_Item_C_CreateCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.ResetMouseCursorTypeToDefaultRequest");
		
		ULibraryMenu_Item_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.Construct");
		
		ULibraryMenu_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.OnClickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::OnClickEvent(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.OnClickEvent");
		
		ULibraryMenu_Item_C_OnClickEvent_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.OnSubMenuUpdate");
		
		ULibraryMenu_Item_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.OnSameMenuBookmarkAccessNew");
		
		ULibraryMenu_Item_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.OnRMShopClosed");
		
		ULibraryMenu_Item_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.OnParentTerm");
		
		ULibraryMenu_Item_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.CloseFilter
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::CloseFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.CloseFilter");
		
		ULibraryMenu_Item_C_CloseFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPictureBookMakeListSortType                       SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Item_C::BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Item_C_BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.GetIdListCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryPictureBookType                          Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.GetIdListCallback");
		
		ULibraryMenu_Item_C_GetIdListCallback_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.RetCode = RetCode;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.ExecuteUbergraph_LibraryMenu_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::ExecuteUbergraph_LibraryMenu_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.ExecuteUbergraph_LibraryMenu_Item");
		
		ULibraryMenu_Item_C_ExecuteUbergraph_LibraryMenu_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Item.LibraryMenu_Item_C.AllReadItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Item_C::AllReadItem__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Item.LibraryMenu_Item_C.AllReadItem__DelegateSignature");
		
		ULibraryMenu_Item_C_AllReadItem__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Item.LibraryMenu_Item_C");
		return ptr;
	}

}


