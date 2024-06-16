#pragma once

 

// Package: CommonIconToolTipContent_ItemBox

#include "Basic.hpp"

#include "CommonIconToolTipContent_ItemBox_classes.hpp"
#include "CommonIconToolTipContent_ItemBox_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_ItemBox.CommonIconToolTipContent_ItemBox_C.SetItemBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  ST_ToolTipInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCommonIconToolTipContent_ItemBox_C::SetItemBox(const struct FST_ToolTipInfo& ST_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ItemBox_C", "SetItemBox");

	Params::CommonIconToolTipContent_ItemBox_C_SetItemBox Parms{};

	Parms.ST_ToolTipInfo = std::move(ST_ToolTipInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

