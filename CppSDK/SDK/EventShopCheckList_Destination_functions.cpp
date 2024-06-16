#pragma once

 

// Package: EventShopCheckList_Destination

#include "Basic.hpp"

#include "EventShopCheckList_Destination_classes.hpp"
#include "EventShopCheckList_Destination_parameters.hpp"


namespace SDK
{

// Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.ExecuteUbergraph_EventShopCheckList_Destination
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Destination_C::ExecuteUbergraph_EventShopCheckList_Destination(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Destination_C", "ExecuteUbergraph_EventShopCheckList_Destination");

	Params::EventShopCheckList_Destination_C_ExecuteUbergraph_EventShopCheckList_Destination Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShopCheckList_Destination_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Destination_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.SetIsOver
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopCheckList_Destination_C::SetIsOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Destination_C", "SetIsOver");

	UObject::ProcessEvent(Func, nullptr);
}

}

