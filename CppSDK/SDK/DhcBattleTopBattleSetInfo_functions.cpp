#pragma once

 

// Package: DhcBattleTopBattleSetInfo

#include "Basic.hpp"

#include "DhcBattleTopBattleSetInfo_classes.hpp"
#include "DhcBattleTopBattleSetInfo_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.SetupInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UDhcBattleTopBattleSetInfo_C::SetupInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "SetupInfo");

	Params::DhcBattleTopBattleSetInfo_C_SetupInfo Parms{};

	Parms.InScoreInfo = std::move(InScoreInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetBattleImagineSlotCnt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetBattleImagineSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetBattleImagineSlotCnt");

	Params::DhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetInnerImagineSlotCnt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetInnerImagineSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetInnerImagineSlotCnt");

	Params::DhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularSkillSlotCnt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetRegularSkillSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetRegularSkillSlotCnt");

	Params::DhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetTacticalSkillSlotCnt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetTacticalSkillSlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetTacticalSkillSlotCnt");

	Params::DhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassAbilitySlotCnt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSlotCnt                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetClassAbilitySlotCnt(int32* OutSlotCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetClassAbilitySlotCnt");

	Params::DhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotCnt != nullptr)
		*OutSlotCnt = Parms.OutSlotCnt;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetIsWeaponLost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsWeaponLost                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopBattleSetInfo_C::GetIsWeaponLost(bool* OutIsWeaponLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetIsWeaponLost");

	Params::DhcBattleTopBattleSetInfo_C_GetIsWeaponLost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsWeaponLost != nullptr)
		*OutIsWeaponLost = Parms.OutIsWeaponLost;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularAndULTSkillIdByClassType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutRegularMainSkillId                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutRegularSubSkillId                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutULTSkillId                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32* OutRegularMainSkillId, int32* OutRegularSubSkillId, int32* OutULTSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetRegularAndULTSkillIdByClassType");

	Params::DhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRegularMainSkillId != nullptr)
		*OutRegularMainSkillId = Parms.OutRegularMainSkillId;

	if (OutRegularSubSkillId != nullptr)
		*OutRegularSubSkillId = Parms.OutRegularSubSkillId;

	if (OutULTSkillId != nullptr)
		*OutULTSkillId = Parms.OutULTSkillId;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassTypeFromWeaponId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            OutClassType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopBattleSetInfo_C::GetClassTypeFromWeaponId(int32 InWeaponID, ESBClassType* OutClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "GetClassTypeFromWeaponId");

	Params::DhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId Parms{};

	Parms.InWeaponID = InWeaponID;

	UObject::ProcessEvent(Func, &Parms);

	if (OutClassType != nullptr)
		*OutClassType = Parms.OutClassType;
}


// Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.ResetSkillInfoSubPalette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubPaletteReleased                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopBattleSetInfo_C::ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopBattleSetInfo_C", "ResetSkillInfoSubPalette");

	Params::DhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette Parms{};

	Parms.bInIsSubPaletteReleased = bInIsSubPaletteReleased;

	UObject::ProcessEvent(Func, &Parms);
}

}

