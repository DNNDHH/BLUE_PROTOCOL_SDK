#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNotificationMenu

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskNotificationMenu_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskNotificationMenu_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotificationMenu_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu");

	Params::BP_PlayerLevelStartSequenceTaskNotificationMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.NotificationLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::NotificationLoaded(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotificationMenu_C", "NotificationLoaded");

	Params::BP_PlayerLevelStartSequenceTaskNotificationMenu_C_NotificationLoaded Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.OnFinishEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::OnFinishEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotificationMenu_C", "OnFinishEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.FinishTaskEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::FinishTaskEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotificationMenu_C", "FinishTaskEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotificationMenu_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C.OnLoaded_955FE1A0452B9F2013DC63A7677EFD85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskNotificationMenu_C::OnLoaded_955FE1A0452B9F2013DC63A7677EFD85(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotificationMenu_C", "OnLoaded_955FE1A0452B9F2013DC63A7677EFD85");

	Params::BP_PlayerLevelStartSequenceTaskNotificationMenu_C_OnLoaded_955FE1A0452B9F2013DC63A7677EFD85 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

