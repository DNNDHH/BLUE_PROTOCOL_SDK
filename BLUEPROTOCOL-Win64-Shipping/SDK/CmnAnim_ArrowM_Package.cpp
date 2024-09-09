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
	 * 		Name   -> Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowM_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.StopAnim");
		
		UCmnAnim_ArrowM_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.StopArrowAnim
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowM_C::StopArrowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.StopArrowAnim");
		
		UCmnAnim_ArrowM_C_StopArrowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.PlayArrowAnim
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowM_C::PlayArrowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.PlayArrowAnim");
		
		UCmnAnim_ArrowM_C_PlayArrowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowM_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.Construct");
		
		UCmnAnim_ArrowM_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.ExecuteUbergraph_CmnAnim_ArrowM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnAnim_ArrowM_C::ExecuteUbergraph_CmnAnim_ArrowM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowM.CmnAnim_ArrowM_C.ExecuteUbergraph_CmnAnim_ArrowM");
		
		UCmnAnim_ArrowM_C_ExecuteUbergraph_CmnAnim_ArrowM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnAnim_ArrowM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnAnim_ArrowM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnAnim_ArrowM.CmnAnim_ArrowM_C");
		return ptr;
	}

}


