#pragma once

 

// Package: UMG_ProductItemNumberInput

#include "Basic.hpp"

#include "UMG_ProductItemNumberInput_classes.hpp"
#include "UMG_ProductItemNumberInput_parameters.hpp"


namespace SDK
{

// Function UMG_ProductItemNumberInput.UMG_ProductItemNumberInput_C.ExecuteUbergraph_UMG_ProductItemNumberInput
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProductItemNumberInput_C::ExecuteUbergraph_UMG_ProductItemNumberInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemNumberInput_C", "ExecuteUbergraph_UMG_ProductItemNumberInput");

	Params::UMG_ProductItemNumberInput_C_ExecuteUbergraph_UMG_ProductItemNumberInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ProductItemNumberInput.UMG_ProductItemNumberInput_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProductItemNumberInput_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ProductItemNumberInput_C", "PreConstruct");

	Params::UMG_ProductItemNumberInput_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

