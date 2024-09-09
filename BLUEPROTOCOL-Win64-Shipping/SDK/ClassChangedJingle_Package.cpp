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
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.Construct
	 * 		Flags  -> ()
	 */
	void UClassChangedJingle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.Construct");
		
		UClassChangedJingle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.SetBeforeClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassChangedJingle_C::SetBeforeClass(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.SetBeforeClass");
		
		UClassChangedJingle_C_SetBeforeClass_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UClassChangedJingle_C::WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_1");
		
		UClassChangedJingle_C_WidgetAnimationEvt_Changed_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassChangedJingle_C::PlayAnim(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.PlayAnim");
		
		UClassChangedJingle_C_PlayAnim_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.ForceStopAnim
	 * 		Flags  -> ()
	 */
	void UClassChangedJingle_C::ForceStopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.ForceStopAnim");
		
		UClassChangedJingle_C_ForceStopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.ExecuteUbergraph_ClassChangedJingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassChangedJingle_C::ExecuteUbergraph_ClassChangedJingle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.ExecuteUbergraph_ClassChangedJingle");
		
		UClassChangedJingle_C_ExecuteUbergraph_ClassChangedJingle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClassChangedJingle.ClassChangedJingle_C.OnPlayedAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClassChangedJingle_C::OnPlayedAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassChangedJingle.ClassChangedJingle_C.OnPlayedAnim__DelegateSignature");
		
		UClassChangedJingle_C_OnPlayedAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClassChangedJingle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassChangedJingle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassChangedJingle.ClassChangedJingle_C");
		return ptr;
	}

}


