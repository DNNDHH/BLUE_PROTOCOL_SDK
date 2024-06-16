#pragma once

 

// Package: MatchingMenu_JoinButtonAnim

#include "Basic.hpp"

#include "MatchingMenu_JoinButtonAnim_classes.hpp"
#include "MatchingMenu_JoinButtonAnim_parameters.hpp"


namespace SDK
{

// Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.ExecuteUbergraph_MatchingMenu_JoinButtonAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchingMenu_JoinButtonAnim_C::ExecuteUbergraph_MatchingMenu_JoinButtonAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchingMenu_JoinButtonAnim_C", "ExecuteUbergraph_MatchingMenu_JoinButtonAnim");

	Params::MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMatchingMenu_JoinButtonAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchingMenu_JoinButtonAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.PressAfterAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMatchingMenu_JoinButtonAnim_C::PressAfterAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchingMenu_JoinButtonAnim_C", "PressAfterAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

