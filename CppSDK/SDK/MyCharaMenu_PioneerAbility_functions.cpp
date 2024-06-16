#pragma once

 

// Package: MyCharaMenu_PioneerAbility

#include "Basic.hpp"

#include "MyCharaMenu_PioneerAbility_classes.hpp"
#include "MyCharaMenu_PioneerAbility_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_PioneerAbility.MyCharaMenu_PioneerAbility_C.ExecuteUbergraph_MyCharaMenu_PioneerAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PioneerAbility_C::ExecuteUbergraph_MyCharaMenu_PioneerAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PioneerAbility_C", "ExecuteUbergraph_MyCharaMenu_PioneerAbility");

	Params::MyCharaMenu_PioneerAbility_C_ExecuteUbergraph_MyCharaMenu_PioneerAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PioneerAbility.MyCharaMenu_PioneerAbility_C.Generate Passive Skill
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_PioneerAbility_C::Generate_Passive_Skill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PioneerAbility_C", "Generate Passive Skill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_PioneerAbility.MyCharaMenu_PioneerAbility_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_PioneerAbility_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PioneerAbility_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

