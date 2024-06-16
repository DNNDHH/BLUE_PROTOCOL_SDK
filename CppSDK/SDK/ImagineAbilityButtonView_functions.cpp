#pragma once

 

// Package: ImagineAbilityButtonView

#include "Basic.hpp"

#include "ImagineAbilityButtonView_classes.hpp"
#include "ImagineAbilityButtonView_parameters.hpp"


namespace SDK
{

// Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.Reselect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineAbilityButtonView_C::Reselect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityButtonView_C", "Reselect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.ExecuteUbergraph_ImagineAbilityButtonView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineAbilityButtonView_C::ExecuteUbergraph_ImagineAbilityButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityButtonView_C", "ExecuteUbergraph_ImagineAbilityButtonView");

	Params::ImagineAbilityButtonView_C_ExecuteUbergraph_ImagineAbilityButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UImagineAbilityButtonView_C::BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityButtonView_C", "BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityButtonView.ImagineAbilityButtonView_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAbilityButtonView_C::SetData(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityButtonView_C", "SetData");

	Params::ImagineAbilityButtonView_C_SetData Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

