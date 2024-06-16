#pragma once

 

// Package: MapWidget_DividedZoneList

#include "Basic.hpp"

#include "MapWidget_DividedZoneList_classes.hpp"
#include "MapWidget_DividedZoneList_parameters.hpp"


namespace SDK
{

// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InDividedZoneId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_DividedZoneList_C::OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneList_C", "OnListItemClicked__DelegateSignature");

	Params::MapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature Parms{};

	Parms.InDividedZoneId = std::move(InDividedZoneId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.ExecuteUbergraph_MapWidget_DividedZoneList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_DividedZoneList_C::ExecuteUbergraph_MapWidget_DividedZoneList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneList_C", "ExecuteUbergraph_MapWidget_DividedZoneList");

	Params::MapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_DividedZoneListItem_C* InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InDividedZoneId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_DividedZoneList_C::OnListItemClickedEvent(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneList_C", "OnListItemClickedEvent");

	Params::MapWidget_DividedZoneList_C_OnListItemClickedEvent Parms{};

	Parms.InSelf = InSelf;
	Parms.InDividedZoneId = std::move(InDividedZoneId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_DividedZoneList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_DividedZoneList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneList_C", "PreConstruct");

	Params::MapWidget_DividedZoneList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>                   InVisitedZoneIds                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMapWidget_DividedZoneList_C::Setup(const class FString& InMapId, TArray<class FString>& InVisitedZoneIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneList_C", "Setup");

	Params::MapWidget_DividedZoneList_C_Setup Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.InVisitedZoneIds = std::move(InVisitedZoneIds);

	UObject::ProcessEvent(Func, &Parms);

	InVisitedZoneIds = std::move(Parms.InVisitedZoneIds);
}

}

