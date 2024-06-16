#pragma once

 

// Package: TacticalSkillInfoForBattleSet

#include "Basic.hpp"

#include "TacticalSkillInfoForBattleSet_classes.hpp"
#include "TacticalSkillInfoForBattleSet_parameters.hpp"


namespace SDK
{

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnSkillTypeRadioBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::OnSkillTypeRadioBtnSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "OnSkillTypeRadioBtnSelected__DelegateSignature");

	Params::TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature Parms{};

	Parms.InSelectedSkillTypeId = InSelectedSkillTypeId;
	Parms.InSelectedSkillId = InSelectedSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.ExecuteUbergraph_TacticalSkillInfoForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::ExecuteUbergraph_TacticalSkillInfoForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "ExecuteUbergraph_TacticalSkillInfoForBattleSet");

	Params::TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnRadioBtnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillTypeId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::OnRadioBtnSelected(int32 InSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "OnRadioBtnSelected");

	Params::TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected Parms{};

	Parms.InSkillTypeId = InSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTacticalSkillInfoForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTacticalSkillInfoForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillInfoForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "PreConstruct");

	Params::TacticalSkillInfoForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsSkillTypeSelectableLevel                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSkillTypeSelectMode                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InEquippedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::SetSKill(int32 InSkillId, int32 InSkillLevel, bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32 InEquippedSkillTypeId, int32 InSelectedSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "SetSKill");

	Params::TacticalSkillInfoForBattleSet_C_SetSKill Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InIsSkillTypeSelectableLevel = InIsSkillTypeSelectableLevel;
	Parms.InIsSkillTypeSelectMode = InIsSkillTypeSelectMode;
	Parms.InEquippedSkillTypeId = InEquippedSkillTypeId;
	Parms.InSelectedSkillTypeId = InSelectedSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetInfoType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSkillTypeSelectableLevel                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSkillTypeSelectMode                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InEquippedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::SetInfoType(bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32 InEquippedSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "SetInfoType");

	Params::TacticalSkillInfoForBattleSet_C_SetInfoType Parms{};

	Parms.InIsSkillTypeSelectableLevel = InIsSkillTypeSelectableLevel;
	Parms.InIsSkillTypeSelectMode = InIsSkillTypeSelectMode;
	Parms.InEquippedSkillTypeId = InEquippedSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.UpdateSkillTypeRadioBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillTypeId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::UpdateSkillTypeRadioBtn(int32 InSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "UpdateSkillTypeRadioBtn");

	Params::TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn Parms{};

	Parms.InSkillTypeId = InSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeSelectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelectMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InEquippedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::SetSkillTypeSelectMode(bool InIsSelectMode, int32 InEquippedSkillTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "SetSkillTypeSelectMode");

	Params::TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode Parms{};

	Parms.InIsSelectMode = InIsSelectMode;
	Parms.InEquippedSkillTypeId = InEquippedSkillTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.GetAbilitySkillId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBaseSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutAbilityAlphaSkillId                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutAbilityBetaSkillId                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTacticalSkillInfoForBattleSet_C::GetAbilitySkillId(int32 InBaseSkillId, int32* OutAbilityAlphaSkillId, int32* OutAbilityBetaSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "GetAbilitySkillId");

	Params::TacticalSkillInfoForBattleSet_C_GetAbilitySkillId Parms{};

	Parms.InBaseSkillId = InBaseSkillId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAbilityAlphaSkillId != nullptr)
		*OutAbilityAlphaSkillId = Parms.OutAbilityAlphaSkillId;

	if (OutAbilityBetaSkillId != nullptr)
		*OutAbilityBetaSkillId = Parms.OutAbilityBetaSkillId;
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.CheckAbilityMastery
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilitySkillId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsMastery                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillInfoForBattleSet_C::CheckAbilityMastery(int32 InAbilitySkillId, bool* OutIsMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "CheckAbilityMastery");

	Params::TacticalSkillInfoForBattleSet_C_CheckAbilityMastery Parms{};

	Parms.InAbilitySkillId = InAbilitySkillId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsMastery != nullptr)
		*OutIsMastery = Parms.OutIsMastery;
}


// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeRadioBtnEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTacticalSkillTypeRadioBtn_C*     InSkillTypeRadioBtn                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTacticalSkillInfoForBattleSet_C::SetSkillTypeRadioBtnEnable(class UTacticalSkillTypeRadioBtn_C* InSkillTypeRadioBtn, bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TacticalSkillInfoForBattleSet_C", "SetSkillTypeRadioBtnEnable");

	Params::TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable Parms{};

	Parms.InSkillTypeRadioBtn = InSkillTypeRadioBtn;
	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

