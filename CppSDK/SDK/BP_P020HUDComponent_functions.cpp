#pragma once

 

// Package: BP_P020HUDComponent

#include "Basic.hpp"

#include "BP_P020HUDComponent_classes.hpp"
#include "BP_P020HUDComponent_parameters.hpp"


namespace SDK
{

// Function BP_P020HUDComponent.BP_P020HUDComponent_C.ExecuteUbergraph_BP_P020HUDComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_P020HUDComponent_C::ExecuteUbergraph_BP_P020HUDComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "ExecuteUbergraph_BP_P020HUDComponent");

	Params::BP_P020HUDComponent_C_ExecuteUbergraph_BP_P020HUDComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_P020HUDComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "ReceiveTick");

	Params::BP_P020HUDComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.UnbindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::UnbindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "UnbindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.UnbindOnChangeShowAlwaysHUD
// (BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::UnbindOnChangeShowAlwaysHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "UnbindOnChangeShowAlwaysHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.BindOnChangeShowAlwaysHUD
// (BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::BindOnChangeShowAlwaysHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "BindOnChangeShowAlwaysHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.BindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::BindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "BindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.OnChangeShowAlwaysHUD_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_P020HUDComponent_C::OnChangeShowAlwaysHUD_event(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "OnChangeShowAlwaysHUD_event");

	Params::BP_P020HUDComponent_C_OnChangeShowAlwaysHUD_event Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_P020HUDComponent_C::CustomEvent(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "CustomEvent");

	Params::BP_P020HUDComponent_C_CustomEvent Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.OnCreateUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::OnCreateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "OnCreateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.OnRemoveUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::OnRemoveUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "OnRemoveUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.OnUpdateLayoutView
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P020HUDComponent_C::OnUpdateLayoutView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "OnUpdateLayoutView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P020HUDComponent.BP_P020HUDComponent_C.GetUIType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBUIType                               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESBUIType UBP_P020HUDComponent_C::GetUIType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P020HUDComponent_C", "GetUIType");

	Params::BP_P020HUDComponent_C_GetUIType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

