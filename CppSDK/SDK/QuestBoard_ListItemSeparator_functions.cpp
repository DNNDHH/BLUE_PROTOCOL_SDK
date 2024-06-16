#pragma once

 

// Package: QuestBoard_ListItemSeparator

#include "Basic.hpp"

#include "QuestBoard_ListItemSeparator_classes.hpp"
#include "QuestBoard_ListItemSeparator_parameters.hpp"


namespace SDK
{

// Function QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C.ExecuteUbergraph_QuestBoard_ListItemSeparator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestBoard_ListItemSeparator_C::ExecuteUbergraph_QuestBoard_ListItemSeparator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItemSeparator_C", "ExecuteUbergraph_QuestBoard_ListItemSeparator");

	Params::QuestBoard_ListItemSeparator_C_ExecuteUbergraph_QuestBoard_ListItemSeparator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestBoard_ListItemSeparator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestBoard_ListItemSeparator_C", "PreConstruct");

	Params::QuestBoard_ListItemSeparator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

