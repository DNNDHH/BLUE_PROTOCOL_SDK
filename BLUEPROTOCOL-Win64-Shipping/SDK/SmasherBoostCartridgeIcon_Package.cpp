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
	 * 		Name   -> Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.SetCartridge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECartridgeType                                     ECartridgeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USmasherBoostCartridgeIcon_C::SetCartridge(ECartridgeType ECartridgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.SetCartridge");
		
		USmasherBoostCartridgeIcon_C_SetCartridge_Params params {};
		params.ECartridgeType = ECartridgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.ExecuteUbergraph_SmasherBoostCartridgeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USmasherBoostCartridgeIcon_C::ExecuteUbergraph_SmasherBoostCartridgeIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.ExecuteUbergraph_SmasherBoostCartridgeIcon");
		
		USmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmasherBoostCartridgeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmasherBoostCartridgeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C");
		return ptr;
	}

}


