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
	 * 		Name   -> Function CustomMenuPartArrow.CustomMenuPartArrow_C.StopAnimArrow
	 * 		Flags  -> ()
	 */
	void UCustomMenuPartArrow_C::StopAnimArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartArrow.CustomMenuPartArrow_C.StopAnimArrow");
		
		UCustomMenuPartArrow_C_StopAnimArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartArrow.CustomMenuPartArrow_C.PlayAnimArrow
	 * 		Flags  -> ()
	 */
	void UCustomMenuPartArrow_C::PlayAnimArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartArrow.CustomMenuPartArrow_C.PlayAnimArrow");
		
		UCustomMenuPartArrow_C_PlayAnimArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMenuPartArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMenuPartArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomMenuPartArrow.CustomMenuPartArrow_C");
		return ptr;
	}

}


