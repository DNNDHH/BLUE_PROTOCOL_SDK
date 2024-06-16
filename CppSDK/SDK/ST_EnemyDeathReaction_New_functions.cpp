#pragma once

 

// Package: ST_EnemyDeathReaction_New

#include "Basic.hpp"

#include "ST_EnemyDeathReaction_New_classes.hpp"
#include "ST_EnemyDeathReaction_New_parameters.hpp"


namespace SDK
{

// Function ST_EnemyDeathReaction_New.ST_EnemyDeathReaction_New_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_EnemyDeathReaction_New_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_EnemyDeathReaction_New_C", "ReceiveCanEnter");

	Params::ST_EnemyDeathReaction_New_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

