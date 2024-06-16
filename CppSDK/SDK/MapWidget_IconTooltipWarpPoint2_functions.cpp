#pragma once

 

// Package: MapWidget_IconTooltipWarpPoint2

#include "Basic.hpp"

#include "MapWidget_IconTooltipWarpPoint2_classes.hpp"
#include "MapWidget_IconTooltipWarpPoint2_parameters.hpp"


namespace SDK
{

// Function MapWidget_IconTooltipWarpPoint2.MapWidget_IconTooltipWarpPoint2_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltipWarpPoint2_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltipWarpPoint2_C", "SetText");

	Params::MapWidget_IconTooltipWarpPoint2_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_IconTooltipWarpPoint2.MapWidget_IconTooltipWarpPoint2_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltipWarpPoint2_C::SetInfo(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltipWarpPoint2_C", "SetInfo");

	Params::MapWidget_IconTooltipWarpPoint2_C_SetInfo Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

