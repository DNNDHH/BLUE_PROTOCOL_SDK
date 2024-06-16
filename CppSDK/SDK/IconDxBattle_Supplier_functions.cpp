#pragma once

 

// Package: IconDxBattle_Supplier

#include "Basic.hpp"

#include "IconDxBattle_Supplier_classes.hpp"
#include "IconDxBattle_Supplier_parameters.hpp"


namespace SDK
{

// Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.ExecuteUbergraph_IconDxBattle_Supplier
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconDxBattle_Supplier_C::ExecuteUbergraph_IconDxBattle_Supplier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconDxBattle_Supplier_C", "ExecuteUbergraph_IconDxBattle_Supplier");

	Params::IconDxBattle_Supplier_C_ExecuteUbergraph_IconDxBattle_Supplier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconDxBattle_Supplier_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconDxBattle_Supplier_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconDxBattle_Supplier_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconDxBattle_Supplier_C", "OnSetInside");

	Params::IconDxBattle_Supplier_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.PlayAnimCircle
// (Private, BlueprintCallable, BlueprintEvent)

void UIconDxBattle_Supplier_C::PlayAnimCircle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconDxBattle_Supplier_C", "PlayAnimCircle");

	UObject::ProcessEvent(Func, nullptr);
}

}

