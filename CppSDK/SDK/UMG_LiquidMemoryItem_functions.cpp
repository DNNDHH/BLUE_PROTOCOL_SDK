#pragma once

 

// Package: UMG_LiquidMemoryItem

#include "Basic.hpp"

#include "UMG_LiquidMemoryItem_classes.hpp"
#include "UMG_LiquidMemoryItem_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetEfficacyTypeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBTextTableHash                 InNameTextId                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSBTextTableHash                 InDescTextId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryItem_C::SetEfficacyTypeText(const struct FSBTextTableHash& InNameTextId, const struct FSBTextTableHash& InDescTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryItem_C", "SetEfficacyTypeText");

	Params::UMG_LiquidMemoryItem_C_SetEfficacyTypeText Parms{};

	Parms.InNameTextId = std::move(InNameTextId);
	Parms.InDescTextId = std::move(InDescTextId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetBottleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLiquidMemoryInfoValid                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBLiquidMemoryInfo              InLiquidMemoryInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_LiquidMemoryItem_C::SetBottleStatus(bool InIsLiquidMemoryInfoValid, const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryItem_C", "SetBottleStatus");

	Params::UMG_LiquidMemoryItem_C_SetBottleStatus Parms{};

	Parms.InIsLiquidMemoryInfoValid = InIsLiquidMemoryInfoValid;
	Parms.InLiquidMemoryInfo = std::move(InLiquidMemoryInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.SetAccumulateConditionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBTextTableHash>         InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_LiquidMemoryItem_C::SetAccumulateConditionText(TArray<struct FSBTextTableHash>& InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryItem_C", "SetAccumulateConditionText");

	Params::UMG_LiquidMemoryItem_C_SetAccumulateConditionText Parms{};

	Parms.InTextID = std::move(InTextID);

	UObject::ProcessEvent(Func, &Parms);

	InTextID = std::move(Parms.InTextID);
}


// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.Setup Tooltip Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBRewardBoostTooltipData>DataList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_LiquidMemoryItem_C::Setup_Tooltip_Widget(TArray<struct FSBRewardBoostTooltipData>& DataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryItem_C", "Setup Tooltip Widget");

	Params::UMG_LiquidMemoryItem_C_Setup_Tooltip_Widget Parms{};

	Parms.DataList = std::move(DataList);

	UObject::ProcessEvent(Func, &Parms);

	DataList = std::move(Parms.DataList);
}


// Function UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C.UpdateBonusStatus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LiquidMemoryId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryItem_C::UpdateBonusStatus(int32 LiquidMemoryId, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryItem_C", "UpdateBonusStatus");

	Params::UMG_LiquidMemoryItem_C_UpdateBonusStatus Parms{};

	Parms.LiquidMemoryId = LiquidMemoryId;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}

}

