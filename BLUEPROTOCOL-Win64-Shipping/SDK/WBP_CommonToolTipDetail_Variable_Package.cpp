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
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.Set Name Only Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetNameOnlyText(const class FText& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.Set Name Only Text");
		
		UWBP_CommonToolTipDetail_Variable_C_SetNameOnlyText_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetExpOverflowRewardIconMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsClassLevelCounterStop                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsClassLevelLimit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsClassLevelLimitSmallerThanCounterStop                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetExpOverflowRewardIconMode(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetExpOverflowRewardIconMode");
		
		UWBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode_Params params {};
		params.bInIsClassLevelCounterStop = bInIsClassLevelCounterStop;
		params.bInIsClassLevelLimit = bInIsClassLevelLimit;
		params.bInIsClassLevelLimitSmallerThanCounterStop = bInIsClassLevelLimitSmallerThanCounterStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      TermId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bHideIfMinValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetNameAndDescAndTermId(const class FText& Name, const class FText& Desc, const class FString& TermId, bool bHideIfMinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndTermId");
		
		UWBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId_Params params {};
		params.Name = Name;
		params.Desc = Desc;
		params.TermId = TermId;
		params.bHideIfMinValue = bHideIfMinValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FDateTime                                   DateTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHideIfMinValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetNameAndDescAndDateTime(const class FText& Name, const class FText& Desc, const struct FDateTime& DateTime, bool bHideIfMinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndDateTime");
		
		UWBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime_Params params {};
		params.Name = Name;
		params.Desc = Desc;
		params.DateTime = DateTime;
		params.bHideIfMinValue = bHideIfMinValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTypeText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetType(const class FText& InTypeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetType");
		
		UWBP_CommonToolTipDetail_Variable_C_SetType_Params params {};
		params.InTypeText = InTypeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeAndDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetNameAndTypeAndDescText(const class FText& InName, const class FText& InType, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeAndDescText");
		
		UWBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText_Params params {};
		params.InName = InName;
		params.InType = InType;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetNameAndDescText(const class FText& InName, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescText");
		
		UWBP_CommonToolTipDetail_Variable_C_SetNameAndDescText_Params params {};
		params.InName = InName;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetNameAndTypeText(const class FText& InName, const class FText& InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeText");
		
		UWBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText_Params params {};
		params.InName = InName;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetWeaponPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  SBCharacterWeaponPerkData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetWeaponPerkData");
		
		UWBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityPerkID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetAbilityPerkID(int32_t PerkId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityPerkID");
		
		UWBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID_Params params {};
		params.PerkId = PerkId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityDescText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetAbilityDescText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityDescText");
		
		UWBP_CommonToolTipDetail_Variable_C_SetAbilityDescText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipDetail_Variable_C::SetAbilityNameText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityNameText");
		
		UWBP_CommonToolTipDetail_Variable_C_SetAbilityNameText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommonToolTipDetail_Variable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommonToolTipDetail_Variable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C");
		return ptr;
	}

}


