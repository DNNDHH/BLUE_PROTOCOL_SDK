#pragma once

 

// Package: MyCharaMenu_LvSync

#include "Basic.hpp"

#include "MyCharaMenu_LvSync_classes.hpp"
#include "MyCharaMenu_LvSync_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.ExecuteUbergraph_MyCharaMenu_LvSync
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LvSync_C::ExecuteUbergraph_MyCharaMenu_LvSync(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSync_C", "ExecuteUbergraph_MyCharaMenu_LvSync");

	Params::MyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_LvSync_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSync_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLevelSync                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LvSync_C::Update(bool bIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LvSync_C", "Update");

	Params::MyCharaMenu_LvSync_C_Update Parms{};

	Parms.bIsLevelSync = bIsLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}

}

