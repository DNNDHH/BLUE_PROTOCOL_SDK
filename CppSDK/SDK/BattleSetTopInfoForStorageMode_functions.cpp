#pragma once

 

// Package: BattleSetTopInfoForStorageMode

#include "Basic.hpp"

#include "BattleSetTopInfoForStorageMode_classes.hpp"
#include "BattleSetTopInfoForStorageMode_parameters.hpp"


namespace SDK
{

// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.SetupBattleCordeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCordeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSetupByCurrentEquip                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoForStorageMode_C::SetupBattleCordeInfo(int32 InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "SetupBattleCordeInfo");

	Params::BattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo Parms{};

	Parms.InCordeId = InCordeId;
	Parms.InSetupByCurrentEquip = InSetupByCurrentEquip;
	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetBattleImagineSlotCnt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetBattleImagineSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetBattleImagineSlotCnt");

	Params::BattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetInnerImagineSlotCnt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetInnerImagineSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetInnerImagineSlotCnt");

	Params::BattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularSkillSlotCnt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetRegularSkillSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetRegularSkillSlotCnt");

	Params::BattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetTacticalSkillSlotCnt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetTacticalSkillSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetTacticalSkillSlotCnt");

	Params::BattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassAbilitySlotCnt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetClassAbilitySlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetClassAbilitySlotCnt");

	Params::BattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetIsWeaponLost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsWeaponLost                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSetTopInfoForStorageMode_C::GetIsWeaponLost(bool* OutIsWeaponLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetIsWeaponLost");

	Params::BattleSetTopInfoForStorageMode_C_GetIsWeaponLost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsWeaponLost != nullptr)
		*OutIsWeaponLost = Parms.OutIsWeaponLost;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularAndULTSkillIdByClassType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutRegularMainSkillId                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutRegularSubSkillId                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutULTSkillId                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32* OutRegularMainSkillId, int32* OutRegularSubSkillId, int32* OutULTSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetRegularAndULTSkillIdByClassType");

	Params::BattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRegularMainSkillId != nullptr)
		*OutRegularMainSkillId = Parms.OutRegularMainSkillId;

	if (OutRegularSubSkillId != nullptr)
		*OutRegularSubSkillId = Parms.OutRegularSubSkillId;

	if (OutULTSkillId != nullptr)
		*OutULTSkillId = Parms.OutULTSkillId;
}


// Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassTypeFromWeaponId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            OutClassType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSetTopInfoForStorageMode_C::GetClassTypeFromWeaponId(int32 InWeaponID, ESBClassType* OutClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSetTopInfoForStorageMode_C", "GetClassTypeFromWeaponId");

	Params::BattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId Parms{};

	Parms.InWeaponID = InWeaponID;

	UObject::ProcessEvent(Func, &Parms);

	if (OutClassType != nullptr)
		*OutClassType = Parms.OutClassType;
}

}

