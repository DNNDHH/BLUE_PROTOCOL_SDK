#pragma once

 

// Package: OpenCommandMenu

#include "Basic.hpp"

#include "OpenCommandMenu_classes.hpp"
#include "OpenCommandMenu_parameters.hpp"


namespace SDK
{

// Function OpenCommandMenu.OpenCommandMenu_C.ExecuteUbergraph_OpenCommandMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpenCommandMenu_C::ExecuteUbergraph_OpenCommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "ExecuteUbergraph_OpenCommandMenu");

	Params::OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Leave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpenCommandMenu_C::OnPhotoMode_Leave(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "OnPhotoMode Leave");

	Params::OpenCommandMenu_C_OnPhotoMode_Leave Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Enter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpenCommandMenu_C::OnPhotoMode_Enter(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "OnPhotoMode Enter");

	Params::OpenCommandMenu_C_OnPhotoMode_Enter Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenCommandMenu.OpenCommandMenu_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOpenCommandMenu_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenCommandMenu.OpenCommandMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOpenCommandMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OpenCommandMenu.OpenCommandMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOpenCommandMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OpenCommandMenu.OpenCommandMenu_C.OnUpdateKeyEvent
// (BlueprintCallable, BlueprintEvent)

void UOpenCommandMenu_C::OnUpdateKeyEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "OnUpdateKeyEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OpenCommandMenu.OpenCommandMenu_C.OnChangeOpenCommandMenuFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOpenCommandMenu_C::OnChangeOpenCommandMenuFlag(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "OnChangeOpenCommandMenuFlag");

	Params::OpenCommandMenu_C_OnChangeOpenCommandMenuFlag Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenCommandMenu.OpenCommandMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpenCommandMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "OnAnimationFinished");

	Params::OpenCommandMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OpenCommandMenu.OpenCommandMenu_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UOpenCommandMenu_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OpenCommandMenu.OpenCommandMenu_C.UpdateKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOpenCommandMenu_C::UpdateKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OpenCommandMenu_C", "UpdateKeyText");

	UObject::ProcessEvent(Func, nullptr);
}

}

