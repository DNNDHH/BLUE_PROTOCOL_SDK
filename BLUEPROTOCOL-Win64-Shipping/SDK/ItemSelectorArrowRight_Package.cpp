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
	 * 		Name   -> Function ItemSelectorArrowRight.ItemSelectorArrowRight_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UItemSelectorArrowRight_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelectorArrowRight.ItemSelectorArrowRight_C.PlayAnim");
		
		UItemSelectorArrowRight_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorArrowRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorArrowRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemSelectorArrowRight.ItemSelectorArrowRight_C");
		return ptr;
	}

}


