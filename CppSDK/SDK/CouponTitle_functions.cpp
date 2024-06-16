#pragma once

 

// Package: CouponTitle

#include "Basic.hpp"

#include "CouponTitle_classes.hpp"
#include "CouponTitle_parameters.hpp"


namespace SDK
{

// Function CouponTitle.CouponTitle_C.SetTitleChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCouponTitle_C::SetTitleChange(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CouponTitle_C", "SetTitleChange");

	Params::CouponTitle_C_SetTitleChange Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

