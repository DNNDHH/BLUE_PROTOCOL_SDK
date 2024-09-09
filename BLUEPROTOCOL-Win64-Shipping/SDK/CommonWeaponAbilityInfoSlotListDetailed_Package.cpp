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
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotOccupancy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSlotId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOccupancyNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::SetSlotOccupancy(int32_t InSlotId, int32_t InOccupancyNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotOccupancy");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_SetSlotOccupancy_Params params {};
		params.InSlotId = InSlotId;
		params.InOccupancyNum = InOccupancyNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSlotId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::SetSlotEmpty(int32_t InSlotId, bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotEmpty");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_SetSlotEmpty_Params params {};
		params.InSlotId = InSlotId;
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotInfo");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_SetSlotInfo_Params params {};
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.GetSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSlotId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCommonWeaponAbilityInfoSlotDetailed_C*      OutSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::GetSlot(int32_t InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlotDetailed_C** OutSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.GetSlot");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_GetSlot_Params params {};
		params.InSlotId = InSlotId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutSlot != nullptr)
			*OutSlot = params.OutSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.InitAllSlot
	 * 		Flags  -> ()
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::InitAllSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.InitAllSlot");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_InitAllSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.PreConstruct");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonWeaponAbilityInfoSlotListDetailed_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed");
		
		UCommonWeaponAbilityInfoSlotListDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWeaponAbilityInfoSlotListDetailed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWeaponAbilityInfoSlotListDetailed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C");
		return ptr;
	}

}


