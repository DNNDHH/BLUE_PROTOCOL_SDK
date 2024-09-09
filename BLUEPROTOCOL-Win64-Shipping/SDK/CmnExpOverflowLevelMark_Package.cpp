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
	 * 		Name   -> Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SwitchImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InActiveIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnExpOverflowLevelMark_C::SwitchImage(int32_t InActiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SwitchImage");
		
		UCmnExpOverflowLevelMark_C_SwitchImage_Params params {};
		params.InActiveIndex = InActiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SetAsLevelLimit
	 * 		Flags  -> ()
	 */
	void UCmnExpOverflowLevelMark_C::SetAsLevelLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SetAsLevelLimit");
		
		UCmnExpOverflowLevelMark_C_SetAsLevelLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SetAsLevelCounterStop
	 * 		Flags  -> ()
	 */
	void UCmnExpOverflowLevelMark_C::SetAsLevelCounterStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SetAsLevelCounterStop");
		
		UCmnExpOverflowLevelMark_C_SetAsLevelCounterStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnExpOverflowLevelMark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnExpOverflowLevelMark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C");
		return ptr;
	}

}


