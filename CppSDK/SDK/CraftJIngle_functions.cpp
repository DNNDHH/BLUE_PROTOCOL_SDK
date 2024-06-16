#pragma once

 

// Package: CraftJIngle

#include "Basic.hpp"

#include "CraftJIngle_classes.hpp"
#include "CraftJIngle_parameters.hpp"


namespace SDK
{

// Function CraftJIngle.CraftJIngle_C.OnAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCraftJIngle_C::OnAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "OnAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftJIngle.CraftJIngle_C.ExecuteUbergraph_CraftJIngle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftJIngle_C::ExecuteUbergraph_CraftJIngle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "ExecuteUbergraph_CraftJIngle");

	Params::CraftJIngle_C_ExecuteUbergraph_CraftJIngle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftJIngle.CraftJIngle_C.KickSE
// (BlueprintCallable, BlueprintEvent)

void UCraftJIngle_C::KickSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "KickSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftJIngle.CraftJIngle_C.Play Critical
// (BlueprintCallable, BlueprintEvent)

void UCraftJIngle_C::Play_Critical()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "Play Critical");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftJIngle.CraftJIngle_C.Play Failure
// (BlueprintCallable, BlueprintEvent)

void UCraftJIngle_C::Play_Failure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "Play Failure");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftJIngle.CraftJIngle_C.Play Success
// (BlueprintCallable, BlueprintEvent)

void UCraftJIngle_C::Play_Success()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "Play Success");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftJIngle.CraftJIngle_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftJIngle_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "OnAnimationFinished");

	Params::CraftJIngle_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftJIngle.CraftJIngle_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftJIngle_C::OnAnimationStarted(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "OnAnimationStarted");

	Params::CraftJIngle_C_OnAnimationStarted Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftJIngle.CraftJIngle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftJIngle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftJIngle.CraftJIngle_C.SetStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSuccess                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsCritical                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsFail                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftJIngle_C::SetStatus(bool Param_IsSuccess, bool Param_IsCritical, bool Param_IsFail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "SetStatus");

	Params::CraftJIngle_C_SetStatus Parms{};

	Parms.Param_IsSuccess = Param_IsSuccess;
	Parms.Param_IsCritical = Param_IsCritical;
	Parms.Param_IsFail = Param_IsFail;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftJIngle.CraftJIngle_C.GetIsSuccess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsSuccess                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftJIngle_C::GetIsSuccess(bool* Param_IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "GetIsSuccess");

	Params::CraftJIngle_C_GetIsSuccess Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsSuccess != nullptr)
		*Param_IsSuccess = Parms.Param_IsSuccess;
}


// Function CraftJIngle.CraftJIngle_C.GetIsCritical
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsCritical                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftJIngle_C::GetIsCritical(bool* Param_IsCritical)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "GetIsCritical");

	Params::CraftJIngle_C_GetIsCritical Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsCritical != nullptr)
		*Param_IsCritical = Parms.Param_IsCritical;
}


// Function CraftJIngle.CraftJIngle_C.GetisFailure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsFail                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftJIngle_C::GetisFailure(bool* Param_IsFail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftJIngle_C", "GetisFailure");

	Params::CraftJIngle_C_GetisFailure Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsFail != nullptr)
		*Param_IsFail = Parms.Param_IsFail;
}

}

