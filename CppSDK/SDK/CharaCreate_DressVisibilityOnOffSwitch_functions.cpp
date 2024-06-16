#pragma once

 

// Package: CharaCreate_DressVisibilityOnOffSwitch

#include "Basic.hpp"

#include "CharaCreate_DressVisibilityOnOffSwitch_classes.hpp"
#include "CharaCreate_DressVisibilityOnOffSwitch_parameters.hpp"


namespace SDK
{

// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.OnDressVisibilitySwitchClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDressVisibilitySwitchOn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaCreate_DressVisibilityOnOffSwitch_C::OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilityOnOffSwitch_C", "OnDressVisibilitySwitchClicked__DelegateSignature");

	Params::CharaCreate_DressVisibilityOnOffSwitch_C_OnDressVisibilitySwitchClicked__DelegateSignature Parms{};

	Parms.InIsDressVisibilitySwitchOn = InIsDressVisibilitySwitchOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreate_DressVisibilityOnOffSwitch_C::ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilityOnOffSwitch_C", "ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch");

	Params::CharaCreate_DressVisibilityOnOffSwitch_C_ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.BndEvt__DressVisibilitySwitchOn_K2Node_ComponentBoundEvent_4_OnSwitchOnPressed__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilityOnOffSwitch_C::BndEvt__DressVisibilitySwitchOn_K2Node_ComponentBoundEvent_4_OnSwitchOnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilityOnOffSwitch_C", "BndEvt__DressVisibilitySwitchOn_K2Node_ComponentBoundEvent_4_OnSwitchOnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.BndEvt__DressVisibilitySwitchOff_K2Node_ComponentBoundEvent_3_OnSwitchOffPressed__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilityOnOffSwitch_C::BndEvt__DressVisibilitySwitchOff_K2Node_ComponentBoundEvent_3_OnSwitchOffPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilityOnOffSwitch_C", "BndEvt__DressVisibilitySwitchOff_K2Node_ComponentBoundEvent_3_OnSwitchOffPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C.SetActiveDressVisibilitySwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDressVisibilitySwitchOnActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaCreate_DressVisibilityOnOffSwitch_C::SetActiveDressVisibilitySwitch(bool InIsDressVisibilitySwitchOnActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilityOnOffSwitch_C", "SetActiveDressVisibilitySwitch");

	Params::CharaCreate_DressVisibilityOnOffSwitch_C_SetActiveDressVisibilitySwitch Parms{};

	Parms.InIsDressVisibilitySwitchOnActive = InIsDressVisibilitySwitchOnActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

