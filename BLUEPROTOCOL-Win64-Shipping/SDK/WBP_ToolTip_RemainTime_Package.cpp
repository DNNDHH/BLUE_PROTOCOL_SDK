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
	 * 		Name   -> Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FDateTime                                   DateTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_RemainTime_C::SetText(const class FText& InText, const struct FDateTime& DateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.SetText");
		
		UWBP_ToolTip_RemainTime_C_SetText_Params params {};
		params.InText = InText;
		params.DateTime = DateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ChangeRecepiTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_RemainTime_C::ChangeRecepiTooltip(const class FText& InText, const class FString& EventTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ChangeRecepiTooltip");
		
		UWBP_ToolTip_RemainTime_C_ChangeRecepiTooltip_Params params {};
		params.InText = InText;
		params.EventTermId = EventTermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ExecuteUbergraph_WBP_ToolTip_RemainTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_RemainTime_C::ExecuteUbergraph_WBP_ToolTip_RemainTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ExecuteUbergraph_WBP_ToolTip_RemainTime");
		
		UWBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ToolTip_RemainTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ToolTip_RemainTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C");
		return ptr;
	}

}


