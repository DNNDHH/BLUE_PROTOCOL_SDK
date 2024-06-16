#pragma once

 

// Package: EventIconToolTip

#include "Basic.hpp"

#include "EventIconToolTip_classes.hpp"
#include "EventIconToolTip_parameters.hpp"


namespace SDK
{

// Function EventIconToolTip.EventIconToolTip_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventIconToolTip_C::SetInfo(int32 InItemIndex, bool bUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventIconToolTip_C", "SetInfo");

	Params::EventIconToolTip_C_SetInfo Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}

}

