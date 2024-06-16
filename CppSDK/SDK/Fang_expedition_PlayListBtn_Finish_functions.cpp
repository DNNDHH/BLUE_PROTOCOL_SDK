#pragma once

 

// Package: Fang_expedition_PlayListBtn_Finish

#include "Basic.hpp"

#include "Fang_expedition_PlayListBtn_Finish_classes.hpp"
#include "Fang_expedition_PlayListBtn_Finish_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.OnButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_PlayListBtn_Finish_C::OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Finish_C", "OnButtonClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListBtn_Finish_C::ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Finish_C", "ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish");

	Params::Fang_expedition_PlayListBtn_Finish_C_ExecuteUbergraph_Fang_expedition_PlayListBtn_Finish Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_PlayListBtn_Finish_C::BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Finish_C", "BndEvt__Fang_expedition_PlayListBtn_Finish_SBButton_C_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListBtn_Finish.Fang_expedition_PlayListBtn_Finish_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_PlayListBtn_Finish_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListBtn_Finish_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

