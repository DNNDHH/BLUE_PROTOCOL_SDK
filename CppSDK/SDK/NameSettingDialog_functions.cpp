#pragma once

 

// Package: NameSettingDialog

#include "Basic.hpp"

#include "NameSettingDialog_classes.hpp"
#include "NameSettingDialog_parameters.hpp"


namespace SDK
{

// Function NameSettingDialog.NameSettingDialog_C.OnEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_PlayerName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNameSettingDialog_C::OnEnter__DelegateSignature(const class FString& Param_PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "OnEnter__DelegateSignature");

	Params::NameSettingDialog_C_OnEnter__DelegateSignature Parms{};

	Parms.Param_PlayerName = std::move(Param_PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.OnClickedButtonFullScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::OnClickedButtonFullScreen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "OnClickedButtonFullScreen__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.ExecuteUbergraph_NameSettingDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameSettingDialog_C::ExecuteUbergraph_NameSettingDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "ExecuteUbergraph_NameSettingDialog");

	Params::NameSettingDialog_C_ExecuteUbergraph_NameSettingDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.VisibleTicketGrp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   NameChangeTicketCount                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameSettingDialog_C::VisibleTicketGrp(bool Visible, int32 NameChangeTicketCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "VisibleTicketGrp");

	Params::NameSettingDialog_C_VisibleTicketGrp Parms{};

	Parms.Visible = Visible;
	Parms.NameChangeTicketCount = NameChangeTicketCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNameSettingDialog_C::BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UNameSettingDialog_C::BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.DecisonDialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameSettingDialog_C::DecisonDialogResult(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "DecisonDialogResult");

	Params::NameSettingDialog_C_DecisonDialogResult Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNameSettingDialog_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNameSettingDialog_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNameSettingDialog_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameSettingDialog_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "OnAnimationFinished");

	Params::NameSettingDialog_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UNameSettingDialog_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.UpdateNameText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNameSettingDialog_C::UpdateNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "UpdateNameText");

	Params::NameSettingDialog_C_UpdateNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.MessageDecideProc
// (BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::MessageDecideProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "MessageDecideProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNameSettingDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNameSettingDialog_C::BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameSettingDialog_C::BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::NameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNameSettingDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.IsNameEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNameSettingDialog_C::IsNameEnable(const class FText& InText, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "IsNameEnable");

	Params::NameSettingDialog_C_IsNameEnable Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function NameSettingDialog.NameSettingDialog_C.Setting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InMainMessageTextID                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSubMessageTextID                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTextMaxCnt                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           StartInputName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNameSettingDialog_C::Setting(int32 InMainMessageTextID, int32 InSubMessageTextID, int32 InTextMaxCnt, const class FString& StartInputName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "Setting");

	Params::NameSettingDialog_C_Setting Parms{};

	Parms.InMainMessageTextID = InMainMessageTextID;
	Parms.InSubMessageTextID = InSubMessageTextID;
	Parms.InTextMaxCnt = InTextMaxCnt;
	Parms.StartInputName = std::move(StartInputName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.SetNameInputEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNameSettingDialog_C::SetNameInputEnable(bool InIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "SetNameInputEnable");

	Params::NameSettingDialog_C_SetNameInputEnable Parms{};

	Parms.InIsEnable = InIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.SetGameInMode
// (Public, BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::SetGameInMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "SetGameInMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.SetGameOutMode
// (Public, BlueprintCallable, BlueprintEvent)

void UNameSettingDialog_C::SetGameOutMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "SetGameOutMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NameSettingDialog.NameSettingDialog_C.SetOptionDecideText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_OptionDecideText                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNameSettingDialog_C::SetOptionDecideText(const class FString& Param_OptionDecideText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "SetOptionDecideText");

	Params::NameSettingDialog_C_SetOptionDecideText Parms{};

	Parms.Param_OptionDecideText = std::move(Param_OptionDecideText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.SetMainMessageText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNameSettingDialog_C::SetMainMessageText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "SetMainMessageText");

	Params::NameSettingDialog_C_SetMainMessageText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameSettingDialog.NameSettingDialog_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UNameSettingDialog_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameSettingDialog_C", "GetToolTipWidget_0");

	Params::NameSettingDialog_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

