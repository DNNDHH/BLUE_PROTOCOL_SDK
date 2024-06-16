#pragma once

 

// Package: AdventurerRank_AnmArrow

#include "Basic.hpp"

#include "AdventurerRank_AnmArrow_classes.hpp"
#include "AdventurerRank_AnmArrow_parameters.hpp"


namespace SDK
{

// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.ExecuteUbergraph_AdventurerRank_AnmArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAdventurerRank_AnmArrow_C::ExecuteUbergraph_AdventurerRank_AnmArrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_AnmArrow_C", "ExecuteUbergraph_AdventurerRank_AnmArrow");

	Params::AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAdventurerRank_AnmArrow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_AnmArrow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.PlayArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UAdventurerRank_AnmArrow_C::PlayArrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_AnmArrow_C", "PlayArrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.StopArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UAdventurerRank_AnmArrow_C::StopArrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_AnmArrow_C", "StopArrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

