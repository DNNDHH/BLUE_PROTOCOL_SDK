#pragma once

 

// Package: MapWidget_IconTooltip2

#include "Basic.hpp"

#include "MapWidget_IconTooltip2_classes.hpp"
#include "MapWidget_IconTooltip2_parameters.hpp"


namespace SDK
{

// Function MapWidget_IconTooltip2.MapWidget_IconTooltip2_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltip2_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip2_C", "SetName");

	Params::MapWidget_IconTooltip2_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

