#pragma once

 

// Package: MiniMapWidget

#include "Basic.hpp"

#include "MiniMapWidget_classes.hpp"
#include "MiniMapWidget_parameters.hpp"


namespace SDK
{

// Function MiniMapWidget.MiniMapWidget_C.ExecuteUbergraph_MiniMapWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapWidget_C::ExecuteUbergraph_MiniMapWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "ExecuteUbergraph_MiniMapWidget");

	Params::MiniMapWidget_C_ExecuteUbergraph_MiniMapWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapWidget.MiniMapWidget_C.LoadBG
// (Event, Protected, BlueprintEvent)

void UMiniMapWidget_C::LoadBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "LoadBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapWidget.MiniMapWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "PreConstruct");

	Params::MiniMapWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapWidget.MiniMapWidget_C.BindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UMiniMapWidget_C::BindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "BindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapWidget.MiniMapWidget_C.UnbindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UMiniMapWidget_C::UnbindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "UnbindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapWidget.MiniMapWidget_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapWidget_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::MiniMapWidget_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapWidget.MiniMapWidget_C.OnLoaded_DA7A4A034051FF2A21620C9351A36972
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapWidget_C::OnLoaded_DA7A4A034051FF2A21620C9351A36972(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "OnLoaded_DA7A4A034051FF2A21620C9351A36972");

	Params::MiniMapWidget_C_OnLoaded_DA7A4A034051FF2A21620C9351A36972 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapWidget.MiniMapWidget_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMiniMapWidget_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapWidget.MiniMapWidget_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMiniMapWidget_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapWidget_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}

}

