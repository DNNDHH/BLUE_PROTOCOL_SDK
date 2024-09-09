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
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Stack Imagine Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Type1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Type2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FOwnItemInfo                                Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               StackBEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetStackImagineMode(const class FText& InName, const class FText& Type1, const class FText& Desc1, const class FText& Type2, const class FText& Desc2, const struct FOwnItemInfo& Info, bool StackBEffectiveDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Stack Imagine Mode");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetStackImagineMode_Params params {};
		params.InName = InName;
		params.Type1 = Type1;
		params.Desc1 = Desc1;
		params.Type2 = Type2;
		params.Desc2 = Desc2;
		params.Info = Info;
		params.StackBEffectiveDisplay = StackBEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Visible Stack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetVisibleStack(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Visible Stack");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetVisibleStack_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeAndDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetNameAndTypeAndDescText(const class FText& InName, const class FText& Type, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeAndDescText");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText_Params params {};
		params.InName = InName;
		params.Type = Type;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetNameAndTypeText(const class FText& InName, const class FText& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeText");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText_Params params {};
		params.InName = InName;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetNameAndDescText(const class FText& InName, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndDescText");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText_Params params {};
		params.InName = InName;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAsWeaponSkinUnattached
	 * 		Flags  -> ()
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetAsWeaponSkinUnattached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAsWeaponSkinUnattached");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetWeaponPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  SBCharacterWeaponPerkData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetWeaponPerkData");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityPerkID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetAbilityPerkID(int32_t PerkId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityPerkID");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID_Params params {};
		params.PerkId = PerkId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetAbilityDescText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityDescText");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Fixed_C::SetAbilityNameText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityNameText");
		
		UWBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommonToolTipDetail_Fixed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommonToolTipDetail_Fixed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C");
		return ptr;
	}

}


