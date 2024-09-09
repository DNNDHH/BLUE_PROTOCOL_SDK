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
	 * 		Name   -> Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAbilityUIAttribute                              InUIAttribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAbilityEfficacyInfoItem_C::SetValueText(ESBAbilityUIAttribute InUIAttribute, int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetValueText");
		
		UImagineAbilityEfficacyInfoItem_C_SetValueText_Params params {};
		params.InUIAttribute = InUIAttribute;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutConvertedValue                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UImagineAbilityEfficacyInfoItem_C::ConvertValueToPercentageNotation(int32_t InValue, class FString* OutConvertedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation");
		
		UImagineAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConvertedValue != nullptr)
			*OutConvertedValue = params.OutConvertedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetUnderlineVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineAbilityEfficacyInfoItem_C::SetUnderlineVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetUnderlineVisibility");
		
		UImagineAbilityEfficacyInfoItem_C_SetUnderlineVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBAbilityConfig                            InAbilityConfig                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InEfficacyDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InEfficacyValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineAbilityEfficacyInfoItem_C::SetAbilityEfficacyInfo(const struct FSBAbilityConfig& InAbilityConfig, const class FText& InEfficacyDesc, int32_t InEfficacyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo");
		
		UImagineAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo_Params params {};
		params.InAbilityConfig = InAbilityConfig;
		params.InEfficacyDesc = InEfficacyDesc;
		params.InEfficacyValue = InEfficacyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineAbilityEfficacyInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineAbilityEfficacyInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C");
		return ptr;
	}

}


