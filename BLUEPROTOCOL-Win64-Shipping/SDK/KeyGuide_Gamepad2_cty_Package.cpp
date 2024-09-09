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
	 * 		Name   -> Function KeyGuide_Gamepad2_cty.KeyGuide_Gamepad2_cty_C.ApplyKeyConfigData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyGuide_Gamepad2_cty_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad2_cty.KeyGuide_Gamepad2_cty_C.ApplyKeyConfigData");
		
		UKeyGuide_Gamepad2_cty_C_ApplyKeyConfigData_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Gamepad2_cty.KeyGuide_Gamepad2_cty_C.ExecuteUbergraph_KeyGuide_Gamepad2_cty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide_Gamepad2_cty_C::ExecuteUbergraph_KeyGuide_Gamepad2_cty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad2_cty.KeyGuide_Gamepad2_cty_C.ExecuteUbergraph_KeyGuide_Gamepad2_cty");
		
		UKeyGuide_Gamepad2_cty_C_ExecuteUbergraph_KeyGuide_Gamepad2_cty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuide_Gamepad2_cty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuide_Gamepad2_cty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuide_Gamepad2_cty.KeyGuide_Gamepad2_cty_C");
		return ptr;
	}

}


