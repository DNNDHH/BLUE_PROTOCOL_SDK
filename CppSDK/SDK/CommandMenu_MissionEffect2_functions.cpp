#pragma once

 

// Package: CommandMenu_MissionEffect2

#include "Basic.hpp"

#include "CommandMenu_MissionEffect2_classes.hpp"
#include "CommandMenu_MissionEffect2_parameters.hpp"


namespace SDK
{

// Function CommandMenu_MissionEffect2.CommandMenu_MissionEffect2_C.ExecuteUbergraph_CommandMenu_MissionEffect2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MissionEffect2_C::ExecuteUbergraph_CommandMenu_MissionEffect2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MissionEffect2_C", "ExecuteUbergraph_CommandMenu_MissionEffect2");

	Params::CommandMenu_MissionEffect2_C_ExecuteUbergraph_CommandMenu_MissionEffect2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MissionEffect2.CommandMenu_MissionEffect2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_MissionEffect2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MissionEffect2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

