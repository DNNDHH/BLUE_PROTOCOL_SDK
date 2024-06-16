#pragma once

 

// Package: WBP_ItemBoxScrollText_OtherOne

#include "Basic.hpp"

#include "WBP_ItemBoxScrollText_OtherOne_classes.hpp"
#include "WBP_ItemBoxScrollText_OtherOne_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxScrollText_OtherOne.WBP_ItemBoxScrollText_OtherOne_C.SetTypeOtherOne
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ItemName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bExcess                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_OtherOne_C::SetTypeOtherOne(const class FText& Param_ItemName, bool bExcess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_OtherOne_C", "SetTypeOtherOne");

	Params::WBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne Parms{};

	Parms.Param_ItemName = std::move(Param_ItemName);
	Parms.bExcess = bExcess;

	UObject::ProcessEvent(Func, &Parms);
}

}

