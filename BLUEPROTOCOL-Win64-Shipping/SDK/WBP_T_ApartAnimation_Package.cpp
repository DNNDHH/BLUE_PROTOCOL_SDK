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
	 * 		Name   -> Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.AnimaterinComplete
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartAnimation_C::AnimaterinComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.AnimaterinComplete");
		
		UWBP_T_ApartAnimation_C_AnimaterinComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartAnimation_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.OnAnimationFinished");
		
		UWBP_T_ApartAnimation_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.Play
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartAnimation_C::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.Play");
		
		UWBP_T_ApartAnimation_C_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.ExecuteUbergraph_WBP_T_ApartAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartAnimation_C::ExecuteUbergraph_WBP_T_ApartAnimation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.ExecuteUbergraph_WBP_T_ApartAnimation");
		
		UWBP_T_ApartAnimation_C_ExecuteUbergraph_WBP_T_ApartAnimation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.OnAnimPlayed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartAnimation_C::OnAnimPlayed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.OnAnimPlayed__DelegateSignature");
		
		UWBP_T_ApartAnimation_C_OnAnimPlayed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_T_ApartAnimation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_T_ApartAnimation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_T_ApartAnimation.WBP_T_ApartAnimation_C");
		return ptr;
	}

}


