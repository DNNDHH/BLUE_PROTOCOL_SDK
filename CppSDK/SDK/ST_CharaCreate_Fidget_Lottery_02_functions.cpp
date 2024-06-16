#pragma once

 

// Package: ST_CharaCreate_Fidget_Lottery_02

#include "Basic.hpp"

#include "ST_CharaCreate_Fidget_Lottery_02_classes.hpp"
#include "ST_CharaCreate_Fidget_Lottery_02_parameters.hpp"


namespace SDK
{

// Function ST_CharaCreate_Fidget_Lottery_02.ST_CharaCreate_Fidget_Lottery_02_C.ReceiveCanEnter
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UST_CharaCreate_Fidget_Lottery_02_C::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ST_CharaCreate_Fidget_Lottery_02_C", "ReceiveCanEnter");

	Params::ST_CharaCreate_Fidget_Lottery_02_C_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

