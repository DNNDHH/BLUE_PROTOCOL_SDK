#pragma once

 

// Package: CountdownUI

#include "Basic.hpp"

#include "CountdownUI_classes.hpp"
#include "CountdownUI_parameters.hpp"


namespace SDK
{

// Function CountdownUI.CountdownUI_C.OnCountdownEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::OnCountdownEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnCountdownEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.OnCountdownCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::OnCountdownCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnCountdownCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.ExecuteUbergraph_CountdownUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::ExecuteUbergraph_CountdownUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "ExecuteUbergraph_CountdownUI");

	Params::CountdownUI_C_ExecuteUbergraph_CountdownUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.UIVisibleSettingChangeDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::UIVisibleSettingChangeDelegate_Event(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "UIVisibleSettingChangeDelegate_Event");

	Params::CountdownUI_C_UIVisibleSettingChangeDelegate_Event Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.UnbindCountdownCancelDelegate
// (BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::UnbindCountdownCancelDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "UnbindCountdownCancelDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.StartNoCountdown_BattleAreaMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::StartNoCountdown_BattleAreaMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "StartNoCountdown_BattleAreaMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCountdownUI_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnAnimationFinished");

	Params::CountdownUI_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.OnCountdownInteractionDelegate_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::OnCountdownInteractionDelegate_____(bool bPress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnCountdownInteractionDelegate_����");

	Params::CountdownUI_C_OnCountdownInteractionDelegate_____ Parms{};

	Parms.bPress = bPress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.OnCountdownCancelDelegate_����
// (BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::OnCountdownCancelDelegate_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnCountdownCancelDelegate_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.StartNoCountdown_ECountdownType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECountdownType                          InCountdownType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::StartNoCountdown_ECountdownType(const ECountdownType InCountdownType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "StartNoCountdown_ECountdownType");

	Params::CountdownUI_C_StartNoCountdown_ECountdownType Parms{};

	Parms.InCountdownType = InCountdownType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.StartNoCountdown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCountdownUI_C::StartNoCountdown(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "StartNoCountdown");

	Params::CountdownUI_C_StartNoCountdown Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.OnReleaseInteraction
// (BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::OnReleaseInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnReleaseInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.OnPressInteraction
// (BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::OnPressInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "OnPressInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.StartCountdown_ECountdownType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECountdownType                          InCountdownType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCountdownTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::StartCountdown_ECountdownType(const ECountdownType InCountdownType, const int32 InCountdownTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "StartCountdown_ECountdownType");

	Params::CountdownUI_C_StartCountdown_ECountdownType Parms{};

	Parms.InCountdownType = InCountdownType;
	Parms.InCountdownTime = InCountdownTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECountdownResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::Hide(ECountdownResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "Hide");

	Params::CountdownUI_C_Hide Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.StartCountdown
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InCountdownTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::StartCountdown(const class FText& InMessage, const int32 InCountdownTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "StartCountdown");

	Params::CountdownUI_C_StartCountdown Parms{};

	Parms.InMessage = std::move(InMessage);
	Parms.InCountdownTime = InCountdownTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.BeginInteractionWait
// (BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::BeginInteractionWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "BeginInteractionWait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "Tick");

	Params::CountdownUI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCountdownUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.SetMessageText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsCountdown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::SetMessageText(const class FText& InText, bool IsCountdown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "SetMessageText");

	Params::CountdownUI_C_SetMessageText Parms{};

	Parms.InText = std::move(InText);
	Parms.IsCountdown = IsCountdown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.SetCountdownTimeValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::SetCountdownTimeValueText(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "SetCountdownTimeValueText");

	Params::CountdownUI_C_SetCountdownTimeValueText Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.SetCountdownTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::SetCountdownTime(int32 InTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "SetCountdownTime");

	Params::CountdownUI_C_SetCountdownTime Parms{};

	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.SetMessageTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCountdown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::SetMessageTextId(int32 InTextID, bool IsCountdown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "SetMessageTextId");

	Params::CountdownUI_C_SetMessageTextId Parms{};

	Parms.InTextID = InTextID;
	Parms.IsCountdown = IsCountdown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.IsChatModeActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::IsChatModeActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "IsChatModeActive");

	Params::CountdownUI_C_IsChatModeActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function CountdownUI.CountdownUI_C.UpdateInteractionGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UCountdownUI_C::UpdateInteractionGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "UpdateInteractionGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownUI.CountdownUI_C.SetBlockInputForCountdownUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBlockInput                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::SetBlockInputForCountdownUI(bool InBlockInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "SetBlockInputForCountdownUI");

	Params::CountdownUI_C_SetBlockInputForCountdownUI Parms{};

	Parms.InBlockInput = InBlockInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownUI.CountdownUI_C.CheckCountCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NotCancel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCountdownUI_C::CheckCountCancel(bool* NotCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "CheckCountCancel");

	Params::CountdownUI_C_CheckCountCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NotCancel != nullptr)
		*NotCancel = Parms.NotCancel;
}


// Function CountdownUI.CountdownUI_C.SetYPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Y                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownUI_C::SetYPosition(float Y)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownUI_C", "SetYPosition");

	Params::CountdownUI_C_SetYPosition Parms{};

	Parms.Y = Y;

	UObject::ProcessEvent(Func, &Parms);
}

}

