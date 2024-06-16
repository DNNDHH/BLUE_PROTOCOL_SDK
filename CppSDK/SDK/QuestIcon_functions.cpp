#pragma once

 

// Package: QuestIcon

#include "Basic.hpp"

#include "QuestIcon_classes.hpp"
#include "QuestIcon_parameters.hpp"


namespace SDK
{

// Function QuestIcon.QuestIcon_C.SetIconZOrder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EQuestStatus, ESBMiniMapIconType>  IconTypeList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EQuestStatus                            Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_C::SetIconZOrder(const TMap<EQuestStatus, ESBMiniMapIconType>& IconTypeList, EQuestStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_C", "SetIconZOrder");

	Params::QuestIcon_C_SetIconZOrder Parms{};

	Parms.IconTypeList = std::move(IconTypeList);
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon.QuestIcon_C.SetIconTexture
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EQuestStatus, class UTexture2D*>   TextureList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EQuestStatus                            Status                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_C::SetIconTexture(const TMap<EQuestStatus, class UTexture2D*>& TextureList, const EQuestStatus& Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_C", "SetIconTexture");

	Params::QuestIcon_C_SetIconTexture Parms{};

	Parms.TextureList = std::move(TextureList);
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon.QuestIcon_C.SetQuestIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIcon_C::SetQuestIcon(int32 QuestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_C", "SetQuestIcon");

	Params::QuestIcon_C_SetQuestIcon Parms{};

	Parms.QuestID = QuestID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIcon.QuestIcon_C.SetQuestIconClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestIcon_C::SetQuestIconClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_C", "SetQuestIconClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestIcon.QuestIcon_C.SetQuestIconQuestion
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestIcon_C::SetQuestIconQuestion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_C", "SetQuestIconQuestion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestIcon.QuestIcon_C.SetIconByQuestIndex_ForInteractableEventPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bQuestionMark                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestIcon_C::SetIconByQuestIndex_ForInteractableEventPoint(int32 QuestIndex, bool bQuestionMark)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIcon_C", "SetIconByQuestIndex_ForInteractableEventPoint");

	Params::QuestIcon_C_SetIconByQuestIndex_ForInteractableEventPoint Parms{};

	Parms.QuestIndex = QuestIndex;
	Parms.bQuestionMark = bQuestionMark;

	UObject::ProcessEvent(Func, &Parms);
}

}

