#pragma once

 

// Package: FilterSelector

#include "Basic.hpp"

#include "FilterSelector_classes.hpp"
#include "FilterSelector_parameters.hpp"


namespace SDK
{

// Function FilterSelector.FilterSelector_C.OnFilterApply__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFilterSelector_C::OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "OnFilterApply__DelegateSignature");

	Params::FilterSelector_C_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function FilterSelector.FilterSelector_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFilterSelector_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.ExecuteUbergraph_FilterSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterSelector_C::ExecuteUbergraph_FilterSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "ExecuteUbergraph_FilterSelector");

	Params::FilterSelector_C_ExecuteUbergraph_FilterSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterSelector.FilterSelector_C.BndEvt__FilterSelector_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UFilterSelector_C::BndEvt__FilterSelector_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "BndEvt__FilterSelector_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.ChangeFilterType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            FilterType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterSelector_C::ChangeFilterType(EFilter_Type FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "ChangeFilterType");

	Params::FilterSelector_C_ChangeFilterType Parms{};

	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterSelector.FilterSelector_C.ConstructFromExternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            Param_Filter_Type                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterSelector_C::ConstructFromExternal(EFilter_Type Param_Filter_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "ConstructFromExternal");

	Params::FilterSelector_C_ConstructFromExternal Parms{};

	Parms.Param_Filter_Type = Param_Filter_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterSelector.FilterSelector_C.Close
// (BlueprintCallable, BlueprintEvent)

void UFilterSelector_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.BndEvt__CmnBtn16_124_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFilterSelector_C::BndEvt__CmnBtn16_124_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "BndEvt__CmnBtn16_124_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFilterSelector_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilterSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "PreConstruct");

	Params::FilterSelector_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterSelector.FilterSelector_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UFilterSelector_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.PlayAnimOut
// (Public, BlueprintCallable, BlueprintEvent)

void UFilterSelector_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterSelector.FilterSelector_C.FindLatestFilterLayouts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFilter_Item                     FilterData1                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UFilterSelector_C::FindLatestFilterLayouts(struct FFilter_Item* FilterData1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "FindLatestFilterLayouts");

	Params::FilterSelector_C_FindLatestFilterLayouts Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilterData1 != nullptr)
		*FilterData1 = std::move(Parms.FilterData1);
}


// Function FilterSelector.FilterSelector_C.GetFilters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FFilterGroup>             Filter1                                                (Parm, OutParm)

void UFilterSelector_C::GetFilters(TArray<struct FFilterGroup>* Filter1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "GetFilters");

	Params::FilterSelector_C_GetFilters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Filter1 != nullptr)
		*Filter1 = std::move(Parms.Filter1);
}


// Function FilterSelector.FilterSelector_C.IsAnimInOutPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    OutIsPlaying                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterSelector_C::IsAnimInOutPlaying(bool* OutIsPlaying) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "IsAnimInOutPlaying");

	Params::FilterSelector_C_IsAnimInOutPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = Parms.OutIsPlaying;
}


// Function FilterSelector.FilterSelector_C.IsVisible?
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Visibility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterSelector_C::IsVisible_(class UUserWidget* Widget, bool* Param_Visibility) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterSelector_C", "IsVisible?");

	Params::FilterSelector_C_IsVisible_ Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Visibility != nullptr)
		*Param_Visibility = Parms.Param_Visibility;
}

}

