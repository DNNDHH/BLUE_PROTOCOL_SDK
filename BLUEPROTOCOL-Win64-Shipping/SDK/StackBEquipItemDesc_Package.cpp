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
	 * 		Name   -> Function StackBEquipItemDesc.StackBEquipItemDesc_C.SetMainAbilityTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStackBEquipItemDesc_C::SetMainAbilityTextColor(class UTextBlock* , bool bIsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEquipItemDesc.StackBEquipItemDesc_C.SetMainAbilityTextColor");
		
		UStackBEquipItemDesc_C_SetMainAbilityTextColor_Params params {};
		params. = ;
		params.bIsMax = bIsMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyImagineStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStackBEquipItemDesc_C::ApplyImagineStatus(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyImagineStatus");
		
		UStackBEquipItemDesc_C_ApplyImagineStatus_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyWeaponStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStackBEquipItemDesc_C::ApplyWeaponStatus(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyWeaponStatus");
		
		UStackBEquipItemDesc_C_ApplyWeaponStatus_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEquipItemDesc.StackBEquipItemDesc_C.Set OwnItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStackBEquipItemDesc_C::SetOwnItemData(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEquipItemDesc.StackBEquipItemDesc_C.Set OwnItemData");
		
		UStackBEquipItemDesc_C_SetOwnItemData_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEquipItemDesc.StackBEquipItemDesc_C.ExecuteUbergraph_StackBEquipItemDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBEquipItemDesc_C::ExecuteUbergraph_StackBEquipItemDesc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEquipItemDesc.StackBEquipItemDesc_C.ExecuteUbergraph_StackBEquipItemDesc");
		
		UStackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBEquipItemDesc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBEquipItemDesc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBEquipItemDesc.StackBEquipItemDesc_C");
		return ptr;
	}

}


