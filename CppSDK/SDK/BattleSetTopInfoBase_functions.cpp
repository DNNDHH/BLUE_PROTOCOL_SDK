#pragma once

 

// Package: BattleSetTopInfoBase

#include "Basic.hpp"

#include "BattleSetTopInfoBase_classes.hpp"
#include "BattleSetTopInfoBase_parameters.hpp"


namespace SDK
{

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoWeaponIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::OnTopInfoWeaponIconPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnTopInfoWeaponIconPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnTopInfoTacticalSkillIconPressed__DelegateSignature");

	Params::BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnTopInfoBattleImagineIconPressed__DelegateSignature");

	Params::BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnTopInfoClassAbilityIconPressed__DelegateSignature(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnTopInfoClassAbilityIconPressed__DelegateSignature");

	Params::BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InInnerImagineSlotType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnTopInfoInnerImagineIconPressed__DelegateSignature");

	Params::BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature Parms{};

	Parms.InInnerImagineSlotType = InInnerImagineSlotType;
	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ExecuteUbergraph_BattleSetTopInfoBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::ExecuteUbergraph_BattleSetTopInfoBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "ExecuteUbergraph_BattleSetTopInfoBase");

	Params::BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleSetTopInfoBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnInnerImagineIconPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InInnerImagineSlotType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnInnerImagineIconPressed(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnInnerImagineIconPressed");

	Params::BattleSetTopInfoBase_C_OnInnerImagineIconPressed Parms{};

	Parms.InInnerImagineSlotType = InInnerImagineSlotType;
	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnClassAbilityIconPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnClassAbilityIconPressed(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnClassAbilityIconPressed");

	Params::BattleSetTopInfoBase_C_OnClassAbilityIconPressed Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnBattleImagineIconPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnBattleImagineIconPressed(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnBattleImagineIconPressed");

	Params::BattleSetTopInfoBase_C_OnBattleImagineIconPressed Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTacticalSkillIconPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoBase_C::OnTacticalSkillIconPressed(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnTacticalSkillIconPressed");

	Params::BattleSetTopInfoBase_C_OnTacticalSkillIconPressed Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnWeaponIconPressed
// (BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::OnWeaponIconPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "OnWeaponIconPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleSetTopInfoBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsStorageMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoBase_C::SetupInfo(bool Param_bIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupInfo");

	Params::BattleSetTopInfoBase_C_SetupInfo Parms{};

	Parms.Param_bIsStorageMode = Param_bIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupWeaponInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::SetupWeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupWeaponInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupAllSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::SetupAllSkillInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupAllSkillInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleImagineInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::SetupBattleImagineInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupBattleImagineInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupTacticalSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::SetupTacticalSkillInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupTacticalSkillInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupClassAbilityInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::SetupClassAbilityInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupClassAbilityInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInnerImagineInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::SetupInnerImagineInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupInnerImagineInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleCordeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSetupByCurrentEquip                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoBase_C::SetupBattleCordeInfo(int32 InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "SetupBattleCordeInfo");

	Params::BattleSetTopInfoBase_C_SetupBattleCordeInfo Parms{};

	Parms.InCordeId = InCordeId;
	Parms.InSetupByCurrentEquip = InSetupByCurrentEquip;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.GetIsWeaponLost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsWeaponLost                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoBase_C::GetIsWeaponLost(bool* OutIsWeaponLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "GetIsWeaponLost");

	Params::BattleSetTopInfoBase_C_GetIsWeaponLost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsWeaponLost != nullptr)
		*OutIsWeaponLost = Parms.OutIsWeaponLost;
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.UnbindChildEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoBase_C::UnbindChildEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "UnbindChildEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ResetSkillInfoSubPalette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubPaletteReleased                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoBase_C::ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoBase_C", "ResetSkillInfoSubPalette");

	Params::BattleSetTopInfoBase_C_ResetSkillInfoSubPalette Parms{};

	Parms.bInIsSubPaletteReleased = bInIsSubPaletteReleased;

	UObject::ProcessEvent(Func, &Parms);
}

}

