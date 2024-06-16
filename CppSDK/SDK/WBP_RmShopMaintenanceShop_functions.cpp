#pragma once

 

// Package: WBP_RmShopMaintenanceShop

#include "Basic.hpp"

#include "WBP_RmShopMaintenanceShop_classes.hpp"
#include "WBP_RmShopMaintenanceShop_parameters.hpp"


namespace SDK
{

// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_RmShopMaintenanceShop_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceShop_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.ExecuteUbergraph_WBP_RmShopMaintenanceShop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RmShopMaintenanceShop_C::ExecuteUbergraph_WBP_RmShopMaintenanceShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceShop_C", "ExecuteUbergraph_WBP_RmShopMaintenanceShop");

	Params::WBP_RmShopMaintenanceShop_C_ExecuteUbergraph_WBP_RmShopMaintenanceShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RmShopMaintenanceShop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceShop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.CloseEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_RmShopMaintenanceShop_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceShop_C", "CloseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RmShopMaintenanceShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceShop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C.BndEvt__WBP_RmShopMaintenanceAll_SBButton_C_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_RmShopMaintenanceShop_C::BndEvt__WBP_RmShopMaintenanceAll_SBButton_C_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RmShopMaintenanceShop_C", "BndEvt__WBP_RmShopMaintenanceAll_SBButton_C_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

