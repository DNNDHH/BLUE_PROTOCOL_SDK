#pragma once

 

// Package: BP_HumanoidEnemyBase

#include "Basic.hpp"

#include "BP_HumanoidEnemyBase_classes.hpp"
#include "BP_HumanoidEnemyBase_parameters.hpp"


namespace SDK
{

// Function BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C.GetLockOnCameraID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_HumanoidEnemyBase_C::GetLockOnCameraID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HumanoidEnemyBase_C", "GetLockOnCameraID");

	Params::BP_HumanoidEnemyBase_C_GetLockOnCameraID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

