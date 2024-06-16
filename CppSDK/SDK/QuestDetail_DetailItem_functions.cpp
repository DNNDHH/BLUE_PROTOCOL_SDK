#pragma once

 

// Package: QuestDetail_DetailItem

#include "Basic.hpp"

#include "QuestDetail_DetailItem_classes.hpp"
#include "QuestDetail_DetailItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.ExecuteUbergraph_QuestDetail_DetailItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_DetailItem_C::ExecuteUbergraph_QuestDetail_DetailItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetailItem_C", "ExecuteUbergraph_QuestDetail_DetailItem");

	Params::QuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_DetailItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetailItem_C", "PreConstruct");

	Params::QuestDetail_DetailItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTitleText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_DetailItem_C::SetTitle(int32 InTitleText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetailItem_C", "SetTitle");

	Params::QuestDetail_DetailItem_C_SetTitle Parms{};

	Parms.InTitleText = InTitleText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTextContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestDetail_DetailItem_C::SetTextContent(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_DetailItem_C", "SetTextContent");

	Params::QuestDetail_DetailItem_C_SetTextContent Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

