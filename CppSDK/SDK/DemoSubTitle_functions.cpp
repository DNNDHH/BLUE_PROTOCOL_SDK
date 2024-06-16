#pragma once

 

// Package: DemoSubTitle

#include "Basic.hpp"

#include "DemoSubTitle_classes.hpp"
#include "DemoSubTitle_parameters.hpp"


namespace SDK
{

// Function DemoSubTitle.DemoSubTitle_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDemoSubTitle_C::OnFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "OnFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DemoSubTitle.DemoSubTitle_C.ExecuteUbergraph_DemoSubTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoSubTitle_C::ExecuteUbergraph_DemoSubTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "ExecuteUbergraph_DemoSubTitle");

	Params::DemoSubTitle_C_ExecuteUbergraph_DemoSubTitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DemoSubTitle.DemoSubTitle_C.FailedFinish
// (BlueprintCallable, BlueprintEvent)

void UDemoSubTitle_C::FailedFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "FailedFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DemoSubTitle.DemoSubTitle_C.Finish
// (BlueprintCallable, BlueprintEvent)

void UDemoSubTitle_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DemoSubTitle.DemoSubTitle_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoSubTitle_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "OnAnimationFinished");

	Params::DemoSubTitle_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DemoSubTitle.DemoSubTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDemoSubTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DemoSubTitle.DemoSubTitle_C.GetAnimation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EDemoSubTitleAnimationType              InAnimationType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*                 OutAnimation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDemoSubTitle_C::GetAnimation(EDemoSubTitleAnimationType InAnimationType, class UWidgetAnimation** OutAnimation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DemoSubTitle_C", "GetAnimation");

	Params::DemoSubTitle_C_GetAnimation Parms{};

	Parms.InAnimationType = InAnimationType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAnimation != nullptr)
		*OutAnimation = Parms.OutAnimation;
}

}

