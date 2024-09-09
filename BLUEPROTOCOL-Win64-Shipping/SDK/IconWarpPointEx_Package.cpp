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
	 * 		Name   -> Function IconWarpPointEx.IconWarpPointEx_C.Set Icon Image
	 * 		Flags  -> ()
	 */
	void UIconWarpPointEx_C::SetIconImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconWarpPointEx.IconWarpPointEx_C.Set Icon Image");
		
		UIconWarpPointEx_C_SetIconImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIconWarpPointEx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIconWarpPointEx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconWarpPointEx.IconWarpPointEx_C");
		return ptr;
	}

}


