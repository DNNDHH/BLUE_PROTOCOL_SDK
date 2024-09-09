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
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSlotWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlot_C::SetSlotWidth(float InSlotWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotWidth");
		
		UCommonWeaponAbilityInfoSlot_C_SetSlotWidth_Params params {};
		params.InSlotWidth = InSlotWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetPerkRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlot_C::SetPerkRarity(int32_t InRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetPerkRarity");
		
		UCommonWeaponAbilityInfoSlot_C_SetPerkRarity_Params params {};
		params.InRarity = InRarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetFusionItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlot_C::SetFusionItemName(const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetFusionItemName");
		
		UCommonWeaponAbilityInfoSlot_C_SetFusionItemName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotOccupancy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOccupancyNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlot_C::SetSlotOccupancy(int32_t InOccupancyNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotOccupancy");
		
		UCommonWeaponAbilityInfoSlot_C_SetSlotOccupancy_Params params {};
		params.InOccupancyNum = InOccupancyNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetIsSlotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlot_C::SetIsSlotEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetIsSlotEmpty");
		
		UCommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.PreConstruct");
		
		UCommonWeaponAbilityInfoSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlot_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlot");
		
		UCommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWeaponAbilityInfoSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWeaponAbilityInfoSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C");
		return ptr;
	}

}


