#pragma once

 

// Package: ST_IsPlayerFemale

#include "Basic.hpp"

#include "ST_IsPlayerFemale_classes.hpp"
#include "ST_IsPlayerFemale_parameters.hpp"


namespace SDK
{

// Function ST_IsPlayerFemale.ST_IsPlayerFemale_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_IsPlayerFemale_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_IsPlayerFemale_C", "ReceiveCanEnter");

	Params::ST_IsPlayerFemale_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

