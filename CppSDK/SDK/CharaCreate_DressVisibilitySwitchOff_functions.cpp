#pragma once

 

// Package: CharaCreate_DressVisibilitySwitchOff

#include "Basic.hpp"

#include "CharaCreate_DressVisibilitySwitchOff_classes.hpp"
#include "CharaCreate_DressVisibilitySwitchOff_parameters.hpp"


namespace SDK
{

// Function CharaCreate_DressVisibilitySwitchOff.CharaCreate_DressVisibilitySwitchOff_C.OnSwitchOffPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOff_C::OnSwitchOffPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOff_C", "OnSwitchOffPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilitySwitchOff.CharaCreate_DressVisibilitySwitchOff_C.ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreate_DressVisibilitySwitchOff_C::ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOff_C", "ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOff");

	Params::CharaCreate_DressVisibilitySwitchOff_C_ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreate_DressVisibilitySwitchOff.CharaCreate_DressVisibilitySwitchOff_C.BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOff_C::BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOff_C", "BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilitySwitchOff.CharaCreate_DressVisibilitySwitchOff_C.BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOff_C::BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOff_C", "BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilitySwitchOff.CharaCreate_DressVisibilitySwitchOff_C.BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOff_C::BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOff_C", "BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

