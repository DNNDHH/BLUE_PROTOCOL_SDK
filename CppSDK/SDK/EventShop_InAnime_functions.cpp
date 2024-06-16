#pragma once

 

// Package: EventShop_InAnime

#include "Basic.hpp"

#include "EventShop_InAnime_classes.hpp"
#include "EventShop_InAnime_parameters.hpp"


namespace SDK
{

// Function EventShop_InAnime.EventShop_InAnime_C.ExecuteUbergraph_EventShop_InAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShop_InAnime_C::ExecuteUbergraph_EventShop_InAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_InAnime_C", "ExecuteUbergraph_EventShop_InAnime");

	Params::EventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShop_InAnime.EventShop_InAnime_C.PlayInAnim
// (BlueprintCallable, BlueprintEvent)

void UEventShop_InAnime_C::PlayInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShop_InAnime_C", "PlayInAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

