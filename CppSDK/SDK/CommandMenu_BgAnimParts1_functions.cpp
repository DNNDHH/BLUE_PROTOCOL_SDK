#pragma once

 

// Package: CommandMenu_BgAnimParts1

#include "Basic.hpp"

#include "CommandMenu_BgAnimParts1_classes.hpp"
#include "CommandMenu_BgAnimParts1_parameters.hpp"


namespace SDK
{

// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.ExecuteUbergraph_CommandMenu_BgAnimParts1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BgAnimParts1_C::ExecuteUbergraph_CommandMenu_BgAnimParts1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnimParts1_C", "ExecuteUbergraph_CommandMenu_BgAnimParts1");

	Params::CommandMenu_BgAnimParts1_C_ExecuteUbergraph_CommandMenu_BgAnimParts1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCommandMenu_BgAnimParts1_C::WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnimParts1_C", "WidgetAnimationEvt_AnimAlpha_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.SetPat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   StartTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BgAnimParts1_C::SetPat(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnimParts1_C", "SetPat");

	Params::CommandMenu_BgAnimParts1_C_SetPat Parms{};

	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_BgAnimParts1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnimParts1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BgAnimParts1.CommandMenu_BgAnimParts1_C.StopAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 InAnim                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BgAnimParts1_C::StopAnim(class UWidgetAnimation* InAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BgAnimParts1_C", "StopAnim");

	Params::CommandMenu_BgAnimParts1_C_StopAnim Parms{};

	Parms.InAnim = InAnim;

	UObject::ProcessEvent(Func, &Parms);
}

}

