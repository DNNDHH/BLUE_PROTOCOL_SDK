#pragma once

 

// Package: MapWidget_Cloud

#include "Basic.hpp"

#include "MapWidget_Cloud_classes.hpp"
#include "MapWidget_Cloud_parameters.hpp"


namespace SDK
{

// Function MapWidget_Cloud.MapWidget_Cloud_C.ExecuteUbergraph_MapWidget_Cloud
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Cloud_C::ExecuteUbergraph_MapWidget_Cloud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Cloud_C", "ExecuteUbergraph_MapWidget_Cloud");

	Params::MapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Cloud.MapWidget_Cloud_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Cloud_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Cloud_C", "PreConstruct");

	Params::MapWidget_Cloud_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Cloud.MapWidget_Cloud_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_Cloud_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Cloud_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Cloud.MapWidget_Cloud_C.OnCloudReachedLeftEdgeOfTheScreen
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Cloud_C::OnCloudReachedLeftEdgeOfTheScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Cloud_C", "OnCloudReachedLeftEdgeOfTheScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Cloud.MapWidget_Cloud_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_Cloud_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Cloud_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

