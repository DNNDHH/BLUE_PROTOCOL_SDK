#pragma once

 

// Package: MapEditWindowPin

#include "Basic.hpp"

#include "MapEditWindowPin_classes.hpp"
#include "MapEditWindowPin_parameters.hpp"


namespace SDK
{

// Function MapEditWindowPin.MapEditWindowPin_C.OnPinVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::OnPinVisible__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "OnPinVisible__DelegateSignature");

	Params::MapEditWindowPin_C_OnPinVisible__DelegateSignature Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.ExecuteUbergraph_MapEditWindowPin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindowPin_C::ExecuteUbergraph_MapEditWindowPin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "ExecuteUbergraph_MapEditWindowPin");

	Params::MapEditWindowPin_C_ExecuteUbergraph_MapEditWindowPin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "PreConstruct");

	Params::MapEditWindowPin_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MapEditWindowPin_C_BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MapEditWindowPin_C_BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindowPin_C::SetTitle(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "SetTitle");

	Params::MapEditWindowPin_C_SetTitle Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PinChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::Set_Pin_Visible(bool PinChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "Set Pin Visible");

	Params::MapEditWindowPin_C_Set_Pin_Visible Parms{};

	Parms.PinChecked = PinChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible ON
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::Set_Pin_Visible_ON(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "Set Pin Visible ON");

	Params::MapEditWindowPin_C_Set_Pin_Visible_ON Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible OFF
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOFF                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowPin_C::Set_Pin_Visible_OFF(bool IsOFF)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowPin_C", "Set Pin Visible OFF");

	Params::MapEditWindowPin_C_Set_Pin_Visible_OFF Parms{};

	Parms.IsOFF = IsOFF;

	UObject::ProcessEvent(Func, &Parms);
}

}

