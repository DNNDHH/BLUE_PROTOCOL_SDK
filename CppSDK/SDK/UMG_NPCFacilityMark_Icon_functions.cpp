#pragma once

 

// Package: UMG_NPCFacilityMark_Icon

#include "Basic.hpp"

#include "UMG_NPCFacilityMark_Icon_classes.hpp"
#include "UMG_NPCFacilityMark_Icon_parameters.hpp"


namespace SDK
{

// Function UMG_NPCFacilityMark_Icon.UMG_NPCFacilityMark_Icon_C.SetIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacilityType                         IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NPCFacilityMark_Icon_C::SetIconType(ESBFacilityType IconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_NPCFacilityMark_Icon_C", "SetIconType");

	Params::UMG_NPCFacilityMark_Icon_C_SetIconType Parms{};

	Parms.IconType = IconType;

	UObject::ProcessEvent(Func, &Parms);
}

}

