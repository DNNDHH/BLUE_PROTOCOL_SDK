#pragma once

 

// Package: PlayerProfileClassListItem

#include "Basic.hpp"

#include "PlayerProfileClassListItem_classes.hpp"
#include "PlayerProfileClassListItem_parameters.hpp"


namespace SDK
{

// Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.ExecuteUbergraph_PlayerProfileClassListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileClassListItem_C::ExecuteUbergraph_PlayerProfileClassListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassListItem_C", "ExecuteUbergraph_PlayerProfileClassListItem");

	Params::PlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfileClassListItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassListItem_C", "PreConstruct");

	Params::PlayerProfileClassListItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.SetLv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Lv                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileClassListItem_C::SetLv(int32 Param_Lv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassListItem_C", "SetLv");

	Params::PlayerProfileClassListItem_C_SetLv Parms{};

	Parms.Param_Lv = Param_Lv;

	UObject::ProcessEvent(Func, &Parms);
}

}

