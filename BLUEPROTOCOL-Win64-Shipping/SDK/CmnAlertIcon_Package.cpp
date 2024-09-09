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
	 * 		Name   -> Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeRed
	 * 		Flags  -> ()
	 */
	void UCmnAlertIcon_C::SetAlertTypeRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeRed");
		
		UCmnAlertIcon_C_SetAlertTypeRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeYellow
	 * 		Flags  -> ()
	 */
	void UCmnAlertIcon_C::SetAlertTypeYellow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeYellow");
		
		UCmnAlertIcon_C_SetAlertTypeYellow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAlertIcon.CmnAlertIcon_C.SetAlertType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsYellow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnAlertIcon_C::SetAlertType(bool IsYellow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAlertIcon.CmnAlertIcon_C.SetAlertType");
		
		UCmnAlertIcon_C_SetAlertType_Params params {};
		params.IsYellow = IsYellow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAlertIcon.CmnAlertIcon_C.ResetIconToDefault
	 * 		Flags  -> ()
	 */
	void UCmnAlertIcon_C::ResetIconToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAlertIcon.CmnAlertIcon_C.ResetIconToDefault");
		
		UCmnAlertIcon_C_ResetIconToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAlertIcon.CmnAlertIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnAlertIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAlertIcon.CmnAlertIcon_C.PreConstruct");
		
		UCmnAlertIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAlertIcon.CmnAlertIcon_C.ExecuteUbergraph_CmnAlertIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnAlertIcon_C::ExecuteUbergraph_CmnAlertIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAlertIcon.CmnAlertIcon_C.ExecuteUbergraph_CmnAlertIcon");
		
		UCmnAlertIcon_C_ExecuteUbergraph_CmnAlertIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnAlertIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnAlertIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnAlertIcon.CmnAlertIcon_C");
		return ptr;
	}

}


