#pragma once

 

// Package: SelectBlankText

#include "Basic.hpp"

#include "SelectBlankText_classes.hpp"
#include "SelectBlankText_parameters.hpp"


namespace SDK
{

// Function SelectBlankText.SelectBlankText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectBlankText_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectBlankText_C", "SetText");

	Params::SelectBlankText_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

