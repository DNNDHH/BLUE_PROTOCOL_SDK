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
	 * 		Name   -> Function CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C.GetRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponPerkRarity                                Rarity                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnWeaponSpecialMainRare_C::GetRarity(ESBWeaponPerkRarity* Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C.GetRarity");
		
		UCmnWeaponSpecialMainRare_C_GetRarity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rarity != nullptr)
			*Rarity = params.Rarity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponPerkRarity                                Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnWeaponSpecialMainRare_C::SetData(ESBWeaponPerkRarity Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C.SetData");
		
		UCmnWeaponSpecialMainRare_C_SetData_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnWeaponSpecialMainRare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnWeaponSpecialMainRare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C");
		return ptr;
	}

}


