#pragma once

 

// Package: MyCharaMenu_LvSyncNum3

#include "Basic.hpp"

#include "MyCharaMenu_LvSyncNum3_classes.hpp"
#include "MyCharaMenu_LvSyncNum3_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.ExecuteUbergraph_MyCharaMenu_LvSyncNum3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LvSyncNum3_C::ExecuteUbergraph_MyCharaMenu_LvSyncNum3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSyncNum3_C", "ExecuteUbergraph_MyCharaMenu_LvSyncNum3");

	Params::MyCharaMenu_LvSyncNum3_C_ExecuteUbergraph_MyCharaMenu_LvSyncNum3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LvSyncNum3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSyncNum3_C", "PreConstruct");

	Params::MyCharaMenu_LvSyncNum3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OriginalValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LvSyncNum3_C::SetValue(int32 Value, int32 OriginalValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSyncNum3_C", "SetValue");

	Params::MyCharaMenu_LvSyncNum3_C_SetValue Parms{};

	Parms.Value = Value;
	Parms.OriginalValue = OriginalValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LvSyncNum3_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSyncNum3_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}

}

