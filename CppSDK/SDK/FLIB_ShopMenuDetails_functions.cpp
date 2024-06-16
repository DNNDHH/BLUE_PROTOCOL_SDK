#pragma once

 

// Package: FLIB_ShopMenuDetails

#include "Basic.hpp"

#include "FLIB_ShopMenuDetails_classes.hpp"
#include "FLIB_ShopMenuDetails_parameters.hpp"


namespace SDK
{

// Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBRewardItemType                       OriginalRewardType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OriginalItemIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHasValidAbility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             AbilityName                                            (Parm, OutParm)
// int32                                   PerkId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowRateButton                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_ShopMenuDetails_C::GetAbilityName(const class FString& UniqueId, ESBRewardItemType OriginalRewardType, int32 OriginalItemIndex, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32* PerkId, bool* bShowRateButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ShopMenuDetails_C", "GetAbilityName");

	Params::FLIB_ShopMenuDetails_C_GetAbilityName Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.OriginalRewardType = OriginalRewardType;
	Parms.OriginalItemIndex = OriginalItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bHasValidAbility != nullptr)
		*bHasValidAbility = Parms.bHasValidAbility;

	if (AbilityName != nullptr)
		*AbilityName = std::move(Parms.AbilityName);

	if (PerkId != nullptr)
		*PerkId = Parms.PerkId;

	if (bShowRateButton != nullptr)
		*bShowRateButton = Parms.bShowRateButton;
}


// Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetAbilityName_Internal
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImaginePerkTable          MasterImaginePerkTable                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHasValidAbility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             AbilityName                                            (Parm, OutParm)
// int32                                   PerkId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowRateButton                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFLIB_ShopMenuDetails_C::GetAbilityName_Internal(const struct FMasterImaginePerkTable& MasterImaginePerkTable, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32* PerkId, bool* bShowRateButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ShopMenuDetails_C", "GetAbilityName_Internal");

	Params::FLIB_ShopMenuDetails_C_GetAbilityName_Internal Parms{};

	Parms.MasterImaginePerkTable = std::move(MasterImaginePerkTable);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bHasValidAbility != nullptr)
		*bHasValidAbility = Parms.bHasValidAbility;

	if (AbilityName != nullptr)
		*AbilityName = std::move(Parms.AbilityName);

	if (PerkId != nullptr)
		*PerkId = Parms.PerkId;

	if (bShowRateButton != nullptr)
		*bShowRateButton = Parms.bShowRateButton;
}


// Function FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C.GetUnknownAbilityText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UFLIB_ShopMenuDetails_C::GetUnknownAbilityText(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_ShopMenuDetails_C", "GetUnknownAbilityText");

	Params::FLIB_ShopMenuDetails_C_GetUnknownAbilityText Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

