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
	 * 		Name   -> Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnAnim_LiquidMemoryActive_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.Construct");
		
		UCmnAnim_LiquidMemoryActive_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.ExecuteUbergraph_CmnAnim_LiquidMemoryActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnAnim_LiquidMemoryActive_C::ExecuteUbergraph_CmnAnim_LiquidMemoryActive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.ExecuteUbergraph_CmnAnim_LiquidMemoryActive");
		
		UCmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnAnim_LiquidMemoryActive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnAnim_LiquidMemoryActive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C");
		return ptr;
	}

}


