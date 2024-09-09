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
	 * 		Name   -> Function ItemSelectorArrowLeft.ItemSelectorArrowLeft_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UItemSelectorArrowLeft_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelectorArrowLeft.ItemSelectorArrowLeft_C.PlayAnim");
		
		UItemSelectorArrowLeft_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelectorArrowLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelectorArrowLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemSelectorArrowLeft.ItemSelectorArrowLeft_C");
		return ptr;
	}

}


