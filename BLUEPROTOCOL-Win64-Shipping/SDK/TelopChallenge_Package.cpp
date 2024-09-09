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
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.SetBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopChallenge_C::SetBG(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.SetBG");
		
		UTelopChallenge_C_SetBG_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.GetSubText
	 * 		Flags  -> ()
	 */
	class UTextBlock* UTelopChallenge_C::GetSubText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.GetSubText");
		
		UTelopChallenge_C_GetSubText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.GetText
	 * 		Flags  -> ()
	 */
	class USBRuntimeTextBlock* UTelopChallenge_C::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.GetText");
		
		UTelopChallenge_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.OnTimerEvent
	 * 		Flags  -> ()
	 */
	void UTelopChallenge_C::OnTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.OnTimerEvent");
		
		UTelopChallenge_C_OnTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.PlaySE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               SE                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopChallenge_C::PlaySE(class UAkAudioEvent* SE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.PlaySE");
		
		UTelopChallenge_C_PlaySE_Params params {};
		params.SE = SE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.IsPlayAnim
	 * 		Flags  -> ()
	 */
	bool UTelopChallenge_C::IsPlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.IsPlayAnim");
		
		UTelopChallenge_C_IsPlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UTelopChallenge_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.StopAnim");
		
		UTelopChallenge_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UTelopChallenge_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.PlayAnim");
		
		UTelopChallenge_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopChallenge_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.OnAnimationFinished");
		
		UTelopChallenge_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopChallenge.TelopChallenge_C.ExecuteUbergraph_TelopChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopChallenge_C::ExecuteUbergraph_TelopChallenge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopChallenge.TelopChallenge_C.ExecuteUbergraph_TelopChallenge");
		
		UTelopChallenge_C_ExecuteUbergraph_TelopChallenge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelopChallenge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelopChallenge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TelopChallenge.TelopChallenge_C");
		return ptr;
	}

}


