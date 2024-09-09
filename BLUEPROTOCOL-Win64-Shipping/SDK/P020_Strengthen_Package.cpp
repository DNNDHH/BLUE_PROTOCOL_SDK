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
	 * 		Name   -> Function P020_Strengthen.P020_Strengthen_C.SetStNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNum                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020_Strengthen_C::SetStNum(int32_t InNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Strengthen.P020_Strengthen_C.SetStNum");
		
		UP020_Strengthen_C_SetStNum_Params params {};
		params.InNum = InNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Strengthen.P020_Strengthen_C.Construct
	 * 		Flags  -> ()
	 */
	void UP020_Strengthen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Strengthen.P020_Strengthen_C.Construct");
		
		UP020_Strengthen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Strengthen.P020_Strengthen_C.ExecuteUbergraph_P020_Strengthen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020_Strengthen_C::ExecuteUbergraph_P020_Strengthen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Strengthen.P020_Strengthen_C.ExecuteUbergraph_P020_Strengthen");
		
		UP020_Strengthen_C_ExecuteUbergraph_P020_Strengthen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP020_Strengthen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP020_Strengthen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P020_Strengthen.P020_Strengthen_C");
		return ptr;
	}

}


