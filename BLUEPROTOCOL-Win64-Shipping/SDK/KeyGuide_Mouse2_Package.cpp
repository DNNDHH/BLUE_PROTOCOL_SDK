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
	 * 		Name   -> Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ApplyKeyConfigData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyGuide_Mouse2_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ApplyKeyConfigData");
		
		UKeyGuide_Mouse2_C_ApplyKeyConfigData_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ExecuteUbergraph_KeyGuide_Mouse2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide_Mouse2_C::ExecuteUbergraph_KeyGuide_Mouse2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ExecuteUbergraph_KeyGuide_Mouse2");
		
		UKeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuide_Mouse2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuide_Mouse2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuide_Mouse2.KeyGuide_Mouse2_C");
		return ptr;
	}

}


