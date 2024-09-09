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
	 * 		Name   -> Function ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NormalNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GreatNumBottom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GreatNumUpper                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ItemCraftListItem_C::Setup(int32_t NormalNum, int32_t GreatNumBottom, int32_t GreatNumUpper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C.Setup");
		
		UProbabilityDisplay_ItemCraftListItem_C_Setup_Params params {};
		params.NormalNum = NormalNum;
		params.GreatNumBottom = GreatNumBottom;
		params.GreatNumUpper = GreatNumUpper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ItemCraftListItem_C::ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem");
		
		UProbabilityDisplay_ItemCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_ItemCraftListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_ItemCraftListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C");
		return ptr;
	}

}


