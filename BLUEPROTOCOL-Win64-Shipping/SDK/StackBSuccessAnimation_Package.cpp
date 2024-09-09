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
	 * 		Name   -> Function StackBSuccessAnimation.StackBSuccessAnimation_C.AnimaterinComplete
	 * 		Flags  -> ()
	 */
	void UStackBSuccessAnimation_C::AnimaterinComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBSuccessAnimation.StackBSuccessAnimation_C.AnimaterinComplete");
		
		UStackBSuccessAnimation_C_AnimaterinComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBSuccessAnimation_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimationFinished");
		
		UStackBSuccessAnimation_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBSuccessAnimation.StackBSuccessAnimation_C.Play
	 * 		Flags  -> ()
	 */
	void UStackBSuccessAnimation_C::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBSuccessAnimation.StackBSuccessAnimation_C.Play");
		
		UStackBSuccessAnimation_C_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBSuccessAnimation.StackBSuccessAnimation_C.ExecuteUbergraph_StackBSuccessAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBSuccessAnimation_C::ExecuteUbergraph_StackBSuccessAnimation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBSuccessAnimation.StackBSuccessAnimation_C.ExecuteUbergraph_StackBSuccessAnimation");
		
		UStackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBSuccessAnimation_C::OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimPlayed__DelegateSignature");
		
		UStackBSuccessAnimation_C_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBSuccessAnimation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBSuccessAnimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBSuccessAnimation.StackBSuccessAnimation_C");
		return ptr;
	}

}


