#pragma once

 

// Package: CommandMenu_Guild_Button

#include "Basic.hpp"

#include "CommandMenu_Guild_Button_classes.hpp"
#include "CommandMenu_Guild_Button_parameters.hpp"


namespace SDK
{

// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.OpenGuildMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenu_Guild_Button_C::OpenGuildMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "OpenGuildMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.ExecuteUbergraph_CommandMenu_Guild_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_Guild_Button_C::ExecuteUbergraph_CommandMenu_Guild_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "ExecuteUbergraph_CommandMenu_Guild_Button");

	Params::CommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.UpdateExclamation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_Guild_Button_C::UpdateExclamation(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "UpdateExclamation");

	Params::CommandMenu_Guild_Button_C_UpdateExclamation Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_Guild_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_Guild_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_Guild_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowParticipantSizeText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCommandMenu_Guild_Button_C::Get_NowParticipantSizeText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "Get_NowParticipantSizeText_Text_0");

	Params::CommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_ServerWaitText_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UCommandMenu_Guild_Button_C::Get_ServerWaitText_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "Get_ServerWaitText_Visibility_0");

	Params::CommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NeedParticipantSizeText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCommandMenu_Guild_Button_C::Get_NeedParticipantSizeText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "Get_NeedParticipantSizeText_Text_0");

	Params::CommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MatchingText_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UCommandMenu_Guild_Button_C::Get_MatchingText_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "Get_MatchingText_Visibility_0");

	Params::CommandMenu_Guild_Button_C_Get_MatchingText_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MaxConfirmCountText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCommandMenu_Guild_Button_C::Get_MaxConfirmCountText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "Get_MaxConfirmCountText_Text_0");

	Params::CommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowConfirmCountText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCommandMenu_Guild_Button_C::Get_NowConfirmCountText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "Get_NowConfirmCountText_Text_0");

	Params::CommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.PlayBtnAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_Guild_Button_C::PlayBtnAnim(bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "PlayBtnAnim");

	Params::CommandMenu_Guild_Button_C_PlayBtnAnim Parms{};

	Parms.bInActive = bInActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsUpdateMatch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_Guild_Button_C::IsUpdateMatch(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "IsUpdateMatch");

	Params::CommandMenu_Guild_Button_C_IsUpdateMatch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.SetBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_Guild_Button_C::SetBtn(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "SetBtn");

	Params::CommandMenu_Guild_Button_C_SetBtn Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsParticipantNumberCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_Guild_Button_C::IsParticipantNumberCompleted(bool* bCompleted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Guild_Button_C", "IsParticipantNumberCompleted");

	Params::CommandMenu_Guild_Button_C_IsParticipantNumberCompleted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;
}

}

