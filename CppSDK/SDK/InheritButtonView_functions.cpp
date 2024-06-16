#pragma once

 

// Package: InheritButtonView

#include "Basic.hpp"

#include "InheritButtonView_classes.hpp"
#include "InheritButtonView_parameters.hpp"


namespace SDK
{

// Function InheritButtonView.InheritButtonView_C.SelectReselect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInheritButtonView_C::SelectReselect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "SelectReselect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonView.InheritButtonView_C.ExecuteUbergraph_InheritButtonView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInheritButtonView_C::ExecuteUbergraph_InheritButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "ExecuteUbergraph_InheritButtonView");

	Params::InheritButtonView_C_ExecuteUbergraph_InheritButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritButtonView.InheritButtonView_C.BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UInheritButtonView_C::BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonView.InheritButtonView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInheritButtonView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonView.InheritButtonView_C.UpdateSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInheritButtonView_C::UpdateSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "UpdateSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonView.InheritButtonView_C.UpdateVitalPerkName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInheritButtonView_C::UpdateVitalPerkName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "UpdateVitalPerkName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonView.InheritButtonView_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UInheritButtonView_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonView.InheritButtonView_C.SetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_SpecialPerk                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FSBStackBPerk>            Param_SelectPerks                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FOwnItemInfo                     Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FOwnItemInfo>             Param_Materials                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInheritButtonView_C::SetData(const struct FOwnItemInfo& Param_SpecialPerk, TArray<struct FSBStackBPerk>& Param_SelectPerks, const struct FOwnItemInfo& Param_Target, TArray<struct FOwnItemInfo>& Param_Materials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonView_C", "SetData");

	Params::InheritButtonView_C_SetData Parms{};

	Parms.Param_SpecialPerk = std::move(Param_SpecialPerk);
	Parms.Param_SelectPerks = std::move(Param_SelectPerks);
	Parms.Param_Target = std::move(Param_Target);
	Parms.Param_Materials = std::move(Param_Materials);

	UObject::ProcessEvent(Func, &Parms);

	Param_SelectPerks = std::move(Parms.Param_SelectPerks);
	Param_Materials = std::move(Parms.Param_Materials);
}

}

