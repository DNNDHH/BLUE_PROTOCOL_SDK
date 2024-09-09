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
	 * 		Name   -> Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GreatSuccessRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SuccessRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_WeaponCraftSlotListItem_C::Setup(int32_t SlotNum, int32_t GreatSuccessRate, int32_t SuccessRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.Setup");
		
		UProbabilityDisplay_WeaponCraftSlotListItem_C_Setup_Params params {};
		params.SlotNum = SlotNum;
		params.GreatSuccessRate = GreatSuccessRate;
		params.SuccessRate = SuccessRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_WeaponCraftSlotListItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem");
		
		UProbabilityDisplay_WeaponCraftSlotListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_WeaponCraftSlotListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_WeaponCraftSlotListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C");
		return ptr;
	}

}


