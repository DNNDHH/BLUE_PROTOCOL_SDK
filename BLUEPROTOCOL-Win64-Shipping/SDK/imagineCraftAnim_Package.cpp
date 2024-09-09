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
	 * 		Name   -> Function imagineCraftAnim.imagineCraftAnim_C.Construct
	 * 		Flags  -> ()
	 */
	void UimagineCraftAnim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function imagineCraftAnim.imagineCraftAnim_C.Construct");
		
		UimagineCraftAnim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function imagineCraftAnim.imagineCraftAnim_C.Play
	 * 		Flags  -> ()
	 */
	void UimagineCraftAnim_C::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function imagineCraftAnim.imagineCraftAnim_C.Play");
		
		UimagineCraftAnim_C_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function imagineCraftAnim.imagineCraftAnim_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UimagineCraftAnim_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function imagineCraftAnim.imagineCraftAnim_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UimagineCraftAnim_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function imagineCraftAnim.imagineCraftAnim_C.ExecuteUbergraph_imagineCraftAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UimagineCraftAnim_C::ExecuteUbergraph_imagineCraftAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function imagineCraftAnim.imagineCraftAnim_C.ExecuteUbergraph_imagineCraftAnim");
		
		UimagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function imagineCraftAnim.imagineCraftAnim_C.OnAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UimagineCraftAnim_C::OnAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function imagineCraftAnim.imagineCraftAnim_C.OnAnimFinished__DelegateSignature");
		
		UimagineCraftAnim_C_OnAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UimagineCraftAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UimagineCraftAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass imagineCraftAnim.imagineCraftAnim_C");
		return ptr;
	}

}


