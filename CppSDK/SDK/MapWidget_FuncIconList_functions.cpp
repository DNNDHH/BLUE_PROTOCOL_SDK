#pragma once

 

// Package: MapWidget_FuncIconList

#include "Basic.hpp"

#include "MapWidget_FuncIconList_classes.hpp"
#include "MapWidget_FuncIconList_parameters.hpp"


namespace SDK
{

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnFuncIconSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapFuncIconType                        InSelectedFuncIconType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconList_C::OnFuncIconSelected__DelegateSignature(EMapFuncIconType InSelectedFuncIconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "OnFuncIconSelected__DelegateSignature");

	Params::MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature Parms{};

	Parms.InSelectedFuncIconType = InSelectedFuncIconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.ExecuteUbergraph_MapWidget_FuncIconList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconList_C::ExecuteUbergraph_MapWidget_FuncIconList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "ExecuteUbergraph_MapWidget_FuncIconList");

	Params::MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_FuncIconList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnIconPressedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_FuncIconItem_C*        InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconList_C::OnIconPressedEvent(class UMapWidget_FuncIconItem_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "OnIconPressedEvent");

	Params::MapWidget_FuncIconList_C_OnIconPressedEvent Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.FuncIconPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_FuncIconItem_C*        InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconList_C::FuncIconPressed(class UMapWidget_FuncIconItem_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "FuncIconPressed");

	Params::MapWidget_FuncIconList_C_FuncIconPressed Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_FuncIconList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapFuncIconType                        InFuncIconType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_FuncIconList_C::SetFuncIconEnable(EMapFuncIconType InFuncIconType, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "SetFuncIconEnable");

	Params::MapWidget_FuncIconList_C_SetFuncIconEnable Parms{};

	Parms.InFuncIconType = InFuncIconType;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapFuncIconType                        InFuncIconType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_FuncIconList_C::SetFuncIconVisibility(EMapFuncIconType InFuncIconType, bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconList_C", "SetFuncIconVisibility");

	Params::MapWidget_FuncIconList_C_SetFuncIconVisibility Parms{};

	Parms.InFuncIconType = InFuncIconType;
	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

