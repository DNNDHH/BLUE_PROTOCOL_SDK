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
	 * 		Name   -> Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Prev                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FOwnItemInfo                                After                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStackBInhelitPerkView_C::SetDiff(const struct FOwnItemInfo& Prev, const struct FOwnItemInfo& After)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetDiff");
		
		UStackBInhelitPerkView_C_SetDiff_Params params {};
		params.Prev = Prev;
		params.After = After;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStackBInhelitPerkView_C::SetPerk(const struct FOwnItemInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetPerk");
		
		UStackBInhelitPerkView_C_SetPerk_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBInhelitPerkView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBInhelitPerkView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBInhelitPerkView.StackBInhelitPerkView_C");
		return ptr;
	}

}


