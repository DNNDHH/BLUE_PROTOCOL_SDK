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
	 * 		Name   -> Function IconShortPin.IconShortPin_C.OnSetInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIconShortPin_C::OnSetInside(bool IsInSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconShortPin.IconShortPin_C.OnSetInside");
		
		UIconShortPin_C_OnSetInside_Params params {};
		params.IsInSide = IsInSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIconShortPin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIconShortPin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconShortPin.IconShortPin_C");
		return ptr;
	}

}


