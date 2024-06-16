#pragma once

 

// Package: ST_CheckDamageDirFront

#include "Basic.hpp"

#include "ST_CheckDamageDirFront_classes.hpp"
#include "ST_CheckDamageDirFront_parameters.hpp"


namespace SDK
{

// Function ST_CheckDamageDirFront.ST_CheckDamageDirFront_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_CheckDamageDirFront_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_CheckDamageDirFront_C", "ReceiveCanEnter");

	Params::ST_CheckDamageDirFront_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

