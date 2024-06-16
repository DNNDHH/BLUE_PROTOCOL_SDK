#pragma once

 

// Package: MapWidget_IconTooltip4

#include "Basic.hpp"

#include "MapWidget_IconTooltip4_classes.hpp"
#include "MapWidget_IconTooltip4_parameters.hpp"


namespace SDK
{

// Function MapWidget_IconTooltip4.MapWidget_IconTooltip4_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltip4_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip4_C", "SetName");

	Params::MapWidget_IconTooltip4_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_IconTooltip4.MapWidget_IconTooltip4_C.SetDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_IconTooltip4_C::SetDesc(const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_IconTooltip4_C", "SetDesc");

	Params::MapWidget_IconTooltip4_C_SetDesc Parms{};

	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}

}

