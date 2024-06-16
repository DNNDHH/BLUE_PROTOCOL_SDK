#pragma once

 

// Package: MapWidget_PinIconBtn

#include "Basic.hpp"

#include "MapWidget_PinIconBtn_classes.hpp"
#include "MapWidget_PinIconBtn_parameters.hpp"


namespace SDK
{

// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_PinIconBtn_C*          InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconBtn_C::OnPressed__DelegateSignature(class UMapWidget_PinIconBtn_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconBtn_C", "OnPressed__DelegateSignature");

	Params::MapWidget_PinIconBtn_C_OnPressed__DelegateSignature Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.ExecuteUbergraph_MapWidget_PinIconBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconBtn_C::ExecuteUbergraph_MapWidget_PinIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconBtn_C", "ExecuteUbergraph_MapWidget_PinIconBtn");

	Params::MapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_PinIconBtn_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconBtn_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconTextureByPinType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapPinType                             InPinType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconBtn_C::SetIconTextureByPinType(EMapPinType InPinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconBtn_C", "SetIconTextureByPinType");

	Params::MapWidget_PinIconBtn_C_SetIconTextureByPinType Parms{};

	Parms.InPinType = InPinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_PinIconBtn_C::SetIconBtnEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconBtn_C", "SetIconBtnEnable");

	Params::MapWidget_PinIconBtn_C_SetIconBtnEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

