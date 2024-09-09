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
	 * 		Name   -> Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.GetAbilityPartsValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UCommonEquipmentAbilityInfoDesc_C::GetAbilityPartsValueText(int32_t InValue, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.GetAbilityPartsValueText");
		
		UCommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.SetupAbilityInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAbilityEffectId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonEquipmentAbilityInfoDesc_C::SetupAbilityInfo(int32_t InAbilityEffectId, const struct FOwnItemInfo& InOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.SetupAbilityInfo");
		
		UCommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo_Params params {};
		params.InAbilityEffectId = InAbilityEffectId;
		params.InOwnItemInfo = InOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.CreateEfficacyInfoItemList
	 * 		Flags  -> ()
	 */
	void UCommonEquipmentAbilityInfoDesc_C::CreateEfficacyInfoItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.CreateEfficacyInfoItemList");
		
		UCommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentAbilityInfoDesc_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.PreConstruct");
		
		UCommonEquipmentAbilityInfoDesc_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.ExecuteUbergraph_CommonEquipmentAbilityInfoDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentAbilityInfoDesc_C::ExecuteUbergraph_CommonEquipmentAbilityInfoDesc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.ExecuteUbergraph_CommonEquipmentAbilityInfoDesc");
		
		UCommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentAbilityInfoDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentAbilityInfoDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C");
		return ptr;
	}

}


