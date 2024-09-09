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
	 * 		Name   -> Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.EffectAnim
	 * 		Flags  -> ()
	 */
	void UP020_CountIcon_Parts_C::EffectAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.EffectAnim");
		
		UP020_CountIcon_Parts_C_EffectAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.SetONOFF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020_CountIcon_Parts_C::SetONOFF(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.SetONOFF");
		
		UP020_CountIcon_Parts_C_SetONOFF_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.Construct
	 * 		Flags  -> ()
	 */
	void UP020_CountIcon_Parts_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.Construct");
		
		UP020_CountIcon_Parts_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.OnSetONOFF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020_CountIcon_Parts_C::OnSetONOFF(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.OnSetONOFF");
		
		UP020_CountIcon_Parts_C_OnSetONOFF_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.ExecuteUbergraph_P020_CountIcon_Parts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020_CountIcon_Parts_C::ExecuteUbergraph_P020_CountIcon_Parts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.ExecuteUbergraph_P020_CountIcon_Parts");
		
		UP020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP020_CountIcon_Parts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP020_CountIcon_Parts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P020_CountIcon_Parts.P020_CountIcon_Parts_C");
		return ptr;
	}

}


