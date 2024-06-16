#pragma once

 

// Package: DhcBattleTopClassAbilityInfo

#include "Basic.hpp"

#include "DhcBattleTopClassAbilityInfo_classes.hpp"
#include "DhcBattleTopClassAbilityInfo_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.OnClassAbilityIconClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassAbilityInfo_C::OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassAbilityInfo_C", "OnClassAbilityIconClicked__DelegateSignature");

	Params::DhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.ExecuteUbergraph_DhcBattleTopClassAbilityInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassAbilityInfo_C::ExecuteUbergraph_DhcBattleTopClassAbilityInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassAbilityInfo_C", "ExecuteUbergraph_DhcBattleTopClassAbilityInfo");

	Params::DhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopClassAbilityInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassAbilityInfo_C", "PreConstruct");

	Params::DhcBattleTopClassAbilityInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDhcBattlePlayerEquipArtsInfo>InEquipArtsInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopClassAbilityInfo_C::Setup(TArray<struct FSBDhcBattlePlayerEquipArtsInfo>& InEquipArtsInfo, ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopClassAbilityInfo_C", "Setup");

	Params::DhcBattleTopClassAbilityInfo_C_Setup Parms{};

	Parms.InEquipArtsInfo = std::move(InEquipArtsInfo);
	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	InEquipArtsInfo = std::move(Parms.InEquipArtsInfo);
}

}

