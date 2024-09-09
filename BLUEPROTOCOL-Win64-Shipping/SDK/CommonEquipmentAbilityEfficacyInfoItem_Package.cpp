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
	 * 		Name   -> Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAbilityUIAttribute                              InUIAttribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsValueMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentAbilityEfficacyInfoItem_C::SetValueText(ESBAbilityUIAttribute InUIAttribute, int32_t InValue, bool bInIsValueMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetValueText");
		
		UCommonEquipmentAbilityEfficacyInfoItem_C_SetValueText_Params params {};
		params.InUIAttribute = InUIAttribute;
		params.InValue = InValue;
		params.bInIsValueMax = bInIsValueMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutConvertedValue                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentAbilityEfficacyInfoItem_C::ConvertValueToPercentageNotation(int32_t InValue, class FString* OutConvertedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation");
		
		UCommonEquipmentAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation_Params params {};
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
	 * 		Name   -> Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetUnderlineVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentAbilityEfficacyInfoItem_C::SetUnderlineVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetUnderlineVisibility");
		
		UCommonEquipmentAbilityEfficacyInfoItem_C_SetUnderlineVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBAbilityConfig                            InAbilityConfig                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InEfficacyDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InEfficacyValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsMaxValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentAbilityEfficacyInfoItem_C::SetAbilityEfficacyInfo(const struct FSBAbilityConfig& InAbilityConfig, const class FText& InEfficacyDesc, int32_t InEfficacyValue, bool bInIsMaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo");
		
		UCommonEquipmentAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo_Params params {};
		params.InAbilityConfig = InAbilityConfig;
		params.InEfficacyDesc = InEfficacyDesc;
		params.InEfficacyValue = InEfficacyValue;
		params.bInIsMaxValue = bInIsMaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentAbilityEfficacyInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentAbilityEfficacyInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C");
		return ptr;
	}

}


