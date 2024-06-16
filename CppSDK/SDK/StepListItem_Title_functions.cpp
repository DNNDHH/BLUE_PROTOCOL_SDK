#pragma once

 

// Package: StepListItem_Title

#include "Basic.hpp"

#include "StepListItem_Title_classes.hpp"
#include "StepListItem_Title_parameters.hpp"


namespace SDK
{

// Function StepListItem_Title.StepListItem_Title_C.SetTextDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UStepListItem_Title_C::SetTextDebug(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Title_C", "SetTextDebug");

	Params::StepListItem_Title_C_SetTextDebug Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Title.StepListItem_Title_C.SetTextDebugVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStepListItem_Title_C::SetTextDebugVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Title_C", "SetTextDebugVisible");

	Params::StepListItem_Title_C_SetTextDebugVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Title.StepListItem_Title_C.OnSetIconQuest
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Title_C::OnSetIconQuest(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Title_C", "OnSetIconQuest");

	Params::StepListItem_Title_C_OnSetIconQuest Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Title.StepListItem_Title_C.OnSetIconWishList
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestStatus                            InQuestStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Title_C::OnSetIconWishList(EQuestStatus InQuestStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Title_C", "OnSetIconWishList");

	Params::StepListItem_Title_C_OnSetIconWishList Parms{};

	Parms.InQuestStatus = InQuestStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}

