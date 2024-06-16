#pragma once

 

// Package: PlayerProfileClassList

#include "Basic.hpp"

#include "PlayerProfileClassList_classes.hpp"
#include "PlayerProfileClassList_parameters.hpp"


namespace SDK
{

// Function PlayerProfileClassList.PlayerProfileClassList_C.ExecuteUbergraph_PlayerProfileClassList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileClassList_C::ExecuteUbergraph_PlayerProfileClassList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassList_C", "ExecuteUbergraph_PlayerProfileClassList");

	Params::PlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileClassList.PlayerProfileClassList_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileClassList_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassList_C", "OnAnimationFinished");

	Params::PlayerProfileClassList_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileClassList.PlayerProfileClassList_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfileClassList_C::BndEvt__BtnClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassList_C", "BndEvt__BtnClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileClassList.PlayerProfileClassList_C.BndEvt__BtnOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfileClassList_C::BndEvt__BtnOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassList_C", "BndEvt__BtnOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfileClassList.PlayerProfileClassList_C.AddClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfileClassList_C::AddClass(ESBClassType Type, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassList_C", "AddClass");

	Params::PlayerProfileClassList_C_AddClass Parms{};

	Parms.Type = Type;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfileClassList.PlayerProfileClassList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfileClassList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfileClassList_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}

