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
	 * 		Name   -> Function InventoryUsed.InventoryUsed_C.SetUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUsed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryUsed_C::SetUsed(bool bUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryUsed.InventoryUsed_C.SetUsed");
		
		UInventoryUsed_C_SetUsed_Params params {};
		params.bUsed = bUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryUsed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryUsed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryUsed.InventoryUsed_C");
		return ptr;
	}

}


