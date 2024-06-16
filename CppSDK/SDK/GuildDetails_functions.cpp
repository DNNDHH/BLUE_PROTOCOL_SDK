#pragma once

 

// Package: GuildDetails

#include "Basic.hpp"

#include "GuildDetails_classes.hpp"
#include "GuildDetails_parameters.hpp"


namespace SDK
{

// Function GuildDetails.GuildDetails_C.EventEdit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Edit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::EventEdit__DelegateSignature(bool Edit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "EventEdit__DelegateSignature");

	Params::GuildDetails_C_EventEdit__DelegateSignature Parms{};

	Parms.Edit = Edit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.ExecuteUbergraph_GuildDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::ExecuteUbergraph_GuildDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "ExecuteUbergraph_GuildDetails");

	Params::GuildDetails_C_ExecuteUbergraph_GuildDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildDetails_C::BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::GuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.SetGuildDetailsCloseBtnEnables
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::SetGuildDetailsCloseBtnEnables(bool InIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildDetailsCloseBtnEnables");

	Params::GuildDetails_C_SetGuildDetailsCloseBtnEnables Parms{};

	Parms.InIsEnable = InIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.InviteAcceptDecisionDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::InviteAcceptDecisionDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "InviteAcceptDecisionDialog");

	Params::GuildDetails_C_InviteAcceptDecisionDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.InviteRefuseDecisionDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::InviteRefuseDecisionDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "InviteRefuseDecisionDialog");

	Params::GuildDetails_C_InviteRefuseDecisionDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.EntryRefuseDecisionDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::EntryRefuseDecisionDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "EntryRefuseDecisionDialog");

	Params::GuildDetails_C_EntryRefuseDecisionDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::CustomEvent_1(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "CustomEvent_1");

	Params::GuildDetails_C_CustomEvent_1 Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildDetails_C::CustomEvent_0(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "CustomEvent_0");

	Params::GuildDetails_C_CustomEvent_0 Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.OnCompletedGuildEntry_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::OnCompletedGuildEntry_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "OnCompletedGuildEntry_Event");

	Params::GuildDetails_C_OnCompletedGuildEntry_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.OnCloseEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           OnButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildDetails_C::OnCloseEntry(EDialogResult OnButton, const class FText& InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "OnCloseEntry");

	Params::GuildDetails_C_OnCloseEntry Parms{};

	Parms.OnButton = OnButton;
	Parms.InputText = std::move(InputText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.Set ShowEntryMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFromPlayerProfile                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::Set_ShowEntryMode(bool bFromPlayerProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "Set ShowEntryMode");

	Params::GuildDetails_C_Set_ShowEntryMode Parms{};

	Parms.bFromPlayerProfile = bFromPlayerProfile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.OnGuildNameChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::OnGuildNameChanged(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "OnGuildNameChanged");

	Params::GuildDetails_C_OnGuildNameChanged Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.OnComplete GuildDataChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuildData                       InGuildData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildDetails_C::OnComplete_GuildDataChanged(const int32 RetCode, const struct FGuildData& InGuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "OnComplete GuildDataChanged");

	Params::GuildDetails_C_OnComplete_GuildDataChanged Parms{};

	Parms.RetCode = RetCode;
	Parms.InGuildData = std::move(InGuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.BindChanged
// (BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::BindChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BindChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.On Change GuildData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::On_Change_GuildData(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "On Change GuildData");

	Params::GuildDetails_C_On_Change_GuildData Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.CounstructChangeData
// (BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::CounstructChangeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "CounstructChangeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::GuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.DenyEditable
// (BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::DenyEditable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "DenyEditable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.LeaveEditMode
// (BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::LeaveEditMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "LeaveEditMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.EnterEditMode
// (BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::EnterEditMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "EnterEditMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildDetails_C::BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.InitalizeGuildData
// (BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::InitalizeGuildData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "InitalizeGuildData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "PreConstruct");

	Params::GuildDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.SetGuildData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildData                       Param_GuildData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   ButtonsSwitcherIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetails_C::SetGuildData(const struct FGuildData& Param_GuildData, int32 ButtonsSwitcherIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildData");

	Params::GuildDetails_C_SetGuildData Parms{};

	Parms.Param_GuildData = std::move(Param_GuildData);
	Parms.ButtonsSwitcherIndex = ButtonsSwitcherIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.GenerateAttributes
// (Protected, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::GenerateAttributes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "GenerateAttributes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.GenerateTimes
// (Protected, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::GenerateTimes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "GenerateTimes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.Set EditMode Attributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bisEditMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::Set_EditMode_Attributes(bool Param_bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "Set EditMode Attributes");

	Params::GuildDetails_C_Set_EditMode_Attributes Parms{};

	Parms.Param_bisEditMode = Param_bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.Set EditMode Times
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bisEditMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::Set_EditMode_Times(bool Param_bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "Set EditMode Times");

	Params::GuildDetails_C_Set_EditMode_Times Parms{};

	Parms.Param_bisEditMode = Param_bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildDetails_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "GetGuildComp");

	Params::GuildDetails_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildDetails.GuildDetails_C.GetAttributes
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EGuildAttribute>                 Ret_Attrib                                             (Parm, OutParm)

void UGuildDetails_C::GetAttributes(TArray<EGuildAttribute>* Ret_Attrib)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "GetAttributes");

	Params::GuildDetails_C_GetAttributes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret_Attrib != nullptr)
		*Ret_Attrib = std::move(Parms.Ret_Attrib);
}


// Function GuildDetails.GuildDetails_C.Get Times
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<ESBGuildActivityTime>            Ret_Times                                              (Parm, OutParm)

void UGuildDetails_C::Get_Times(TArray<ESBGuildActivityTime>* Ret_Times)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "Get Times");

	Params::GuildDetails_C_Get_Times Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret_Times != nullptr)
		*Ret_Times = std::move(Parms.Ret_Times);
}


// Function GuildDetails.GuildDetails_C.SetGuildNameInfos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildNameInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildNameInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.SetGuildIdInfos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildIdInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildIdInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.SetGuildComment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildComment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildComment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.Set Guild Leader Infos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::Set_Guild_Leader_Infos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "Set Guild Leader Infos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.SetGuildAcceptTypeInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildAcceptTypeInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildAcceptTypeInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.SetGuildExperienceInfos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildExperienceInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildExperienceInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.SetGuildMemberInfos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildMemberInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildMemberInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.SetGuildTimeInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildDetails_C::SetGuildTimeInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "SetGuildTimeInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetails.GuildDetails_C.CheckGuildComment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildDetails_C::CheckGuildComment(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "CheckGuildComment");

	Params::GuildDetails_C_CheckGuildComment Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetails.GuildDetails_C.IsAbleToSendGuildEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetails_C::IsAbleToSendGuildEntry(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetails_C", "IsAbleToSendGuildEntry");

	Params::GuildDetails_C_IsAbleToSendGuildEntry Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}

