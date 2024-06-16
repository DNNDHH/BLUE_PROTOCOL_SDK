#pragma once

 

// Package: Fang_expedition_StatusIcon

#include "Basic.hpp"

#include "Fang_expedition_StatusIcon_classes.hpp"
#include "Fang_expedition_StatusIcon_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_StatusIcon.Fang_expedition_StatusIcon_C.ExecuteUbergraph_Fang_expedition_StatusIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_StatusIcon_C::ExecuteUbergraph_Fang_expedition_StatusIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusIcon_C", "ExecuteUbergraph_Fang_expedition_StatusIcon");

	Params::Fang_expedition_StatusIcon_C_ExecuteUbergraph_Fang_expedition_StatusIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_StatusIcon.Fang_expedition_StatusIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_StatusIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusIcon_C", "PreConstruct");

	Params::Fang_expedition_StatusIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_StatusIcon.Fang_expedition_StatusIcon_C.SetTypeIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_StatusIcon_C::SetTypeIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusIcon_C", "SetTypeIndex");

	Params::Fang_expedition_StatusIcon_C_SetTypeIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

