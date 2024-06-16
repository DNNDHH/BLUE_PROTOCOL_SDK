#pragma once

 

// Package: Expectation_WeaponStackBMax_ToolTip

#include "Basic.hpp"

#include "Expectation_WeaponStackBMax_ToolTip_classes.hpp"
#include "Expectation_WeaponStackBMax_ToolTip_parameters.hpp"


namespace SDK
{

// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpectation_WeaponStackBMax_ToolTip_C::ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Expectation_WeaponStackBMax_ToolTip_C", "ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip");

	Params::Expectation_WeaponStackBMax_ToolTip_C_ExecuteUbergraph_Expectation_WeaponStackBMax_ToolTip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UExpectation_WeaponStackBMax_ToolTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Expectation_WeaponStackBMax_ToolTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UExpectation_WeaponStackBMax_ToolTip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Expectation_WeaponStackBMax_ToolTip_C", "PreConstruct");

	Params::Expectation_WeaponStackBMax_ToolTip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetStackBMaxInfoByOwnItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UExpectation_WeaponStackBMax_ToolTip_C::SetStackBMaxInfoByOwnItem(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Expectation_WeaponStackBMax_ToolTip_C", "SetStackBMaxInfoByOwnItem");

	Params::Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByOwnItem Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetStackBMaxInfoByRecepiId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecipeId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExpectation_WeaponStackBMax_ToolTip_C::SetStackBMaxInfoByRecepiId(int32 RecipeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Expectation_WeaponStackBMax_ToolTip_C", "SetStackBMaxInfoByRecepiId");

	Params::Expectation_WeaponStackBMax_ToolTip_C_SetStackBMaxInfoByRecepiId Parms{};

	Parms.RecipeId = RecipeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Expectation_WeaponStackBMax_ToolTip.Expectation_WeaponStackBMax_ToolTip_C.SetTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UExpectation_WeaponStackBMax_ToolTip_C::SetTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Expectation_WeaponStackBMax_ToolTip_C", "SetTitle");

	UObject::ProcessEvent(Func, nullptr);
}

}

