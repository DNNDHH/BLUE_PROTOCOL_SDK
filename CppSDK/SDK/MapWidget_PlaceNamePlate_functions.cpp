#pragma once

 

// Package: MapWidget_PlaceNamePlate

#include "Basic.hpp"

#include "MapWidget_PlaceNamePlate_classes.hpp"
#include "MapWidget_PlaceNamePlate_parameters.hpp"


namespace SDK
{

// Function MapWidget_PlaceNamePlate.MapWidget_PlaceNamePlate_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_PlaceNamePlate_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlaceNamePlate_C", "SetText");

	Params::MapWidget_PlaceNamePlate_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PlaceNamePlate.MapWidget_PlaceNamePlate_C.SetTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PlaceNamePlate_C::SetTextId(class FName InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PlaceNamePlate_C", "SetTextId");

	Params::MapWidget_PlaceNamePlate_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}

}

