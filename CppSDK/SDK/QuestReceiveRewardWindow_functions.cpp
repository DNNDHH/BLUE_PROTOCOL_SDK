#pragma once

 

// Package: QuestReceiveRewardWindow

#include "Basic.hpp"

#include "QuestReceiveRewardWindow_classes.hpp"
#include "QuestReceiveRewardWindow_parameters.hpp"


namespace SDK
{

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReported                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestReceiveRewardWindow_C::OnFinish__DelegateSignature(bool bReported)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnFinish__DelegateSignature");

	Params::QuestReceiveRewardWindow_C_OnFinish__DelegateSignature Parms{};

	Parms.bReported = bReported;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.ExecuteUbergraph_QuestReceiveRewardWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::ExecuteUbergraph_QuestReceiveRewardWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "ExecuteUbergraph_QuestReceiveRewardWindow");

	Params::QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnPressedCancel
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::OnPressedCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnPressedCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnCancelConfirmEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::OnCancelConfirmEnd(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnCancelConfirmEnd");

	Params::QuestReceiveRewardWindow_C_OnCancelConfirmEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnAnimationFinished");

	Params::QuestReceiveRewardWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_57_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestReceiveRewardWindow_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_57_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_57_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.BndEvt__Btn2_K2Node_ComponentBoundEvent_46_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestReceiveRewardWindow_C::BndEvt__Btn2_K2Node_ComponentBoundEvent_46_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "BndEvt__Btn2_K2Node_ComponentBoundEvent_46_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReported                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bEnableBlocker                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestReceiveRewardWindow_C::Close(bool bReported, bool bEnableBlocker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Close");

	Params::QuestReceiveRewardWindow_C_Close Parms{};

	Parms.bReported = bReported;
	Parms.bEnableBlocker = bEnableBlocker;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnToggleCheck_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCheck                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestRewardIcon_C*               Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::OnToggleCheck_Event_0(bool IsCheck, class UQuestRewardIcon_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnToggleCheck_Event_0");

	Params::QuestReceiveRewardWindow_C_OnToggleCheck_Event_0 Parms{};

	Parms.IsCheck = IsCheck;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestReceiveRewardWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestReceiveRewardWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnCloseMailAttachmentResult
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::OnCloseMailAttachmentResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnCloseMailAttachmentResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Event_AcceptedQuestReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLimitDiscard                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLimitSell                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestReceiveRewardWindow_C::Event_AcceptedQuestReport(bool bIsLimitDiscard, bool bIsLimitSell)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Event_AcceptedQuestReport");

	Params::QuestReceiveRewardWindow_C_Event_AcceptedQuestReport Parms{};

	Parms.bIsLimitDiscard = bIsLimitDiscard;
	Parms.bIsLimitSell = bIsLimitSell;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Event_UnbindCompleteQuestDelegate
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::Event_UnbindCompleteQuestDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Event_UnbindCompleteQuestDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::CustomEvent_1(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "CustomEvent_1");

	Params::QuestReceiveRewardWindow_C_CustomEvent_1 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Event_OnCompleteQuest_Completed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCompleteResult                    CompleteResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailRewardData                MailRewardData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestReceiveRewardWindow_C::Event_OnCompleteQuest_Completed(int32 RetCode, int32 Param_QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Event_OnCompleteQuest_Completed");

	Params::QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed Parms{};

	Parms.RetCode = RetCode;
	Parms.Param_QuestIndex = Param_QuestIndex;
	Parms.CompleteResult = CompleteResult;
	Parms.MailRewardData = std::move(MailRewardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.�������_2
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::_________2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "�������_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.�������_1
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::_________1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "�������_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Event_AcceptedQuestReportMailWinodw
// (BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::Event_AcceptedQuestReportMailWinodw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Event_AcceptedQuestReportMailWinodw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.SetQuestInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::SetQuestInfo(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "SetQuestInfo");

	Params::QuestReceiveRewardWindow_C_SetQuestInfo Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.HasSelectReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FRewardInfo>              InRewards                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bRet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestReceiveRewardWindow_C::HasSelectReward(TArray<struct FRewardInfo>& InRewards, bool* bRet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "HasSelectReward");

	Params::QuestReceiveRewardWindow_C_HasSelectReward Parms{};

	Parms.InRewards = std::move(InRewards);

	UObject::ProcessEvent(Func, &Parms);

	InRewards = std::move(Parms.InRewards);

	if (bRet != nullptr)
		*bRet = Parms.bRet;
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnChangeSelectReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestRewardIcon_C*               bInWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::OnChangeSelectReward(bool bInCheck, class UQuestRewardIcon_C* bInWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "OnChangeSelectReward");

	Params::QuestReceiveRewardWindow_C_OnChangeSelectReward Parms{};

	Parms.bInCheck = bInCheck;
	Parms.bInWidget = bInWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.GetThumbnailId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ThumbnailId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::GetThumbnailId(int32 Param_QuestIndex, class FName* ThumbnailId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "GetThumbnailId");

	Params::QuestReceiveRewardWindow_C_GetThumbnailId Parms{};

	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (ThumbnailId != nullptr)
		*ThumbnailId = Parms.ThumbnailId;
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.DestroyBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestReceiveRewardWindow_C::DestroyBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "DestroyBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Is Quest Board Quest
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsQuestBoard                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestReceiveRewardWindow_C::Is_Quest_Board_Quest(bool* bIsQuestBoard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "Is Quest Board Quest");

	Params::QuestReceiveRewardWindow_C_Is_Quest_Board_Quest Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsQuestBoard != nullptr)
		*bIsQuestBoard = Parms.bIsQuestBoard;
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.GetSelectRewardIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   OutRewardIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestReceiveRewardWindow_C::GetSelectRewardIndex(int32* OutRewardIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "GetSelectRewardIndex");

	Params::QuestReceiveRewardWindow_C_GetSelectRewardIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRewardIndex != nullptr)
		*OutRewardIndex = Parms.OutRewardIndex;
}


// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.ShouldAddCommonRewardList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRewardInfo                      RewardInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestReceiveRewardWindow_C::ShouldAddCommonRewardList(struct FRewardInfo& RewardInfo, bool* bResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestReceiveRewardWindow_C", "ShouldAddCommonRewardList");

	Params::QuestReceiveRewardWindow_C_ShouldAddCommonRewardList Parms{};

	Parms.RewardInfo = std::move(RewardInfo);

	UObject::ProcessEvent(Func, &Parms);

	RewardInfo = std::move(Parms.RewardInfo);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}

