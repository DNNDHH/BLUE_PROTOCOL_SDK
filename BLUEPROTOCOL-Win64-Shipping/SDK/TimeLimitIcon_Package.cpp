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
	 * 		Name   -> Function TimeLimitIcon.TimeLimitIcon_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTimeLimitIcon_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeLimitIcon.TimeLimitIcon_C.SetText");
		
		UTimeLimitIcon_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeLimitIcon.TimeLimitIcon_C.SetTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEventTermId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTimeLimitIcon_C::SetTermId(const class FString& InEventTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeLimitIcon.TimeLimitIcon_C.SetTermId");
		
		UTimeLimitIcon_C_SetTermId_Params params {};
		params.InEventTermId = InEventTermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeLimitIcon.TimeLimitIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UTimeLimitIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeLimitIcon.TimeLimitIcon_C.GetToolTipWidget_1");
		
		UTimeLimitIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeLimitIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeLimitIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TimeLimitIcon.TimeLimitIcon_C");
		return ptr;
	}

}


