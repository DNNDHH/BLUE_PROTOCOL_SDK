#pragma once

 

// Package: IconEnemyGate

#include "Basic.hpp"

#include "IconEnemyGate_classes.hpp"
#include "IconEnemyGate_parameters.hpp"


namespace SDK
{

// Function IconEnemyGate.IconEnemyGate_C.ExecuteUbergraph_IconEnemyGate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconEnemyGate_C::ExecuteUbergraph_IconEnemyGate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconEnemyGate_C", "ExecuteUbergraph_IconEnemyGate");

	Params::IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconEnemyGate.IconEnemyGate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconEnemyGate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconEnemyGate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconEnemyGate.IconEnemyGate_C.PlayAnimCircle
// (Private, BlueprintCallable, BlueprintEvent)

void UIconEnemyGate_C::PlayAnimCircle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconEnemyGate_C", "PlayAnimCircle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconEnemyGate.IconEnemyGate_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconEnemyGate_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconEnemyGate_C", "OnSetInside");

	Params::IconEnemyGate_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

