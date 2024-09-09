/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_RmShopMaintenanceUpdeta_C::BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UWBP_RmShopMaintenanceUpdeta_C_BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RmShopMaintenanceUpdeta_C::ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta");
		
		UWBP_RmShopMaintenanceUpdeta_C_ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_RmShopMaintenanceUpdeta_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C.OnClose__DelegateSignature");
		
		UWBP_RmShopMaintenanceUpdeta_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RmShopMaintenanceUpdeta_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RmShopMaintenanceUpdeta_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C");
		return ptr;
	}

}


