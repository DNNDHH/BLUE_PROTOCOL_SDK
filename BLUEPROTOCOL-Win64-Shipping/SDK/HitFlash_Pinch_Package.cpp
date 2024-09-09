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
	 * 		Name   -> Function HitFlash_Pinch.HitFlash_Pinch_C.Construct
	 * 		Flags  -> ()
	 */
	void UHitFlash_Pinch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitFlash_Pinch.HitFlash_Pinch_C.Construct");
		
		UHitFlash_Pinch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HitFlash_Pinch.HitFlash_Pinch_C.ExecuteUbergraph_HitFlash_Pinch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHitFlash_Pinch_C::ExecuteUbergraph_HitFlash_Pinch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitFlash_Pinch.HitFlash_Pinch_C.ExecuteUbergraph_HitFlash_Pinch");
		
		UHitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitFlash_Pinch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitFlash_Pinch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HitFlash_Pinch.HitFlash_Pinch_C");
		return ptr;
	}

}


