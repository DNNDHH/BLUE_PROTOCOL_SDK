#pragma once

 

// Package: SystemMessage

#include "Basic.hpp"

#include "SystemMessage_classes.hpp"
#include "SystemMessage_parameters.hpp"


namespace SDK
{

// Function SystemMessage.SystemMessage_C.OnEndMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USystemMessage_C::OnEndMessage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "OnEndMessage__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.ExecuteUbergraph_SystemMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMessage_C::ExecuteUbergraph_SystemMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "ExecuteUbergraph_SystemMessage");

	Params::SystemMessage_C_ExecuteUbergraph_SystemMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessage.SystemMessage_C.SetDoNotSkip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bDoNotSkip                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMessage_C::SetDoNotSkip(bool Param_bDoNotSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "SetDoNotSkip");

	Params::SystemMessage_C_SetDoNotSkip Parms{};

	Parms.Param_bDoNotSkip = Param_bDoNotSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessage.SystemMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USystemMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.EndMessage
// (BlueprintCallable, BlueprintEvent)

void USystemMessage_C::EndMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "EndMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.TryEnd
// (BlueprintCallable, BlueprintEvent)

void USystemMessage_C::TryEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "TryEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.StartMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Message                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USystemMessage_C::StartMessage(const class FText& Param_Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "StartMessage");

	Params::SystemMessage_C_StartMessage Parms{};

	Parms.Param_Message = std::move(Param_Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessage.SystemMessage_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMessage_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "OnAnimationFinished");

	Params::SystemMessage_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessage.SystemMessage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USystemMessage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USystemMessage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "Tick");

	Params::SystemMessage_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessage.SystemMessage_C.SetSkipMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSkipMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMessage_C::SetSkipMessage(bool Param_IsSkipMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "SetSkipMessage");

	Params::SystemMessage_C_SetSkipMessage Parms{};

	Parms.Param_IsSkipMode = Param_IsSkipMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SystemMessage.SystemMessage_C.OnPlayCloseSE
// (BlueprintCallable, BlueprintEvent)

void USystemMessage_C::OnPlayCloseSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "OnPlayCloseSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.IsShowRequestLeft
// (Public, BlueprintCallable, BlueprintEvent)

void USystemMessage_C::IsShowRequestLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "IsShowRequestLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.SetToDefaultPosition
// (Public, BlueprintCallable, BlueprintEvent)

void USystemMessage_C::SetToDefaultPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "SetToDefaultPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.SetToLowerPosition
// (Public, BlueprintCallable, BlueprintEvent)

void USystemMessage_C::SetToLowerPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "SetToLowerPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SystemMessage.SystemMessage_C.SetThisDeletedEndAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bThisDeletedEndAnim                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USystemMessage_C::SetThisDeletedEndAnim(bool Param_bThisDeletedEndAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SystemMessage_C", "SetThisDeletedEndAnim");

	Params::SystemMessage_C_SetThisDeletedEndAnim Parms{};

	Parms.Param_bThisDeletedEndAnim = Param_bThisDeletedEndAnim;

	UObject::ProcessEvent(Func, &Parms);
}

}

