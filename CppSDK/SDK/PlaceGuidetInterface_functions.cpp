#pragma once

 

// Package: PlaceGuidetInterface

#include "Basic.hpp"

#include "PlaceGuidetInterface_classes.hpp"
#include "PlaceGuidetInterface_parameters.hpp"


namespace SDK
{

// Function PlaceGuidetInterface.PlaceGuidetInterface_C.GetPlaceGuideWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlaceGuide_C*                    PlaceGuideWidget                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlaceGuidetInterface_C::GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuidetInterface_C", "GetPlaceGuideWidget");

	Params::PlaceGuidetInterface_C_GetPlaceGuideWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlaceGuideWidget != nullptr)
		*PlaceGuideWidget = Parms.PlaceGuideWidget;
}

}

