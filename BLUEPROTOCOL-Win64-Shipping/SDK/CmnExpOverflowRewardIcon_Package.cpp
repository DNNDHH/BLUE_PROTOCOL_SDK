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
	 * 		Name   -> Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInUpdateTooltip                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNoTooltip                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnExpOverflowRewardIcon_C::CreateTooltip(bool bInUpdateTooltip, bool bInIsNoTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.CreateTooltip");
		
		UCmnExpOverflowRewardIcon_C_CreateTooltip_Params params {};
		params.bInUpdateTooltip = bInUpdateTooltip;
		params.bInIsNoTooltip = bInIsNoTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.SetIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsClassLevelCounterStop                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsClassLevelLimit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsClassLevelLimitSmallerThanCounterStop                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsNoTooltip                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnExpOverflowRewardIcon_C::SetIconType(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop, bool bInIsNoTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.SetIconType");
		
		UCmnExpOverflowRewardIcon_C_SetIconType_Params params {};
		params.bInIsClassLevelCounterStop = bInIsClassLevelCounterStop;
		params.bInIsClassLevelLimit = bInIsClassLevelLimit;
		params.bInIsClassLevelLimitSmallerThanCounterStop = bInIsClassLevelLimitSmallerThanCounterStop;
		params.bInIsNoTooltip = bInIsNoTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnExpOverflowRewardIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.Construct");
		
		UCmnExpOverflowRewardIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.ExecuteUbergraph_CmnExpOverflowRewardIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnExpOverflowRewardIcon_C::ExecuteUbergraph_CmnExpOverflowRewardIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.ExecuteUbergraph_CmnExpOverflowRewardIcon");
		
		UCmnExpOverflowRewardIcon_C_ExecuteUbergraph_CmnExpOverflowRewardIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnExpOverflowRewardIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnExpOverflowRewardIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C");
		return ptr;
	}

}


