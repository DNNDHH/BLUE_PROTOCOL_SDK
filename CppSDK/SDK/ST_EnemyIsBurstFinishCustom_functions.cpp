#pragma once

 

// Package: ST_EnemyIsBurstFinishCustom

#include "Basic.hpp"

#include "ST_EnemyIsBurstFinishCustom_classes.hpp"
#include "ST_EnemyIsBurstFinishCustom_parameters.hpp"


namespace SDK
{

// Function ST_EnemyIsBurstFinishCustom.ST_EnemyIsBurstFinishCustom_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_EnemyIsBurstFinishCustom_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_EnemyIsBurstFinishCustom_C", "ReceiveCanEnter");

	Params::ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

