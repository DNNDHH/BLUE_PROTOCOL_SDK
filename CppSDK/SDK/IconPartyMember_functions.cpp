#pragma once

 

// Package: IconPartyMember

#include "Basic.hpp"

#include "IconPartyMember_classes.hpp"
#include "IconPartyMember_parameters.hpp"


namespace SDK
{

// Function IconPartyMember.IconPartyMember_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconPartyMember_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconPartyMember_C", "OnSetInside");

	Params::IconPartyMember_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

