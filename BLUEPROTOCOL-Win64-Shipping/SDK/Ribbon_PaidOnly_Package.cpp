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
	 * 		Name   -> Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.Construct
	 * 		Flags  -> ()
	 */
	void URibbon_PaidOnly_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.Construct");
		
		URibbon_PaidOnly_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URibbon_PaidOnly_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.PreConstruct");
		
		URibbon_PaidOnly_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.ExecuteUbergraph_Ribbon_PaidOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URibbon_PaidOnly_C::ExecuteUbergraph_Ribbon_PaidOnly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ribbon_PaidOnly.Ribbon_PaidOnly_C.ExecuteUbergraph_Ribbon_PaidOnly");
		
		URibbon_PaidOnly_C_ExecuteUbergraph_Ribbon_PaidOnly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URibbon_PaidOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URibbon_PaidOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Ribbon_PaidOnly.Ribbon_PaidOnly_C");
		return ptr;
	}

}


