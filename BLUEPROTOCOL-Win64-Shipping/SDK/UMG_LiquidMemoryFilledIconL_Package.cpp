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
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PlayDrinkingAnimation
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryFilledIconL_C::PlayDrinkingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PlayDrinkingAnimation");
		
		UUMG_LiquidMemoryFilledIconL_C_PlayDrinkingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetFilledLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFilledLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryFilledIconL_C::SetFilledLevel(int32_t InFilledLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetFilledLevel");
		
		UUMG_LiquidMemoryFilledIconL_C_SetFilledLevel_Params params {};
		params.InFilledLevel = InFilledLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InFilledLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryFilledIconL_C::SetLiquidMemory(int32_t InLiquidMemoryId, int32_t InFilledLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetLiquidMemory");
		
		UUMG_LiquidMemoryFilledIconL_C_SetLiquidMemory_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		params.InFilledLevel = InFilledLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryFilledIconL_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PreConstruct");
		
		UUMG_LiquidMemoryFilledIconL_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryFilledIconL_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnAnimationFinished");
		
		UUMG_LiquidMemoryFilledIconL_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.ExecuteUbergraph_UMG_LiquidMemoryFilledIconL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryFilledIconL_C::ExecuteUbergraph_UMG_LiquidMemoryFilledIconL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.ExecuteUbergraph_UMG_LiquidMemoryFilledIconL");
		
		UUMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnDrinkingAnimationFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryFilledIconL_C::OnDrinkingAnimationFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnDrinkingAnimationFinished__DelegateSignature");
		
		UUMG_LiquidMemoryFilledIconL_C_OnDrinkingAnimationFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryFilledIconL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryFilledIconL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C");
		return ptr;
	}

}


