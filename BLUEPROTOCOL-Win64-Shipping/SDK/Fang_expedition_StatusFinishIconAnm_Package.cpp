﻿/**
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
	 * 		Name   -> Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_StatusFinishIconAnm_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.Construct");
		
		UFang_expedition_StatusFinishIconAnm_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_StatusFinishIconAnm_C::ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm");
		
		UFang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_StatusFinishIconAnm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_StatusFinishIconAnm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C");
		return ptr;
	}

}


