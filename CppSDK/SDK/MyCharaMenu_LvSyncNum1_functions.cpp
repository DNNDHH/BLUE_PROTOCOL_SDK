#pragma once

 

// Package: MyCharaMenu_LvSyncNum1

#include "Basic.hpp"

#include "MyCharaMenu_LvSyncNum1_classes.hpp"
#include "MyCharaMenu_LvSyncNum1_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_LvSyncNum1.MyCharaMenu_LvSyncNum1_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OriginalValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LvSyncNum1_C::SetValue(int32 Value, int32 OriginalValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSyncNum1_C", "SetValue");

	Params::MyCharaMenu_LvSyncNum1_C_SetValue Parms{};

	Parms.Value = Value;
	Parms.OriginalValue = OriginalValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LvSyncNum1.MyCharaMenu_LvSyncNum1_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LvSyncNum1_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSyncNum1_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}

}

