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
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckTerm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TermId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ItemDetails_C::CheckTerm(const class FString& TermId, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckTerm");
		
		ULibraryMenu_ItemDetails_C_CheckTerm_Params params {};
		params.TermId = TermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.On Sort Combo Box Generate Widget 0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* ULibraryMenu_ItemDetails_C::OnSortComboBoxGenerateWidget0(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.On Sort Combo Box Generate Widget 0");
		
		ULibraryMenu_ItemDetails_C_OnSortComboBoxGenerateWidget0_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Event_Wishlist
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::Event_Wishlist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Event_Wishlist");
		
		ULibraryMenu_ItemDetails_C_Event_Wishlist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateMakeListNewIcon
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::UpdateMakeListNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateMakeListNewIcon");
		
		ULibraryMenu_ItemDetails_C_UpdateMakeListNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateReadMakeList
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::UpdateReadMakeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateReadMakeList");
		
		ULibraryMenu_ItemDetails_C_UpdateReadMakeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckImagineFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ItemDetails_C::CheckImagineFilter(const struct FSBMasterImagine& Data, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckImagineFilter");
		
		ULibraryMenu_ItemDetails_C_CheckImagineFilter_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckWeaponFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ItemDetails_C::CheckWeaponFilter(const struct FSBWeaponMasterData& Data, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckWeaponFilter");
		
		ULibraryMenu_ItemDetails_C_CheckWeaponFilter_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckSortFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPictureBookMakeListSortType                       SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ItemDetails_C::CheckSortFilterType(EPictureBookMakeListSortType SortType, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckSortFilterType");
		
		ULibraryMenu_ItemDetails_C_CheckSortFilterType_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetSortFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_ItemDetails_C::SetSortFilter(TArray<struct FFilterGroup>* Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetSortFilter");
		
		ULibraryMenu_ItemDetails_C_SetSortFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetActiveTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ItemDetails_C::SetActiveTab(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetActiveTab");
		
		ULibraryMenu_ItemDetails_C_SetActiveTab_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetMakeData
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::SetMakeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetMakeData");
		
		ULibraryMenu_ItemDetails_C_SetMakeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             InItemMasterData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_ItemDetails_C::SetItemData(const struct FItemMasterData& InItemMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemData");
		
		ULibraryMenu_ItemDetails_C_SetItemData_Params params {};
		params.InItemMasterData = InItemMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetDetailsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ItemDetails_C::SetDetailsVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetDetailsVisibility");
		
		ULibraryMenu_ItemDetails_C_SetDetailsVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Initialize
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Initialize");
		
		ULibraryMenu_ItemDetails_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnLoaded_809AD089417D6D92E51C08859E31E5BD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ItemDetails_C::OnLoaded_809AD089417D6D92E51C08859E31E5BD(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnLoaded_809AD089417D6D92E51C08859E31E5BD");
		
		ULibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ItemDetails_C::SetItemImage(int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemImage");
		
		ULibraryMenu_ItemDetails_C_SetItemImage_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Construct");
		
		ULibraryMenu_ItemDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ItemDetails_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.PreConstruct");
		
		ULibraryMenu_ItemDetails_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.DelayUpdateMakeListNewIcon
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::DelayUpdateMakeListNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.DelayUpdateMakeListNewIcon");
		
		ULibraryMenu_ItemDetails_C_DelayUpdateMakeListNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.ExecuteUbergraph_LibraryMenu_ItemDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ItemDetails_C::ExecuteUbergraph_LibraryMenu_ItemDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.ExecuteUbergraph_LibraryMenu_ItemDetails");
		
		ULibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnMakeListAllRead__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::OnMakeListAllRead__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnMakeListAllRead__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_OnMakeListAllRead__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnChangeFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPictureBookMakeListSortType                       SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ItemDetails_C::OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnChangeFilter__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnFilterSelectorBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ItemDetails_C::OnFilterSelectorBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnFilterSelectorBtn__DelegateSignature");
		
		ULibraryMenu_ItemDetails_C_OnFilterSelectorBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_ItemDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_ItemDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C");
		return ptr;
	}

}


