#pragma once

 

// Package: TicketSpecialDisp

#include "Basic.hpp"

#include "TicketSpecialDisp_classes.hpp"
#include "TicketSpecialDisp_parameters.hpp"


namespace SDK
{

// Function TicketSpecialDisp.TicketSpecialDisp_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTicketSpecialDisp_C::SetInfo(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSpecialDisp_C", "SetInfo");

	Params::TicketSpecialDisp_C_SetInfo Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TicketSpecialDisp.TicketSpecialDisp_C.SetChangeColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bChangeColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTicketSpecialDisp_C::SetChangeColor(bool bChangeColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSpecialDisp_C", "SetChangeColor");

	Params::TicketSpecialDisp_C_SetChangeColor Parms{};

	Parms.bChangeColor = bChangeColor;

	UObject::ProcessEvent(Func, &Parms);
}

}

