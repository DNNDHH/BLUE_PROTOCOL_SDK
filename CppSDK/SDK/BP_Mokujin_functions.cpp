#pragma once

 

// Package: BP_Mokujin

#include "Basic.hpp"

#include "BP_Mokujin_classes.hpp"
#include "BP_Mokujin_parameters.hpp"


namespace SDK
{

// Function BP_Mokujin.BP_Mokujin_C.GetLockOnCameraID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_Mokujin_C::GetLockOnCameraID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mokujin_C", "GetLockOnCameraID");

	Params::BP_Mokujin_C_GetLockOnCameraID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

