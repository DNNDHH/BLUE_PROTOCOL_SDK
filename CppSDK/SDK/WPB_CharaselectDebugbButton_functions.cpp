#pragma once

 

// Package: WPB_CharaselectDebugbButton

#include "Basic.hpp"

#include "WPB_CharaselectDebugbButton_classes.hpp"
#include "WPB_CharaselectDebugbButton_parameters.hpp"


namespace SDK
{

// Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.ExecuteUbergraph_WPB_CharaselectDebugbButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWPB_CharaselectDebugbButton_C::ExecuteUbergraph_WPB_CharaselectDebugbButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPB_CharaselectDebugbButton_C", "ExecuteUbergraph_WPB_CharaselectDebugbButton");

	Params::WPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_StateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             Param_Command                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CharacterSelectCaptureOne_C*>Param_CharacterSelectCaptureOne                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWPB_CharaselectDebugbButton_C::Initialize(const class FString& Param_StateName, class FName Param_Command, TArray<class ABP_CharacterSelectCaptureOne_C*>& Param_CharacterSelectCaptureOne)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPB_CharaselectDebugbButton_C", "Initialize");

	Params::WPB_CharaselectDebugbButton_C_Initialize Parms{};

	Parms.Param_StateName = std::move(Param_StateName);
	Parms.Param_Command = Param_Command;
	Parms.Param_CharacterSelectCaptureOne = std::move(Param_CharacterSelectCaptureOne);

	UObject::ProcessEvent(Func, &Parms);

	Param_CharacterSelectCaptureOne = std::move(Parms.Param_CharacterSelectCaptureOne);
}


// Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWPB_CharaselectDebugbButton_C::BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPB_CharaselectDebugbButton_C", "BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

