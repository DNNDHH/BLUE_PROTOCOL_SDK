#pragma once

 

// Package: AdventurerRank_LineEffect

#include "Basic.hpp"

#include "AdventurerRank_LineEffect_classes.hpp"
#include "AdventurerRank_LineEffect_parameters.hpp"


namespace SDK
{

// Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.ExecuteUbergraph_AdventurerRank_LineEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAdventurerRank_LineEffect_C::ExecuteUbergraph_AdventurerRank_LineEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_LineEffect_C", "ExecuteUbergraph_AdventurerRank_LineEffect");

	Params::AdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAdventurerRank_LineEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_LineEffect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

