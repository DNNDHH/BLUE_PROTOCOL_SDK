#pragma once

 

// Package: MyCharaMenu_Ability

#include "Basic.hpp"

#include "MyCharaMenu_Ability_classes.hpp"
#include "MyCharaMenu_Ability_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.ExecuteUbergraph_MyCharaMenu_Ability
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Ability_C::ExecuteUbergraph_MyCharaMenu_Ability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "ExecuteUbergraph_MyCharaMenu_Ability");

	Params::MyCharaMenu_Ability_C_ExecuteUbergraph_MyCharaMenu_Ability Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Base Skill
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Ability_C::Generate_Base_Skill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "Generate Base Skill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Imagines
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Ability_C::Generate_Imagines()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "Generate Imagines");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Weapons
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Ability_C::Generate_Weapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "Generate Weapons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Passive Skill
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Ability_C::Generate_Passive_Skill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "Generate Passive Skill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Collect Unique Ids
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Ability_C::Collect_Unique_Ids()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "Collect Unique Ids");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_Ability_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Ability_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

