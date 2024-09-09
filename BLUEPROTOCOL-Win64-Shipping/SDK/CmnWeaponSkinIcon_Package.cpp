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
	 * 		Name   -> Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.CreateTooltipWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSkinAttached                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InWeaponSkinId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsTermLimited                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnWeaponSkinIcon_C::CreateTooltipWidget(bool InIsSkinAttached, int32_t InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.CreateTooltipWidget");
		
		UCmnWeaponSkinIcon_C_CreateTooltipWidget_Params params {};
		params.InIsSkinAttached = InIsSkinAttached;
		params.InWeaponSkinId = InWeaponSkinId;
		params.InIsTermLimited = InIsTermLimited;
		params.InExpiryDateTime = InExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.SetWeaponSkinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCmnWeaponSkinIcon_C::SetWeaponSkinInfo(const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.SetWeaponSkinInfo");
		
		UCmnWeaponSkinIcon_C_SetWeaponSkinInfo_Params params {};
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnWeaponSkinIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnWeaponSkinIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnWeaponSkinIcon.CmnWeaponSkinIcon_C");
		return ptr;
	}

}


