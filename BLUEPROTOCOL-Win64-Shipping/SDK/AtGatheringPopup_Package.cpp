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
	 * 		Name   -> Function AtGatheringPopup.AtGatheringPopup_C.Construct
	 * 		Flags  -> ()
	 */
	void UAtGatheringPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AtGatheringPopup.AtGatheringPopup_C.Construct");
		
		UAtGatheringPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AtGatheringPopup.AtGatheringPopup_C.ExecuteUbergraph_AtGatheringPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAtGatheringPopup_C::ExecuteUbergraph_AtGatheringPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AtGatheringPopup.AtGatheringPopup_C.ExecuteUbergraph_AtGatheringPopup");
		
		UAtGatheringPopup_C_ExecuteUbergraph_AtGatheringPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAtGatheringPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAtGatheringPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AtGatheringPopup.AtGatheringPopup_C");
		return ptr;
	}

}


