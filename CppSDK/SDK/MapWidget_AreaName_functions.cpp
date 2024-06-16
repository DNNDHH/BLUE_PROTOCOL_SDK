#pragma once

 

// Package: MapWidget_AreaName

#include "Basic.hpp"

#include "MapWidget_AreaName_classes.hpp"
#include "MapWidget_AreaName_parameters.hpp"


namespace SDK
{

// Function MapWidget_AreaName.MapWidget_AreaName_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_AreaName_C::Setup(const class FString& MapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_AreaName_C", "Setup");

	Params::MapWidget_AreaName_C_Setup Parms{};

	Parms.MapId = std::move(MapId);

	UObject::ProcessEvent(Func, &Parms);
}

}

