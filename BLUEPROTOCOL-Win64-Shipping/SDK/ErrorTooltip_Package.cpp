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
	 * 		Name   -> Function ErrorTooltip.ErrorTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UErrorTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ErrorTooltip.ErrorTooltip_C.Construct");
		
		UErrorTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ErrorTooltip.ErrorTooltip_C.SetErrorType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGuildErrorDisplay                                 ErrorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UErrorTooltip_C::SetErrorType(EGuildErrorDisplay ErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ErrorTooltip.ErrorTooltip_C.SetErrorType");
		
		UErrorTooltip_C_SetErrorType_Params params {};
		params.ErrorType = ErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ErrorTooltip.ErrorTooltip_C.ExecuteUbergraph_ErrorTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UErrorTooltip_C::ExecuteUbergraph_ErrorTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ErrorTooltip.ErrorTooltip_C.ExecuteUbergraph_ErrorTooltip");
		
		UErrorTooltip_C_ExecuteUbergraph_ErrorTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UErrorTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UErrorTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ErrorTooltip.ErrorTooltip_C");
		return ptr;
	}

}


