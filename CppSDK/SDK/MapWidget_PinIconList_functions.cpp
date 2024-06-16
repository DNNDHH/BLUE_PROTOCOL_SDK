#pragma once

 

// Package: MapWidget_PinIconList

#include "Basic.hpp"

#include "MapWidget_PinIconList_classes.hpp"
#include "MapWidget_PinIconList_parameters.hpp"


namespace SDK
{

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapPinType                             InSelectedPinType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconList_C::OnPinIconSelected__DelegateSignature(EMapPinType InSelectedPinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "OnPinIconSelected__DelegateSignature");

	Params::MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature Parms{};

	Parms.InSelectedPinType = InSelectedPinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.ExecuteUbergraph_MapWidget_PinIconList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconList_C::ExecuteUbergraph_MapWidget_PinIconList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "ExecuteUbergraph_MapWidget_PinIconList");

	Params::MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.EraserIconPressed
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_PinIconList_C::EraserIconPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "EraserIconPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinEraserIconBtnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_PinEraserIconBtn_C*    InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconList_C::OnPinEraserIconBtnPressed(class UMapWidget_PinEraserIconBtn_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "OnPinEraserIconBtnPressed");

	Params::MapWidget_PinIconList_C_OnPinEraserIconBtnPressed Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconBtnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_PinIconBtn_C*          InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconList_C::OnPinIconBtnPressed(class UMapWidget_PinIconBtn_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "OnPinIconBtnPressed");

	Params::MapWidget_PinIconList_C_OnPinIconBtnPressed Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_PinIconList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.PinIconPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_PinIconBtn_C*          InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PinIconList_C::PinIconPressed(class UMapWidget_PinIconBtn_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "PinIconPressed");

	Params::MapWidget_PinIconList_C_PinIconPressed Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_PinIconList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetPinIconEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapPinType                             InPinType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_PinIconList_C::SetPinIconEnable(EMapPinType InPinType, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "SetPinIconEnable");

	Params::MapWidget_PinIconList_C_SetPinIconEnable Parms{};

	Parms.InPinType = InPinType;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetAllPinIconEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIncludeEraser                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_PinIconList_C::SetAllPinIconEnable(bool IsEnable, bool InIncludeEraser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PinIconList_C", "SetAllPinIconEnable");

	Params::MapWidget_PinIconList_C_SetAllPinIconEnable Parms{};

	Parms.IsEnable = IsEnable;
	Parms.InIncludeEraser = InIncludeEraser;

	UObject::ProcessEvent(Func, &Parms);
}

}

