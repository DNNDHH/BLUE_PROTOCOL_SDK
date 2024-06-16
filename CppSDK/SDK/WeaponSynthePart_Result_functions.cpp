#pragma once

 

// Package: WeaponSynthePart_Result

#include "Basic.hpp"

#include "WeaponSynthePart_Result_classes.hpp"
#include "WeaponSynthePart_Result_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupSynthe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_beforeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     Param_AfterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InSlotNo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_Result_C::SetupSynthe(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData, int32 InSlotNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "SetupSynthe");

	Params::WeaponSynthePart_Result_C_SetupSynthe Parms{};

	Parms.Param_beforeData = std::move(Param_beforeData);
	Parms.Param_AfterData = std::move(Param_AfterData);
	Parms.InSlotNo = InSlotNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupAddSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_beforeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     Param_AfterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_Result_C::SetupAddSlot(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "SetupAddSlot");

	Params::WeaponSynthePart_Result_C_SetupAddSlot Parms{};

	Parms.Param_beforeData = std::move(Param_beforeData);
	Parms.Param_AfterData = std::move(Param_AfterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_beforeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     Param_AfterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InRemoveSlotNo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_Result_C::SetupRemove(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData, int32 InRemoveSlotNo, bool InIsRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "SetupRemove");

	Params::WeaponSynthePart_Result_C_SetupRemove Parms{};

	Parms.Param_beforeData = std::move(Param_beforeData);
	Parms.Param_AfterData = std::move(Param_AfterData);
	Parms.InRemoveSlotNo = InRemoveSlotNo;
	Parms.InIsRemove = InIsRemove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetupTuning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_beforeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     Param_AfterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int32>                           LockSlotNo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponSynthePart_Result_C::SetupTuning(const struct FOwnItemInfo& Param_beforeData, const struct FOwnItemInfo& Param_AfterData, TArray<int32>& LockSlotNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "SetupTuning");

	Params::WeaponSynthePart_Result_C_SetupTuning Parms{};

	Parms.Param_beforeData = std::move(Param_beforeData);
	Parms.Param_AfterData = std::move(Param_AfterData);
	Parms.LockSlotNo = std::move(LockSlotNo);

	UObject::ProcessEvent(Func, &Parms);

	LockSlotNo = std::move(Parms.LockSlotNo);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_Result_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.PlayAnimIn
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_Result_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetBeforeData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_beforeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_Result_C::SetBeforeData(const struct FOwnItemInfo& Param_beforeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "SetBeforeData");

	Params::WeaponSynthePart_Result_C_SetBeforeData Parms{};

	Parms.Param_beforeData = std::move(Param_beforeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Result.WeaponSynthePart_Result_C.SetAfterData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_AfterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_Result_C::SetAfterData(const struct FOwnItemInfo& Param_AfterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Result_C", "SetAfterData");

	Params::WeaponSynthePart_Result_C_SetAfterData Parms{};

	Parms.Param_AfterData = std::move(Param_AfterData);

	UObject::ProcessEvent(Func, &Parms);
}

}

