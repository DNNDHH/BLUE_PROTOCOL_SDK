#pragma once

 

// Package: BP_PlayerWarpComponent

#include "Basic.hpp"

#include "BP_PlayerWarpComponent_classes.hpp"
#include "BP_PlayerWarpComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ExecuteUbergraph_BP_PlayerWarpComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerWarpComponent_C::ExecuteUbergraph_BP_PlayerWarpComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerWarpComponent_C", "ExecuteUbergraph_BP_PlayerWarpComponent");

	Params::BP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.TickComponentByActorEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerWarpComponent_C::TickComponentByActorEvent(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerWarpComponent_C", "TickComponentByActorEvent");

	Params::BP_PlayerWarpComponent_C_TickComponentByActorEvent Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.HideCountDownUI
// (Event, Protected, BlueprintEvent)

void UBP_PlayerWarpComponent_C::HideCountDownUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerWarpComponent_C", "HideCountDownUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ShowCountDownUI
// (Event, Protected, BlueprintEvent)

void UBP_PlayerWarpComponent_C::ShowCountDownUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerWarpComponent_C", "ShowCountDownUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.IsCountDownUICancelPressed
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PlayerWarpComponent_C::IsCountDownUICancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerWarpComponent_C", "IsCountDownUICancelPressed");

	Params::BP_PlayerWarpComponent_C_IsCountDownUICancelPressed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

