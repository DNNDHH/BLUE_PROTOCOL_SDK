#pragma once

 

// Package: TicketSelectButtonView

#include "Basic.hpp"

#include "TicketSelectButtonView_classes.hpp"
#include "TicketSelectButtonView_parameters.hpp"


namespace SDK
{

// Function TicketSelectButtonView.TicketSelectButtonView_C.Reselect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTicketSelectButtonView_C::Reselect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "Reselect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TicketSelectButtonView.TicketSelectButtonView_C.ExecuteUbergraph_TicketSelectButtonView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTicketSelectButtonView_C::ExecuteUbergraph_TicketSelectButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "ExecuteUbergraph_TicketSelectButtonView");

	Params::TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TicketSelectButtonView.TicketSelectButtonView_C.BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UTicketSelectButtonView_C::BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TicketSelectButtonView.TicketSelectButtonView_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TicketId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTicketSelectButtonView_C::SetData(int32 TicketId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "SetData");

	Params::TicketSelectButtonView_C_SetData Parms{};

	Parms.TicketId = TicketId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTextData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTicketSelectButtonView_C::UpdateTextData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "UpdateTextData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TicketSelectButtonView.TicketSelectButtonView_C.CheckRewardRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSBStackBMasterData              SBStackBMasterData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UTicketSelectButtonView_C::CheckRewardRate(const struct FOwnItemInfo& InputPin, const struct FSBStackBMasterData& SBStackBMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "CheckRewardRate");

	Params::TicketSelectButtonView_C_CheckRewardRate Parms{};

	Parms.InputPin = std::move(InputPin);
	Parms.SBStackBMasterData = std::move(SBStackBMasterData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTicketSelectButtonView_C::UpdateTarget(const struct FOwnItemInfo& Param_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TicketSelectButtonView_C", "UpdateTarget");

	Params::TicketSelectButtonView_C_UpdateTarget Parms{};

	Parms.Param_Target = std::move(Param_Target);

	UObject::ProcessEvent(Func, &Parms);
}

}

