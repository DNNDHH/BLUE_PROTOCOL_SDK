#pragma once

 

// Package: CommandIcon_Tooltip

#include "Basic.hpp"

#include "CommandIcon_Tooltip_classes.hpp"
#include "CommandIcon_Tooltip_parameters.hpp"


namespace SDK
{

// Function CommandIcon_Tooltip.CommandIcon_Tooltip_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommandIcon_Tooltip_C::Setup(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandIcon_Tooltip_C", "Setup");

	Params::CommandIcon_Tooltip_C_Setup Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

