#pragma once

 

// Package: Effect_Ability

#include "Basic.hpp"

#include "Effect_Ability_classes.hpp"
#include "Effect_Ability_parameters.hpp"


namespace SDK
{

// Function Effect_Ability.Effect_Ability_C.ExecuteUbergraph_Effect_Ability
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Ability_C::ExecuteUbergraph_Effect_Ability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Ability_C", "ExecuteUbergraph_Effect_Ability");

	Params::Effect_Ability_C_ExecuteUbergraph_Effect_Ability Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Ability.Effect_Ability_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEffect_Ability_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Ability_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Effect_Ability.Effect_Ability_C.SetToolTipBType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UEffect_Ability_C::SetToolTipBType(const class FText& InName, const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Ability_C", "SetToolTipBType");

	Params::Effect_Ability_C_SetToolTipBType Parms{};

	Parms.InName = std::move(InName);
	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Ability.Effect_Ability_C.SetToolTipCType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UEffect_Ability_C::SetToolTipCType(const class FText& InName, const class FText& Type, const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Ability_C", "SetToolTipCType");

	Params::Effect_Ability_C_SetToolTipCType Parms{};

	Parms.InName = std::move(InName);
	Parms.Type = std::move(Type);
	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Ability.Effect_Ability_C.Get_Txt_EffectName_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UEffect_Ability_C::Get_Txt_EffectName_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Ability_C", "Get_Txt_EffectName_ToolTipWidget_0");

	Params::Effect_Ability_C_Get_Txt_EffectName_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

