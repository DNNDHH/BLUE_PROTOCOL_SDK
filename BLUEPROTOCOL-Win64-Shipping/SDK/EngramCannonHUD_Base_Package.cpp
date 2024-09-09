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
	 * 		Name   -> Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.Construct
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Base_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.Construct");
		
		UEngramCannonHUD_Base_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Base_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.Destruct");
		
		UEngramCannonHUD_Base_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.PlayNoiseAnime
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Base_C::PlayNoiseAnime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.PlayNoiseAnime");
		
		UEngramCannonHUD_Base_C_PlayNoiseAnime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Base_C::WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_1");
		
		UEngramCannonHUD_Base_C_WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.FinishedNoiseAnimation
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Base_C::FinishedNoiseAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.FinishedNoiseAnimation");
		
		UEngramCannonHUD_Base_C_FinishedNoiseAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.ExecuteUbergraph_EngramCannonHUD_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEngramCannonHUD_Base_C::ExecuteUbergraph_EngramCannonHUD_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.ExecuteUbergraph_EngramCannonHUD_Base");
		
		UEngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramCannonHUD_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramCannonHUD_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EngramCannonHUD_Base.EngramCannonHUD_Base_C");
		return ptr;
	}

}


