#pragma once

 

// Package: FilterButton

#include "Basic.hpp"

#include "FilterButton_classes.hpp"
#include "FilterButton_parameters.hpp"


namespace SDK
{

// Function FilterButton.FilterButton_C.OnApplyFilter__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFilterButton_C::OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "OnApplyFilter__DelegateSignature");

	Params::FilterButton_C_OnApplyFilter__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function FilterButton.FilterButton_C.ExecuteUbergraph_FilterButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterButton_C::ExecuteUbergraph_FilterButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "ExecuteUbergraph_FilterButton");

	Params::FilterButton_C_ExecuteUbergraph_FilterButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterButton.FilterButton_C.UnbindWindow
// (BlueprintCallable, BlueprintEvent)

void UFilterButton_C::UnbindWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "UnbindWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.BindWindow
// (BlueprintCallable, BlueprintEvent)

void UFilterButton_C::BindWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "BindWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.OpenWindow
// (BlueprintCallable, BlueprintEvent)

void UFilterButton_C::OpenWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "OpenWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.Release
// (BlueprintCallable, BlueprintEvent)

void UFilterButton_C::Release()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "Release");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilterButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.CloseWindow
// (BlueprintCallable, BlueprintEvent)

void UFilterButton_C::CloseWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "CloseWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.ApplyFilters
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFilterButton_C::ApplyFilters(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "ApplyFilters");

	Params::FilterButton_C_ApplyFilters Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function FilterButton.FilterButton_C.BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFilterButton_C::BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.SetAttachTargetCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     Param_AttachTargetCanvas                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterButton_C::SetAttachTargetCanvas(class UCanvasPanel* Param_AttachTargetCanvas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "SetAttachTargetCanvas");

	Params::FilterButton_C_SetAttachTargetCanvas Parms{};

	Parms.Param_AttachTargetCanvas = Param_AttachTargetCanvas;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterButton.FilterButton_C.ChangeFilterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            Param_FilterType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterButton_C::ChangeFilterType(EFilter_Type Param_FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "ChangeFilterType");

	Params::FilterButton_C_ChangeFilterType Parms{};

	Parms.Param_FilterType = Param_FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterButton.FilterButton_C.CreateWindow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilterButton_C::CreateWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "CreateWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterButton.FilterButton_C.DeleteWindow
// (Private, BlueprintCallable, BlueprintEvent)

void UFilterButton_C::DeleteWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterButton_C", "DeleteWindow");

	UObject::ProcessEvent(Func, nullptr);
}

}

