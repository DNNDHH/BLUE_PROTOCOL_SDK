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
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetIsSlotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotDetailed_C::SetIsSlotEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetIsSlotEmpty");
		
		UCommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.GetAbilityPartsValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UCommonWeaponAbilityInfoSlotDetailed_C::GetAbilityPartsValueText(int32_t InValue, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.GetAbilityPartsValueText");
		
		UCommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText_Params params {};
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
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetupAbilityInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  InWeaponPerkData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotDetailed_C::SetupAbilityInfo(const struct FSBCharacterWeaponPerkData& InWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetupAbilityInfo");
		
		UCommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo_Params params {};
		params.InWeaponPerkData = InWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.CreateEfficacyInfoItemList
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityInfoSlotDetailed_C::CreateEfficacyInfoItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.CreateEfficacyInfoItemList");
		
		UCommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotDetailed_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.PreConstruct");
		
		UCommonWeaponAbilityInfoSlotDetailed_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotDetailed_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed");
		
		UCommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWeaponAbilityInfoSlotDetailed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWeaponAbilityInfoSlotDetailed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C");
		return ptr;
	}

}


