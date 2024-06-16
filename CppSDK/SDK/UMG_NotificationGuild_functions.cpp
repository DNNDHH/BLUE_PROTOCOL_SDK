#pragma once

 

// Package: UMG_NotificationGuild

#include "Basic.hpp"

#include "UMG_NotificationGuild_classes.hpp"
#include "UMG_NotificationGuild_parameters.hpp"


namespace SDK
{

// Function UMG_NotificationGuild.UMG_NotificationGuild_C.ExecuteUbergraph_UMG_NotificationGuild
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationGuild_C::ExecuteUbergraph_UMG_NotificationGuild(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "ExecuteUbergraph_UMG_NotificationGuild");

	Params::UMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnGuildInviteResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_NotificationGuild_C::OnGuildInviteResponse(bool IsAccept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnGuildInviteResponse");

	Params::UMG_NotificationGuild_C_OnGuildInviteResponse Parms{};

	Parms.IsAccept = IsAccept;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENotificationDialogStatus               DialogStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationGuild_C::CloseDialog(ENotificationDialogStatus DialogStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "CloseDialog");

	Params::UMG_NotificationGuild_C_CloseDialog Parms{};

	Parms.DialogStatus = DialogStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnBtnCancel
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::OnBtnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnBtnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnBtnReserve
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::OnBtnReserve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnBtnReserve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnBtnAccept
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::OnBtnAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnBtnAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.GetResultMultipleDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationGuild_C::GetResultMultipleDialog(int32 Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "GetResultMultipleDialog");

	Params::UMG_NotificationGuild_C_GetResultMultipleDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OpenNotificationDialog
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::OpenNotificationDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OpenNotificationDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnTimer
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::OnTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationGuild_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnAnimationFinished");

	Params::UMG_NotificationGuild_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.AppearIn
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::AppearIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "AppearIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnInviteArrived_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::OnInviteArrived_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "OnInviteArrived_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_NotificationGuild_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_NotificationGuild.UMG_NotificationGuild_C.GetInviteGuildName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_NotificationGuild_C::GetInviteGuildName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NotificationGuild_C", "GetInviteGuildName");

	UObject::ProcessEvent(Func, nullptr);
}

}

