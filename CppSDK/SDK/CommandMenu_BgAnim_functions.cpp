#pragma once

 

// Package: CommandMenu_BgAnim

#include "Basic.hpp"

#include "CommandMenu_BgAnim_classes.hpp"
#include "CommandMenu_BgAnim_parameters.hpp"


namespace SDK
{

// Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.ExecuteUbergraph_CommandMenu_BgAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BgAnim_C::ExecuteUbergraph_CommandMenu_BgAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnim_C", "ExecuteUbergraph_CommandMenu_BgAnim");

	Params::CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_BgAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Set Bg Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCommandMenuType                      MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_BgAnim_C::Set_Bg_Color(ESBCommandMenuType MenuType, bool bAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnim_C", "Set Bg Color");

	Params::CommandMenu_BgAnim_C_Set_Bg_Color Parms{};

	Parms.MenuType = MenuType;
	Parms.bAnim = bAnim;

	UObject::ProcessEvent(Func, &Parms);
}

}

