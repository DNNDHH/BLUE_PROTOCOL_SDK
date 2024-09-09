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
	 * 		Name   -> Function CmnImageThrobber.CmnImageThrobber_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnImageThrobber_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnImageThrobber.CmnImageThrobber_C.Construct");
		
		UCmnImageThrobber_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnImageThrobber.CmnImageThrobber_C.StartAnim
	 * 		Flags  -> ()
	 */
	void UCmnImageThrobber_C::StartAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnImageThrobber.CmnImageThrobber_C.StartAnim");
		
		UCmnImageThrobber_C_StartAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnImageThrobber.CmnImageThrobber_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UCmnImageThrobber_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnImageThrobber.CmnImageThrobber_C.StopAnim");
		
		UCmnImageThrobber_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnImageThrobber.CmnImageThrobber_C.ExecuteUbergraph_CmnImageThrobber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnImageThrobber_C::ExecuteUbergraph_CmnImageThrobber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnImageThrobber.CmnImageThrobber_C.ExecuteUbergraph_CmnImageThrobber");
		
		UCmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnImageThrobber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnImageThrobber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnImageThrobber.CmnImageThrobber_C");
		return ptr;
	}

}


