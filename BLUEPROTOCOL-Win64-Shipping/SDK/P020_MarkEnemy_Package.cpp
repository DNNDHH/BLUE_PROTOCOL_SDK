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
	 * 		Name   -> Function P020_MarkEnemy.P020_MarkEnemy_C.Construct
	 * 		Flags  -> ()
	 */
	void UP020_MarkEnemy_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkEnemy.P020_MarkEnemy_C.Construct");
		
		UP020_MarkEnemy_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_MarkEnemy.P020_MarkEnemy_C.ExecuteUbergraph_P020_MarkEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020_MarkEnemy_C::ExecuteUbergraph_P020_MarkEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_MarkEnemy.P020_MarkEnemy_C.ExecuteUbergraph_P020_MarkEnemy");
		
		UP020_MarkEnemy_C_ExecuteUbergraph_P020_MarkEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP020_MarkEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP020_MarkEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P020_MarkEnemy.P020_MarkEnemy_C");
		return ptr;
	}

}


