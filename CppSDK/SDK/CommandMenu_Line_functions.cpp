#pragma once

 

// Package: CommandMenu_Line

#include "Basic.hpp"

#include "CommandMenu_Line_classes.hpp"
#include "CommandMenu_Line_parameters.hpp"


namespace SDK
{

// Function CommandMenu_Line.CommandMenu_Line_C.ExecuteUbergraph_CommandMenu_Line
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_Line_C::ExecuteUbergraph_CommandMenu_Line(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Line_C", "ExecuteUbergraph_CommandMenu_Line");

	Params::CommandMenu_Line_C_ExecuteUbergraph_CommandMenu_Line Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_Line.CommandMenu_Line_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_Line_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Line_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_Line.CommandMenu_Line_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_Line_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_Line_C", "PreConstruct");

	Params::CommandMenu_Line_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

