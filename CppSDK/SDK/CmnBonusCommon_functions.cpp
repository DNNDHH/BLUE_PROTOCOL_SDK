#pragma once

 

// Package: CmnBonusCommon

#include "Basic.hpp"

#include "CmnBonusCommon_classes.hpp"
#include "CmnBonusCommon_parameters.hpp"


namespace SDK
{

// Function CmnBonusCommon.CmnBonusCommon_C.UpdateStackB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBRewardBoostStackBItemType            InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBonusCommon_C::UpdateStackB(const struct FOwnItemInfo& OwnItemInfo, ESBRewardBoostStackBItemType InItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBonusCommon_C", "UpdateStackB");

	Params::CmnBonusCommon_C_UpdateStackB Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);
	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBonusCommon.CmnBonusCommon_C.GetStackBItemType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBRewardBoostStackBItemType            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESBRewardBoostStackBItemType UCmnBonusCommon_C::GetStackBItemType(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBonusCommon_C", "GetStackBItemType");

	Params::CmnBonusCommon_C_GetStackBItemType Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

