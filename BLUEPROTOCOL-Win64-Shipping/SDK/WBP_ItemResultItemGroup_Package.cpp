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
	 * 		Name   -> Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBItemBoxResultItemData>            ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_ItemResultItemGroup_C::SetItem(TArray<struct FSBItemBoxResultItemData>* ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.SetItem");
		
		UWBP_ItemResultItemGroup_C_SetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.ExecuteUbergraph_WBP_ItemResultItemGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemResultItemGroup_C::ExecuteUbergraph_WBP_ItemResultItemGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.ExecuteUbergraph_WBP_ItemResultItemGroup");
		
		UWBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemResultItemGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemResultItemGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C");
		return ptr;
	}

}


