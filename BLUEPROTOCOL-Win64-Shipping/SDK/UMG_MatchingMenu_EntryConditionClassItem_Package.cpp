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
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_EntryConditionClassItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.Construct");
		
		UUMG_MatchingMenu_EntryConditionClassItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_EntryConditionClassItem_C::ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem");
		
		UUMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_EntryConditionClassItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_EntryConditionClassItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C");
		return ptr;
	}

}


