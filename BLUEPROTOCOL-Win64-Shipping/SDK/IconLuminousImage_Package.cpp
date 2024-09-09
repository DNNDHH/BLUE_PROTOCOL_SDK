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
	 * 		Name   -> Function IconLuminousImage.IconLuminousImage_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UIconLuminousImage_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconLuminousImage.IconLuminousImage_C.PlayAnimIn");
		
		UIconLuminousImage_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIconLuminousImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIconLuminousImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconLuminousImage.IconLuminousImage_C");
		return ptr;
	}

}


