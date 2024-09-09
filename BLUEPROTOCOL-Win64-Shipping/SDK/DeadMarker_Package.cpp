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
	 * 		Name   -> Function DeadMarker.DeadMarker_C.Dead Marker Visibility Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeadMarker_C::DeadMarkerVisibilityInternal(bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadMarker.DeadMarker_C.Dead Marker Visibility Internal");
		
		UDeadMarker_C_DeadMarkerVisibilityInternal_Params params {};
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadMarker.DeadMarker_C.Set Auto Respawn Remain Time Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RemainTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeadMarker_C::SetAutoRespawnRemainTimeInternal(float RemainTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadMarker.DeadMarker_C.Set Auto Respawn Remain Time Internal");
		
		UDeadMarker_C_SetAutoRespawnRemainTimeInternal_Params params {};
		params.RemainTime = RemainTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadMarker.DeadMarker_C.Construct
	 * 		Flags  -> ()
	 */
	void UDeadMarker_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadMarker.DeadMarker_C.Construct");
		
		UDeadMarker_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadMarker.DeadMarker_C.DeadMarkerVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeadMarker_C::DeadMarkerVisibility(bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadMarker.DeadMarker_C.DeadMarkerVisibility");
		
		UDeadMarker_C_DeadMarkerVisibility_Params params {};
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadMarker.DeadMarker_C.SetAutoRespawnRemainTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RemainTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeadMarker_C::SetAutoRespawnRemainTime(float RemainTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadMarker.DeadMarker_C.SetAutoRespawnRemainTime");
		
		UDeadMarker_C_SetAutoRespawnRemainTime_Params params {};
		params.RemainTime = RemainTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DeadMarker.DeadMarker_C.ExecuteUbergraph_DeadMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeadMarker_C::ExecuteUbergraph_DeadMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeadMarker.DeadMarker_C.ExecuteUbergraph_DeadMarker");
		
		UDeadMarker_C_ExecuteUbergraph_DeadMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeadMarker.DeadMarker_C");
		return ptr;
	}

}


