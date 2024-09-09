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
	 * 		Name   -> Function P021HUD.P021HUD_C.Set P021Counter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UP021Counter_C*                              SetP021Counter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::SetP021Counter(class UP021Counter_C* SetP021Counter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.Set P021Counter");
		
		UP021HUD_C_SetP021Counter_Params params {};
		params.SetP021Counter = SetP021Counter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimReverseNoise
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimReverseNoise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimReverseNoise");
		
		UP021HUD_C_PlayAnimReverseNoise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimForwardNoise
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimForwardNoise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimForwardNoise");
		
		UP021HUD_C_PlayAnimForwardNoise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.StopAnimGainLineEffect
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::StopAnimGainLineEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.StopAnimGainLineEffect");
		
		UP021HUD_C_StopAnimGainLineEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimGainLineEffect
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimGainLineEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimGainLineEffect");
		
		UP021HUD_C_PlayAnimGainLineEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.StopAnimGainMax
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::StopAnimGainMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.StopAnimGainMax");
		
		UP021HUD_C_StopAnimGainMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimGainMax
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimGainMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimGainMax");
		
		UP021HUD_C_PlayAnimGainMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.StopAnimEffectFever2
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::StopAnimEffectFever2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.StopAnimEffectFever2");
		
		UP021HUD_C_StopAnimEffectFever2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimEffectFever2
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimEffectFever2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimEffectFever2");
		
		UP021HUD_C_PlayAnimEffectFever2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.StopAnimEffectFever1
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::StopAnimEffectFever1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.StopAnimEffectFever1");
		
		UP021HUD_C_StopAnimEffectFever1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimEffectFever1
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimEffectFever1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimEffectFever1");
		
		UP021HUD_C_PlayAnimEffectFever1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBGIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::PlayAnimBG(int32_t InBGIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimBG");
		
		UP021HUD_C_PlayAnimBG_Params params {};
		params.InBGIndex = InBGIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.StopAnimEffectMax
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::StopAnimEffectMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.StopAnimEffectMax");
		
		UP021HUD_C_StopAnimEffectMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimEffectMax
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimEffectMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimEffectMax");
		
		UP021HUD_C_PlayAnimEffectMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.OnTerminate");
		
		UP021HUD_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.OnInitialize");
		
		UP021HUD_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.OnUnbind");
		
		UP021HUD_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.OnBind
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.OnBind");
		
		UP021HUD_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimReverseInOut
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimReverseInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimReverseInOut");
		
		UP021HUD_C_PlayAnimReverseInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnimForwardInOut
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::PlayAnimForwardInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnimForwardInOut");
		
		UP021HUD_C_PlayAnimForwardInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.StopAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::StopAnim(class UWidgetAnimation* InAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.StopAnim");
		
		UP021HUD_C_StopAnim_Params params {};
		params.InAnimation = InAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumLoopsToPlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::PlayAnim(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.PlayAnim");
		
		UP021HUD_C_PlayAnim_Params params {};
		params.InAnimation = InAnimation;
		params.NumLoopsToPlay = NumLoopsToPlay;
		params.PlayMode = PlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.BindChangeVoltageRate
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::BindChangeVoltageRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.BindChangeVoltageRate");
		
		UP021HUD_C_BindChangeVoltageRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.UnbindChangeVoltageRate
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::UnbindChangeVoltageRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.UnbindChangeVoltageRate");
		
		UP021HUD_C_UnbindChangeVoltageRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.CustomEvent_1");
		
		UP021HUD_C_CustomEvent_1_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.BindFeverEnd
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::BindFeverEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.BindFeverEnd");
		
		UP021HUD_C_BindFeverEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.UnbindFeverEnd
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::UnbindFeverEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.UnbindFeverEnd");
		
		UP021HUD_C_UnbindFeverEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.BindFeverStart
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::BindFeverStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.BindFeverStart");
		
		UP021HUD_C_BindFeverStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.UnbindFeverStart
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::UnbindFeverStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.UnbindFeverStart");
		
		UP021HUD_C_UnbindFeverStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::CustomEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.CustomEvent");
		
		UP021HUD_C_CustomEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.CustomEvent_2");
		
		UP021HUD_C_CustomEvent_2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.OnChangeUIVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP021HUD_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.OnChangeUIVisibleSetting");
		
		UP021HUD_C_OnChangeUIVisibleSetting_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.BindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::BindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.BindVisibleSetting");
		
		UP021HUD_C_BindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.UnbindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::UnbindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.UnbindVisibleSetting");
		
		UP021HUD_C_UnbindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2");
		
		UP021HUD_C_WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UP021HUD_C::WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1");
		
		UP021HUD_C_WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021HUD.P021HUD_C.ExecuteUbergraph_P021HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021HUD_C::ExecuteUbergraph_P021HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021HUD.P021HUD_C.ExecuteUbergraph_P021HUD");
		
		UP021HUD_C_ExecuteUbergraph_P021HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP021HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP021HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P021HUD.P021HUD_C");
		return ptr;
	}

}


