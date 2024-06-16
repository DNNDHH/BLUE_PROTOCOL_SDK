#pragma once

 

// Package: CmnBonusSmall

#include "Basic.hpp"

#include "CmnBonusSmall_classes.hpp"
#include "CmnBonusSmall_parameters.hpp"


namespace SDK
{

// Function CmnBonusSmall.CmnBonusSmall_C.ExecuteUbergraph_CmnBonusSmall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBonusSmall_C::ExecuteUbergraph_CmnBonusSmall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBonusSmall_C", "ExecuteUbergraph_CmnBonusSmall");

	Params::CmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBonusSmall.CmnBonusSmall_C.UpdateVisibilityByMasterImagineRecepi
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             MasterImagineRecepi                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCmnBonusSmall_C::UpdateVisibilityByMasterImagineRecepi(const struct FMasterImagineRecepi& MasterImagineRecepi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBonusSmall_C", "UpdateVisibilityByMasterImagineRecepi");

	Params::CmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi Parms{};

	Parms.MasterImagineRecepi = std::move(MasterImagineRecepi);

	UObject::ProcessEvent(Func, &Parms);
}

}

