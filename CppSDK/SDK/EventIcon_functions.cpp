#pragma once

 

// Package: EventIcon

#include "Basic.hpp"

#include "EventIcon_classes.hpp"
#include "EventIcon_parameters.hpp"


namespace SDK
{

// Function EventIcon.EventIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UEventIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventIcon_C", "GetToolTipWidget_0");

	Params::EventIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EventIcon.EventIcon_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UEventIcon_C::SetInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventIcon_C", "SetInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventIcon.EventIcon_C.CreateToolTipWidgetifNeeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventIconToolTip_C*              Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventIcon_C::CreateToolTipWidgetifNeeded(class UEventIconToolTip_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventIcon_C", "CreateToolTipWidgetifNeeded");

	Params::EventIcon_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

