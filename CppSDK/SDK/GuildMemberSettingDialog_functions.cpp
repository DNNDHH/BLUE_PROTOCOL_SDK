#pragma once

 

// Package: GuildMemberSettingDialog

#include "Basic.hpp"

#include "GuildMemberSettingDialog_classes.hpp"
#include "GuildMemberSettingDialog_parameters.hpp"


namespace SDK
{

// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.ExecuteUbergraph_GuildMemberSettingDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::ExecuteUbergraph_GuildMemberSettingDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "ExecuteUbergraph_GuildMemberSettingDialog");

	Params::GuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnClose_FromPlayerReport
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OnClose_FromPlayerReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnClose_FromPlayerReport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenReportUI_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OpenReportUI_Event");

	Params::GuildMemberSettingDialog_C_OpenReportUI_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnAssumeLeader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OnAssumeLeader(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnAssumeLeader");

	Params::GuildMemberSettingDialog_C_OnAssumeLeader Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenAssumeLeader
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OpenAssumeLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OpenAssumeLeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenWithDraw
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OpenWithDraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OpenWithDraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenChangeLeader
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OpenChangeLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OpenChangeLeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenKick
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OpenKick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OpenKick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenChangeRole
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::OpenChangeRole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OpenChangeRole");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Param_MemberData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberSettingDialog_C::Open(const struct FGuildMemberData& Param_MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Open");

	Params::GuildMemberSettingDialog_C_Open Parms{};

	Parms.Param_MemberData = std::move(Param_MemberData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "PreConstruct");

	Params::GuildMemberSettingDialog_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberSettingDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Close
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");

	Params::GuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnWithDrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OnWithDrow(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnWithDrow");

	Params::GuildMemberSettingDialog_C_OnWithDrow Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberSettingDialog_C::BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnCompleteSetting_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OnCompleteSetting_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnCompleteSetting_Event");

	Params::GuildMemberSettingDialog_C_OnCompleteSetting_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnChangeRole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OnChangeRole(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnChangeRole");

	Params::GuildMemberSettingDialog_C_OnChangeRole Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnChangeLeader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OnChangeLeader(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnChangeLeader");

	Params::GuildMemberSettingDialog_C_OnChangeLeader Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnKicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberSettingDialog_C::OnKicked(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnKicked");

	Params::GuildMemberSettingDialog_C_OnKicked Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.GenerateGuildRole
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::GenerateGuildRole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "GenerateGuildRole");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMemberSettingDialog_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "GetGuildComp");

	Params::GuildMemberSettingDialog_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnComboBoxRoleGenerate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGuildMemberSettingDialog_C::OnComboBoxRoleGenerate(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "OnComboBoxRoleGenerate");

	Params::GuildMemberSettingDialog_C_OnComboBoxRoleGenerate Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.UpdateChangeBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuildMemberManageCBIcon_C*       CheckBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::UpdateChangeBtn(class UGuildMemberManageCBIcon_C* CheckBox, bool* IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "UpdateChangeBtn");

	Params::GuildMemberSettingDialog_C_UpdateChangeBtn Parms{};

	Parms.CheckBox = CheckBox;

	UObject::ProcessEvent(Func, &Parms);

	if (IsChecked != nullptr)
		*IsChecked = Parms.IsChecked;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsCBChecking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::IsCBChecking(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "IsCBChecking");

	Params::GuildMemberSettingDialog_C_IsCBChecking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitSelfMemberData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::InitSelfMemberData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "InitSelfMemberData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsGuildMaster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::IsGuildMaster(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "IsGuildMaster");

	Params::GuildMemberSettingDialog_C_IsGuildMaster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsGuildGrandMaster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::IsGuildGrandMaster(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "IsGuildGrandMaster");

	Params::GuildMemberSettingDialog_C_IsGuildGrandMaster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Update Menu State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bKick                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLeader                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAssumeLeader                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bWithDraw                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::Update_Menu_State(bool bKick, bool bLeader, bool bAssumeLeader, bool bWithDraw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Update Menu State");

	Params::GuildMemberSettingDialog_C_Update_Menu_State Parms{};

	Parms.bKick = bKick;
	Parms.bLeader = bLeader;
	Parms.bAssumeLeader = bAssumeLeader;
	Parms.bWithDraw = bWithDraw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.On_ComboBoxRole_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGuildMemberSettingDialog_C::On_ComboBoxRole_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "On_ComboBoxRole_GenerateWidget_0");

	Params::GuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Init Btn with Draw
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::Init_Btn_with_Draw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Init Btn with Draw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Is Self Selected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberSettingDialog_C::Is_Self_Selected(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "Is Self Selected");

	Params::GuildMemberSettingDialog_C_Is_Self_Selected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitRoleComboBox
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::InitRoleComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "InitRoleComboBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnKick
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::InitBtnKick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "InitBtnKick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnChangeLeader
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::InitBtnChangeLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "InitBtnChangeLeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnAssumeLeader
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::InitBtnAssumeLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "InitBtnAssumeLeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.CreateSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::CreateSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "CreateSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.DeleteSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::DeleteSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "DeleteSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnReport
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberSettingDialog_C::InitBtnReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberSettingDialog_C", "InitBtnReport");

	UObject::ProcessEvent(Func, nullptr);
}

}

