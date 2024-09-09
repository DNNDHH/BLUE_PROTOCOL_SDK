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
	 * 		Name   -> Function ProbabilityDisplay_WeaponDropSlotListItem.ProbabilityDisplay_WeaponDropSlotListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            inCriticalRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSlotRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSlotRateCritical                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_WeaponDropSlotListItem_C::Setup(int32_t SlotNum, int32_t inCriticalRate, int32_t InSlotRate, int32_t InSlotRateCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_WeaponDropSlotListItem.ProbabilityDisplay_WeaponDropSlotListItem_C.Setup");
		
		UProbabilityDisplay_WeaponDropSlotListItem_C_Setup_Params params {};
		params.SlotNum = SlotNum;
		params.inCriticalRate = inCriticalRate;
		params.InSlotRate = InSlotRate;
		params.InSlotRateCritical = InSlotRateCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_WeaponDropSlotListItem.ProbabilityDisplay_WeaponDropSlotListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponDropSlotListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_WeaponDropSlotListItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponDropSlotListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_WeaponDropSlotListItem.ProbabilityDisplay_WeaponDropSlotListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponDropSlotListItem");
		
		UProbabilityDisplay_WeaponDropSlotListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponDropSlotListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_WeaponDropSlotListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_WeaponDropSlotListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponDropSlotListItem.ProbabilityDisplay_WeaponDropSlotListItem_C");
		return ptr;
	}

}


