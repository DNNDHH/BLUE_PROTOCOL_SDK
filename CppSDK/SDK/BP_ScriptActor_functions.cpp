#pragma once

 

// Package: BP_ScriptActor

#include "Basic.hpp"

#include "BP_ScriptActor_classes.hpp"
#include "BP_ScriptActor_parameters.hpp"


namespace SDK
{

// Function BP_ScriptActor.BP_ScriptActor_C.ExecuteUbergraph_BP_ScriptActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::ExecuteUbergraph_BP_ScriptActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "ExecuteUbergraph_BP_ScriptActor");

	Params::BP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.ReRequest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   NappoIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::ReRequest(const int32 RetCode, const TArray<class FString>& NappoIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "ReRequest");

	Params::BP_ScriptActor_C_ReRequest Parms{};

	Parms.RetCode = RetCode;
	Parms.NappoIds = std::move(NappoIds);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnInteractAPI
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_new                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                           Gained_achievement_ids                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::OnInteractAPI(const int32 RetCode, bool Is_new, const TArray<int32>& Gained_achievement_ids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnInteractAPI");

	Params::BP_ScriptActor_C_OnInteractAPI Parms{};

	Parms.RetCode = RetCode;
	Parms.Is_new = Is_new;
	Parms.Gained_achievement_ids = std::move(Gained_achievement_ids);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.EndnappoUI
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::EndnappoUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "EndnappoUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseNappoUIAndCheckComplete
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_CloseNappoUIAndCheckComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_CloseNappoUIAndCheckComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_InteractNappo
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           NappoId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_InteractNappo(const class FString& NappoId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_InteractNappo");

	Params::BP_ScriptActor_C_BP_InteractNappo Parms{};

	Parms.NappoId = std::move(NappoId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.ContentsActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::ContentsActivated(class FName DungeonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "ContentsActivated");

	Params::BP_ScriptActor_C_ContentsActivated Parms{};

	Parms.DungeonId = DungeonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContentsOnComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bAll                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_ActivateContentsOnComplete(const bool bAll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ActivateContentsOnComplete");

	Params::BP_ScriptActor_C_BP_ActivateContentsOnComplete Parms{};

	Parms.bAll = bAll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetSpeaker
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetSpeaker(const class FName& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetSpeaker");

	Params::BP_ScriptActor_C_BP_SetSpeaker Parms{};

	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.TurnTextDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::TurnTextDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "TurnTextDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.ShowTextAllDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::ShowTextAllDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "ShowTextAllDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_OnStart
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ResumeChange
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ResumeChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ResumeChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnItemSelected_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnItemSelected_Event_0(int32 SelectItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnItemSelected_Event_0");

	Params::BP_ScriptActor_C_OnItemSelected_Event_0 Parms{};

	Parms.SelectItemIndex = SelectItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowBalloonWindow
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class ACharacter*                       InAttachCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::BP_ShowBalloonWindow(class ACharacter* InAttachCharacter, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowBalloonWindow");

	Params::BP_ScriptActor_C_BP_ShowBalloonWindow Parms{};

	Parms.InAttachCharacter = InAttachCharacter;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindow
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bWaitUserInput                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_ShowTextWindow(const class FText& InText, const bool bWaitUserInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowTextWindow");

	Params::BP_ScriptActor_C_BP_ShowTextWindow Parms{};

	Parms.InText = std::move(InText);
	Parms.bWaitUserInput = bWaitUserInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoPopup
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowYesNoPopup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowYesNoPopup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CustomEvent_0_Copy(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent_0_Copy");

	Params::BP_ScriptActor_C_CustomEvent_0_Copy Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoDialog
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             MessageText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::BP_ShowYesNoDialog(const class FText& MessageText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowYesNoDialog");

	Params::BP_ScriptActor_C_BP_ShowYesNoDialog Parms{};

	Parms.MessageText = std::move(MessageText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CustomEvent_0(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent_0");

	Params::BP_ScriptActor_C_CustomEvent_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMessageDialog
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             MessageText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::BP_ShowMessageDialog(const class FText& MessageText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowMessageDialog");

	Params::BP_ScriptActor_C_BP_ShowMessageDialog Parms{};

	Parms.MessageText = std::move(MessageText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowSelectMenu
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FText>                     InItems                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::BP_ShowSelectMenu(const TArray<class FText>& InItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowSelectMenu");

	Params::BP_ScriptActor_C_BP_ShowSelectMenu Parms{};

	Parms.InItems = std::move(InItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnUpdateQuestProgressCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               PrevAcceptedQuestInfo                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::OnUpdateQuestProgressCompleted(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnUpdateQuestProgressCompleted");

	Params::BP_ScriptActor_C_OnUpdateQuestProgressCompleted Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.PrevAcceptedQuestInfo = std::move(PrevAcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_UpdateQuestProgressByTalkNpc
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             NpcId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_UpdateQuestProgressByTalkNpc(const int32 InQuestIndex, const class FName NpcId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_UpdateQuestProgressByTalkNpc");

	Params::BP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.NpcId = NpcId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteQuestStep_Completed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               PrevAcceptedQuestInfo                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::OnCompleteQuestStep_Completed(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCompleteQuestStep_Completed");

	Params::BP_ScriptActor_C_OnCompleteQuestStep_Completed Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.PrevAcceptedQuestInfo = std::move(PrevAcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_CompleteQuestStep
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStepIndex                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InConditionDataId                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_CompleteQuestStep(const int32 InQuestIndex, const int32 InStepIndex, const int32 InConditionDataId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_CompleteQuestStep");

	Params::BP_ScriptActor_C_BP_CompleteQuestStep Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.InStepIndex = InStepIndex;
	Parms.InConditionDataId = InConditionDataId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestConfirm
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowQuestConfirm(const int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowQuestConfirm");

	Params::BP_ScriptActor_C_BP_ShowQuestConfirm Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnQuestConfirmFinish_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnQuestConfirmFinish_1(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnQuestConfirmFinish_1");

	Params::BP_ScriptActor_C_OnQuestConfirmFinish_1 Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnFinish_Event_2(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnFinish_Event_2");

	Params::BP_ScriptActor_C_OnFinish_Event_2 Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestCompleteJingle
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowQuestCompleteJingle(const int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowQuestCompleteJingle");

	Params::BP_ScriptActor_C_BP_ShowQuestCompleteJingle Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnAcceptQuestDelegate_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EAcceptedQuestErrorCode                 ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               AcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::OnAcceptQuestDelegate_Event_0(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnAcceptQuestDelegate_Event_0");

	Params::BP_ScriptActor_C_OnAcceptQuestDelegate_Event_0 Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;
	Parms.RetCode = RetCode;
	Parms.AcceptedQuestInfo = std::move(AcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_QuestAccept
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_QuestAccept(const int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_QuestAccept");

	Params::BP_ScriptActor_C_BP_QuestAccept Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestBoard
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InQuestBoardId                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowQuestBoard(const class FName& InQuestBoardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowQuestBoard");

	Params::BP_ScriptActor_C_BP_ShowQuestBoard Parms{};

	Parms.InQuestBoardId = InQuestBoardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnSelectItem_Event_1(int32 SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnSelectItem_Event_1");

	Params::BP_ScriptActor_C_OnSelectItem_Event_1 Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_PickQuest
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InClientId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_PickQuest(const class FName& InClientId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_PickQuest");

	Params::BP_ScriptActor_C_BP_PickQuest Parms{};

	Parms.InClientId = InClientId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReported                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnFinish_Event_1(bool bReported)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnFinish_Event_1");

	Params::BP_ScriptActor_C_OnFinish_Event_1 Parms{};

	Parms.bReported = bReported;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestRequestMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowQuestRequestMenu(const int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowQuestRequestMenu");

	Params::BP_ScriptActor_C_BP_ShowQuestRequestMenu Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ReportQuest
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ReportQuest(const int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ReportQuest");

	Params::BP_ScriptActor_C_BP_ReportQuest Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCloseAestheShopMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCourseDecided                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InUseTicketNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnCloseAestheShopMenu(bool InIsCourseDecided, int32 InTicketTokenId, int32 InUseTicketNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCloseAestheShopMenu");

	Params::BP_ScriptActor_C_OnCloseAestheShopMenu Parms{};

	Parms.InIsCourseDecided = InIsCourseDecided;
	Parms.InTicketTokenId = InTicketTokenId;
	Parms.InUseTicketNum = InUseTicketNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnEstheWarpFailedDelegate
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnEstheWarpFailedDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnEstheWarpFailedDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::CustomEvent_5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent_5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTApartMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowTApartMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowTApartMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteRoomInfoDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnCompleteRoomInfoDelegate______0(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCompleteRoomInfoDelegate_����_0");

	Params::BP_ScriptActor_C_OnCompleteRoomInfoDelegate______0 Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestMyRoom
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InRoomId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_RequestMyRoom(int32 InRoomId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_RequestMyRoom");

	Params::BP_ScriptActor_C_BP_RequestMyRoom Parms{};

	Parms.InRoomId = InRoomId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent_1");

	Params::BP_ScriptActor_C_CustomEvent_1 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCommandMenuAdventureBoard
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowCommandMenuAdventureBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowCommandMenuAdventureBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InGoToNext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnClose______0(bool InGoToNext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_����_0");

	Params::BP_ScriptActor_C_OnClose______0 Parms{};

	Parms.InGoToNext = InGoToNext;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowDhcUIMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDhcMapMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_ShowDhcUIMenu(bool IsDhcMapMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowDhcUIMenu");

	Params::BP_ScriptActor_C_BP_ShowDhcUIMenu Parms{};

	Parms.IsDhcMapMode = IsDhcMapMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCloseStackBImagineMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnCloseStackBImagineMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCloseStackBImagineMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineStackB
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowImagineStackB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowImagineStackB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnColoringShopWarpFailedDelegate
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnColoringShopWarpFailedDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnColoringShopWarpFailedDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponExtender
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUsed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnClosed_WeaponExtender(bool IsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClosed_WeaponExtender");

	Params::BP_ScriptActor_C_OnClosed_WeaponExtender Parms{};

	Parms.IsUsed = IsUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponAbilityRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUsed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnClosed_WeaponAbilityRemove(bool IsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClosed_WeaponAbilityRemove");

	Params::BP_ScriptActor_C_OnClosed_WeaponAbilityRemove Parms{};

	Parms.IsUsed = IsUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponTuning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUsed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnClosed_WeaponTuning(bool IsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClosed_WeaponTuning");

	Params::BP_ScriptActor_C_OnClosed_WeaponTuning Parms{};

	Parms.IsUsed = IsUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponSynthe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUsed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnClosed_WeaponSynthe(bool IsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClosed_WeaponSynthe");

	Params::BP_ScriptActor_C_OnClosed_WeaponSynthe Parms{};

	Parms.IsUsed = IsUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTAbilityShopMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// EShopType                               InShopType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowTAbilityShopMenu(EShopType InShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowTAbilityShopMenu");

	Params::BP_ScriptActor_C_BP_ShowTAbilityShopMenu Parms{};

	Parms.InShopType = InShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankUpClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnAdventureRankUpClosed(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnAdventureRankUpClosed");

	Params::BP_ScriptActor_C_OnAdventureRankUpClosed Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankUp
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowAdventurerRankUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowAdventurerRankUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityReconditioner
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowWeaponAbilityReconditioner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowWeaponAbilityReconditioner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStoragePresetEquipSetMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowStoragePresetEquipSetMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowStoragePresetEquipSetMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.StoratgeEquipSet_OnCloseEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::StoratgeEquipSet_OnCloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "StoratgeEquipSet_OnCloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_3
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_Event_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_Event_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRankingBoard
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowRankingBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowRankingBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankShopClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnAdventureRankShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnAdventureRankShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankShopMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowAdventurerRankShopMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowAdventurerRankShopMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_CashExchangeShop_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_CashExchangeShop_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_CashExchangeShop_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCashExchangeShopMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowCashExchangeShopMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowCashExchangeShopMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnFinish_Event_3(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnFinish_Event_3");

	Params::BP_ScriptActor_C_OnFinish_Event_3 Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_EventShop_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_EventShop_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_EventShop_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEventShopMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// EShopType                               InShopType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowEventShopMenu(EShopType InShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowEventShopMenu");

	Params::BP_ScriptActor_C_BP_ShowEventShopMenu Parms{};

	Parms.InShopType = InShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityRemover
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowWeaponAbilityRemover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowWeaponAbilityRemover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityExtender
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowWeaponAbilityExtender()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowWeaponAbilityExtender");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_LiquidMemoryShop_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLiquidMemoryUsed                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnClose_LiquidMemoryShop_Event(bool IsLiquidMemoryUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_LiquidMemoryShop_Event");

	Params::BP_ScriptActor_C_OnClose_LiquidMemoryShop_Event Parms{};

	Parms.IsLiquidMemoryUsed = IsLiquidMemoryUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowLiquidMemoryShopMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowLiquidMemoryShopMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowLiquidMemoryShopMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponSyntheMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowWeaponSyntheMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowWeaponSyntheMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColoringShop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumeChange                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsColorSVEnabled                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_ShowColoringShop(const bool InIsCostumeChange, const bool InIsColorSVEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowColoringShop");

	Params::BP_ScriptActor_C_BP_ShowColoringShop Parms{};

	Parms.InIsCostumeChange = InIsCostumeChange;
	Parms.InIsColorSVEnabled = InIsColorSVEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineCraft
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnCloseImagineCraft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCloseImagineCraft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImaginCraft
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsBattleImagine                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_ShowImaginCraft(bool bIsBattleImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowImaginCraft");

	Params::BP_ScriptActor_C_BP_ShowImaginCraft Parms{};

	Parms.bIsBattleImagine = bIsBattleImagine;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCloseEvnet_Storage
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnCloseEvnet_Storage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCloseEvnet_Storage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowPlayerCraftMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowPlayerCraftMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowPlayerCraftMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColosseumMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowColosseumMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowColosseumMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CustomEvent_3(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent_3");

	Params::BP_ScriptActor_C_CustomEvent_3 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_Event_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_Event_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowShopMenu
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// EShopType                               InShopType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InProductListId                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowShopMenu(const EShopType InShopType, const class FName& InProductListId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowShopMenu");

	Params::BP_ScriptActor_C_BP_ShowShopMenu Parms{};

	Parms.InShopType = InShopType;
	Parms.InProductListId = InProductListId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEstheMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowEstheMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowEstheMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWarpMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowWarpMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowWarpMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStorageMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowStorageMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowStorageMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnSBSoundMusicCueFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnSBSoundMusicCueFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnSBSoundMusicCueFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitMusicCue
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_WaitMusicCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_WaitMusicCue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkModeFixed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ViewParamId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsNoCheckAtTeleportPlayer                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InCameraZOffset                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetTalkModeFixed(class AActor* InOtherActor, const class FName ViewParamId, const bool bIsNoCheckAtTeleportPlayer, const float InCameraZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetTalkModeFixed");

	Params::BP_ScriptActor_C_BP_SetTalkModeFixed Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewParamId = ViewParamId;
	Parms.bIsNoCheckAtTeleportPlayer = bIsNoCheckAtTeleportPlayer;
	Parms.InCameraZOffset = InCameraZOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.Event_OnDemoPlayEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBLevelSequenceActor*            SequencerActor                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::Event_OnDemoPlayEnd(const class ASBLevelSequenceActor* SequencerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "Event_OnDemoPlayEnd");

	Params::BP_ScriptActor_C_Event_OnDemoPlayEnd Parms{};

	Parms.SequencerActor = SequencerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.PlayDemo_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InDemoId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::PlayDemo_Internal(class FName InDemoId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "PlayDemo_Internal");

	Params::BP_ScriptActor_C_PlayDemo_Internal Parms{};

	Parms.InDemoId = InDemoId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo_SkipSave
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InDemoName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_PlayDemo_SkipSave(const class FName& InDemoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_PlayDemo_SkipSave");

	Params::BP_ScriptActor_C_BP_PlayDemo_SkipSave Parms{};

	Parms.InDemoName = InDemoName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.�������_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DemoId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::_________4(const bool Result, const int32 RetCode, const class FName& DemoId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "�������_4");

	Params::BP_ScriptActor_C__________4 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.DemoId = DemoId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SaveDemoBrowsedFlag
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InDemoName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SaveDemoBrowsedFlag(const class FName& InDemoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SaveDemoBrowsedFlag");

	Params::BP_ScriptActor_C_BP_SaveDemoBrowsedFlag Parms{};

	Parms.InDemoName = InDemoName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSaveDemoBrowsed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DemoId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::Event_OnSaveDemoBrowsed(const bool Result, const int32 RetCode, const class FName& DemoId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "Event_OnSaveDemoBrowsed");

	Params::BP_ScriptActor_C_Event_OnSaveDemoBrowsed Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.DemoId = DemoId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InDemoName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_PlayDemo(const class FName& InDemoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_PlayDemo");

	Params::BP_ScriptActor_C_BP_PlayDemo Parms{};

	Parms.InDemoName = InDemoName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnFinish_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnFinish_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlaySubTitle
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_PlaySubTitle(const class FName& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_PlaySubTitle");

	Params::BP_ScriptActor_C_BP_PlaySubTitle Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetQuestEventMode
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_SetQuestEventMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetQuestEventMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_StopCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_StopCameraShake(const class FName& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_StopCameraShake");

	Params::BP_ScriptActor_C_BP_StopCameraShake Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_PlayCameraShake(const class FName& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_PlayCameraShake");

	Params::BP_ScriptActor_C_BP_PlayCameraShake Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.SetDemoModeWait_Internal_
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::SetDemoModeWait_Internal_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "SetDemoModeWait_Internal_");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetDemoModeWait
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_SetDemoModeWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetDemoModeWait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetPreset
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InCameraId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InOffsetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InBlendTime                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetViewTargetPreset(const class FName& InCameraId, const struct FVector& InOffsetLocation, const float InBlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetViewTargetPreset");

	Params::BP_ScriptActor_C_BP_SetViewTargetPreset Parms{};

	Parms.InCameraId = InCameraId;
	Parms.InOffsetLocation = std::move(InOffsetLocation);
	Parms.InBlendTime = InBlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          InTargetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InTargetRotation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InBlendTime                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, const float InBlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetViewTarget");

	Params::BP_ScriptActor_C_BP_SetViewTarget Parms{};

	Parms.InTargetLocation = std::move(InTargetLocation);
	Parms.InTargetRotation = std::move(InTargetRotation);
	Parms.InBlendTime = InBlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFilterEnable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::SetTalkModeFilterEnable(bool bInEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "SetTalkModeFilterEnable");

	Params::BP_ScriptActor_C_SetTalkModeFilterEnable Parms{};

	Parms.bInEnable = bInEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkMode
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InDistancePlayer                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsNoCheckAtTeleportPlayer                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InCameraZOffset                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetTalkMode(class AActor* InOtherActor, const float InDistancePlayer, const bool bIsNoCheckAtTeleportPlayer, const float InCameraZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetTalkMode");

	Params::BP_ScriptActor_C_BP_SetTalkMode Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.InDistancePlayer = InDistancePlayer;
	Parms.bIsNoCheckAtTeleportPlayer = bIsNoCheckAtTeleportPlayer;
	Parms.InCameraZOffset = InCameraZOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetViewTarget
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ResetViewTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ResetViewTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           InNewTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInRelative                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_SetViewTargetActor(class AActor* InNewTarget, const bool bInRelative)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetViewTargetActor");

	Params::BP_ScriptActor_C_BP_SetViewTargetActor Parms{};

	Parms.InNewTarget = InNewTarget;
	Parms.bInRelative = bInRelative;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.RetrySystemMessageWait Matching
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::RetrySystemMessageWait_Matching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "RetrySystemMessageWait Matching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCheckMatcheCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnCheckMatcheCancel(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCheckMatcheCancel");

	Params::BP_ScriptActor_C_OnCheckMatcheCancel Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_IsMatchingCanselMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_IsMatchingCanselMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_IsMatchingCanselMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetColorFilter
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InDuration                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ResetColorFilter(const float InDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ResetColorFilter");

	Params::BP_ScriptActor_C_BP_ResetColorFilter Parms{};

	Parms.InDuration = InDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnColorFilterFadeEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnColorFilterFadeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnColorFilterFadeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetColorFilter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InDuration                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetColorFilter(const struct FLinearColor& InColor, const float InDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetColorFilter");

	Params::BP_ScriptActor_C_BP_SetColorFilter Parms{};

	Parms.InColor = std::move(InColor);
	Parms.InDuration = InDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.WaitToIdlePlayer_Internal
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::WaitToIdlePlayer_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "WaitToIdlePlayer_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitToIdlePlayer
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_WaitToIdlePlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_WaitToIdlePlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeIn
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InDuration                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInWait                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_FadeIn(const float InDuration, const bool bInWait)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_FadeIn");

	Params::BP_ScriptActor_C_BP_FadeIn Parms{};

	Parms.InDuration = InDuration;
	Parms.bInWait = bInWait;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeOut
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InDuration                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInWait                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_FadeOut(const float InDuration, const bool bInWait)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_FadeOut");

	Params::BP_ScriptActor_C_BP_FadeOut Parms{};

	Parms.InDuration = InDuration;
	Parms.bInWait = bInWait;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_Delay
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   InDelayTime                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_Delay(const float InDelayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_Delay");

	Params::BP_ScriptActor_C_BP_Delay Parms{};

	Parms.InDelayTime = InDelayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCloseFmMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnCloseFmMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCloseFmMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFmMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowFmMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowFmMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowConnectToServerError
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowConnectToServerError(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowConnectToServerError");

	Params::BP_ScriptActor_C_BP_ShowConnectToServerError Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.�������_3
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::_________3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "�������_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTitle2ndUI
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowTitle2ndUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowTitle2ndUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.�������_2
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::_________2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "�������_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.�������_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELayoutPresetTypes                      Preset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::_________1(ELayoutPresetTypes Preset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "�������_1");

	Params::BP_ScriptActor_C__________1 Parms{};

	Parms.Preset = Preset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowHudLayoutSelectPreset
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowHudLayoutSelectPreset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowHudLayoutSelectPreset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_HideEngramUI
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_HideEngramUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_HideEngramUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEngramUI
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowEngramUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowEngramUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectItemIndex                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnSelectItem_Event_2(const int32 InSelectItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnSelectItem_Event_2");

	Params::BP_ScriptActor_C_OnSelectItem_Event_2 Parms{};

	Parms.InSelectItemIndex = InSelectItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_GetValidSubEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FName>                     InSubEvents                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::BP_GetValidSubEvent(const TArray<class FName>& InSubEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_GetValidSubEvent");

	Params::BP_ScriptActor_C_BP_GetValidSubEvent Parms{};

	Parms.InSubEvents = std::move(InSubEvents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_HideMoneyUI
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_HideMoneyUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_HideMoneyUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMoneyUI
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowMoneyUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowMoneyUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MatchingMenu_C*              Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnClose_Event_2(class UUMG_MatchingMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_Event_2");

	Params::BP_ScriptActor_C_OnClose_Event_2 Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InContentId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsStartMatching                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_ActivateContent(const class FName& InContentId, const bool bIsStartMatching)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ActivateContent");

	Params::BP_ScriptActor_C_BP_ActivateContent Parms{};

	Parms.InContentId = InContentId;
	Parms.bIsStartMatching = bIsStartMatching;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnAddActivate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnAddActivate_Event_0(class FName DungeonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnAddActivate_Event_0");

	Params::BP_ScriptActor_C_OnAddActivate_Event_0 Parms{};

	Parms.DungeonId = DungeonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetUserData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InKey                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SetUserData(const class FName& InKey, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetUserData");

	Params::BP_ScriptActor_C_BP_SetUserData Parms{};

	Parms.InKey = InKey;
	Parms.InValue = std::move(InValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSetKeyValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::Event_OnSetKeyValue(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "Event_OnSetKeyValue");

	Params::BP_ScriptActor_C_Event_OnSetKeyValue Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::CustomEvent(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent");

	Params::BP_ScriptActor_C_CustomEvent Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_GetEmote
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InEmoteId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_GetEmote(const class FName& InEmoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_GetEmote");

	Params::BP_ScriptActor_C_BP_GetEmote Parms{};

	Parms.InEmoteId = InEmoteId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnSetKeyValueDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::OnSetKeyValueDelegate_Event_0(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnSetKeyValueDelegate_Event_0");

	Params::BP_ScriptActor_C_OnSetKeyValueDelegate_Event_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetContentLock
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBContentLockType                      InContentLockType                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInLock                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_SetContentLock(const ESBContentLockType InContentLockType, const bool bInLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetContentLock");

	Params::BP_ScriptActor_C_BP_SetContentLock Parms{};

	Parms.InContentLockType = InContentLockType;
	Parms.bInLock = bInLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.LookAtLocation_Internal
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InTargetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::LookAtLocation_Internal(const class AActor*& InActor, const struct FVector& InTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "LookAtLocation_Internal");

	Params::BP_ScriptActor_C_LookAtLocation_Internal Parms{};

	Parms.InActor = InActor;
	Parms.InTargetLocation = std::move(InTargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtActorForPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           SourceActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DestinationActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsMount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_LookAtActorForPlayer(class AActor* SourceActor, class AActor* DestinationActor, bool bIsMount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_LookAtActorForPlayer");

	Params::BP_ScriptActor_C_BP_LookAtActorForPlayer Parms{};

	Parms.SourceActor = SourceActor;
	Parms.DestinationActor = DestinationActor;
	Parms.bIsMount = bIsMount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtLocation
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InTargetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_LookAtLocation(class AActor* InActor, const struct FVector& InTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_LookAtLocation");

	Params::BP_ScriptActor_C_BP_LookAtLocation Parms{};

	Parms.InActor = InActor;
	Parms.InTargetLocation = std::move(InTargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SpawnSubActor
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InCharacterId                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SpawnSubActor(const class FName& InCharacterId, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SpawnSubActor");

	Params::BP_ScriptActor_C_BP_SpawnSubActor Parms{};

	Parms.InCharacterId = InCharacterId;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectItemIndex                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnSelectItem______0(const int32 InSelectItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnSelectItem_����_0");

	Params::BP_ScriptActor_C_OnSelectItem______0 Parms{};

	Parms.InSelectItemIndex = InSelectItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowChoiceDialog
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InQuestion                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                     InItems                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ScriptActor_C::BP_ShowChoiceDialog(const class FText& InQuestion, const TArray<class FText>& InItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowChoiceDialog");

	Params::BP_ScriptActor_C_BP_ShowChoiceDialog Parms{};

	Parms.InQuestion = std::move(InQuestion);
	Parms.InItems = std::move(InItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayParticleFromActor
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           InTargetActor                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InParticleId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InAttachSocketId                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InOffsetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_PlayParticleFromActor(const class AActor* InTargetActor, const class FName& InParticleId, const class FName& InAttachSocketId, const struct FVector& InOffsetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_PlayParticleFromActor");

	Params::BP_ScriptActor_C_BP_PlayParticleFromActor Parms{};

	Parms.InTargetActor = InTargetActor;
	Parms.InParticleId = InParticleId;
	Parms.InAttachSocketId = InAttachSocketId;
	Parms.InOffsetLocation = std::move(InOffsetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnDofTransitionFinishe
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnDofTransitionFinishe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnDofTransitionFinishe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ApplyDofSettings
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InSettingId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InTransitionTime                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ApplyDofSettings(const class FName& InSettingId, const float InTransitionTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ApplyDofSettings");

	Params::BP_ScriptActor_C_BP_ApplyDofSettings Parms{};

	Parms.InSettingId = InSettingId;
	Parms.InTransitionTime = InTransitionTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTutorialHelp
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ShowTutorialHelp(const class FName& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowTutorialHelp");

	Params::BP_ScriptActor_C_BP_ShowTutorialHelp Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CustomEvent_4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.Retry
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::Retry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "Retry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnCompletedMail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnCompletedMail(bool bWasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnCompletedMail");

	Params::BP_ScriptActor_C_OnCompletedMail Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SendMail
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InMailId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_SendMail(const class FName& InMailId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SendMail");

	Params::BP_ScriptActor_C_BP_SendMail Parms{};

	Parms.InMailId = InMailId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnChangeClass
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnChangeClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnChangeClass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateWarpPoint
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             InWarpPointId                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_ActivateWarpPoint(const class FName& InWarpPointId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ActivateWarpPoint");

	Params::BP_ScriptActor_C_BP_ActivateWarpPoint Parms{};

	Parms.InWarpPointId = InWarpPointId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.ResetNpcGuildWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::ResetNpcGuildWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "ResetNpcGuildWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuildFromJoin
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClosedNpcGuildFromJoin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClosedNpcGuildFromJoin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnGuildJoinMenuClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnGuildJoinMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnGuildJoinMenuClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildJoinMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowGuildJoinMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowGuildJoinMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuild
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClosedNpcGuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClosedNpcGuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowGuildMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowGuildMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_SetEnvironmentMeshShadow
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCastShadow                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::BP_SetEnvironmentMeshShadow(const class FName& RowName, const bool bCastShadow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_SetEnvironmentMeshShadow");

	Params::BP_ScriptActor_C_BP_SetEnvironmentMeshShadow Parms{};

	Parms.RowName = RowName;
	Parms.bCastShadow = bCastShadow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnClose_RmShopMenu_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnClose_RmShopMenu_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnClose_RmShopMenu_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRmShopMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowRmShopMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowRmShopMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowResearchTeamMenu
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowResearchTeamMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowResearchTeamMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestFreeBuffEffectActivation
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASBFieldActorFreeBuffPoint*       BuffPoint                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           PlayerCharacter                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_RequestFreeBuffEffectActivation(const class ASBFieldActorFreeBuffPoint* BuffPoint, const class AActor* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_RequestFreeBuffEffectActivation");

	Params::BP_ScriptActor_C_BP_RequestFreeBuffEffectActivation Parms{};

	Parms.BuffPoint = BuffPoint;
	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_StartActorLipSyncAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// class USBCharaPartsFaceComponent*       FaceComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::BP_StartActorLipSyncAnim(class USBCharaPartsFaceComponent* FaceComponent, float Speed, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_StartActorLipSyncAnim");

	Params::BP_ScriptActor_C_BP_StartActorLipSyncAnim Parms{};

	Parms.FaceComponent = FaceComponent;
	Parms.Speed = Speed;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFang_expedition
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_ShowFang_expedition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_ShowFang_expedition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.FangExpeditionClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::FangExpeditionClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "FangExpeditionClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoginBonusWindowClose
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::OnLoginBonusWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoginBonusWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusCheckCmplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::LoginBonusCheckCmplete(const bool bWasSuccessful, const int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "LoginBonusCheckCmplete");

	Params::BP_ScriptActor_C_LoginBonusCheckCmplete Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::LoginBonusFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "LoginBonusFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.BP_LoginBonusCheck
// (Event, Public, BlueprintEvent)

void ABP_ScriptActor_C::BP_LoginBonusCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "BP_LoginBonusCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B");

	Params::BP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_EF4A23B0441F8A087072C0826ED33902
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_EF4A23B0441F8A087072C0826ED33902(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_EF4A23B0441F8A087072C0826ED33902");

	Params::BP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF");

	Params::BP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290");

	Params::BP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_E0794065497F6D746C417B8FDB70CAC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_E0794065497F6D746C417B8FDB70CAC5(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_E0794065497F6D746C417B8FDB70CAC5");

	Params::BP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8");

	Params::BP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B");

	Params::BP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_919BBF95440C9B20CDB744AE50922B91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_919BBF95440C9B20CDB744AE50922B91(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_919BBF95440C9B20CDB744AE50922B91");

	Params::BP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_ScriptActor_C::OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7");

	Params::BP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__UpdateFunc
// (BlueprintEvent)

void ABP_ScriptActor_C::LookAtTimer__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "LookAtTimer__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__FinishedFunc
// (BlueprintEvent)

void ABP_ScriptActor_C::LookAtTimer__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "LookAtTimer__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTargetByActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewTargetActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRelative                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::CalcViewTargetByActor(class AActor* NewTargetActor, bool IsRelative, struct FVector* Location, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CalcViewTargetByActor");

	Params::BP_ScriptActor_C_CalcViewTargetByActor Parms{};

	Parms.NewTargetActor = NewTargetActor;
	Parms.IsRelative = IsRelative;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function BP_ScriptActor.BP_ScriptActor_C.GetViewTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::GetViewTargetLocation(class AActor* Actor, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "GetViewTargetLocation");

	Params::BP_ScriptActor_C_GetViewTargetLocation Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkPlayerPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewTargetActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CalcTalkPlayerPosition(class AActor* NewTargetActor, float Distance, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CalcTalkPlayerPosition");

	Params::BP_ScriptActor_C_CalcTalkPlayerPosition Parms{};

	Parms.NewTargetActor = NewTargetActor;
	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ScriptActor.BP_ScriptActor_C.TryGetSocketLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::TryGetSocketLocation(class AActor* Actor, class FName SocketName, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "TryGetSocketLocation");

	Params::BP_ScriptActor_C_TryGetSocketLocation Parms{};

	Parms.Actor = Actor;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_ScriptActor.BP_ScriptActor_C.SetTalkMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DistancePlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsNoCheckAtTeleport                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CameraZOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::SetTalkMode(class AActor* InOtherActor, float DistancePlayer, bool bIsNoCheckAtTeleport, float CameraZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "SetTalkMode");

	Params::BP_ScriptActor_C_SetTalkMode Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.DistancePlayer = DistancePlayer;
	Parms.bIsNoCheckAtTeleport = bIsNoCheckAtTeleport;
	Parms.CameraZOffset = CameraZOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.IsActivatedDungeon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InDungeonId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bActivated                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::IsActivatedDungeon(class FName InDungeonId, bool* bActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "IsActivatedDungeon");

	Params::BP_ScriptActor_C_IsActivatedDungeon Parms{};

	Parms.InDungeonId = InDungeonId;

	UObject::ProcessEvent(Func, &Parms);

	if (bActivated != nullptr)
		*bActivated = Parms.bActivated;
}


// Function BP_ScriptActor.BP_ScriptActor_C.GetValidSubEvents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     InCheckEvents                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                     OutValidEvents                                         (Parm, OutParm)

void ABP_ScriptActor_C::GetValidSubEvents(TArray<class FName>& InCheckEvents, TArray<class FName>* OutValidEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "GetValidSubEvents");

	Params::BP_ScriptActor_C_GetValidSubEvents Parms{};

	Parms.InCheckEvents = std::move(InCheckEvents);

	UObject::ProcessEvent(Func, &Parms);

	InCheckEvents = std::move(Parms.InCheckEvents);

	if (OutValidEvents != nullptr)
		*OutValidEvents = std::move(Parms.OutValidEvents);
}


// Function BP_ScriptActor.BP_ScriptActor_C.SpawnSubActor_Internal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InActorClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBCharaCreateData*               InCharaCreateData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  InAnimationSet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_ScriptActor_C::SpawnSubActor_Internal(class UClass* InActorClass, const struct FVector& InLocation, class USBCharaCreateData* InCharaCreateData, class UASAnimationSet* InAnimationSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "SpawnSubActor_Internal");

	Params::BP_ScriptActor_C_SpawnSubActor_Internal Parms{};

	Parms.InActorClass = InActorClass;
	Parms.InLocation = std::move(InLocation);
	Parms.InCharaCreateData = InCharaCreateData;
	Parms.InAnimationSet = InAnimationSet;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InTargetLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InTargetRotation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInRelative                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          OutTargetLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         OutTargetRotation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSucs                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptActor_C::CalcViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, bool bInRelative, struct FVector* OutTargetLocation, struct FRotator* OutTargetRotation, bool* bSucs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CalcViewTarget");

	Params::BP_ScriptActor_C_CalcViewTarget Parms{};

	Parms.InTargetLocation = std::move(InTargetLocation);
	Parms.InTargetRotation = std::move(InTargetRotation);
	Parms.bInRelative = bInRelative;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTargetLocation != nullptr)
		*OutTargetLocation = std::move(Parms.OutTargetLocation);

	if (OutTargetRotation != nullptr)
		*OutTargetRotation = std::move(Parms.OutTargetRotation);

	if (bSucs != nullptr)
		*bSucs = Parms.bSucs;
}


// Function BP_ScriptActor.BP_ScriptActor_C.GetFreeViewTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ViewTargetActor                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::GetFreeViewTarget(class AActor** ViewTargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "GetFreeViewTarget");

	Params::BP_ScriptActor_C_GetFreeViewTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ViewTargetActor != nullptr)
		*ViewTargetActor = Parms.ViewTargetActor;
}


// Function BP_ScriptActor.BP_ScriptActor_C.CurViewTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ViewTargetActor                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CurViewTarget(class AActor** ViewTargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CurViewTarget");

	Params::BP_ScriptActor_C_CurViewTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ViewTargetActor != nullptr)
		*ViewTargetActor = Parms.ViewTargetActor;
}


// Function BP_ScriptActor.BP_ScriptActor_C.PlayParticleFromActor_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InTargetActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*                  InParticle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InSocketId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OffsetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::PlayParticleFromActor_Internal(class AActor* InTargetActor, class UParticleSystem* InParticle, class FName InSocketId, const struct FVector& OffsetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "PlayParticleFromActor_Internal");

	Params::BP_ScriptActor_C_PlayParticleFromActor_Internal Parms{};

	Parms.InTargetActor = InTargetActor;
	Parms.InParticle = InParticle;
	Parms.InSocketId = InSocketId;
	Parms.OffsetLocation = std::move(OffsetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CreateWalletWidgetIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::CreateWalletWidgetIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CreateWalletWidgetIfNeeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptActor.BP_ScriptActor_C.LimitAngleDifference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::LimitAngleDifference(float Start, float Target, float* OutTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "LimitAngleDifference");

	Params::BP_ScriptActor_C_LimitAngleDifference Parms{};

	Parms.Start = Start;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTarget != nullptr)
		*OutTarget = Parms.OutTarget;
}


// Function BP_ScriptActor.BP_ScriptActor_C.Get Actor Yaw Diff
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           SourceActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DestinationActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   YawDiff                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::Get_Actor_Yaw_Diff(class AActor*& SourceActor, class AActor*& DestinationActor, float* YawDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "Get Actor Yaw Diff");

	Params::BP_ScriptActor_C_Get_Actor_Yaw_Diff Parms{};

	Parms.SourceActor = SourceActor;
	Parms.DestinationActor = DestinationActor;

	UObject::ProcessEvent(Func, &Parms);

	SourceActor = Parms.SourceActor;
	DestinationActor = Parms.DestinationActor;

	if (YawDiff != nullptr)
		*YawDiff = Parms.YawDiff;
}


// Function BP_ScriptActor.BP_ScriptActor_C.AddStringArrayForDebug
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   SrcTextArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           DstText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           DstTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::AddStringArrayForDebug(TArray<class FString>& SrcTextArray, const class FString& DstText, const class FString& DstTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "AddStringArrayForDebug");

	Params::BP_ScriptActor_C_AddStringArrayForDebug Parms{};

	Parms.SrcTextArray = std::move(SrcTextArray);
	Parms.DstText = std::move(DstText);
	Parms.DstTitle = std::move(DstTitle);

	UObject::ProcessEvent(Func, &Parms);

	SrcTextArray = std::move(Parms.SrcTextArray);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeHeightDiff
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CalcTalkModeHeightDiff(class AActor* NPC, float* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CalcTalkModeHeightDiff");

	Params::BP_ScriptActor_C_CalcTalkModeHeightDiff Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeCameraLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightDiff                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CalcTalkModeCameraLocation(class AActor* NPC, float HeightDiff, const struct FVector& Offset, struct FVector* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CalcTalkModeCameraLocation");

	Params::BP_ScriptActor_C_CalcTalkModeCameraLocation Parms{};

	Parms.NPC = NPC;
	Parms.HeightDiff = HeightDiff;
	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}


// Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeTagetLocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::CalcTalkModeTagetLocation(class AActor* NPC, const struct FVector& Offset, struct FVector* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "CalcTalkModeTagetLocation");

	Params::BP_ScriptActor_C_CalcTalkModeTagetLocation Parms{};

	Parms.NPC = NPC;
	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}


// Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFixed_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ViewParamId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsNoCheck                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   InCameraZOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::SetTalkModeFixed_Internal(class AActor* InOtherActor, class FName ViewParamId, bool bIsNoCheck, float InCameraZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "SetTalkModeFixed_Internal");

	Params::BP_ScriptActor_C_SetTalkModeFixed_Internal Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewParamId = ViewParamId;
	Parms.bIsNoCheck = bIsNoCheck;
	Parms.InCameraZOffset = InCameraZOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptActor.BP_ScriptActor_C.GetPlayerNeckJOffset
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ZOffset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptActor_C::GetPlayerNeckJOffset(float* ZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "GetPlayerNeckJOffset");

	Params::BP_ScriptActor_C_GetPlayerNeckJOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ZOffset != nullptr)
		*ZOffset = Parms.ZOffset;
}


// Function BP_ScriptActor.BP_ScriptActor_C.ClearPartyMigrationState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ScriptActor_C::ClearPartyMigrationState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptActor_C", "ClearPartyMigrationState");

	UObject::ProcessEvent(Func, nullptr);
}

}

