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
	 * 		Name   -> Function WeaponButtonViewPerkList.WeaponButtonViewPerkList_C.SetPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           WeaponData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponButtonViewPerkList_C::SetPerkData(const struct FSBWeaponItemData& WeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonViewPerkList.WeaponButtonViewPerkList_C.SetPerkData");
		
		UWeaponButtonViewPerkList_C_SetPerkData_Params params {};
		params.WeaponData = WeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponButtonViewPerkList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponButtonViewPerkList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponButtonViewPerkList.WeaponButtonViewPerkList_C");
		return ptr;
	}

}


