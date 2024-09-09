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
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UProbabilityDisplay_ImagineCraftEffectItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C.Construct");
		
		UProbabilityDisplay_ImagineCraftEffectItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_ImagineCraftEffectItem_C::ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem");
		
		UProbabilityDisplay_ImagineCraftEffectItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_ImagineCraftEffectItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_ImagineCraftEffectItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C");
		return ptr;
	}

}


