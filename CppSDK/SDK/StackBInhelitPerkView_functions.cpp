#pragma once

 

// Package: StackBInhelitPerkView

#include "Basic.hpp"

#include "StackBInhelitPerkView_classes.hpp"
#include "StackBInhelitPerkView_parameters.hpp"


namespace SDK
{

// Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UStackBInhelitPerkView_C::SetPerk(const struct FOwnItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBInhelitPerkView_C", "SetPerk");

	Params::StackBInhelitPerkView_C_SetPerk Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetDiff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Prev                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     After                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UStackBInhelitPerkView_C::SetDiff(const struct FOwnItemInfo& Prev, const struct FOwnItemInfo& After)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBInhelitPerkView_C", "SetDiff");

	Params::StackBInhelitPerkView_C_SetDiff Parms{};

	Parms.Prev = std::move(Prev);
	Parms.After = std::move(After);

	UObject::ProcessEvent(Func, &Parms);
}

}

