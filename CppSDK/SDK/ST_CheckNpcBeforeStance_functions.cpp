#pragma once

 

// Package: ST_CheckNpcBeforeStance

#include "Basic.hpp"

#include "ST_CheckNpcBeforeStance_classes.hpp"
#include "ST_CheckNpcBeforeStance_parameters.hpp"


namespace SDK
{

// Function ST_CheckNpcBeforeStance.ST_CheckNpcBeforeStance_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_CheckNpcBeforeStance_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_CheckNpcBeforeStance_C", "ReceiveCanEnter");

	Params::ST_CheckNpcBeforeStance_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

