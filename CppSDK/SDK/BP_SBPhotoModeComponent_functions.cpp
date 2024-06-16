#pragma once

 

// Package: BP_SBPhotoModeComponent

#include "Basic.hpp"

#include "BP_SBPhotoModeComponent_classes.hpp"
#include "BP_SBPhotoModeComponent_parameters.hpp"


namespace SDK
{

// Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.ExecuteUbergraph_BP_SBPhotoModeComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBPhotoModeComponent_C::ExecuteUbergraph_BP_SBPhotoModeComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeComponent_C", "ExecuteUbergraph_BP_SBPhotoModeComponent");

	Params::BP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.BP_OnCantStartPhotoMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESBPhotoModeStartState                  State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBPhotoModeComponent_C::BP_OnCantStartPhotoMode(ESBPhotoModeStartState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeComponent_C", "BP_OnCantStartPhotoMode");

	Params::BP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.GetTextId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBPhotoModeStartState                  State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FName                       ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

const class FName UBP_SBPhotoModeComponent_C::GetTextId(ESBPhotoModeStartState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBPhotoModeComponent_C", "GetTextId");

	Params::BP_SBPhotoModeComponent_C_GetTextId Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

