#pragma once

 

// Package: UMG_AdventurerRank_EffectStar1

#include "Basic.hpp"

#include "UMG_AdventurerRank_EffectStar1_classes.hpp"
#include "UMG_AdventurerRank_EffectStar1_parameters.hpp"


namespace SDK
{

// Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.ExecuteUbergraph_UMG_AdventurerRank_EffectStar1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdventurerRank_EffectStar1_C::ExecuteUbergraph_UMG_AdventurerRank_EffectStar1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_EffectStar1_C", "ExecuteUbergraph_UMG_AdventurerRank_EffectStar1");

	Params::UMG_AdventurerRank_EffectStar1_C_ExecuteUbergraph_UMG_AdventurerRank_EffectStar1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_AdventurerRank_EffectStar1_C::WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_EffectStar1_C", "WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_AdventurerRank_EffectStar1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_EffectStar1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.PlayRandomAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_AdventurerRank_EffectStar1_C::PlayRandomAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_EffectStar1_C", "PlayRandomAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

