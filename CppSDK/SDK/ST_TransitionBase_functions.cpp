#pragma once

 

// Package: ST_TransitionBase

#include "Basic.hpp"

#include "ST_TransitionBase_classes.hpp"
#include "ST_TransitionBase_parameters.hpp"


namespace SDK
{

// Function ST_TransitionBase.ST_TransitionBase_C.GetLastDamageInfo
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDamageInfo                    DamageInfo                                             (Parm, OutParm, NoDestructor)

void UST_TransitionBase_C::GetLastDamageInfo(class UAnimInstance* AnimInstance, struct FSBDamageInfo* DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_TransitionBase_C", "GetLastDamageInfo");

	Params::ST_TransitionBase_C_GetLastDamageInfo Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageInfo != nullptr)
		*DamageInfo = std::move(Parms.DamageInfo);
}

}

