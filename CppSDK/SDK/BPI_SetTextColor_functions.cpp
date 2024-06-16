#pragma once

 

// Package: BPI_SetTextColor

#include "Basic.hpp"

#include "BPI_SetTextColor_classes.hpp"
#include "BPI_SetTextColor_parameters.hpp"


namespace SDK
{

// Function BPI_SetTextColor.BPI_SetTextColor_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SetTextColor_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SetTextColor_C", "SetTextColor");

	Params::BPI_SetTextColor_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}

