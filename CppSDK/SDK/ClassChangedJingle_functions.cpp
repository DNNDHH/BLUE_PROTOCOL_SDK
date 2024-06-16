#pragma once

 

// Package: ClassChangedJingle

#include "Basic.hpp"

#include "ClassChangedJingle_classes.hpp"
#include "ClassChangedJingle_parameters.hpp"


namespace SDK
{

// Function ClassChangedJingle.ClassChangedJingle_C.OnPlayedAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UClassChangedJingle_C::OnPlayedAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "OnPlayedAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassChangedJingle.ClassChangedJingle_C.ExecuteUbergraph_ClassChangedJingle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClassChangedJingle_C::ExecuteUbergraph_ClassChangedJingle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "ExecuteUbergraph_ClassChangedJingle");

	Params::ClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClassChangedJingle.ClassChangedJingle_C.ForceStopAnim
// (BlueprintCallable, BlueprintEvent)

void UClassChangedJingle_C::ForceStopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "ForceStopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassChangedJingle.ClassChangedJingle_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClassChangedJingle_C::PlayAnim(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "PlayAnim");

	Params::ClassChangedJingle_C_PlayAnim Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClassChangedJingle.ClassChangedJingle_C.WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UClassChangedJingle_C::WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassChangedJingle.ClassChangedJingle_C.SetBeforeClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClassChangedJingle_C::SetBeforeClass(ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "SetBeforeClass");

	Params::ClassChangedJingle_C_SetBeforeClass Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClassChangedJingle.ClassChangedJingle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UClassChangedJingle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassChangedJingle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

