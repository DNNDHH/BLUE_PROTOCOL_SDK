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
	 * 		Name   -> Function WeaponStackBResult.WeaponStackBResult_C.SetAfterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                afterData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponStackBResult_C::SetAfterData(const struct FOwnItemInfo& afterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponStackBResult.WeaponStackBResult_C.SetAfterData");
		
		UWeaponStackBResult_C_SetAfterData_Params params {};
		params.afterData = afterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponStackBResult.WeaponStackBResult_C.SetBeforeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                beforeData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponStackBResult_C::SetBeforeData(const struct FOwnItemInfo& beforeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponStackBResult.WeaponStackBResult_C.SetBeforeData");
		
		UWeaponStackBResult_C_SetBeforeData_Params params {};
		params.beforeData = beforeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponStackBResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponStackBResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponStackBResult.WeaponStackBResult_C");
		return ptr;
	}

}


