#pragma once

 

// Package: DebugList

#include "Basic.hpp"

#include "DebugList_classes.hpp"
#include "DebugList_parameters.hpp"


namespace SDK
{

// Function DebugList.DebugList_C.ExecuteUbergraph_DebugList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugList_C::ExecuteUbergraph_DebugList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "ExecuteUbergraph_DebugList");

	Params::DebugList_C_ExecuteUbergraph_DebugList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugList.DebugList_C.OnClicked_����_0
// (BlueprintCallable, BlueprintEvent)

void UDebugList_C::OnClicked______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "OnClicked_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugList.DebugList_C.EventDispatcher_OnClicked_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugList_C::EventDispatcher_OnClicked______0(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "EventDispatcher_OnClicked_����_0");

	Params::DebugList_C_EventDispatcher_OnClicked______0 Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugList.DebugList_C.BindDebugButtonOnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugList_C::BindDebugButtonOnClicked(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "BindDebugButtonOnClicked");

	Params::DebugList_C_BindDebugButtonOnClicked Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugList.DebugList_C.HandleOnExecutedConsoleCommand
// (BlueprintCallable, BlueprintEvent)

void UDebugList_C::HandleOnExecutedConsoleCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "HandleOnExecutedConsoleCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugList.DebugList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "Tick");

	Params::DebugList_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugList.DebugList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugList.DebugList_C.SetInitialValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Param_InitialValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDebugList_C::SetInitialValue(TArray<class FString>& Param_InitialValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "SetInitialValue");

	Params::DebugList_C_SetInitialValue Parms{};

	Parms.Param_InitialValue = std::move(Param_InitialValue);

	UObject::ProcessEvent(Func, &Parms);

	Param_InitialValue = std::move(Parms.Param_InitialValue);
}


// Function DebugList.DebugList_C.MakeAcceptedQuestList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugList_C::MakeAcceptedQuestList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "MakeAcceptedQuestList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugList.DebugList_C.MakePlayerLocationtList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDebugList_C::MakePlayerLocationtList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "MakePlayerLocationtList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugList.DebugList_C.GetQuestStatusString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EQuestStatus                            InStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Output                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UDebugList_C::GetQuestStatusString(EQuestStatus InStatus, class FString* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugList_C", "GetQuestStatusString");

	Params::DebugList_C_GetQuestStatusString Parms{};

	Parms.InStatus = InStatus;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}

}

