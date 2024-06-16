#pragma once

 

// Package: QuestDetail_DetaiDescriptionlItem

#include "Basic.hpp"

#include "QuestDetail_DetaiDescriptionlItem_classes.hpp"
#include "QuestDetail_DetaiDescriptionlItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_DetaiDescriptionlItem_C::ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetaiDescriptionlItem_C", "ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem");

	Params::QuestDetail_DetaiDescriptionlItem_C_ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_DetaiDescriptionlItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetaiDescriptionlItem_C", "PreConstruct");

	Params::QuestDetail_DetaiDescriptionlItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTitleText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_DetaiDescriptionlItem_C::SetTitle(int32 InTitleText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetaiDescriptionlItem_C", "SetTitle");

	Params::QuestDetail_DetaiDescriptionlItem_C_SetTitle Parms{};

	Parms.InTitleText = InTitleText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTextContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestDetail_DetaiDescriptionlItem_C::SetTextContent(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetaiDescriptionlItem_C", "SetTextContent");

	Params::QuestDetail_DetaiDescriptionlItem_C_SetTextContent Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

