#pragma once

 

// Package: CommonIconToolTipContent_RecipeSet

#include "Basic.hpp"

#include "CommonIconToolTipContent_RecipeSet_classes.hpp"
#include "CommonIconToolTipContent_RecipeSet_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_RecipeSet.CommonIconToolTipContent_RecipeSet_C.SetRecipeSet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  ST_ToolTipInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCommonIconToolTipContent_RecipeSet_C::SetRecipeSet(const struct FST_ToolTipInfo& ST_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_RecipeSet_C", "SetRecipeSet");

	Params::CommonIconToolTipContent_RecipeSet_C_SetRecipeSet Parms{};

	Parms.ST_ToolTipInfo = std::move(ST_ToolTipInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

