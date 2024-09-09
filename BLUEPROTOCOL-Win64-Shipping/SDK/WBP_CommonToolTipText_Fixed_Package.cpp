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
	 * 		Name   -> Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipText_Fixed_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.SetText");
		
		UWBP_CommonToolTipText_Fixed_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.ExecuteUbergraph_WBP_CommonToolTipText_Fixed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Fixed_C::ExecuteUbergraph_WBP_CommonToolTipText_Fixed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C.ExecuteUbergraph_WBP_CommonToolTipText_Fixed");
		
		UWBP_CommonToolTipText_Fixed_C_ExecuteUbergraph_WBP_CommonToolTipText_Fixed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommonToolTipText_Fixed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommonToolTipText_Fixed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C");
		return ptr;
	}

}


