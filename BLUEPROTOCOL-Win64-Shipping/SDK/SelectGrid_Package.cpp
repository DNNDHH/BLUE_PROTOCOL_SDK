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
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetBaseSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSortFilterSaveType                              SaveType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESortTypeCategory                                  SortTypeCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectGrid_C::SetBaseSortType(ESBSortFilterSaveType SaveType, ESortTypeCategory SortTypeCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetBaseSortType");
		
		USelectGrid_C_SetBaseSortType_Params params {};
		params.SaveType = SaveType;
		params.SortTypeCategory = SortTypeCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFilter_Type                                       FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectGrid_C::SetFilterType(EFilter_Type FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetFilterType");
		
		USelectGrid_C_SetFilterType_Params params {};
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetHoverdBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectGrid_C::SetHoverdBag(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetHoverdBag");
		
		USelectGrid_C_SetHoverdBag_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetHoverdStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectGrid_C::SetHoverdStorage(bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetHoverdStorage");
		
		USelectGrid_C_SetHoverdStorage_Params params {};
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetBaseFilteVerbose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        BaseFilter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelectGrid_C::SetBaseFilteVerbose(TArray<struct FFilterGroup>* BaseFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetBaseFilteVerbose");
		
		USelectGrid_C_SetBaseFilteVerbose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseFilter != nullptr)
			*BaseFilter = params.BaseFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetBaseFilterCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFilterGroup                                Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectGrid_C::SetBaseFilterCustom(const struct FFilterGroup& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetBaseFilterCustom");
		
		USelectGrid_C_SetBaseFilterCustom_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetBaseFilterSimple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectGrid_C::SetBaseFilterSimple(EItemFilterType Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetBaseFilterSimple");
		
		USelectGrid_C_SetBaseFilterSimple_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.IsSelectBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBag                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectGrid_C::IsSelectBag(bool* IsBag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.IsSelectBag");
		
		USelectGrid_C_IsSelectBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBag != nullptr)
			*IsBag = params.IsBag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetBag
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::SetBag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetBag");
		
		USelectGrid_C_SetBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SetStorage
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::SetStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SetStorage");
		
		USelectGrid_C_SetStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelectGrid_C::BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectGrid_C::BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectGrid_C::BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectGrid_C::BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectGrid_C::BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature(int32_t PageCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature");
		
		USelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature_Params params {};
		params.PageCurrent = PageCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.ExecuteUbergraph_SelectGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectGrid_C::ExecuteUbergraph_SelectGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.ExecuteUbergraph_SelectGrid");
		
		USelectGrid_C_ExecuteUbergraph_SelectGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectGrid.SelectGrid_C.SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectGrid_C::SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectGrid.SelectGrid_C.SelectedItem__DelegateSignature");
		
		USelectGrid_C_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelectGrid.SelectGrid_C");
		return ptr;
	}

}


