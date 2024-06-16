#pragma once

 

// Package: BattleSetTopInfoForCommandMenuMode

#include "Basic.hpp"

#include "BattleSetTopInfoForCommandMenuMode_classes.hpp"
#include "BattleSetTopInfoForCommandMenuMode_parameters.hpp"


namespace SDK
{

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoWeaponIconClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoWeaponIconClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "OnTopInfoWeaponIconClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "OnTopInfoTacticalSkillIconPressed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "OnTopInfoBattleImagineIconPressed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoClassAbilityIconPressed__DelegateSignature(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "OnTopInfoClassAbilityIconPressed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InInnerImagineSlotType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "OnTopInfoInnerImagineIconPressed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature Parms{};

	Parms.InInnerImagineSlotType = InInnerImagineSlotType;
	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode");

	Params::BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InInnerImagineSlotType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature Parms{};

	Parms.InInnerImagineSlotType = InInnerImagineSlotType;
	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature Parms{};

	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForCommandMenuMode_C::BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature");

	Params::BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature
// (BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupWeaponInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::SetupWeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "SetupWeaponInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupAllSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::SetupAllSkillInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "SetupAllSkillInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupBattleImagineInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::SetupBattleImagineInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "SetupBattleImagineInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupTacticalSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::SetupTacticalSkillInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "SetupTacticalSkillInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupClassAbilityInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::SetupClassAbilityInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "SetupClassAbilityInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupInnerImagineInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSetTopInfoForCommandMenuMode_C::SetupInnerImagineInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "SetupInnerImagineInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.ResetSkillInfoSubPalette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubPaletteReleased                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoForCommandMenuMode_C::ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForCommandMenuMode_C", "ResetSkillInfoSubPalette");

	Params::BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette Parms{};

	Parms.bInIsSubPaletteReleased = bInIsSubPaletteReleased;

	UObject::ProcessEvent(Func, &Parms);
}

}

