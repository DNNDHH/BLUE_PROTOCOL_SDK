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
	 * 		Name   -> Function EquipPosition.EquipPosition_C.SetEquipPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImagineId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipPosition_C::SetEquipPosition(int32_t ImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipPosition.EquipPosition_C.SetEquipPosition");
		
		UEquipPosition_C_SetEquipPosition_Params params {};
		params.ImagineId = ImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipPosition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipPosition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipPosition.EquipPosition_C");
		return ptr;
	}

}


