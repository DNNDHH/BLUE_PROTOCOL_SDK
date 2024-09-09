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
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnStopAnimOut
	 * 		Flags  -> ()
	 */
	void UFocusTarget_C::OnStopAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnStopAnimOut");
		
		UFocusTarget_C_OnStopAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnPlayAnimOut
	 * 		Flags  -> ()
	 */
	void UFocusTarget_C::OnPlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnPlayAnimOut");
		
		UFocusTarget_C_OnPlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnStopAnimIn
	 * 		Flags  -> ()
	 */
	void UFocusTarget_C::OnStopAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnStopAnimIn");
		
		UFocusTarget_C_OnStopAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnPlayAnimIn
	 * 		Flags  -> ()
	 */
	void UFocusTarget_C::OnPlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnPlayAnimIn");
		
		UFocusTarget_C_OnPlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnFadeOutDeath
	 * 		Flags  -> ()
	 */
	void UFocusTarget_C::OnFadeOutDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnFadeOutDeath");
		
		UFocusTarget_C_OnFadeOutDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnBindFadeOutDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InEnemyCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFocusTarget_C::OnBindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnBindFadeOutDeath");
		
		UFocusTarget_C_OnBindFadeOutDeath_Params params {};
		params.InEnemyCharacter = InEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.OnUnbindFadeOutDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InEnemyCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFocusTarget_C::OnUnbindFadeOutDeath(class ASBEnemyCharacter* InEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.OnUnbindFadeOutDeath");
		
		UFocusTarget_C_OnUnbindFadeOutDeath_Params params {};
		params.InEnemyCharacter = InEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UFocusTarget_C::WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1");
		
		UFocusTarget_C_WidgetAnimationEvt_AnimHide_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FocusTarget.FocusTarget_C.ExecuteUbergraph_FocusTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFocusTarget_C::ExecuteUbergraph_FocusTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FocusTarget.FocusTarget_C.ExecuteUbergraph_FocusTarget");
		
		UFocusTarget_C_ExecuteUbergraph_FocusTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFocusTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFocusTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FocusTarget.FocusTarget_C");
		return ptr;
	}

}


