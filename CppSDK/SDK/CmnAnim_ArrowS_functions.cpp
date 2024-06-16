#pragma once

 

// Package: CmnAnim_ArrowS

#include "Basic.hpp"

#include "CmnAnim_ArrowS_classes.hpp"
#include "CmnAnim_ArrowS_parameters.hpp"


namespace SDK
{

// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.ExecuteUbergraph_CmnAnim_ArrowS
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnAnim_ArrowS_C::ExecuteUbergraph_CmnAnim_ArrowS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowS_C", "ExecuteUbergraph_CmnAnim_ArrowS");

	Params::CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnAnim_ArrowS_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowS_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.PlayArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAnim_ArrowS_C::PlayArrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowS_C", "PlayArrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.StopArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAnim_ArrowS_C::StopArrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowS_C", "StopArrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

