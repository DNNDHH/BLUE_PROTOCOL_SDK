#pragma once

 

// Package: QuestList_RepeatCountIcon

#include "Basic.hpp"

#include "QuestList_RepeatCountIcon_classes.hpp"
#include "QuestList_RepeatCountIcon_parameters.hpp"


namespace SDK
{

// Function QuestList_RepeatCountIcon.QuestList_RepeatCountIcon_C.SetRepeatCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CountNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestList_RepeatCountIcon_C::SetRepeatCount(int32 Param_CountNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestList_RepeatCountIcon_C", "SetRepeatCount");

	Params::QuestList_RepeatCountIcon_C_SetRepeatCount Parms{};

	Parms.Param_CountNum = Param_CountNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

