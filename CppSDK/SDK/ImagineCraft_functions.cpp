#pragma once

 

// Package: ImagineCraft

#include "Basic.hpp"

#include "ImagineCraft_classes.hpp"
#include "ImagineCraft_parameters.hpp"


namespace SDK
{

// Function ImagineCraft.ImagineCraft_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.ExecuteUbergraph_ImagineCraft
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::ExecuteUbergraph_ImagineCraft(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "ExecuteUbergraph_ImagineCraft");

	Params::ImagineCraft_C_ExecuteUbergraph_ImagineCraft Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ImagineCraft_C_BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UImagineCraft_C::BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.OnRequest_GetRewaedBoost_cmpl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::OnRequest_GetRewaedBoost_cmpl(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnRequest_GetRewaedBoost_cmpl");

	Params::ImagineCraft_C_OnRequest_GetRewaedBoost_cmpl Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.UpdateLiquidMemoryDisp
// (BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::UpdateLiquidMemoryDisp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "UpdateLiquidMemoryDisp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineCraft_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.CheckSelectRecepi
// (BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::CheckSelectRecepi()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "CheckSelectRecepi");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.ChgHelpMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLackAdvRank                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::ChgHelpMode(bool IsLackAdvRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "ChgHelpMode");

	Params::ImagineCraft_C_ChgHelpMode Parms{};

	Parms.IsLackAdvRank = IsLackAdvRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.ShowHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::ShowHelp(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "ShowHelp");

	Params::ImagineCraft_C_ShowHelp Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature
// (BlueprintEvent)

void UImagineCraft_C::BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsCloseAll                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature(bool IsCloseAll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature");

	Params::ImagineCraft_C_BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature Parms{};

	Parms.IsCloseAll = IsCloseAll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineCraft_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.RegenerateList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::RegenerateList(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "RegenerateList");

	Params::ImagineCraft_C_RegenerateList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           MakedUID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UImagineCraft_C::OnFinished(int32 RetCode, const class FString& MakedUID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnFinished");

	Params::ImagineCraft_C_OnFinished Parms{};

	Parms.RetCode = RetCode;
	Parms.MakedUID = std::move(MakedUID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.Terminate
// (BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.Close
// (BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.Open
// (BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.OnSelectRecepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             Recepi                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class URecepiListItemBtn_C*             SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::OnSelectRecepi(const struct FMasterImagineRecepi& Recepi, class URecepiListItemBtn_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnSelectRecepi");

	Params::ImagineCraft_C_OnSelectRecepi Parms{};

	Parms.Recepi = std::move(Recepi);
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineCraft_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.OnLimitSerlected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::OnLimitSerlected(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnLimitSerlected");

	Params::ImagineCraft_C_OnLimitSerlected Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UImagineCraft_C::BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.OnSelectDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::OnSelectDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnSelectDialog");

	Params::ImagineCraft_C_OnSelectDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UImagineCraft_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature
// (BlueprintEvent)

void UImagineCraft_C::BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::ImagineCraft_C_BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UImagineCraft_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");

	Params::ImagineCraft_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function ImagineCraft.ImagineCraft_C.Generate ListBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::Generate_ListBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Generate ListBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.CheckMaterialLock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLocked                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::CheckMaterialLock(bool* IsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "CheckMaterialLock");

	Params::ImagineCraft_C_CheckMaterialLock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocked != nullptr)
		*IsLocked = Parms.IsLocked;
}


// Function ImagineCraft.ImagineCraft_C.Filter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::Filter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "Filter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.GenerateSortBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::GenerateSortBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "GenerateSortBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.MasterContainsLists
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMasterImagine                 Master                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFilterGroup                     Group                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsContains                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::MasterContainsLists(const struct FSBMasterImagine& Master, const struct FFilterGroup& Group, bool* IsContains)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "MasterContainsLists");

	Params::ImagineCraft_C_MasterContainsLists Parms{};

	Parms.Master = std::move(Master);
	Parms.Group = std::move(Group);

	UObject::ProcessEvent(Func, &Parms);

	if (IsContains != nullptr)
		*IsContains = Parms.IsContains;
}


// Function ImagineCraft.ImagineCraft_C.CheckMaterialsAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Is_Lack                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::CheckMaterialsAmount(bool* Is_Lack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "CheckMaterialsAmount");

	Params::ImagineCraft_C_CheckMaterialsAmount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Lack != nullptr)
		*Is_Lack = Parms.Is_Lack;
}


// Function ImagineCraft.ImagineCraft_C.On_Cmb_Sort_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UImagineCraft_C::On_Cmb_Sort_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "On_Cmb_Sort_GenerateWidget_0");

	Params::ImagineCraft_C_On_Cmb_Sort_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ImagineCraft.ImagineCraft_C.ConvertSortType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECraftRecepiSortType                    CraftSort                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::ConvertSortType(ESBItemSortType Param_SortType, ECraftRecepiSortType* CraftSort)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "ConvertSortType");

	Params::ImagineCraft_C_ConvertSortType Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftSort != nullptr)
		*CraftSort = Parms.CraftSort;
}


// Function ImagineCraft.ImagineCraft_C.ConvertCraftSort
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECraftRecepiSortType                    CraftSortType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         Param_SortType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::ConvertCraftSort(ECraftRecepiSortType CraftSortType, ESBItemSortType* Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "ConvertCraftSort");

	Params::ImagineCraft_C_ConvertCraftSort Parms{};

	Parms.CraftSortType = CraftSortType;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SortType != nullptr)
		*Param_SortType = Parms.Param_SortType;
}


// Function ImagineCraft.ImagineCraft_C.IsAnyLiquidMemoryActive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraft_C::IsAnyLiquidMemoryActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "IsAnyLiquidMemoryActive");

	Params::ImagineCraft_C_IsAnyLiquidMemoryActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function ImagineCraft.ImagineCraft_C.UpdateSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URecepiListItemBtn_C*             SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraft_C::UpdateSelectedItem(class URecepiListItemBtn_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "UpdateSelectedItem");

	Params::ImagineCraft_C_UpdateSelectedItem Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraft.ImagineCraft_C.UpdateTimeLimited
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::UpdateTimeLimited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "UpdateTimeLimited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraft.ImagineCraft_C.InitializeFilter
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineCraft_C::InitializeFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraft_C", "InitializeFilter");

	UObject::ProcessEvent(Func, nullptr);
}

}

