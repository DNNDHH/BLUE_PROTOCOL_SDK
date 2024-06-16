#pragma once

 

// Package: UMG_SeasonPassInfoIcon

#include "Basic.hpp"

#include "UMG_SeasonPassInfoIcon_classes.hpp"
#include "UMG_SeasonPassInfoIcon_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassInfoIcon.UMG_SeasonPassInfoIcon_C.ExecuteUbergraph_UMG_SeasonPassInfoIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassInfoIcon_C::ExecuteUbergraph_UMG_SeasonPassInfoIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassInfoIcon_C", "ExecuteUbergraph_UMG_SeasonPassInfoIcon");

	Params::UMG_SeasonPassInfoIcon_C_ExecuteUbergraph_UMG_SeasonPassInfoIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassInfoIcon.UMG_SeasonPassInfoIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassInfoIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassInfoIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

