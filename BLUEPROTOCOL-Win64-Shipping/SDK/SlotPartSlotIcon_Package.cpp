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
	 * 		Name   -> Function SlotPartSlotIcon.SlotPartSlotIcon_C.SetSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartSlotIcon_C::SetSlot(int32_t SlotNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartSlotIcon.SlotPartSlotIcon_C.SetSlot");
		
		USlotPartSlotIcon_C_SetSlot_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlotPartSlotIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlotPartSlotIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlotPartSlotIcon.SlotPartSlotIcon_C");
		return ptr;
	}

}


