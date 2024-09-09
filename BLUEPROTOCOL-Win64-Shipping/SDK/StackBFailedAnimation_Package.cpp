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
	 * 		Name   -> Function StackBFailedAnimation.StackBFailedAnimation_C.AnimaterinComplete
	 * 		Flags  -> ()
	 */
	void UStackBFailedAnimation_C::AnimaterinComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBFailedAnimation.StackBFailedAnimation_C.AnimaterinComplete");
		
		UStackBFailedAnimation_C_AnimaterinComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBFailedAnimation_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimationFinished");
		
		UStackBFailedAnimation_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBFailedAnimation.StackBFailedAnimation_C.Play
	 * 		Flags  -> ()
	 */
	void UStackBFailedAnimation_C::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBFailedAnimation.StackBFailedAnimation_C.Play");
		
		UStackBFailedAnimation_C_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBFailedAnimation.StackBFailedAnimation_C.ExecuteUbergraph_StackBFailedAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBFailedAnimation_C::ExecuteUbergraph_StackBFailedAnimation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBFailedAnimation.StackBFailedAnimation_C.ExecuteUbergraph_StackBFailedAnimation");
		
		UStackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBFailedAnimation_C::OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimPlayed__DelegateSignature");
		
		UStackBFailedAnimation_C_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBFailedAnimation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBFailedAnimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBFailedAnimation.StackBFailedAnimation_C");
		return ptr;
	}

}


