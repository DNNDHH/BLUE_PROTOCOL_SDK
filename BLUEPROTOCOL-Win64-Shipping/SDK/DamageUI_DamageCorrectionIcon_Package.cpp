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
	 * 		Name   -> Function DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UDamageUI_DamageCorrectionIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C.Construct");
		
		UDamageUI_DamageCorrectionIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C.ExecuteUbergraph_DamageUI_DamageCorrectionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDamageUI_DamageCorrectionIcon_C::ExecuteUbergraph_DamageUI_DamageCorrectionIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C.ExecuteUbergraph_DamageUI_DamageCorrectionIcon");
		
		UDamageUI_DamageCorrectionIcon_C_ExecuteUbergraph_DamageUI_DamageCorrectionIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDamageUI_DamageCorrectionIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDamageUI_DamageCorrectionIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C");
		return ptr;
	}

}

