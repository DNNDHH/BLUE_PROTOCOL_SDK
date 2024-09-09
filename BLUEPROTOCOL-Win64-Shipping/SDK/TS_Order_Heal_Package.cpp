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
	 * 		Name   -> Function TS_Order_Heal.TS_Order_Heal_C.ReceivePrepareForPlanning
	 * 		Flags  -> ()
	 */
	void UTS_Order_Heal_C::ReceivePrepareForPlanning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TS_Order_Heal.TS_Order_Heal_C.ReceivePrepareForPlanning");
		
		UTS_Order_Heal_C_ReceivePrepareForPlanning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TS_Order_Heal.TS_Order_Heal_C.ExecuteUbergraph_TS_Order_Heal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTS_Order_Heal_C::ExecuteUbergraph_TS_Order_Heal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TS_Order_Heal.TS_Order_Heal_C.ExecuteUbergraph_TS_Order_Heal");
		
		UTS_Order_Heal_C_ExecuteUbergraph_TS_Order_Heal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTS_Order_Heal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTS_Order_Heal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TS_Order_Heal.TS_Order_Heal_C");
		return ptr;
	}

}


