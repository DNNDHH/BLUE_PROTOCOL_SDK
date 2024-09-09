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
	 * 		Name   -> Function WPB_BuffIcon.WPB_BuffIcon_C.Get_BuffIcon_1_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWPB_BuffIcon_C::Get_BuffIcon_1_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPB_BuffIcon.WPB_BuffIcon_C.Get_BuffIcon_1_ToolTipWidget_1");
		
		UWPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPB_BuffIcon.WPB_BuffIcon_C.SetBuffIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BuffName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWPB_BuffIcon_C::SetBuffIcon(const class FName& BuffName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPB_BuffIcon.WPB_BuffIcon_C.SetBuffIcon");
		
		UWPB_BuffIcon_C_SetBuffIcon_Params params {};
		params.BuffName = BuffName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WPB_BuffIcon.WPB_BuffIcon_C.ExecuteUbergraph_WPB_BuffIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWPB_BuffIcon_C::ExecuteUbergraph_WPB_BuffIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WPB_BuffIcon.WPB_BuffIcon_C.ExecuteUbergraph_WPB_BuffIcon");
		
		UWPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWPB_BuffIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWPB_BuffIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WPB_BuffIcon.WPB_BuffIcon_C");
		return ptr;
	}

}


