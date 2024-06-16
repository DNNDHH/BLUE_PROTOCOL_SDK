#pragma once

 

// Package: CommandMenu_MissionEffect1

#include "Basic.hpp"

#include "CommandMenu_MissionEffect1_classes.hpp"
#include "CommandMenu_MissionEffect1_parameters.hpp"


namespace SDK
{

// Function CommandMenu_MissionEffect1.CommandMenu_MissionEffect1_C.ExecuteUbergraph_CommandMenu_MissionEffect1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MissionEffect1_C::ExecuteUbergraph_CommandMenu_MissionEffect1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MissionEffect1_C", "ExecuteUbergraph_CommandMenu_MissionEffect1");

	Params::CommandMenu_MissionEffect1_C_ExecuteUbergraph_CommandMenu_MissionEffect1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MissionEffect1.CommandMenu_MissionEffect1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_MissionEffect1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MissionEffect1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

