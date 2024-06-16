#pragma once

 

// Package: ClassAbilityInfoForBattleCordeEdit

#include "Basic.hpp"

#include "ClassAbilityInfoForBattleCordeEdit_classes.hpp"
#include "ClassAbilityInfoForBattleCordeEdit_parameters.hpp"


namespace SDK
{

// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.OnClassAbilityIconClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClassAbilityInfoForBattleCordeEdit_C::OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "OnClassAbilityIconClicked__DelegateSignature");

	Params::ClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClassAbilityInfoForBattleCordeEdit_C::ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit");

	Params::ClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UClassAbilityInfoForBattleCordeEdit_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UClassAbilityInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "PreConstruct");

	Params::ClassAbilityInfoForBattleCordeEdit_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Const
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UClassAbilityInfoForBattleCordeEdit_C::Const()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "Const");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Dest
// (Public, BlueprintCallable, BlueprintEvent)

void UClassAbilityInfoForBattleCordeEdit_C::Dest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "Dest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InClassAbilitySkillIds                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UClassAbilityInfoForBattleCordeEdit_C::Setup(TArray<int32>& InClassAbilitySkillIds, bool InSetupByCurrEquip, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassAbilityInfoForBattleCordeEdit_C", "Setup");

	Params::ClassAbilityInfoForBattleCordeEdit_C_Setup Parms{};

	Parms.InClassAbilitySkillIds = std::move(InClassAbilitySkillIds);
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	InClassAbilitySkillIds = std::move(Parms.InClassAbilitySkillIds);
}

}

