#pragma once

 

// Package: ST_IsDamageSupine

#include "Basic.hpp"

#include "ST_IsDamageSupine_classes.hpp"
#include "ST_IsDamageSupine_parameters.hpp"


namespace SDK
{

// Function ST_IsDamageSupine.ST_IsDamageSupine_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_IsDamageSupine_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_IsDamageSupine_C", "ReceiveCanEnter");

	Params::ST_IsDamageSupine_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

