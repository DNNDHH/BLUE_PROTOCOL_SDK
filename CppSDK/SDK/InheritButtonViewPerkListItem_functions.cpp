#pragma once

 

// Package: InheritButtonViewPerkListItem

#include "Basic.hpp"

#include "InheritButtonViewPerkListItem_classes.hpp"
#include "InheritButtonViewPerkListItem_parameters.hpp"


namespace SDK
{

// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.ExecuteUbergraph_InheritButtonViewPerkListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInheritButtonViewPerkListItem_C::ExecuteUbergraph_InheritButtonViewPerkListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonViewPerkListItem_C", "ExecuteUbergraph_InheritButtonViewPerkListItem");

	Params::InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInheritButtonViewPerkListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonViewPerkListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInheritButtonViewPerkListItem_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonViewPerkListItem_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    Param_SlotData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UInheritButtonViewPerkListItem_C::SetData(const struct FSBStackBPerk& Param_SlotData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonViewPerkListItem_C", "SetData");

	Params::InheritButtonViewPerkListItem_C_SetData Parms{};

	Parms.Param_SlotData = std::move(Param_SlotData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInheritButtonViewPerkListItem_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonViewPerkListItem_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetDiffView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInheritButtonViewPerkListItem_C::SetDiffView(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InheritButtonViewPerkListItem_C", "SetDiffView");

	Params::InheritButtonViewPerkListItem_C_SetDiffView Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

}

