#pragma once

 

// Package: MapWidget_PinEraserIconBtn

#include "Basic.hpp"

#include "MapWidget_PinEraserIconBtn_classes.hpp"
#include "MapWidget_PinEraserIconBtn_parameters.hpp"


namespace SDK
{

// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_PinEraserIconBtn_C*    InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinEraserIconBtn_C::OnPressed__DelegateSignature(class UMapWidget_PinEraserIconBtn_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinEraserIconBtn_C", "OnPressed__DelegateSignature");

	Params::MapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.ExecuteUbergraph_MapWidget_PinEraserIconBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinEraserIconBtn_C::ExecuteUbergraph_MapWidget_PinEraserIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinEraserIconBtn_C", "ExecuteUbergraph_MapWidget_PinEraserIconBtn");

	Params::MapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_PinEraserIconBtn_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinEraserIconBtn_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.SetIconBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_PinEraserIconBtn_C::SetIconBtnEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinEraserIconBtn_C", "SetIconBtnEnable");

	Params::MapWidget_PinEraserIconBtn_C_SetIconBtnEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

