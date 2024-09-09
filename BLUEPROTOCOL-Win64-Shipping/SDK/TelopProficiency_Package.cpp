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
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.PlayAnimGlow
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::PlayAnimGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.PlayAnimGlow");
		
		UTelopProficiency_C_PlayAnimGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.GetText
	 * 		Flags  -> ()
	 */
	class USBRuntimeTextBlock* UTelopProficiency_C::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.GetText");
		
		UTelopProficiency_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.PlaySE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               SE                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopProficiency_C::PlaySE(class UAkAudioEvent* SE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.PlaySE");
		
		UTelopProficiency_C_PlaySE_Params params {};
		params.SE = SE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.PlayAnimOut");
		
		UTelopProficiency_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.SetupStar
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::SetupStar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.SetupStar");
		
		UTelopProficiency_C_SetupStar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.OnPlay
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::OnPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.OnPlay");
		
		UTelopProficiency_C_OnPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.IsPlayAnim
	 * 		Flags  -> ()
	 */
	bool UTelopProficiency_C::IsPlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.IsPlayAnim");
		
		UTelopProficiency_C_IsPlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.StopAnim");
		
		UTelopProficiency_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.PlayAnim");
		
		UTelopProficiency_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopProficiency_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.OnAnimationFinished");
		
		UTelopProficiency_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.EndAnimStarActive
	 * 		Flags  -> ()
	 */
	void UTelopProficiency_C::EndAnimStarActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.EndAnimStarActive");
		
		UTelopProficiency_C_EndAnimStarActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TelopProficiency.TelopProficiency_C.ExecuteUbergraph_TelopProficiency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTelopProficiency_C::ExecuteUbergraph_TelopProficiency(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TelopProficiency.TelopProficiency_C.ExecuteUbergraph_TelopProficiency");
		
		UTelopProficiency_C_ExecuteUbergraph_TelopProficiency_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelopProficiency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelopProficiency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TelopProficiency.TelopProficiency_C");
		return ptr;
	}

}


