#pragma once

 

// Package: InstanceDungeonBattleinfoHUD

#include "Basic.hpp"

#include "InstanceDungeonBattleinfoHUD_classes.hpp"
#include "InstanceDungeonBattleinfoHUD_parameters.hpp"


namespace SDK
{

// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.ExecuteUbergraph_InstanceDungeonBattleinfoHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInstanceDungeonBattleinfoHUD_C::ExecuteUbergraph_InstanceDungeonBattleinfoHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceDungeonBattleinfoHUD_C", "ExecuteUbergraph_InstanceDungeonBattleinfoHUD");

	Params::InstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInstanceDungeonBattleinfoHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceDungeonBattleinfoHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetPlayerReadyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBox*                   InHorizonalBox                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InReadyNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInstanceDungeonBattleinfoHUD_C::SetPlayerReadyVisibility(class UHorizontalBox* InHorizonalBox, int32 InMax, int32 InReadyNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceDungeonBattleinfoHUD_C", "SetPlayerReadyVisibility");

	Params::InstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility Parms{};

	Parms.InHorizonalBox = InHorizonalBox;
	Parms.InMax = InMax;
	Parms.InReadyNum = InReadyNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.UpdateDemoHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            InDemoPlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UDemoHUD_C*>               InHUD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UInstanceDungeonBattleinfoHUD_C::UpdateDemoHUD(TArray<bool>& InDemoPlay, TArray<class UDemoHUD_C*>& InHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceDungeonBattleinfoHUD_C", "UpdateDemoHUD");

	Params::InstanceDungeonBattleinfoHUD_C_UpdateDemoHUD Parms{};

	Parms.InDemoPlay = std::move(InDemoPlay);
	Parms.InHUD = std::move(InHUD);

	UObject::ProcessEvent(Func, &Parms);

	InDemoPlay = std::move(Parms.InDemoPlay);
	InHUD = std::move(Parms.InHUD);
}


// Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetRootVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstanceDungeonBattleinfoHUD_C::SetRootVisibility(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceDungeonBattleinfoHUD_C", "SetRootVisibility");

	Params::InstanceDungeonBattleinfoHUD_C_SetRootVisibility Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

