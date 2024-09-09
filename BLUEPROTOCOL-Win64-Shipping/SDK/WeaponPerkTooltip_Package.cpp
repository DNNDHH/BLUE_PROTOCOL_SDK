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
	 * 		Name   -> Function WeaponPerkTooltip.WeaponPerkTooltip_C.SetNameDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Desc2Active                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponPerkTooltip_C::SetNameDesc(const class FText& Name, const class FText& Desc1, const class FText& Desc2, bool Desc2Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponPerkTooltip.WeaponPerkTooltip_C.SetNameDesc");
		
		UWeaponPerkTooltip_C_SetNameDesc_Params params {};
		params.Name = Name;
		params.Desc1 = Desc1;
		params.Desc2 = Desc2;
		params.Desc2Active = Desc2Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponPerkTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponPerkTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponPerkTooltip.WeaponPerkTooltip_C");
		return ptr;
	}

}


