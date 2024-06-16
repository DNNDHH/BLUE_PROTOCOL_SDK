#pragma once

 

// Package: LevelInfo1ForBattleSet

#include "Basic.hpp"

#include "LevelInfo1ForBattleSet_classes.hpp"
#include "LevelInfo1ForBattleSet_parameters.hpp"


namespace SDK
{

// Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelInfo1ForBattleSet_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInfo1ForBattleSet_C", "SetLevel");

	Params::LevelInfo1ForBattleSet_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C.SetImagineLevelSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULevelInfo1ForBattleSet_C::SetImagineLevelSync(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInfo1ForBattleSet_C", "SetImagineLevelSync");

	Params::LevelInfo1ForBattleSet_C_SetImagineLevelSync Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InClassType = InClassType;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}

}

