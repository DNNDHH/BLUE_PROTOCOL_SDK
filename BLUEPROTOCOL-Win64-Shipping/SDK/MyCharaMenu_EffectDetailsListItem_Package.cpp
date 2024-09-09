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
	 * 		Name   -> Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_EffectDetailsListItem_C::SetEffectDescText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectDescText");
		
		UMyCharaMenu_EffectDetailsListItem_C_SetEffectDescText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_EffectDetailsListItem_C::SetEffectNameText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectNameText");
		
		UMyCharaMenu_EffectDetailsListItem_C_SetEffectNameText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EffectDetailsListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EffectDetailsListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C");
		return ptr;
	}

}


