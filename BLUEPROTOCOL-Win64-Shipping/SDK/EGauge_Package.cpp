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
	 * 		Name   -> Function EGauge.EGauge_C.SetDefaultGaugeSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InDefaultGaugeSize                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEGauge_C::SetDefaultGaugeSize(const struct FVector2D& InDefaultGaugeSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EGauge.EGauge_C.SetDefaultGaugeSize");
		
		UEGauge_C_SetDefaultGaugeSize_Params params {};
		params.InDefaultGaugeSize = InDefaultGaugeSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EGauge.EGauge_C.DebugPrintTime
	 * 		Flags  -> ()
	 */
	void UEGauge_C::DebugPrintTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EGauge.EGauge_C.DebugPrintTime");
		
		UEGauge_C_DebugPrintTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EGauge.EGauge_C.OnPlayAnimBlink
	 * 		Flags  -> ()
	 */
	void UEGauge_C::OnPlayAnimBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EGauge.EGauge_C.OnPlayAnimBlink");
		
		UEGauge_C_OnPlayAnimBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EGauge.EGauge_C.OnPlayAnimNormal
	 * 		Flags  -> ()
	 */
	void UEGauge_C::OnPlayAnimNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EGauge.EGauge_C.OnPlayAnimNormal");
		
		UEGauge_C_OnPlayAnimNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EGauge.EGauge_C");
		return ptr;
	}

}


