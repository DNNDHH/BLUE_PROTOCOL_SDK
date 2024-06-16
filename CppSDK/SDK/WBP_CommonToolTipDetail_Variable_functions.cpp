#pragma once

 

// Package: WBP_CommonToolTipDetail_Variable

#include "Basic.hpp"

#include "WBP_CommonToolTipDetail_Variable_classes.hpp"
#include "WBP_CommonToolTipDetail_Variable_parameters.hpp"


namespace SDK
{

// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::SetAbilityNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetAbilityNameText");

	Params::WBP_CommonToolTipDetail_Variable_C_SetAbilityNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::SetAbilityDescText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetAbilityDescText");

	Params::WBP_CommonToolTipDetail_Variable_C_SetAbilityDescText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityPerkID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipDetail_Variable_C::SetAbilityPerkID(int32 PerkId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetAbilityPerkID");

	Params::WBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID Parms{};

	Parms.PerkId = PerkId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetWeaponPerkData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       SBCharacterWeaponPerkData                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_CommonToolTipDetail_Variable_C::SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetWeaponPerkData");

	Params::WBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData Parms{};

	Parms.SBCharacterWeaponPerkData = std::move(SBCharacterWeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::SetNameAndTypeText(const class FText& InName, const class FText& InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetNameAndTypeText");

	Params::WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText Parms{};

	Parms.InName = std::move(InName);
	Parms.InType = std::move(InType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::SetNameAndDescText(const class FText& InName, const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetNameAndDescText");

	Params::WBP_CommonToolTipDetail_Variable_C_SetNameAndDescText Parms{};

	Parms.InName = std::move(InName);
	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeAndDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::SetNameAndTypeAndDescText(const class FText& InName, const class FText& InType, const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetNameAndTypeAndDescText");

	Params::WBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText Parms{};

	Parms.InName = std::move(InName);
	Parms.InType = std::move(InType);
	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTypeText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::SetType(const class FText& InTypeText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetType");

	Params::WBP_CommonToolTipDetail_Variable_C_SetType Parms{};

	Parms.InTypeText = std::move(InTypeText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndDateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDateTime                        DateTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bHideIfMinValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTipDetail_Variable_C::SetNameAndDescAndDateTime(const class FText& Param_Name, const class FText& Desc, const struct FDateTime& DateTime, bool bHideIfMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetNameAndDescAndDateTime");

	Params::WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Desc = std::move(Desc);
	Parms.DateTime = std::move(DateTime);
	Parms.bHideIfMinValue = bHideIfMinValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndTermId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           TermId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bHideIfMinValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTipDetail_Variable_C::SetNameAndDescAndTermId(const class FText& Param_Name, const class FText& Desc, const class FString& TermId, bool bHideIfMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetNameAndDescAndTermId");

	Params::WBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Desc = std::move(Desc);
	Parms.TermId = std::move(TermId);
	Parms.bHideIfMinValue = bHideIfMinValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetExpOverflowRewardIconMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsClassLevelCounterStop                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsClassLevelLimit                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsClassLevelLimitSmallerThanCounterStop             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTipDetail_Variable_C::SetExpOverflowRewardIconMode(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "SetExpOverflowRewardIconMode");

	Params::WBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode Parms{};

	Parms.bInIsClassLevelCounterStop = bInIsClassLevelCounterStop;
	Parms.bInIsClassLevelLimit = bInIsClassLevelLimit;
	Parms.bInIsClassLevelLimitSmallerThanCounterStop = bInIsClassLevelLimitSmallerThanCounterStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.Set Name Only Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Variable_C::Set_Name_Only_Text(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Variable_C", "Set Name Only Text");

	Params::WBP_CommonToolTipDetail_Variable_C_Set_Name_Only_Text Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}

}

