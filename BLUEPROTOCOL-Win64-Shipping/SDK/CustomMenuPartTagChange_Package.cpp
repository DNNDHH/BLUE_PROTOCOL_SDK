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
	 * 		Name   -> Function CustomMenuPartTagChange.CustomMenuPartTagChange_C.SetupForInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartTagChange_C::SetupForInt(int32_t InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartTagChange.CustomMenuPartTagChange_C.SetupForInt");
		
		UCustomMenuPartTagChange_C_SetupForInt_Params params {};
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartTagChange.CustomMenuPartTagChange_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlotDataChangeType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartTagChange_C::Setup(ESlotDataChangeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartTagChange.CustomMenuPartTagChange_C.Setup");
		
		UCustomMenuPartTagChange_C_Setup_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMenuPartTagChange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMenuPartTagChange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomMenuPartTagChange.CustomMenuPartTagChange_C");
		return ptr;
	}

}


