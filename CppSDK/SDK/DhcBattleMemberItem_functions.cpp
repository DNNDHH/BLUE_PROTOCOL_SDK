#pragma once

 

// Package: DhcBattleMemberItem

#include "Basic.hpp"

#include "DhcBattleMemberItem_classes.hpp"
#include "DhcBattleMemberItem_parameters.hpp"


namespace SDK
{

// Function DhcBattleMemberItem.DhcBattleMemberItem_C.ExecuteUbergraph_DhcBattleMemberItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleMemberItem_C::ExecuteUbergraph_DhcBattleMemberItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleMemberItem_C", "ExecuteUbergraph_DhcBattleMemberItem");

	Params::DhcBattleMemberItem_C_ExecuteUbergraph_DhcBattleMemberItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleMemberItem.DhcBattleMemberItem_C.SetDPS
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DPS                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleMemberItem_C::SetDPS(float DPS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleMemberItem_C", "SetDPS");

	Params::DhcBattleMemberItem_C_SetDPS Parms{};

	Parms.DPS = DPS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleMemberItem.DhcBattleMemberItem_C.SetPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleMemberItem_C::SetPlayerInfo(const class FString& Param_Name, ESBClassType ClassType, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleMemberItem_C", "SetPlayerInfo");

	Params::DhcBattleMemberItem_C_SetPlayerInfo Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.ClassType = ClassType;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

