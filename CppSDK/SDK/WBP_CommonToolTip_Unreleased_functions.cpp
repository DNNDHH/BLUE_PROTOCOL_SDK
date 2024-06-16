#pragma once

 

// Package: WBP_CommonToolTip_Unreleased

#include "Basic.hpp"

#include "WBP_CommonToolTip_Unreleased_classes.hpp"
#include "WBP_CommonToolTip_Unreleased_parameters.hpp"


namespace SDK
{

// Function WBP_CommonToolTip_Unreleased.WBP_CommonToolTip_Unreleased_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InReleaseLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsClassTypeVisible                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTip_Unreleased_C::SetInfo(const class FString& InName, int32 InReleaseLevel, ESBClassType InClassType, bool InIsClassTypeVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTip_Unreleased_C", "SetInfo");

	Params::WBP_CommonToolTip_Unreleased_C_SetInfo Parms{};

	Parms.InName = std::move(InName);
	Parms.InReleaseLevel = InReleaseLevel;
	Parms.InClassType = InClassType;
	Parms.InIsClassTypeVisible = InIsClassTypeVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

