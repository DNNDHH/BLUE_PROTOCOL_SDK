#pragma once

 

// Package: MapWidget_IconTooltipWarpPoint1

#include "Basic.hpp"

#include "MapWidget_IconTooltipWarpPoint1_classes.hpp"
#include "MapWidget_IconTooltipWarpPoint1_parameters.hpp"


namespace SDK
{

// Function MapWidget_IconTooltipWarpPoint1.MapWidget_IconTooltipWarpPoint1_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltipWarpPoint1_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltipWarpPoint1_C", "SetText");

	Params::MapWidget_IconTooltipWarpPoint1_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

