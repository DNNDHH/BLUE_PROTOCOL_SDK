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
	 * 		Name   -> Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.StopArrowAnim
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowS_C::StopArrowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.StopArrowAnim");
		
		UCmnAnim_ArrowS_C_StopArrowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.PlayArrowAnim
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowS_C::PlayArrowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.PlayArrowAnim");
		
		UCmnAnim_ArrowS_C_PlayArrowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnAnim_ArrowS_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.Construct");
		
		UCmnAnim_ArrowS_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.ExecuteUbergraph_CmnAnim_ArrowS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnAnim_ArrowS_C::ExecuteUbergraph_CmnAnim_ArrowS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.ExecuteUbergraph_CmnAnim_ArrowS");
		
		UCmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnAnim_ArrowS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnAnim_ArrowS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnAnim_ArrowS.CmnAnim_ArrowS_C");
		return ptr;
	}

}


