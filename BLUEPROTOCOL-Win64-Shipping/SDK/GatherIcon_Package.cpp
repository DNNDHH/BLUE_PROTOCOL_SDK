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
	 * 		Name   -> Function GatherIcon.GatherIcon_C.LiquidMemoryIconCheck
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::LiquidMemoryIconCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.LiquidMemoryIconCheck");
		
		UGatherIcon_C_LiquidMemoryIconCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.DebugFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewParam1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatherIcon_C::DebugFunc(float NewParam, float NewParam1, float NewParam2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.DebugFunc");
		
		UGatherIcon_C_DebugFunc_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		params.NewParam2 = NewParam2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.Change Size
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CharaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReachDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatherIcon_C::ChangeSize(float CharaDistance, float ReachDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.Change Size");
		
		UGatherIcon_C_ChangeSize_Params params {};
		params.CharaDistance = CharaDistance;
		params.ReachDistance = ReachDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.Update Gather Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGaugeFadeIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMotionCanceled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGatherIcon_C::UpdateGatherIcon(bool IsGaugeFadeIn, bool IsMotionCanceled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.Update Gather Icon");
		
		UGatherIcon_C_UpdateGatherIcon_Params params {};
		params.IsGaugeFadeIn = IsGaugeFadeIn;
		params.IsMotionCanceled = IsMotionCanceled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.SetGatherImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTreasureBoxRarity                               TargetComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatherIcon_C::SetGatherImage(ESBTreasureBoxRarity TargetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.SetGatherImage");
		
		UGatherIcon_C_SetGatherImage_Params params {};
		params.TargetComponent = TargetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.ChargeUp
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::ChargeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.ChargeUp");
		
		UGatherIcon_C_ChargeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.Fade In
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.Fade In");
		
		UGatherIcon_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.Fade Out
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.Fade Out");
		
		UGatherIcon_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatherIcon_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.OnAnimationFinished");
		
		UGatherIcon_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.Construct");
		
		UGatherIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.AutoChangeInvisible
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::AutoChangeInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.AutoChangeInvisible");
		
		UGatherIcon_C_AutoChangeInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.AutoChangeVisible
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::AutoChangeVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.AutoChangeVisible");
		
		UGatherIcon_C_AutoChangeVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.SEreset
	 * 		Flags  -> ()
	 */
	void UGatherIcon_C::SEreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.SEreset");
		
		UGatherIcon_C_SEreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.ExecuteUbergraph_GatherIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGatherIcon_C::ExecuteUbergraph_GatherIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.ExecuteUbergraph_GatherIcon");
		
		UGatherIcon_C_ExecuteUbergraph_GatherIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GatherIcon.GatherIcon_C.FinishedFade__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFadeIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGatherIcon_C::FinishedFade__DelegateSignature(bool IsFadeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GatherIcon.GatherIcon_C.FinishedFade__DelegateSignature");
		
		UGatherIcon_C_FinishedFade__DelegateSignature_Params params {};
		params.IsFadeIn = IsFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGatherIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGatherIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GatherIcon.GatherIcon_C");
		return ptr;
	}

}


