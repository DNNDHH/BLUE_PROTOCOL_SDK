﻿/**
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
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply ULibraryMenu_Imagine_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.TermRequest");
		
		ULibraryMenu_Imagine_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_Imagine_C::UpdateFilter(TArray<struct FFilterGroup>* Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateFilter");
		
		ULibraryMenu_Imagine_C_UpdateFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateCategoryNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InListIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCheckAllRead                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Imagine_C::UpdateCategoryNewIcon(int32_t InListIndex, bool IsCheckAllRead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.UpdateCategoryNewIcon");
		
		ULibraryMenu_Imagine_C_UpdateCategoryNewIcon_Params params {};
		params.InListIndex = InListIndex;
		params.IsCheckAllRead = IsCheckAllRead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.IsSecretItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImagineId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_Imagine_C::IsSecretItem(int32_t ImagineId, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.IsSecretItem");
		
		ULibraryMenu_Imagine_C_IsSecretItem_Params params {};
		params.ImagineId = ImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateImagineList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::CreateImagineList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateImagineList");
		
		ULibraryMenu_Imagine_C_CreateImagineList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateCategoryList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::CreateCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CreateCategoryList");
		
		ULibraryMenu_Imagine_C_CreateCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnClickImagineEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::OnClickImagineEvent(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnClickImagineEvent");
		
		ULibraryMenu_Imagine_C_OnClickImagineEvent_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.Construct");
		
		ULibraryMenu_Imagine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ResetMouseCursorTypeToDefaultRequest");
		
		ULibraryMenu_Imagine_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSubMenuUpdate");
		
		ULibraryMenu_Imagine_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnSameMenuBookmarkAccessNew");
		
		ULibraryMenu_Imagine_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnRMShopClosed");
		
		ULibraryMenu_Imagine_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.OnParentTerm");
		
		ULibraryMenu_Imagine_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CloseFilter
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::CloseFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.CloseFilter");
		
		ULibraryMenu_Imagine_C_CloseFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Imagine_C::BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_Imagine_C_BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.GetIdListCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryPictureBookType                          Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.GetIdListCallback");
		
		ULibraryMenu_Imagine_C_GetIdListCallback_Params params {};
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
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ExecuteUbergraph_LibraryMenu_Imagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::ExecuteUbergraph_LibraryMenu_Imagine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.ExecuteUbergraph_LibraryMenu_Imagine");
		
		ULibraryMenu_Imagine_C_ExecuteUbergraph_LibraryMenu_Imagine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.AllReadImagine__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Imagine_C::AllReadImagine__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Imagine.LibraryMenu_Imagine_C.AllReadImagine__DelegateSignature");
		
		ULibraryMenu_Imagine_C_AllReadImagine__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Imagine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Imagine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Imagine.LibraryMenu_Imagine_C");
		return ptr;
	}

}

