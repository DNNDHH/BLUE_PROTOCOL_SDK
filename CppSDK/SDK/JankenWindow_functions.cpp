#pragma once

 

// Package: JankenWindow

#include "Basic.hpp"

#include "JankenWindow_classes.hpp"
#include "JankenWindow_parameters.hpp"


namespace SDK
{

// Function JankenWindow.JankenWindow_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UJankenWindow_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JankenWindow.JankenWindow_C.ExecuteUbergraph_JankenWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJankenWindow_C::ExecuteUbergraph_JankenWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "ExecuteUbergraph_JankenWindow");

	Params::JankenWindow_C_ExecuteUbergraph_JankenWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JankenWindow.JankenWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UJankenWindow_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JankenWindow.JankenWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UJankenWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JankenWindow.JankenWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJankenWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JankenWindow.JankenWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJankenWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "Tick");

	Params::JankenWindow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JankenWindow.JankenWindow_C.Close
// (BlueprintCallable, BlueprintEvent)

void UJankenWindow_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JankenWindow.JankenWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJankenWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JankenWindow.JankenWindow_C.SetTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InTimer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJankenWindow_C::SetTimer(float InTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "SetTimer");

	Params::JankenWindow_C_SetTimer Parms{};

	Parms.InTimer = InTimer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JankenWindow.JankenWindow_C.SelectButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJankenWindow_C::SelectButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "SelectButton");

	Params::JankenWindow_C_SelectButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JankenWindow.JankenWindow_C.JankenResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJankenWindow_C::JankenResult(bool* BResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "JankenResult");

	Params::JankenWindow_C_JankenResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BResult != nullptr)
		*BResult = Parms.BResult;
}


// Function JankenWindow.JankenWindow_C.GetJankenHandText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBJankenHandType                       InHnadType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UJankenWindow_C::GetJankenHandText(ESBJankenHandType InHnadType, class FString* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "GetJankenHandText");

	Params::JankenWindow_C_GetJankenHandText Parms{};

	Parms.InHnadType = InHnadType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function JankenWindow.JankenWindow_C.GetResultText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBJankenHandType                       MyHandType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBJankenHandType                       TargetHandType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UJankenWindow_C::GetResultText(ESBJankenHandType MyHandType, ESBJankenHandType TargetHandType, class FString* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "GetResultText");

	Params::JankenWindow_C_GetResultText Parms{};

	Parms.MyHandType = MyHandType;
	Parms.TargetHandType = TargetHandType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function JankenWindow.JankenWindow_C.GetJointGestureComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBJointGestureComponent*         OutJointGestureComponent                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJankenWindow_C::GetJointGestureComponent(bool* IsValid, class USBJointGestureComponent** OutJointGestureComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JankenWindow_C", "GetJointGestureComponent");

	Params::JankenWindow_C_GetJointGestureComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutJointGestureComponent != nullptr)
		*OutJointGestureComponent = Parms.OutJointGestureComponent;
}

}

