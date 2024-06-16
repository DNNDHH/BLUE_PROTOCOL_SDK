#pragma once

 

// Package: TokenTooltip

#include "Basic.hpp"

#include "TokenTooltip_classes.hpp"
#include "TokenTooltip_parameters.hpp"


namespace SDK
{

// Function TokenTooltip.TokenTooltip_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenTooltip_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenTooltip_C", "SetText");

	Params::TokenTooltip_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

