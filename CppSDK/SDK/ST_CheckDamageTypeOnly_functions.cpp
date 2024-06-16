#pragma once

 

// Package: ST_CheckDamageTypeOnly

#include "Basic.hpp"

#include "ST_CheckDamageTypeOnly_classes.hpp"
#include "ST_CheckDamageTypeOnly_parameters.hpp"


namespace SDK
{

// Function ST_CheckDamageTypeOnly.ST_CheckDamageTypeOnly_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_CheckDamageTypeOnly_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_CheckDamageTypeOnly_C", "ReceiveCanEnter");

	Params::ST_CheckDamageTypeOnly_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

