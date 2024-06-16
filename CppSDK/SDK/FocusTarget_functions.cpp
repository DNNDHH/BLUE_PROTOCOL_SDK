#pragma once

 

// Package: FocusTarget

#include "Basic.hpp"

#include "FocusTarget_classes.hpp"
#include "FocusTarget_parameters.hpp"


namespace SDK
{

// Function FocusTarget.FocusTarget_C.ExecuteUbergraph_FocusTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFocusTarget_C::ExecuteUbergraph_FocusTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "ExecuteUbergraph_FocusTarget");

	Params::FocusTarget_C_ExecuteUbergraph_FocusTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FocusTarget.FocusTarget_C.WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UFocusTarget_C::WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FocusTarget.FocusTarget_C.OnUnbindFadeOutDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InEnemyCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFocusTarget_C::OnUnbindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnUnbindFadeOutDeath");

	Params::FocusTarget_C_OnUnbindFadeOutDeath Parms{};

	Parms.InEnemyCharacter = InEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FocusTarget.FocusTarget_C.OnBindFadeOutDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InEnemyCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFocusTarget_C::OnBindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnBindFadeOutDeath");

	Params::FocusTarget_C_OnBindFadeOutDeath Parms{};

	Parms.InEnemyCharacter = InEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FocusTarget.FocusTarget_C.OnFadeOutDeath
// (BlueprintCallable, BlueprintEvent)

void UFocusTarget_C::OnFadeOutDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnFadeOutDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FocusTarget.FocusTarget_C.OnPlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFocusTarget_C::OnPlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnPlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FocusTarget.FocusTarget_C.OnStopAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFocusTarget_C::OnStopAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnStopAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FocusTarget.FocusTarget_C.OnPlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFocusTarget_C::OnPlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnPlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FocusTarget.FocusTarget_C.OnStopAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFocusTarget_C::OnStopAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusTarget_C", "OnStopAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

