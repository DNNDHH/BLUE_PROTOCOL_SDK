#pragma once

 

// Package: CommandMenu_BtnEffect

#include "Basic.hpp"

#include "CommandMenu_BtnEffect_classes.hpp"
#include "CommandMenu_BtnEffect_parameters.hpp"


namespace SDK
{

// Function CommandMenu_BtnEffect.CommandMenu_BtnEffect_C.ExecuteUbergraph_CommandMenu_BtnEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BtnEffect_C::ExecuteUbergraph_CommandMenu_BtnEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnEffect_C", "ExecuteUbergraph_CommandMenu_BtnEffect");

	Params::CommandMenu_BtnEffect_C_ExecuteUbergraph_CommandMenu_BtnEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_BtnEffect.CommandMenu_BtnEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_BtnEffect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnEffect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

