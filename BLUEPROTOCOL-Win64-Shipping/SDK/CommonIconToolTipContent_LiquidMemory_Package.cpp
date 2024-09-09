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
	 * 		Name   -> Function CommonIconToolTipContent_LiquidMemory.CommonIconToolTipContent_LiquidMemory_C.SetLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_LiquidMemory_C::SetLiquidMemory(int32_t InLiquidMemoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_LiquidMemory.CommonIconToolTipContent_LiquidMemory_C.SetLiquidMemory");
		
		UCommonIconToolTipContent_LiquidMemory_C_SetLiquidMemory_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_LiquidMemory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_LiquidMemory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_LiquidMemory.CommonIconToolTipContent_LiquidMemory_C");
		return ptr;
	}

}


