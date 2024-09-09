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
	 * 		Name   -> Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set EmptySlot
	 * 		Flags  -> ()
	 */
	void UWeaponButtonViewPerkListItem_C::SetEmptySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set EmptySlot");
		
		UWeaponButtonViewPerkListItem_C_SetEmptySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set Perk Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  PerkData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponButtonViewPerkListItem_C::SetPerkData(const struct FSBCharacterWeaponPerkData& PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set Perk Data");
		
		UWeaponButtonViewPerkListItem_C_SetPerkData_Params params {};
		params.PerkData = PerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.ExecuteUbergraph_WeaponButtonViewPerkListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponButtonViewPerkListItem_C::ExecuteUbergraph_WeaponButtonViewPerkListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.ExecuteUbergraph_WeaponButtonViewPerkListItem");
		
		UWeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponButtonViewPerkListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponButtonViewPerkListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C");
		return ptr;
	}

}


