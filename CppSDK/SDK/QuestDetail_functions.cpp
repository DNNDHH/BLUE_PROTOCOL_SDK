#pragma once

 

// Package: QuestDetail

#include "Basic.hpp"

#include "QuestDetail_classes.hpp"
#include "QuestDetail_parameters.hpp"


namespace SDK
{

// Function QuestDetail.QuestDetail_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "OnFinish__DelegateSignature");

	Params::QuestDetail_C_OnFinish__DelegateSignature Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.ExecuteUbergraph_QuestDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::ExecuteUbergraph_QuestDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "ExecuteUbergraph_QuestDetail");

	Params::QuestDetail_C_ExecuteUbergraph_QuestDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestDetail_C::BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestDetail_C::BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UQuestDetail_C::BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.ChangeQuestInfoForQuestList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnableRouteGuideSw                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsClosed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::ChangeQuestInfoForQuestList(int32 InQuestIndex, bool IsEnableRouteGuideSw, bool IsClosed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "ChangeQuestInfoForQuestList");

	Params::QuestDetail_C_ChangeQuestInfoForQuestList Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.IsEnableRouteGuideSw = IsEnableRouteGuideSw;
	Parms.IsClosed = IsClosed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UQuestDetail_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.ChangeQuestInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnableRouteGuideSw                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::ChangeQuestInfo(int32 InQuestIndex, bool IsEnableRouteGuideSw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "ChangeQuestInfo");

	Params::QuestDetail_C_ChangeQuestInfo Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.IsEnableRouteGuideSw = IsEnableRouteGuideSw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetQuestInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnableRouteGuideSw                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::SetQuestInfo(int32 InQuestIndex, bool IsEnableRouteGuideSw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetQuestInfo");

	Params::QuestDetail_C_SetQuestInfo Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.IsEnableRouteGuideSw = IsEnableRouteGuideSw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.FinishResultCancel
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::FinishResultCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "FinishResultCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.SetThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::SetThumbnail(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetThumbnail");

	Params::QuestDetail_C_SetThumbnail Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.FinishResultNone
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::FinishResultNone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "FinishResultNone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.OnActionButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_ActionButtonType           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::OnActionButtonClicked(EQuestDetail_ActionButtonType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "OnActionButtonClicked");

	Params::QuestDetail_C_OnActionButtonClicked Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetail_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.OnFinish_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReported                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::OnFinish_Event_0(bool bReported)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "OnFinish_Event_0");

	Params::QuestDetail_C_OnFinish_Event_0 Parms{};

	Parms.bReported = bReported;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.ReportQuest
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::ReportQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "ReportQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.CancelQuest
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::CancelQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "CancelQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::CustomEvent(bool Result, int32 Param_QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "CustomEvent");

	Params::QuestDetail_C_CustomEvent Parms{};

	Parms.Result = Result;
	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.OnAcceptQuestDelegate_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EAcceptedQuestErrorCode                 ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               AcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestDetail_C::OnAcceptQuestDelegate_Event_0(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "OnAcceptQuestDelegate_Event_0");

	Params::QuestDetail_C_OnAcceptQuestDelegate_Event_0 Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;
	Parms.RetCode = RetCode;
	Parms.AcceptedQuestInfo = std::move(AcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.AcceptQuest
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::AcceptQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "AcceptQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.OnLoaded_430FBD6944474F8D28745AB2C5A082A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::OnLoaded_430FBD6944474F8D28745AB2C5A082A2(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "OnLoaded_430FBD6944474F8D28745AB2C5A082A2");

	Params::QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetQuestInfo_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnableRouteGuideSw                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::SetQuestInfo_Internal(int32 InQuestIndex, bool IsEnableRouteGuideSw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetQuestInfo_Internal");

	Params::QuestDetail_C_SetQuestInfo_Internal Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.IsEnableRouteGuideSw = IsEnableRouteGuideSw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestStatus                            InQuestStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestMasterData                 InQuestMasterData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestDetail_C::SetButton(EQuestStatus InQuestStatus, const struct FQuestMasterData& InQuestMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetButton");

	Params::QuestDetail_C_SetButton Parms{};

	Parms.InQuestStatus = InQuestStatus;
	Parms.InQuestMasterData = std::move(InQuestMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_ActionButtonType           ButtonType1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestDetail_ActionButtonType           ButtonType2                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bButtonEnable1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::SetButtonState(EQuestDetail_ActionButtonType ButtonType1, EQuestDetail_ActionButtonType ButtonType2, bool bButtonEnable1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetButtonState");

	Params::QuestDetail_C_SetButtonState Parms{};

	Parms.ButtonType1 = ButtonType1;
	Parms.ButtonType2 = ButtonType2;
	Parms.bButtonEnable1 = bButtonEnable1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InButton1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        InButton2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::SetButtonVisibility(ESlateVisibility InButton1, ESlateVisibility InButton2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetButtonVisibility");

	Params::QuestDetail_C_SetButtonVisibility Parms{};

	Parms.InButton1 = InButton1;
	Parms.InButton2 = InButton2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.GetThumbnailId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_QuestIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ThumbnailId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::GetThumbnailId(int32 Param_QuestIndex, class FName* ThumbnailId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "GetThumbnailId");

	Params::QuestDetail_C_GetThumbnailId Parms{};

	Parms.Param_QuestIndex = Param_QuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (ThumbnailId != nullptr)
		*ThumbnailId = Parms.ThumbnailId;
}


// Function QuestDetail.QuestDetail_C.CreateBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::CreateBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "CreateBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.DestroyBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::DestroyBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "DestroyBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.PlayActionButtonClickSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_ActionButtonType           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::PlayActionButtonClickSound(EQuestDetail_ActionButtonType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "PlayActionButtonClickSound");

	Params::QuestDetail_C_PlayActionButtonClickSound Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.CheckPrecondition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::CheckPrecondition(int32 InQuestIndex, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "CheckPrecondition");

	Params::QuestDetail_C_CheckPrecondition Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function QuestDetail.QuestDetail_C.ResetButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::ResetButtonEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "ResetButtonEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.SetPreviewMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bPreviewMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::SetPreviewMode(bool Param_bPreviewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetPreviewMode");

	Params::QuestDetail_C_SetPreviewMode Parms{};

	Parms.Param_bPreviewMode = Param_bPreviewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.TermRequesTiming
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::TermRequesTiming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "TermRequesTiming");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail.QuestDetail_C.SetQuestStatusText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestStatus                            InQuestStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::SetQuestStatusText(int32 InQuestIndex, EQuestStatus InQuestStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetQuestStatusText");

	Params::QuestDetail_C_SetQuestStatusText Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.InQuestStatus = InQuestStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.Set Repeat Count Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::Set_Repeat_Count_Text(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "Set Repeat Count Text");

	Params::QuestDetail_C_Set_Repeat_Count_Text Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.Get Quest Precondition Infos
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestStatus                            InQuestStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBQuestPreconditionUIInfo>OutUiInfo                                              (Parm, OutParm)

void UQuestDetail_C::Get_Quest_Precondition_Infos(int32 InQuestIndex, EQuestStatus InQuestStatus, TArray<struct FSBQuestPreconditionUIInfo>* OutUiInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "Get Quest Precondition Infos");

	Params::QuestDetail_C_Get_Quest_Precondition_Infos Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.InQuestStatus = InQuestStatus;

	UObject::ProcessEvent(Func, &Parms);

	if (OutUiInfo != nullptr)
		*OutUiInfo = std::move(Parms.OutUiInfo);
}


// Function QuestDetail.QuestDetail_C.SetPreviewModeEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InShowButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::SetPreviewModeEx(bool InShowButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetPreviewModeEx");

	Params::QuestDetail_C_SetPreviewModeEx Parms{};

	Parms.InShowButton = InShowButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetNextMainQuestMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_C::SetNextMainQuestMode(bool Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetNextMainQuestMode");

	Params::QuestDetail_C_SetNextMainQuestMode Parms{};

	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.SetActionButtonLabelCmn16
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCmnBtn16_C*                      CmnBtn16                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestDetail_ActionButtonType           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_C::SetActionButtonLabelCmn16(class UCmnBtn16_C* CmnBtn16, EQuestDetail_ActionButtonType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "SetActionButtonLabelCmn16");

	Params::QuestDetail_C_SetActionButtonLabelCmn16 Parms{};

	Parms.CmnBtn16 = CmnBtn16;
	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail.QuestDetail_C.Stop All Button Click Input Action
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_C::Stop_All_Button_Click_Input_Action()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_C", "Stop All Button Click Input Action");

	UObject::ProcessEvent(Func, nullptr);
}

}

