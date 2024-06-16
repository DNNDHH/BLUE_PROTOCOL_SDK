#pragma once

 

// Package: Ribbon_PaidOnly

#include "Basic.hpp"

#include "Ribbon_PaidOnly_classes.hpp"
#include "Ribbon_PaidOnly_parameters.hpp"


namespace SDK
{

// Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.ExecuteUbergraph_Ribbon_PaidOnly
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URibbon_PaidOnly_C::ExecuteUbergraph_Ribbon_PaidOnly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ribbon_PaidOnly_C", "ExecuteUbergraph_Ribbon_PaidOnly");

	Params::Ribbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URibbon_PaidOnly_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ribbon_PaidOnly_C", "PreConstruct");

	Params::Ribbon_PaidOnly_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URibbon_PaidOnly_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ribbon_PaidOnly_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

