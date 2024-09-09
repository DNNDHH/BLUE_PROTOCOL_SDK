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
	 * 		Name   -> Function ClassIconL.ClassIconL_C.GetIconTexture
	 * 		Flags  -> ()
	 */
	class UTexture2D* UClassIconL_C::GetIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassIconL.ClassIconL_C.GetIconTexture");
		
		UClassIconL_C_GetIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassIconL.ClassIconL_C.OnUpdateClassIcon
	 * 		Flags  -> ()
	 */
	void UClassIconL_C::OnUpdateClassIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassIconL.ClassIconL_C.OnUpdateClassIcon");
		
		UClassIconL_C_OnUpdateClassIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassIconL.ClassIconL_C.UpdateShadow
	 * 		Flags  -> ()
	 */
	void UClassIconL_C::UpdateShadow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassIconL.ClassIconL_C.UpdateShadow");
		
		UClassIconL_C_UpdateShadow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassIconL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassIconL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassIconL.ClassIconL_C");
		return ptr;
	}

}


