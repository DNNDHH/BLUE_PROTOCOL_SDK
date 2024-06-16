#pragma once

 

// Package: MiniMapIconDxBattle_Supplier

#include "Basic.hpp"

#include "MiniMapIconDxBattle_Supplier_classes.hpp"
#include "MiniMapIconDxBattle_Supplier_parameters.hpp"


namespace SDK
{

// Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.ExecuteUbergraph_MiniMapIconDxBattle_Supplier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIconDxBattle_Supplier_C::ExecuteUbergraph_MiniMapIconDxBattle_Supplier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconDxBattle_Supplier_C", "ExecuteUbergraph_MiniMapIconDxBattle_Supplier");

	Params::MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIconDxBattle_Supplier_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconDxBattle_Supplier_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniMapIconDxBattle_Supplier_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconDxBattle_Supplier_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

