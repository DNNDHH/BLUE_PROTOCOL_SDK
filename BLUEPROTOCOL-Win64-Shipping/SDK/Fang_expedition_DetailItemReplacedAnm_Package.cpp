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
	 * 		Name   -> Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.PlayAnm
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemReplacedAnm_C::PlayAnm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.PlayAnm");
		
		UFang_expedition_DetailItemReplacedAnm_C_PlayAnm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemReplacedAnm_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.Construct");
		
		UFang_expedition_DetailItemReplacedAnm_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemReplacedAnm_C::ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm");
		
		UFang_expedition_DetailItemReplacedAnm_C_ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailItemReplacedAnm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailItemReplacedAnm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C");
		return ptr;
	}

}


