#pragma once

 

// Package: WBP_FilterSelecterWindow

#include "Basic.hpp"

#include "WBP_FilterSelecterWindow_classes.hpp"
#include "WBP_FilterSelecterWindow_parameters.hpp"


namespace SDK
{

// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_FilterSelecterWindow_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnFilterApply__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FilterSelecterWindow_C::OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "OnFilterApply__DelegateSignature");

	Params::WBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ExecuteUbergraph_WBP_FilterSelecterWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FilterSelecterWindow_C::ExecuteUbergraph_WBP_FilterSelecterWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "ExecuteUbergraph_WBP_FilterSelecterWindow");

	Params::WBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UWBP_FilterSelecterWindow_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FilterSelecterWindow_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
// (BlueprintEvent)

void UWBP_FilterSelecterWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FilterSelecterWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature");

	Params::WBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_FilterSelecterWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FilterSelecterWindow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "PreConstruct");

	Params::WBP_FilterSelecterWindow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ChangeFilterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            Param_FilterType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FilterSelecterWindow_C::ChangeFilterType(EFilter_Type Param_FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "ChangeFilterType");

	Params::WBP_FilterSelecterWindow_C_ChangeFilterType Parms{};

	Parms.Param_FilterType = Param_FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.SetWindowPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FilterSelecterWindow_C::SetWindowPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "SetWindowPosition");

	Params::WBP_FilterSelecterWindow_C_SetWindowPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FilterSelecterWindow_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimOut
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_FilterSelecterWindow_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FilterSelecterWindow_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

