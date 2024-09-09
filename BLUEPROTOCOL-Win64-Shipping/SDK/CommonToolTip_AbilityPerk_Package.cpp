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
	 * 		Name   -> Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetWeaponPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  SBCharacterWeaponPerkData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UCommonToolTip_AbilityPerk_C::SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetWeaponPerkData");
		
		UCommonToolTip_AbilityPerk_C_SetWeaponPerkData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityPerkID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonToolTip_AbilityPerk_C::SetAbilityPerkID(int32_t PerkId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityPerkID");
		
		UCommonToolTip_AbilityPerk_C_SetAbilityPerkID_Params params {};
		params.PerkId = PerkId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonToolTip_AbilityPerk_C::SetAbilityDescText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityDescText");
		
		UCommonToolTip_AbilityPerk_C_SetAbilityDescText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonToolTip_AbilityPerk_C::SetAbilityNameText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityNameText");
		
		UCommonToolTip_AbilityPerk_C_SetAbilityNameText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonToolTip_AbilityPerk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonToolTip_AbilityPerk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C");
		return ptr;
	}

}


