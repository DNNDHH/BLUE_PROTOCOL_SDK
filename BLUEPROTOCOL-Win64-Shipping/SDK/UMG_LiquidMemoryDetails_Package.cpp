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
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayAnimEffectOut
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryDetails_C::PlayAnimEffectOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayAnimEffectOut");
		
		UUMG_LiquidMemoryDetails_C_PlayAnimEffectOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayDrinkingAnimation
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryDetails_C::PlayDrinkingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayDrinkingAnimation");
		
		UUMG_LiquidMemoryDetails_C_PlayDrinkingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.SetFilledLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFilledLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryDetails_C::SetFilledLevel(int32_t InFilledLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.SetFilledLevel");
		
		UUMG_LiquidMemoryDetails_C_SetFilledLevel_Params params {};
		params.InFilledLevel = InFilledLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.HideDetails
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryDetails_C::HideDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.HideDetails");
		
		UUMG_LiquidMemoryDetails_C_HideDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryDetails_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnAnimationFinished");
		
		UUMG_LiquidMemoryDetails_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ShowDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InFilledLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryDetails_C::ShowDetails(int32_t InLiquidMemoryId, int32_t InFilledLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ShowDetails");
		
		UUMG_LiquidMemoryDetails_C_ShowDetails_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		params.InFilledLevel = InFilledLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryDetails_C::BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature");
		
		UUMG_LiquidMemoryDetails_C_BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.Construct");
		
		UUMG_LiquidMemoryDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ExecuteUbergraph_UMG_LiquidMemoryDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryDetails_C::ExecuteUbergraph_UMG_LiquidMemoryDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ExecuteUbergraph_UMG_LiquidMemoryDetails");
		
		UUMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnDrinkingAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryDetails_C::OnDrinkingAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnDrinkingAnimationFinished__DelegateSignature");
		
		UUMG_LiquidMemoryDetails_C_OnDrinkingAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnCloseAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryDetails_C::OnCloseAnimationFinished__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnCloseAnimationFinished__DelegateSignature");
		
		UUMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C");
		return ptr;
	}

}


