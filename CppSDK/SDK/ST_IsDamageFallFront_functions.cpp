#pragma once

 

// Package: ST_IsDamageFallFront

#include "Basic.hpp"

#include "ST_IsDamageFallFront_classes.hpp"
#include "ST_IsDamageFallFront_parameters.hpp"


namespace SDK
{

// Function ST_IsDamageFallFront.ST_IsDamageFallFront_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_IsDamageFallFront_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_IsDamageFallFront_C", "ReceiveCanEnter");

	Params::ST_IsDamageFallFront_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

