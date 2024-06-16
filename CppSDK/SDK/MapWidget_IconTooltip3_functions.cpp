#pragma once

 

// Package: MapWidget_IconTooltip3

#include "Basic.hpp"

#include "MapWidget_IconTooltip3_classes.hpp"
#include "MapWidget_IconTooltip3_parameters.hpp"


namespace SDK
{

// Function MapWidget_IconTooltip3.MapWidget_IconTooltip3_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltip3_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip3_C", "SetText");

	Params::MapWidget_IconTooltip3_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

