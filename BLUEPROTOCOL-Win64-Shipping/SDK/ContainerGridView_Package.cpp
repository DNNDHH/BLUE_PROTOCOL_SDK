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
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.GetPageMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxPage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::GetPageMax(int32_t* MaxPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.GetPageMax");
		
		UContainerGridView_C_GetPageMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxPage != nullptr)
			*MaxPage = params.MaxPage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetPage(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetPage");
		
		UContainerGridView_C_SetPage_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.GetUsedGridNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UsedGridNum                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::GetUsedGridNum(int32_t* UsedGridNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.GetUsedGridNum");
		
		UContainerGridView_C_GetUsedGridNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsedGridNum != nullptr)
			*UsedGridNum = params.UsedGridNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetSelectedUIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              SelectedUIDs                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UContainerGridView_C::SetSelectedUIDs(TArray<class FString>* SelectedUIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetSelectedUIDs");
		
		UContainerGridView_C_SetSelectedUIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedUIDs != nullptr)
			*SelectedUIDs = params.SelectedUIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetDropUID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SkipUniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetDropUID(const class FString& SkipUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetDropUID");
		
		UContainerGridView_C_SetDropUID_Params params {};
		params.SkipUniqueId = SkipUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.Set FilterID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FilterID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetFilterID(int32_t FilterID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.Set FilterID");
		
		UContainerGridView_C_SetFilterID_Params params {};
		params.FilterID = FilterID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.AddTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AddNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::AddTicket(int32_t TokenID, int32_t AddNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.AddTicket");
		
		UContainerGridView_C_AddTicket_Params params {};
		params.TokenID = TokenID;
		params.AddNum = AddNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetMultiSelectable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsMultiSelectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContainerGridView_C::SetMultiSelectable(bool bIsMultiSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetMultiSelectable");
		
		UContainerGridView_C_SetMultiSelectable_Params params {};
		params.bIsMultiSelectable = bIsMultiSelectable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.MultiSelectOverViewUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UContainerGridView_C*                        GridView                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMaterialFull                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContainerGridView_C::MultiSelectOverViewUpdate(class UContainerGridView_C* GridView, bool bIsMaterialFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.MultiSelectOverViewUpdate");
		
		UContainerGridView_C_MultiSelectOverViewUpdate_Params params {};
		params.GridView = GridView;
		params.bIsMaterialFull = bIsMaterialFull;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetNeedCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NeedCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetNeedCount(int32_t NeedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetNeedCount");
		
		UContainerGridView_C_SetNeedCount_Params params {};
		params.NeedCount = NeedCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetSortType(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetSortType");
		
		UContainerGridView_C_SetSortType_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetBaseFilteVerbose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        BaseFilter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UContainerGridView_C::SetBaseFilteVerbose(TArray<struct FFilterGroup>* BaseFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetBaseFilteVerbose");
		
		UContainerGridView_C_SetBaseFilteVerbose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseFilter != nullptr)
			*BaseFilter = params.BaseFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetBaseFilterCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFilterGroup                                Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UContainerGridView_C::SetBaseFilterCustom(const struct FFilterGroup& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetBaseFilterCustom");
		
		UContainerGridView_C_SetBaseFilterCustom_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetBaseFilterSimple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemFilterType                                    Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetBaseFilterSimple(EItemFilterType Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetBaseFilterSimple");
		
		UContainerGridView_C_SetBaseFilterSimple_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetSelectedAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContainerGridView_C::SetSelectedAll(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetSelectedAll");
		
		UContainerGridView_C_SetSelectedAll_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.Find IconBtn To OwnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              FindIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOwnItemInfo                                FindedItem                                                 (Parm, OutParm)
	 */
	void UContainerGridView_C::FindIconBtnToOwnItem(class UItemIconBtn_C* FindIcon, struct FOwnItemInfo* FindedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.Find IconBtn To OwnItem");
		
		UContainerGridView_C_FindIconBtnToOwnItem_Params params {};
		params.FindIcon = FindIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FindedItem != nullptr)
			*FindedItem = params.FindedItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.ApplySortFilters
	 * 		Flags  -> ()
	 */
	void UContainerGridView_C::ApplySortFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.ApplySortFilters");
		
		UContainerGridView_C_ApplySortFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.GenerateIcons
	 * 		Flags  -> ()
	 */
	void UContainerGridView_C::GenerateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.GenerateIcons");
		
		UContainerGridView_C_GenerateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.Set Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTemporallyStorage*                        TargetContainer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::SetTarget(class USBTemporallyStorage* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.Set Target");
		
		UContainerGridView_C_SetTarget_Params params {};
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.OnSelectedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              OnSelectedBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::OnSelectedIcon(class UItemIconBtn_C* OnSelectedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.OnSelectedIcon");
		
		UContainerGridView_C_OnSelectedIcon_Params params {};
		params.OnSelectedBtn = OnSelectedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SetFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UContainerGridView_C::SetFilter(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SetFilter");
		
		UContainerGridView_C_SetFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.ExecuteUbergraph_ContainerGridView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContainerGridView_C::ExecuteUbergraph_ContainerGridView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.ExecuteUbergraph_ContainerGridView");
		
		UContainerGridView_C_ExecuteUbergraph_ContainerGridView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContainerGridView.ContainerGridView_C.SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UContainerGridView_C::SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerGridView.ContainerGridView_C.SelectedItem__DelegateSignature");
		
		UContainerGridView_C_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContainerGridView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContainerGridView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContainerGridView.ContainerGridView_C");
		return ptr;
	}

}


