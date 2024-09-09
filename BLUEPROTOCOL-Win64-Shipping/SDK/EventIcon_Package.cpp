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
	 * 		Name   -> Function EventIcon.EventIcon_C.CreateToolTipWidgetifNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEventIconToolTip_C*                         Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventIcon_C::CreateToolTipWidgetifNeeded(class UEventIconToolTip_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventIcon.EventIcon_C.CreateToolTipWidgetifNeeded");
		
		UEventIcon_C_CreateToolTipWidgetifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventIcon.EventIcon_C.SetInfo
	 * 		Flags  -> ()
	 */
	void UEventIcon_C::SetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventIcon.EventIcon_C.SetInfo");
		
		UEventIcon_C_SetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventIcon.EventIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UEventIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventIcon.EventIcon_C.GetToolTipWidget_1");
		
		UEventIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventIcon.EventIcon_C");
		return ptr;
	}

}


