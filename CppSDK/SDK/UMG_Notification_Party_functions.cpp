#pragma once

 

// Package: UMG_Notification_Party

#include "Basic.hpp"

#include "UMG_Notification_Party_classes.hpp"
#include "UMG_Notification_Party_parameters.hpp"


namespace SDK
{

// Function UMG_Notification_Party.UMG_Notification_Party_C.ExecuteUbergraph_UMG_Notification_Party
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::ExecuteUbergraph_UMG_Notification_Party(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "ExecuteUbergraph_UMG_Notification_Party");

	Params::UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyMemberUpdate_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnPartyMemberUpdate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnPartyMemberUpdate_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.GetResultSimplycityPartyStateChangeDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::GetResultSimplycityPartyStateChangeDialog(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "GetResultSimplycityPartyStateChangeDialog");

	Params::UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.CloseSimplycityPartyStateChangeDialog
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::CloseSimplycityPartyStateChangeDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "CloseSimplycityPartyStateChangeDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.SimplycityPartyStateChange_OnMatching
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::SimplycityPartyStateChange_OnMatching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "SimplycityPartyStateChange_OnMatching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.PartyUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_NotificationPartyStatus               Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::PartyUpdate(E_NotificationPartyStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "PartyUpdate");

	Params::UMG_Notification_Party_C_PartyUpdate Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnJoinInviteParty_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnJoinInviteParty_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnJoinInviteParty_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyInviteReceived_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnPartyInviteReceived_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnPartyInviteReceived_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnChangeInvitePartyConvocationDelagateDialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::OnChangeInvitePartyConvocationDelagateDialogResult(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnChangeInvitePartyConvocationDelagateDialogResult");

	Params::UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.DialogEndCheck
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::DialogEndCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "DialogEndCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Notification_Party_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Notification_Party_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnChangeInvitePartyConvocationDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanceled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MigrationResponseCode                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::OnChangeInvitePartyConvocationDelegate_Event(bool bCanceled, int32 MigrationResponseCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnChangeInvitePartyConvocationDelegate_Event");

	Params::UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event Parms{};

	Parms.bCanceled = bCanceled;
	Parms.MigrationResponseCode = MigrationResponseCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Tick");

	Params::UMG_Notification_Party_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.CloseMigrationAnswerDialog
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::CloseMigrationAnswerDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "CloseMigrationAnswerDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.PartyMigrationAnswer_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::PartyMigrationAnswer_Event(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "PartyMigrationAnswer_Event");

	Params::UMG_Notification_Party_C_PartyMigrationAnswer_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OpenMigrationAnswerDialog
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OpenMigrationAnswerDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OpenMigrationAnswerDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OpenProfile
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OpenProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OpenProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OpenNotificationDialog
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OpenNotificationDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OpenNotificationDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "CloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnResponsedGetPlayerProfile
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::OnResponsedGetPlayerProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnResponsedGetPlayerProfile");

