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
	 * 		Name   -> Function CmnComboBoxItem1.CmnComboBoxItem1_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnComboBoxItem1_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnComboBoxItem1.CmnComboBoxItem1_C.Construct");
		
		UCmnComboBoxItem1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnComboBoxItem1.CmnComboBoxItem1_C.ExecuteUbergraph_CmnComboBoxItem1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnComboBoxItem1_C::ExecuteUbergraph_CmnComboBoxItem1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnComboBoxItem1.CmnComboBoxItem1_C.ExecuteUbergraph_CmnComboBoxItem1");
		
		UCmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnComboBoxItem1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnComboBoxItem1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnComboBoxItem1.CmnComboBoxItem1_C");
		return ptr;
	}

}


