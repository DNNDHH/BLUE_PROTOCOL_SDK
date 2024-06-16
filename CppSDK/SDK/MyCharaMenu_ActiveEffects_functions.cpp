#pragma once

 

// Package: MyCharaMenu_ActiveEffects

#include "Basic.hpp"

#include "MyCharaMenu_ActiveEffects_classes.hpp"
#include "MyCharaMenu_ActiveEffects_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.ExecuteUbergraph_MyCharaMenu_ActiveEffects
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ActiveEffects_C::ExecuteUbergraph_MyCharaMenu_ActiveEffects(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "ExecuteUbergraph_MyCharaMenu_ActiveEffects");

	Params::MyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect PioneerAbility
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_PioneerAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect PioneerAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Other
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Other()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Other");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Liquid Memory
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Liquid_Memory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Liquid Memory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Generate Lists
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Generate_Lists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Generate Lists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Init Head
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Init_Head()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Init Head");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Base Effects
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Base_Effects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Base Effects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Ability
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Ability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Ability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Imagine Perks
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Imagine_Perks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Imagine Perks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Weapon Effects
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Weapon_Effects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Weapon Effects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Passive Effects
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Passive_Effects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Passive Effects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Unique Ids
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ActiveEffects_C::Collect_Unique_Ids()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Collect Unique Ids");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Add Lists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsShowTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_ToolTipText                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ValueVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ActiveEffects_C::Add_Lists(class UVerticalBox* Target, bool IsShowTooltip, const class FString& Param_Name, int32 Value, const class FString& Param_ToolTipText, bool ValueVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "Add Lists");

	Params::MyCharaMenu_ActiveEffects_C_Add_Lists Parms{};

	Parms.Target = Target;
	Parms.IsShowTooltip = IsShowTooltip;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;
	Parms.Param_ToolTipText = std::move(Param_ToolTipText);
	Parms.ValueVisible = ValueVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByFloatValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ValueVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ActiveEffects_C::AddListsByFloatValue(class UVerticalBox* Target, const class FString& Param_Name, float Value, bool ValueVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "AddListsByFloatValue");

	Params::MyCharaMenu_ActiveEffects_C_AddListsByFloatValue Parms{};

	Parms.Target = Target;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;
	Parms.ValueVisible = ValueVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByDateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*                     Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                        Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bHideYear                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ValueVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ActiveEffects_C::AddListsByDateTime(class UVerticalBox* Target, const class FString& Param_Name, const struct FDateTime& Value, bool bHideYear, bool ValueVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "AddListsByDateTime");

	Params::MyCharaMenu_ActiveEffects_C_AddListsByDateTime Parms{};

	Parms.Target = Target;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = std::move(Value);
	Parms.bHideYear = bHideYear;
	Parms.ValueVisible = ValueVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.GetFreeBuffText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBFreeBuffPointType                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_ActiveEffects_C::GetFreeBuffText(ESBFreeBuffPointType Type, class FString* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ActiveEffects_C", "GetFreeBuffText");

	Params::MyCharaMenu_ActiveEffects_C_GetFreeBuffText Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

}

