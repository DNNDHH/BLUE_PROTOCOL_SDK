#pragma once

 

// Package: Fang_expedition_PlayListBtn_Play

#include "Basic.hpp"

#include "Fang_expedition_PlayListBtn_Play_classes.hpp"
#include "Fang_expedition_PlayListBtn_Play_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_PlayListBtn_Play.Fang_expedition_PlayListBtn_Play_C.OnButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_PlayListBtn_Play_C::OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Play_C", "OnButtonClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListBtn_Play.Fang_expedition_PlayListBtn_Play_C.ExecuteUbergraph_Fang_expedition_PlayListBtn_Play
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListBtn_Play_C::ExecuteUbergraph_Fang_expedition_PlayListBtn_Play(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Play_C", "ExecuteUbergraph_Fang_expedition_PlayListBtn_Play");

	Params::Fang_expedition_PlayListBtn_Play_C_ExecuteUbergraph_Fang_expedition_PlayListBtn_Play Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListBtn_Play.Fang_expedition_PlayListBtn_Play_C.BndEvt__Fang_expedition_PlayListBtn_Play_SBButton_C_53_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_PlayListBtn_Play_C::BndEvt__Fang_expedition_PlayListBtn_Play_SBButton_C_53_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Play_C", "BndEvt__Fang_expedition_PlayListBtn_Play_SBButton_C_53_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListBtn_Play.Fang_expedition_PlayListBtn_Play_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_PlayListBtn_Play_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Play_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

