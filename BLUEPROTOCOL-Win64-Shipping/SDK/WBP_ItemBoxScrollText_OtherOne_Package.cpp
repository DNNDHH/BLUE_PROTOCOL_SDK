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
	 * 		Name   -> Function WBP_ItemBoxScrollText_OtherOne.WBP_ItemBoxScrollText_OtherOne_C.SetTypeOtherOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bExcess                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_OtherOne_C::SetTypeOtherOne(const class FText& ItemName, bool bExcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_OtherOne.WBP_ItemBoxScrollText_OtherOne_C.SetTypeOtherOne");
		
		UWBP_ItemBoxScrollText_OtherOne_C_SetTypeOtherOne_Params params {};
		params.ItemName = ItemName;
		params.bExcess = bExcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxScrollText_OtherOne_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxScrollText_OtherOne_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_OtherOne.WBP_ItemBoxScrollText_OtherOne_C");
		return ptr;
	}

}


