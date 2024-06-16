#pragma once

 

// Package: CharaCreate_DressVisibilitySwitchOn

#include "Basic.hpp"

#include "CharaCreate_DressVisibilitySwitchOn_classes.hpp"
#include "CharaCreate_DressVisibilitySwitchOn_parameters.hpp"


namespace SDK
{

// Function CharaCreate_DressVisibilitySwitchOn.CharaCreate_DressVisibilitySwitchOn_C.OnSwitchOnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOn_C::OnSwitchOnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOn_C", "OnSwitchOnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilitySwitchOn.CharaCreate_DressVisibilitySwitchOn_C.ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreate_DressVisibilitySwitchOn_C::ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOn_C", "ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOn");

	Params::CharaCreate_DressVisibilitySwitchOn_C_ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreate_DressVisibilitySwitchOn.CharaCreate_DressVisibilitySwitchOn_C.BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOn_C::BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOn_C", "BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilitySwitchOn.CharaCreate_DressVisibilitySwitchOn_C.BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOn_C::BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOn_C", "BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreate_DressVisibilitySwitchOn.CharaCreate_DressVisibilitySwitchOn_C.BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreate_DressVisibilitySwitchOn_C::BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreate_DressVisibilitySwitchOn_C", "BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

