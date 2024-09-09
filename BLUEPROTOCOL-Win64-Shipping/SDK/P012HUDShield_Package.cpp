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
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.IsEquipDependent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsEquip                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP012HUDShield_C::IsEquipDependent(bool* TrueIsEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.IsEquipDependent");
		
		UP012HUDShield_C_IsEquipDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrueIsEquip != nullptr)
			*TrueIsEquip = params.TrueIsEquip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.SetGaugeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP012HUDShield_C::SetGaugeVisible(bool TrueIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.SetGaugeVisible");
		
		UP012HUDShield_C_SetGaugeVisible_Params params {};
		params.TrueIsVisible = TrueIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.SetCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP012HUDShield_C::SetCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.SetCount");
		
		UP012HUDShield_C_SetCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.SetCountVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NoHitSelforCollapse                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP012HUDShield_C::SetCountVisibility(bool NoHitSelforCollapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.SetCountVisibility");
		
		UP012HUDShield_C_SetCountVisibility_Params params {};
		params.NoHitSelforCollapse = NoHitSelforCollapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.UpdateDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::UpdateDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.UpdateDependent");
		
		UP012HUDShield_C_UpdateDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnSetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEdit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP012HUDShield_C::OnSetEditMode(bool InIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnSetEditMode");
		
		UP012HUDShield_C_OnSetEditMode_Params params {};
		params.InIsEdit = InIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnTick
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnTick");
		
		UP012HUDShield_C_OnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnTerminate");
		
		UP012HUDShield_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnInitialize");
		
		UP012HUDShield_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnUnbind");
		
		UP012HUDShield_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnBind
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnBind");
		
		UP012HUDShield_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.PlayAnimReverseInOut
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::PlayAnimReverseInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.PlayAnimReverseInOut");
		
		UP012HUDShield_C_PlayAnimReverseInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.PlayAnimForwardInOut
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::PlayAnimForwardInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.PlayAnimForwardInOut");
		
		UP012HUDShield_C_PlayAnimForwardInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.SetGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP012HUDShield_C::SetGauge(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.SetGauge");
		
		UP012HUDShield_C_SetGauge_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP012HUDShield_C::SetIcon(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.SetIcon");
		
		UP012HUDShield_C_SetIcon_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.SetFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBroken                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP012HUDShield_C::SetFrame(bool IsBroken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.SetFrame");
		
		UP012HUDShield_C_SetFrame_Params params {};
		params.IsBroken = IsBroken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.UpdateShieldDurability
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::UpdateShieldDurability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.UpdateShieldDurability");
		
		UP012HUDShield_C_UpdateShieldDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.UpdateShieldBreak
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::UpdateShieldBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.UpdateShieldBreak");
		
		UP012HUDShield_C_UpdateShieldBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.StopAnimBroken
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::StopAnimBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.StopAnimBroken");
		
		UP012HUDShield_C_StopAnimBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.PlayAnimBroken
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::PlayAnimBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.PlayAnimBroken");
		
		UP012HUDShield_C_PlayAnimBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.OnChangeUIVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP012HUDShield_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.OnChangeUIVisibleSetting");
		
		UP012HUDShield_C_OnChangeUIVisibleSetting_Params params {};
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
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.BindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::BindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.BindVisibleSetting");
		
		UP012HUDShield_C_BindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.UnbindVisibleSetting
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::UnbindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.UnbindVisibleSetting");
		
		UP012HUDShield_C_UnbindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.BindOnStartIntervalDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::BindOnStartIntervalDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.BindOnStartIntervalDependent");
		
		UP012HUDShield_C_BindOnStartIntervalDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.UnBindOnStartIntervalDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::UnBindOnStartIntervalDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.UnBindOnStartIntervalDependent");
		
		UP012HUDShield_C_UnBindOnStartIntervalDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.On_StartIntervalDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::On_StartIntervalDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.On_StartIntervalDependent");
		
		UP012HUDShield_C_On_StartIntervalDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.BindOnEndIntervalDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::BindOnEndIntervalDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.BindOnEndIntervalDependent");
		
		UP012HUDShield_C_BindOnEndIntervalDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.UnBindOnEndIntervalDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::UnBindOnEndIntervalDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.UnBindOnEndIntervalDependent");
		
		UP012HUDShield_C_UnBindOnEndIntervalDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.On_EndIntervalDependent
	 * 		Flags  -> ()
	 */
	void UP012HUDShield_C::On_EndIntervalDependent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.On_EndIntervalDependent");
		
		UP012HUDShield_C_On_EndIntervalDependent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP012HUDShield_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.Tick");
		
		UP012HUDShield_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P012HUDShield.P012HUDShield_C.ExecuteUbergraph_P012HUDShield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP012HUDShield_C::ExecuteUbergraph_P012HUDShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P012HUDShield.P012HUDShield_C.ExecuteUbergraph_P012HUDShield");
		
		UP012HUDShield_C_ExecuteUbergraph_P012HUDShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP012HUDShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP012HUDShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P012HUDShield.P012HUDShield_C");
		return ptr;
	}

}


