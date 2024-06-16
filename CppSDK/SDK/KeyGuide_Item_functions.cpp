#pragma once

 

// Package: KeyGuide_Item

#include "Basic.hpp"

#include "KeyGuide_Item_classes.hpp"
#include "KeyGuide_Item_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Item.KeyGuide_Item_C.ExecuteUbergraph_KeyGuide_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Item_C::ExecuteUbergraph_KeyGuide_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Item_C", "ExecuteUbergraph_KeyGuide_Item");

	Params::KeyGuide_Item_C_ExecuteUbergraph_KeyGuide_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Item.KeyGuide_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Item_C", "PreConstruct");

	Params::KeyGuide_Item_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