	Params::UMG_Notification_Party_C_OnResponsedGetPlayerProfile Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnDestruct_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     RetData                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Notification_Party_C::OnDestruct_Event(const struct FPlayerProfileMenuDetailData& RetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnDestruct_Event");

	Params::UMG_Notification_Party_C_OnDestruct_Event Parms{};

	Parms.RetData = std::move(RetData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyInviteResponse_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::OnPartyInviteResponse_Event(bool IsAccept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnPartyInviteResponse_Event");

	Params::UMG_Notification_Party_C_OnPartyInviteResponse_Event Parms{};

	Parms.IsAccept = IsAccept;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnCancelMatching_Dialog_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::OnCancelMatching_Dialog_Event(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnCancelMatching_Dialog_Event");

	Params::UMG_Notification_Party_C_OnCancelMatching_Dialog_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnReserve
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnBtnReserve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnBtnReserve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnProfile
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnBtnProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnBtnProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnAccept
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnBtnAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnBtnAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnCancel
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnBtnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnBtnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.GetResultMultipleDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::GetResultMultipleDialog(int32 Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "GetResultMultipleDialog");

	Params::UMG_Notification_Party_C_GetResultMultipleDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.ChangeKeyGuide
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::ChangeKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "ChangeKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.OnUpdateKeyConfig
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::OnUpdateKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "OnUpdateKeyConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Get_InviteReceived_Visibility_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUMG_Notification_Party_C::Get_InviteReceived_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Get_InviteReceived_Visibility_0");

	Params::UMG_Notification_Party_C_Get_InviteReceived_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Get_JumpConvocation_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUMG_Notification_Party_C::Get_JumpConvocation_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Get_JumpConvocation_Visibility_0");

	Params::UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Get_InviteReceived_CountText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_Notification_Party_C::Get_InviteReceived_CountText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Get_InviteReceived_CountText_Text_0");

	Params::UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.GetQuickAccessKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::GetQuickAccessKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "GetQuickAccessKeyText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.GetOperateMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::GetOperateMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "GetOperateMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.SetPartyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       OutText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             BaseText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Notification_Party_C::SetPartyText(class UTextBlock* OutText, const class FText& BaseText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "SetPartyText");

	Params::UMG_Notification_Party_C_SetPartyText Parms{};

	Parms.OutText = OutText;
	Parms.BaseText = std::move(BaseText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.CanAcceptInvite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::CanAcceptInvite(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "CanAcceptInvite");

	Params::UMG_Notification_Party_C_CanAcceptInvite Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.CanCreateInviteMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::CanCreateInviteMessage(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "CanCreateInviteMessage");

	Params::UMG_Notification_Party_C_CanCreateInviteMessage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.PartyMigrationAnswerRemainTimeCounter
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::PartyMigrationAnswerRemainTimeCounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "PartyMigrationAnswerRemainTimeCounter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.GetCurrentPartyMemberStateGeneral
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberStateGeneral*       CurrentPartyMemberStateGeneral                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::GetCurrentPartyMemberStateGeneral(class USBPartyMemberStateGeneral** CurrentPartyMemberStateGeneral)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "GetCurrentPartyMemberStateGeneral");

	Params::UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPartyMemberStateGeneral != nullptr)
		*CurrentPartyMemberStateGeneral = Parms.CurrentPartyMemberStateGeneral;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.IsOwningPlayerPartyLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_Notification_Party_C::IsOwningPlayerPartyLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "IsOwningPlayerPartyLeader");

	Params::UMG_Notification_Party_C_IsOwningPlayerPartyLeader Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.HideNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::HideNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "HideNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Can Open Party Member Migration Dialog
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::Can_Open_Party_Member_Migration_Dialog(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Can Open Party Member Migration Dialog");

	Params::UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.ResetPartyDialogState
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::ResetPartyDialogState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "ResetPartyDialogState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.NotificationConvocationMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::NotificationConvocationMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "NotificationConvocationMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Get Status Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_Notification_Party_C::Get_Status_Time()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Get Status Time");

	Params::UMG_Notification_Party_C_Get_Status_Time Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.Get Change Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Tiem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Party_C::Get_Change_Time(float* Tiem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "Get Change Time");

	Params::UMG_Notification_Party_C_Get_Change_Time Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Tiem != nullptr)
		*Tiem = Parms.Tiem;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.IsPress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Press                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::IsPress(bool* Press)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "IsPress");

	Params::UMG_Notification_Party_C_IsPress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Press != nullptr)
		*Press = Parms.Press;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.IsPressStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Press                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::IsPressStatus(bool* Press)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "IsPressStatus");

	Params::UMG_Notification_Party_C_IsPressStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Press != nullptr)
		*Press = Parms.Press;
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.MatchStateObserver
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Party_C::MatchStateObserver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "MatchStateObserver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Party.UMG_Notification_Party_C.IsSimplycityPartyStateChangeBase
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Notification_Party_C::IsSimplycityPartyStateChangeBase(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Party_C", "IsSimplycityPartyStateChangeBase");

	Params::UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}

