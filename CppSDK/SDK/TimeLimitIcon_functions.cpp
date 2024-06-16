#pragma once

 

// Package: TimeLimitIcon

#include "Basic.hpp"

#include "TimeLimitIcon_classes.hpp"
#include "TimeLimitIcon_parameters.hpp"


namespace SDK
{

// Function TimeLimitIcon.TimeLimitIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTimeLimitIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeLimitIcon_C", "GetToolTipWidget_0");

	Params::TimeLimitIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TimeLimitIcon.TimeLimitIcon_C.SetTermId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEventTermId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTimeLimitIcon_C::SetTermId(const class FString& InEventTermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeLimitIcon_C", "SetTermId");

	Params::TimeLimitIcon_C_SetTermId Parms{};

	Parms.InEventTermId = std::move(InEventTermId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimeLimitIcon.TimeLimitIcon_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Text                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UTimeLimitIcon_C::SetText(const class FText& Param_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeLimitIcon_C", "SetText");

	Params::TimeLimitIcon_C_SetText Parms{};

	Parms.Param_Text = std::move(Param_Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

