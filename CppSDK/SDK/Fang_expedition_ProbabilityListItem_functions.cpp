#pragma once

 

// Package: Fang_expedition_ProbabilityListItem

#include "Basic.hpp"

#include "Fang_expedition_ProbabilityListItem_classes.hpp"
#include "Fang_expedition_ProbabilityListItem_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  Param_RewardData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UFang_expedition_ProbabilityListItem_C::OnClicked__DelegateSignature(const struct FSBMasterReward& Param_RewardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ProbabilityListItem_C", "OnClicked__DelegateSignature");

	Params::Fang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_RewardData = std::move(Param_RewardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.ExecuteUbergraph_Fang_expedition_ProbabilityListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_ProbabilityListItem_C::ExecuteUbergraph_Fang_expedition_ProbabilityListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ProbabilityListItem_C", "ExecuteUbergraph_Fang_expedition_ProbabilityListItem");

	Params::Fang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_ProbabilityListItem_C::BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ProbabilityListItem_C", "BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionRandomRewardDataRandomReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UFang_expedition_ProbabilityListItem_C::SetData(int32 Type, const struct FSBFang_expeditionRandomRewardData& RandomReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ProbabilityListItem_C", "SetData");

	Params::Fang_expedition_ProbabilityListItem_C_SetData Parms{};

	Parms.Type = Type;
	Parms.RandomReward = std::move(RandomReward);

	UObject::ProcessEvent(Func, &Parms);
}

}

