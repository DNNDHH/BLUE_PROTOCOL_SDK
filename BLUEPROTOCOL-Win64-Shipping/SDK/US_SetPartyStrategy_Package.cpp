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
	 * 		Name   -> Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnActivate
	 * 		Flags  -> ()
	 */
	void UUS_SetPartyStrategy_C::ReceiveOnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnActivate");
		
		UUS_SetPartyStrategy_C_ReceiveOnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnDeactivate
	 * 		Flags  -> ()
	 */
	void UUS_SetPartyStrategy_C::ReceiveOnDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnDeactivate");
		
		UUS_SetPartyStrategy_C_ReceiveOnDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function US_SetPartyStrategy.US_SetPartyStrategy_C.ExecuteUbergraph_US_SetPartyStrategy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUS_SetPartyStrategy_C::ExecuteUbergraph_US_SetPartyStrategy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function US_SetPartyStrategy.US_SetPartyStrategy_C.ExecuteUbergraph_US_SetPartyStrategy");
		
		UUS_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUS_SetPartyStrategy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUS_SetPartyStrategy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass US_SetPartyStrategy.US_SetPartyStrategy_C");
		return ptr;
	}

}


