#pragma once

 

// Package: MyCharaMenu_EffectListItemHead

#include "Basic.hpp"

#include "MyCharaMenu_EffectListItemHead_classes.hpp"
#include "MyCharaMenu_EffectListItemHead_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.ExecuteUbergraph_MyCharaMenu_EffectListItemHead
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectListItemHead_C::ExecuteUbergraph_MyCharaMenu_EffectListItemHead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectListItemHead_C", "ExecuteUbergraph_MyCharaMenu_EffectListItemHead");

	Params::MyCharaMenu_EffectListItemHead_C_ExecuteUbergraph_MyCharaMenu_EffectListItemHead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.SetPioneerAbility
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectListItemHead_C::SetPioneerAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectListItemHead_C", "SetPioneerAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set Other
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectListItemHead_C::Set_Other()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectListItemHead_C", "Set Other");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set LiquidMemory
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectListItemHead_C::Set_LiquidMemory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectListItemHead_C", "Set LiquidMemory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set_Ability
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectListItemHead_C::Set_Ability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectListItemHead_C", "Set_Ability");

	UObject::ProcessEvent(Func, nullptr);
}

}

