#pragma once

 

// Package: WBP_RmShopMaintenanceUpdeta

#include "Basic.hpp"

#include "WBP_RmShopMaintenanceUpdeta_classes.hpp"
#include "WBP_RmShopMaintenanceUpdeta_parameters.hpp"


namespace SDK
{

// Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_RmShopMaintenanceUpdeta_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceUpdeta_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RmShopMaintenanceUpdeta_C::ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceUpdeta_C", "ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta");

	Params::WBP_RmShopMaintenanceUpdeta_C_ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_RmShopMaintenanceUpdeta_C::BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceUpdeta_C", "BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

