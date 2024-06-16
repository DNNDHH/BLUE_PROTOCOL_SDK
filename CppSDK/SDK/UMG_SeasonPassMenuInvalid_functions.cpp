#pragma once

 

// Package: UMG_SeasonPassMenuInvalid

#include "Basic.hpp"

#include "UMG_SeasonPassMenuInvalid_classes.hpp"
#include "UMG_SeasonPassMenuInvalid_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.ExecuteUbergraph_UMG_SeasonPassMenuInvalid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuInvalid_C::ExecuteUbergraph_UMG_SeasonPassMenuInvalid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuInvalid_C", "ExecuteUbergraph_UMG_SeasonPassMenuInvalid");

	Params::UMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassMenuInvalid_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuInvalid_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

