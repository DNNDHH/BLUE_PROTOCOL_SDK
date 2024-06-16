#pragma once

 

// Package: IconNamedEnemy

#include "Basic.hpp"

#include "IconNamedEnemy_classes.hpp"
#include "IconNamedEnemy_parameters.hpp"


namespace SDK
{

// Function IconNamedEnemy.IconNamedEnemy_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconNamedEnemy_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconNamedEnemy_C", "OnSetInside");

	Params::IconNamedEnemy_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

