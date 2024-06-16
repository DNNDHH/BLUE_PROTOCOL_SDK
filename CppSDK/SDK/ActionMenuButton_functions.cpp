#pragma once

 

// Package: ActionMenuButton

#include "Basic.hpp"

#include "ActionMenuButton_classes.hpp"
#include "ActionMenuButton_parameters.hpp"


namespace SDK
{

// Function ActionMenuButton.ActionMenuButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionMenuButton_C*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionMenuButton_C::OnClicked__DelegateSignature(class UActionMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "OnClicked__DelegateSignature");

	Params::ActionMenuButton_C_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenuButton.ActionMenuButton_C.ExecuteUbergraph_ActionMenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionMenuButton_C::ExecuteUbergraph_ActionMenuButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "ExecuteUbergraph_ActionMenuButton");

	Params::ActionMenuButton_C_ExecuteUbergraph_ActionMenuButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionMenuButton.ActionMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UActionMenuButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenuButton.ActionMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UActionMenuButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenuButton.ActionMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UActionMenuButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenuButton.ActionMenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActionMenuButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActionMenuButton.ActionMenuButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UActionMenuButton_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionMenuButton_C", "SetText");

	Params::ActionMenuButton_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

