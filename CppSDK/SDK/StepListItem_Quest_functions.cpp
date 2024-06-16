#pragma once

 

// Package: StepListItem_Quest

#include "Basic.hpp"

#include "StepListItem_Quest_classes.hpp"
#include "StepListItem_Quest_parameters.hpp"


namespace SDK
{

// Function StepListItem_Quest.StepListItem_Quest_C.OnSetQuestTitle
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestMasterData                 QuestMasterData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStepListItem_Quest_C::OnSetQuestTitle(const struct FQuestMasterData& QuestMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Quest_C", "OnSetQuestTitle");

	Params::StepListItem_Quest_C_OnSetQuestTitle Parms{};

	Parms.QuestMasterData = std::move(QuestMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Quest.StepListItem_Quest_C.OnSetInterruptQuestTitle
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UStepListItem_Quest_C::OnSetInterruptQuestTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Quest_C", "OnSetInterruptQuestTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepListItem_Quest.StepListItem_Quest_C.GetTitle
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStepListItem_Title_C*            AsStep_List_Item_Title                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Quest_C::GetTitle(class UStepListItem_Title_C** AsStep_List_Item_Title) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Quest_C", "GetTitle");

	Params::StepListItem_Quest_C_GetTitle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsStep_List_Item_Title != nullptr)
		*AsStep_List_Item_Title = Parms.AsStep_List_Item_Title;
}

}

