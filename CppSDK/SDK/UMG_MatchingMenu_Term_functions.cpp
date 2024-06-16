#pragma once

 

// Package: UMG_MatchingMenu_Term

#include "Basic.hpp"

#include "UMG_MatchingMenu_Term_classes.hpp"
#include "UMG_MatchingMenu_Term_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_Term.UMG_MatchingMenu_Term_C.SetDateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        DateTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Term_C::SetDateTime(const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Term_C", "SetDateTime");

	Params::UMG_MatchingMenu_Term_C_SetDateTime Parms{};

	Parms.DateTime = std::move(DateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Term.UMG_MatchingMenu_Term_C.SetDateText
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Term_C::SetDateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Term_C", "SetDateText");

	UObject::ProcessEvent(Func, nullptr);
}

}

