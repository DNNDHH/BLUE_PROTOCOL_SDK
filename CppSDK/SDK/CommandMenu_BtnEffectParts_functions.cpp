#pragma once

 

// Package: CommandMenu_BtnEffectParts

#include "Basic.hpp"

#include "CommandMenu_BtnEffectParts_classes.hpp"
#include "CommandMenu_BtnEffectParts_parameters.hpp"


namespace SDK
{

// Function CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C.ExecuteUbergraph_CommandMenu_BtnEffectParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BtnEffectParts_C::ExecuteUbergraph_CommandMenu_BtnEffectParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnEffectParts_C", "ExecuteUbergraph_CommandMenu_BtnEffectParts");

	Params::CommandMenu_BtnEffectParts_C_ExecuteUbergraph_CommandMenu_BtnEffectParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_BtnEffectParts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnEffectParts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

