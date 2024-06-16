#pragma once

 

// Package: ImagineCraftRecepiPerkItem

#include "Basic.hpp"

#include "ImagineCraftRecepiPerkItem_classes.hpp"
#include "ImagineCraftRecepiPerkItem_parameters.hpp"


namespace SDK
{

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.ExecuteUbergraph_ImagineCraftRecepiPerkItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftRecepiPerkItem_C::ExecuteUbergraph_ImagineCraftRecepiPerkItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "ExecuteUbergraph_ImagineCraftRecepiPerkItem");

	Params::ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Rare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRare                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraftRecepiPerkItem_C::Set_Rare(bool IsRare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "Set Rare");

	Params::ImagineCraftRecepiPerkItem_C_Set_Rare Parms{};

	Parms.IsRare = IsRare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UImagineCraftRecepiPerkItem_C::Set_Text(const class FString& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "Set Text");

	Params::ImagineCraftRecepiPerkItem_C_Set_Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineCraftRecepiPerkItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_PerkId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftRecepiPerkItem_C::SetPerkID(int32 Param_PerkId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "SetPerkID");

	Params::ImagineCraftRecepiPerkItem_C_SetPerkID Parms{};

	Parms.Param_PerkId = Param_PerkId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.GetAbilityDescToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UImagineCraftRecepiPerkItem_C::GetAbilityDescToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "GetAbilityDescToolTipWidget");

	Params::ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftRecepiPerkItem_C::SetPerkValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftRecepiPerkItem_C", "SetPerkValue");

	Params::ImagineCraftRecepiPerkItem_C_SetPerkValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

