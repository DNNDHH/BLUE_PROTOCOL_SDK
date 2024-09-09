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
	 * 		Name   -> Function US_ToggleSenseMode.US_ToggleSenseMode_C.ReceiveOnActivate
	 * 		Flags  -> ()
	 */
	void UUS_ToggleSenseMode_C::ReceiveOnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function US_ToggleSenseMode.US_ToggleSenseMode_C.ReceiveOnActivate");
		
		UUS_ToggleSenseMode_C_ReceiveOnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function US_ToggleSenseMode.US_ToggleSenseMode_C.ReceiveOnDeactivate
	 * 		Flags  -> ()
	 */
	void UUS_ToggleSenseMode_C::ReceiveOnDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function US_ToggleSenseMode.US_ToggleSenseMode_C.ReceiveOnDeactivate");
		
		UUS_ToggleSenseMode_C_ReceiveOnDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function US_ToggleSenseMode.US_ToggleSenseMode_C.ExecuteUbergraph_US_ToggleSenseMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUS_ToggleSenseMode_C::ExecuteUbergraph_US_ToggleSenseMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function US_ToggleSenseMode.US_ToggleSenseMode_C.ExecuteUbergraph_US_ToggleSenseMode");
		
		UUS_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUS_ToggleSenseMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUS_ToggleSenseMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass US_ToggleSenseMode.US_ToggleSenseMode_C");
		return ptr;
	}

}


