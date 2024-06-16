#pragma once

 

// Package: BP_P011HUDComponent

#include "Basic.hpp"

#include "BP_P011HUDComponent_classes.hpp"
#include "BP_P011HUDComponent_parameters.hpp"


namespace SDK
{

// Function BP_P011HUDComponent.BP_P011HUDComponent_C.ExecuteUbergraph_BP_P011HUDComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_P011HUDComponent_C::ExecuteUbergraph_BP_P011HUDComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "ExecuteUbergraph_BP_P011HUDComponent");

	Params::BP_P011HUDComponent_C_ExecuteUbergraph_BP_P011HUDComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_P011HUDComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "ReceiveTick");

	Params::BP_P011HUDComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::UnbindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "UnbindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::BindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "BindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_P011HUDComponent_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::BP_P011HUDComponent_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnChangeShowAlwaysHUD_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_P011HUDComponent_C::OnChangeShowAlwaysHUD_event(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnChangeShowAlwaysHUD_event");

	Params::BP_P011HUDComponent_C_OnChangeShowAlwaysHUD_event Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnChangeShowAlwaysHUD
// (BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::UnbindOnChangeShowAlwaysHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "UnbindOnChangeShowAlwaysHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnChangeShowAlwaysHUD
// (BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::BindOnChangeShowAlwaysHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "BindOnChangeShowAlwaysHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnCreateUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnCreateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnCreateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnRemoveUI
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnRemoveUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnRemoveUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateMpGaugeUI
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnUpdateMpGaugeUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnUpdateMpGaugeUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateLayoutView
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_P011HUDComponent_C::OnUpdateLayoutView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "OnUpdateLayoutView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_P011HUDComponent.BP_P011HUDComponent_C.GetUIType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBUIType                               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESBUIType UBP_P011HUDComponent_C::GetUIType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_P011HUDComponent_C", "GetUIType");

	Params::BP_P011HUDComponent_C_GetUIType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

