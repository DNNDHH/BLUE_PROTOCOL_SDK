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
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.PlaySTGaugeRecoverAnim
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::PlaySTGaugeRecoverAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.PlaySTGaugeRecoverAnim");
		
		UPlayerSTGauge_C_PlaySTGaugeRecoverAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.SetBgVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerSTGauge_C::SetBgVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.SetBgVisibility");
		
		UPlayerSTGauge_C_SetBgVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.Construct");
		
		UPlayerSTGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerSTGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.Tick");
		
		UPlayerSTGauge_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.OnStaminaRecovery
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::OnStaminaRecovery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.OnStaminaRecovery");
		
		UPlayerSTGauge_C_OnStaminaRecovery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEdit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerSTGauge_C::SetEditMode(bool bIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.SetEditMode");
		
		UPlayerSTGauge_C_SetEditMode_Params params {};
		params.bIsEdit = bIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.UnbindStaminaRecoveredDelegate
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::UnbindStaminaRecoveredDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.UnbindStaminaRecoveredDelegate");
		
		UPlayerSTGauge_C_UnbindStaminaRecoveredDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.Destruct");
		
		UPlayerSTGauge_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.UnbindShowAlwaysHUDDelegate
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::UnbindShowAlwaysHUDDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.UnbindShowAlwaysHUDDelegate");
		
		UPlayerSTGauge_C_UnbindShowAlwaysHUDDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.OnChangeShowAlwaysHUD_event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerSTGauge_C::OnChangeShowAlwaysHUD_event(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.OnChangeShowAlwaysHUD_event");
		
		UPlayerSTGauge_C_OnChangeShowAlwaysHUD_event_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.PlayerBind
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::PlayerBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.PlayerBind");
		
		UPlayerSTGauge_C_PlayerBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerSTGauge_C::CustomEvent_2(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.CustomEvent_2");
		
		UPlayerSTGauge_C_CustomEvent_2_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.OnAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerSTGauge_C::OnAnimation(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.OnAnimation");
		
		UPlayerSTGauge_C_OnAnimation_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPlayerSTGauge_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1");
		
		UPlayerSTGauge_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.OnInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerSTGauge_C::OnInAnimation(bool bForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.OnInAnimation");
		
		UPlayerSTGauge_C_OnInAnimation_Params params {};
		params.bForward = bForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerSTGauge.PlayerSTGauge_C.ExecuteUbergraph_PlayerSTGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerSTGauge_C::ExecuteUbergraph_PlayerSTGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerSTGauge.PlayerSTGauge_C.ExecuteUbergraph_PlayerSTGauge");
		
		UPlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerSTGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerSTGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSTGauge.PlayerSTGauge_C");
		return ptr;
	}

}


