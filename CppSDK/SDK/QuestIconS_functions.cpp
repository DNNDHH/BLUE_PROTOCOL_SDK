#pragma once

 

// Package: QuestIconS

#include "Basic.hpp"

#include "QuestIconS_classes.hpp"
#include "QuestIconS_parameters.hpp"


namespace SDK
{

// Function QuestIconS.QuestIconS_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestStatus                            InQuestStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCategory2                         InQuestCategory2                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInAllowProceed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestIconS_C::SetIcon(EQuestStatus InQuestStatus, EQuestCategory2 InQuestCategory2, bool bInAllowProceed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "SetIcon");

	Params::QuestIconS_C_SetIcon Parms{};

	Parms.InQuestStatus = InQuestStatus;
	Parms.InQuestCategory2 = InQuestCategory2;
	Parms.bInAllowProceed = bInAllowProceed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIconS.QuestIconS_C.Set Icon by Quest Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIconS_C::Set_Icon_by_Quest_Index(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "Set Icon by Quest Index");

	Params::QuestIconS_C_Set_Icon_by_Quest_Index Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIconS.QuestIconS_C.SetIconForStepList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIconS_C::SetIconForStepList(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "SetIconForStepList");

	Params::QuestIconS_C_SetIconForStepList Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIconS.QuestIconS_C.SetIconForQuestHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIconS_C::SetIconForQuestHistory(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "SetIconForQuestHistory");

	Params::QuestIconS_C_SetIconForQuestHistory Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestIconS.QuestIconS_C.GetQuestStatusForSetIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestStatus                            OutQuestStatus                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCategory2                         OutCategory2                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsAllowProceed                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestIconS_C::GetQuestStatusForSetIcon(int32 InQuestIndex, EQuestStatus* OutQuestStatus, EQuestCategory2* OutCategory2, bool* OutIsAllowProceed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "GetQuestStatusForSetIcon");

	Params::QuestIconS_C_GetQuestStatusForSetIcon Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutQuestStatus != nullptr)
		*OutQuestStatus = Parms.OutQuestStatus;

	if (OutCategory2 != nullptr)
		*OutCategory2 = Parms.OutCategory2;

	if (OutIsAllowProceed != nullptr)
		*OutIsAllowProceed = Parms.OutIsAllowProceed;
}


// Function QuestIconS.QuestIconS_C.GetNextMainQuestIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentQuestIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextMainQuest                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIconS_C::GetNextMainQuestIndex(int32 CurrentQuestIndex, int32* NextMainQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "GetNextMainQuestIndex");

	Params::QuestIconS_C_GetNextMainQuestIndex Parms{};

	Parms.CurrentQuestIndex = CurrentQuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (NextMainQuest != nullptr)
		*NextMainQuest = Parms.NextMainQuest;
}


// Function QuestIconS.QuestIconS_C.SetWishListIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestStatus                            InQuestStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestIconS_C::SetWishListIcon(EQuestStatus InQuestStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestIconS_C", "SetWishListIcon");

	Params::QuestIconS_C_SetWishListIcon Parms{};

	Parms.InQuestStatus = InQuestStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}

