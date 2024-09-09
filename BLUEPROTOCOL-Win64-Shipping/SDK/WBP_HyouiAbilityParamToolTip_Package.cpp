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
	 * 		Name   -> Function WBP_HyouiAbilityParamToolTip.WBP_HyouiAbilityParamToolTip_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNameText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDescText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_HyouiAbilityParamToolTip_C::SetText(const class FText& InNameText, const class FText& InDescText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HyouiAbilityParamToolTip.WBP_HyouiAbilityParamToolTip_C.SetText");
		
		UWBP_HyouiAbilityParamToolTip_C_SetText_Params params {};
		params.InNameText = InNameText;
		params.InDescText = InDescText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HyouiAbilityParamToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HyouiAbilityParamToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HyouiAbilityParamToolTip.WBP_HyouiAbilityParamToolTip_C");
		return ptr;
	}

}


