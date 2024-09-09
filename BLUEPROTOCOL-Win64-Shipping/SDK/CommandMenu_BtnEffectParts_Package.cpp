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
	 * 		Name   -> Function CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommandMenu_BtnEffectParts_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C.Construct");
		
		UCommandMenu_BtnEffectParts_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C.ExecuteUbergraph_CommandMenu_BtnEffectParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommandMenu_BtnEffectParts_C::ExecuteUbergraph_CommandMenu_BtnEffectParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C.ExecuteUbergraph_CommandMenu_BtnEffectParts");
		
		UCommandMenu_BtnEffectParts_C_ExecuteUbergraph_CommandMenu_BtnEffectParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommandMenu_BtnEffectParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommandMenu_BtnEffectParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMenu_BtnEffectParts.CommandMenu_BtnEffectParts_C");
		return ptr;
	}

}


