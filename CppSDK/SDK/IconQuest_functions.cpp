#pragma once

 

// Package: IconQuest

#include "Basic.hpp"

#include "IconQuest_classes.hpp"
#include "IconQuest_parameters.hpp"


namespace SDK
{

// Function IconQuest.IconQuest_C.ExecuteUbergraph_IconQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconQuest_C::ExecuteUbergraph_IconQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "ExecuteUbergraph_IconQuest");

	Params::IconQuest_C_ExecuteUbergraph_IconQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconQuest.IconQuest_C.Unbind
// (BlueprintCallable, BlueprintEvent)

void UIconQuest_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconQuest.IconQuest_C.Bind
// (BlueprintCallable, BlueprintEvent)

void UIconQuest_C::Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconQuest.IconQuest_C.OnAdventurerRankDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconQuest_C::OnAdventurerRankDelegate_Event_0(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "OnAdventurerRankDelegate_Event_0");

	Params::IconQuest_C_OnAdventurerRankDelegate_Event_0 Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconQuest.IconQuest_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconQuest_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconQuest.IconQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconQuest.IconQuest_C.UpdateStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconQuest_C::UpdateStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "UpdateStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconQuest.IconQuest_C.Setup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconQuest_C::Setup(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "Setup");

	Params::IconQuest_C_Setup Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconQuest.IconQuest_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconQuest_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconQuest_C", "OnSetInside");

	Params::IconQuest_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

