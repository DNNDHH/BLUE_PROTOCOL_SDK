#pragma once

 

// Package: CmnNumber1_0to99

#include "Basic.hpp"

#include "CmnNumber1_0to99_classes.hpp"
#include "CmnNumber1_0to99_parameters.hpp"


namespace SDK
{

// Function CmnNumber1_0to99.CmnNumber1_0to99_C.SetNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnNumber1_0to99_C::SetNumber(int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnNumber1_0to99_C", "SetNumber");

	Params::CmnNumber1_0to99_C_SetNumber Parms{};

	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnNumber1_0to99.CmnNumber1_0to99_C.GetNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutNumber                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnNumber1_0to99_C::GetNumber(int32* OutNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnNumber1_0to99_C", "GetNumber");

	Params::CmnNumber1_0to99_C_GetNumber Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutNumber != nullptr)
		*OutNumber = Parms.OutNumber;
}

}

