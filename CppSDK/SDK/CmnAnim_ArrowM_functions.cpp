#pragma once

 

// Package: CmnAnim_ArrowM

#include "Basic.hpp"

#include "CmnAnim_ArrowM_classes.hpp"
#include "CmnAnim_ArrowM_parameters.hpp"


namespace SDK
{

// Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.ExecuteUbergraph_CmnAnim_ArrowM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnAnim_ArrowM_C::ExecuteUbergraph_CmnAnim_ArrowM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowM_C", "ExecuteUbergraph_CmnAnim_ArrowM");

	Params::CmnAnim_ArrowM_C_ExecuteUbergraph_CmnAnim_ArrowM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnAnim_ArrowM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.PlayArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAnim_ArrowM_C::PlayArrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowM_C", "PlayArrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.StopArrowAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAnim_ArrowM_C::StopArrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowM_C", "StopArrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.StopAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnAnim_ArrowM_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_ArrowM_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

