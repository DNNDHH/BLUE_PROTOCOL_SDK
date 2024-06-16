#pragma once

 

// Package: WBP_SkillListItem

#include "Basic.hpp"

#include "WBP_SkillListItem_classes.hpp"
#include "WBP_SkillListItem_parameters.hpp"


namespace SDK
{

// Function WBP_SkillListItem.WBP_SkillListItem_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSkillDataMasterData           SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SkillListItem_C::OnClick__DelegateSignature(const struct FSBSkillDataMasterData& SkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListItem_C", "OnClick__DelegateSignature");

	Params::WBP_SkillListItem_C_OnClick__DelegateSignature Parms{};

	Parms.SkillId = std::move(SkillId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListItem.WBP_SkillListItem_C.ExecuteUbergraph_WBP_SkillListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillListItem_C::ExecuteUbergraph_WBP_SkillListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListItem_C", "ExecuteUbergraph_WBP_SkillListItem");

	Params::WBP_SkillListItem_C_ExecuteUbergraph_WBP_SkillListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListItem.WBP_SkillListItem_C.BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SkillListItem_C::BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListItem_C", "BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillListItem.WBP_SkillListItem_C.Init
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSkillDataMasterData           SBSkillDataMasterData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SkillListItem_C::Init(const struct FSBSkillDataMasterData& SBSkillDataMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListItem_C", "Init");

	Params::WBP_SkillListItem_C_Init Parms{};

	Parms.SBSkillDataMasterData = std::move(SBSkillDataMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListItem.WBP_SkillListItem_C.UpdateAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Use                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SkillListItem_C::UpdateAbility(bool* Use)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListItem_C", "UpdateAbility");

	Params::WBP_SkillListItem_C_UpdateAbility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Use != nullptr)
		*Use = Parms.Use;
}

}

