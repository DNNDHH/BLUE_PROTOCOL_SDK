#pragma once

 

// Package: ContentsJingle

#include "Basic.hpp"

#include "ContentsJingle_classes.hpp"
#include "ContentsJingle_parameters.hpp"


namespace SDK
{

// Function ContentsJingle.ContentsJingle_C.ExecuteUbergraph_ContentsJingle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContentsJingle_C::ExecuteUbergraph_ContentsJingle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentsJingle_C", "ExecuteUbergraph_ContentsJingle");

	Params::ContentsJingle_C_ExecuteUbergraph_ContentsJingle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContentsJingle.ContentsJingle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UContentsJingle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentsJingle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ContentsJingle.ContentsJingle_C.IsAnyAnimationPlaying?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bIsPlaying                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UContentsJingle_C::IsAnyAnimationPlaying_(bool* bIsPlaying) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentsJingle_C", "IsAnyAnimationPlaying?");

	Params::ContentsJingle_C_IsAnyAnimationPlaying_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsPlaying != nullptr)
		*bIsPlaying = Parms.bIsPlaying;
}

}

