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
	 * 		Name   -> Function AestheShop_CategoryIcon.AestheShop_CategoryIcon_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_AestheShop_TopMenuItems_DetailSettings           InDetailSettings                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_CategoryIcon_C::SetIcon(E_AestheShop_TopMenuItems_DetailSettings InDetailSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_CategoryIcon.AestheShop_CategoryIcon_C.SetIcon");
		
		UAestheShop_CategoryIcon_C_SetIcon_Params params {};
		params.InDetailSettings = InDetailSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAestheShop_CategoryIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAestheShop_CategoryIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AestheShop_CategoryIcon.AestheShop_CategoryIcon_C");
		return ptr;
	}

}


