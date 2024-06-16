#pragma once

 

// Package: ShortPin

#include "Basic.hpp"

#include "ShortPin_classes.hpp"
#include "ShortPin_parameters.hpp"


namespace SDK
{

// Function ShortPin.ShortPin_C.ExecuteUbergraph_ShortPin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortPin_C::ExecuteUbergraph_ShortPin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortPin_C", "ExecuteUbergraph_ShortPin");

	Params::ShortPin_C_ExecuteUbergraph_ShortPin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortPin.ShortPin_C.UpdatePinInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNew                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortPin_C::UpdatePinInfo(bool IsNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortPin_C", "UpdatePinInfo");

	Params::ShortPin_C_UpdatePinInfo Parms{};

	Parms.IsNew = IsNew;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortPin.ShortPin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShortPin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortPin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

