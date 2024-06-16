#pragma once

 

// Package: BPI_ChatHudResizableWidgetParent

#include "Basic.hpp"

#include "BPI_ChatHudResizableWidgetParent_classes.hpp"
#include "BPI_ChatHudResizableWidgetParent_parameters.hpp"


namespace SDK
{

// Function BPI_ChatHudResizableWidgetParent.BPI_ChatHudResizableWidgetParent_C.SetWindowSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ChatHudResizableWidgetParent_C::SetWindowSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_ChatHudResizableWidgetParent_C", "SetWindowSize");

	Params::BPI_ChatHudResizableWidgetParent_C_SetWindowSize Parms{};

	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}

}

