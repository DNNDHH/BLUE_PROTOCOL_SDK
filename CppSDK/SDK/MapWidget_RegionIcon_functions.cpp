#pragma once

 

// Package: MapWidget_RegionIcon

#include "Basic.hpp"

#include "MapWidget_RegionIcon_classes.hpp"
#include "MapWidget_RegionIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRegionMapId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_RegionIcon_C::OnPressed__DelegateSignature(const class FString& InRegionMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_RegionIcon_C", "OnPressed__DelegateSignature");

	Params::MapWidget_RegionIcon_C_OnPressed__DelegateSignature Parms{};

	Parms.InRegionMapId = std::move(InRegionMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.ExecuteUbergraph_MapWidget_RegionIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_RegionIcon_C::ExecuteUbergraph_MapWidget_RegionIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_RegionIcon_C", "ExecuteUbergraph_MapWidget_RegionIcon");

	Params::MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_RegionIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_RegionIcon_C", "BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_RegionIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_RegionIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_RegionIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_RegionIcon_C", "GetToolTipWidget_0");

	Params::MapWidget_RegionIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.SetRegion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRegionMapId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_RegionIcon_C::SetRegion(const class FString& InRegionMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_RegionIcon_C", "SetRegion");

	Params::MapWidget_RegionIcon_C_SetRegion Parms{};

	Parms.InRegionMapId = std::move(InRegionMapId);

	UObject::ProcessEvent(Func, &Parms);
}

}

