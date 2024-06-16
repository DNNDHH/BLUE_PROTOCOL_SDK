#pragma once

 

// Package: SwitchingTitle

#include "Basic.hpp"

#include "SwitchingTitle_classes.hpp"
#include "SwitchingTitle_parameters.hpp"


namespace SDK
{

// Function SwitchingTitle.SwitchingTitle_C.ExecuteUbergraph_SwitchingTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USwitchingTitle_C::ExecuteUbergraph_SwitchingTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchingTitle_C", "ExecuteUbergraph_SwitchingTitle");

	Params::SwitchingTitle_C_ExecuteUbergraph_SwitchingTitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SwitchingTitle.SwitchingTitle_C.BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USwitchingTitle_C::BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchingTitle_C", "BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SwitchingTitle.SwitchingTitle_C.OnPlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USwitchingTitle_C::OnPlaySE(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchingTitle_C", "OnPlaySE");

	Params::SwitchingTitle_C_OnPlaySE Parms{};

	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

}

