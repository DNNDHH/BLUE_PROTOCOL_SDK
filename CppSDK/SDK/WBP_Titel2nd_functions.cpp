#pragma once

 

// Package: WBP_Titel2nd

#include "Basic.hpp"

#include "WBP_Titel2nd_classes.hpp"
#include "WBP_Titel2nd_parameters.hpp"


namespace SDK
{

// Function WBP_Titel2nd.WBP_Titel2nd_C.OnGameStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Titel2nd_C::OnGameStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "OnGameStart__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.ExecuteUbergraph_WBP_Titel2nd
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Titel2nd_C::ExecuteUbergraph_WBP_Titel2nd(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "ExecuteUbergraph_WBP_Titel2nd");

	Params::WBP_Titel2nd_C_ExecuteUbergraph_WBP_Titel2nd Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.LoadEffectActor
// (BlueprintCallable, BlueprintEvent)

void UWBP_Titel2nd_C::LoadEffectActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "LoadEffectActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWBP_Titel2nd_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.LoadCharaLayer
// (BlueprintCallable, BlueprintEvent)

void UWBP_Titel2nd_C::LoadCharaLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "LoadCharaLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.BndEvt__WBP_Titel2nd_CmnBtn21_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Titel2nd_C::BndEvt__WBP_Titel2nd_CmnBtn21_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "BndEvt__WBP_Titel2nd_CmnBtn21_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Titel2nd_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Titel2nd_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.OnLoaded_6D8E14BA4C7566A616900EACB09E0D02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Titel2nd_C::OnLoaded_6D8E14BA4C7566A616900EACB09E0D02(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "OnLoaded_6D8E14BA4C7566A616900EACB09E0D02");

	Params::WBP_Titel2nd_C_OnLoaded_6D8E14BA4C7566A616900EACB09E0D02 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Titel2nd.WBP_Titel2nd_C.OnLoaded_AC83F13446C7CD3D474956826D46E533
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Titel2nd_C::OnLoaded_AC83F13446C7CD3D474956826D46E533(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Titel2nd_C", "OnLoaded_AC83F13446C7CD3D474956826D46E533");

	Params::WBP_Titel2nd_C_OnLoaded_AC83F13446C7CD3D474956826D46E533 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

