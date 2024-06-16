#pragma once

 

// Package: LibraryMenu_ItemDetails

#include "Basic.hpp"

#include "LibraryMenu_ItemDetails_classes.hpp"
#include "LibraryMenu_ItemDetails_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnFilterSelectorBtn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::OnFilterSelectorBtn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "OnFilterSelectorBtn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnChangeFilter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPictureBookMakeListSortType            Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ItemDetails_C::OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "OnChangeFilter__DelegateSignature");

	Params::LibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnMakeListAllRead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::OnMakeListAllRead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "OnMakeListAllRead__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.ExecuteUbergraph_LibraryMenu_ItemDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ItemDetails_C::ExecuteUbergraph_LibraryMenu_ItemDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "ExecuteUbergraph_LibraryMenu_ItemDetails");

	Params::LibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.DelayUpdateMakeListNewIcon
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::DelayUpdateMakeListNewIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "DelayUpdateMakeListNewIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::LibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ItemDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "PreConstruct");

	Params::LibraryMenu_ItemDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_ItemDetails_C::BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ItemDetails_C::SetItemImage(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "SetItemImage");

	Params::LibraryMenu_ItemDetails_C_SetItemImage Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnLoaded_809AD089417D6D92E51C08859E31E5BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ItemDetails_C::OnLoaded_809AD089417D6D92E51C08859E31E5BD(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "OnLoaded_809AD089417D6D92E51C08859E31E5BD");

	Params::LibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetDetailsVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ItemDetails_C::SetDetailsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "SetDetailsVisibility");

	Params::LibraryMenu_ItemDetails_C_SetDetailsVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemMasterData                  InItemMasterData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_ItemDetails_C::SetItemData(const struct FItemMasterData& InItemMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "SetItemData");

	Params::LibraryMenu_ItemDetails_C_SetItemData Parms{};

	Parms.InItemMasterData = std::move(InItemMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetMakeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::SetMakeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "SetMakeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ItemDetails_C::SetActiveTab(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "SetActiveTab");

	Params::LibraryMenu_ItemDetails_C_SetActiveTab Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetSortFilter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_ItemDetails_C::SetSortFilter(TArray<struct FFilterGroup>& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "SetSortFilter");

	Params::LibraryMenu_ItemDetails_C_SetSortFilter Parms{};

	Parms.Filter = std::move(Filter);

	UObject::ProcessEvent(Func, &Parms);

	Filter = std::move(Parms.Filter);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckSortFilterType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPictureBookMakeListSortType            Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ItemDetails_C::CheckSortFilterType(EPictureBookMakeListSortType Param_SortType, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "CheckSortFilterType");

	Params::LibraryMenu_ItemDetails_C_CheckSortFilterType Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckWeaponFilter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBWeaponMasterData              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ItemDetails_C::CheckWeaponFilter(const struct FSBWeaponMasterData& Data, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "CheckWeaponFilter");

	Params::LibraryMenu_ItemDetails_C_CheckWeaponFilter Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckImagineFilter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMasterImagine                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ItemDetails_C::CheckImagineFilter(const struct FSBMasterImagine& Data, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "CheckImagineFilter");

	Params::LibraryMenu_ItemDetails_C_CheckImagineFilter Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateReadMakeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::UpdateReadMakeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "UpdateReadMakeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateMakeListNewIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::UpdateMakeListNewIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "UpdateMakeListNewIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Event_Wishlist
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_ItemDetails_C::Event_Wishlist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "Event_Wishlist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.On Sort Combo Box Generate Widget 0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* ULibraryMenu_ItemDetails_C::On_Sort_Combo_Box_Generate_Widget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "On Sort Combo Box Generate Widget 0");

	Params::LibraryMenu_ItemDetails_C_On_Sort_Combo_Box_Generate_Widget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckTerm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TermId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ItemDetails_C::CheckTerm(const class FString& TermId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ItemDetails_C", "CheckTerm");

	Params::LibraryMenu_ItemDetails_C_CheckTerm Parms{};

	Parms.TermId = std::move(TermId);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

