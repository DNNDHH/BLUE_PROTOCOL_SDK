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
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHPWithoutResurrectionAdjust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxHPWithoutResurrectionAdjust                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::GetMaxHPWithoutResurrectionAdjust(float* MaxHPWithoutResurrectionAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHPWithoutResurrectionAdjust");
		
		UPartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxHPWithoutResurrectionAdjust != nullptr)
			*MaxHPWithoutResurrectionAdjust = params.MaxHPWithoutResurrectionAdjust;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutMaxHP                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::GetMaxHP(float* OutMaxHP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHP");
		
		UPartyMemberInfo_HPGauge_C_GetMaxHP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMaxHP != nullptr)
			*OutMaxHP = params.OutMaxHP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetCurrHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutCurrHP                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::GetCurrHP(float* OutCurrHP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetCurrHP");
		
		UPartyMemberInfo_HPGauge_C_GetCurrHP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCurrHP != nullptr)
			*OutCurrHP = params.OutCurrHP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.IsVIsibleIcon
	 * 		Flags  -> ()
	 */
	bool UPartyMemberInfo_HPGauge_C::IsVIsibleIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.IsVIsibleIcon");
		
		UPartyMemberInfo_HPGauge_C_IsVIsibleIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetAnimSpeedBlinkFast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::SetAnimSpeedBlinkFast(float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetAnimSpeedBlinkFast");
		
		UPartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast_Params params {};
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlinkFast
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_HPGauge_C::StopAnimBlinkFast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlinkFast");
		
		UPartyMemberInfo_HPGauge_C_StopAnimBlinkFast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlinkFast
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_HPGauge_C::PlayAnimBlinkFast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlinkFast");
		
		UPartyMemberInfo_HPGauge_C_PlayAnimBlinkFast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlink
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_HPGauge_C::StopAnimBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlink");
		
		UPartyMemberInfo_HPGauge_C_StopAnimBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlink
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_HPGauge_C::PlayAnimBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlink");
		
		UPartyMemberInfo_HPGauge_C_PlayAnimBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetVisibleBlinkFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_HPGauge_C::SetVisibleBlinkFrame(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetVisibleBlinkFrame");
		
		UPartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Get Enable Blink Anim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableBlinkAnim                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_HPGauge_C::GetEnableBlinkAnim(bool* EnableBlinkAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Get Enable Blink Anim");
		
		UPartyMemberInfo_HPGauge_C_GetEnableBlinkAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnableBlinkAnim != nullptr)
			*EnableBlinkAnim = params.EnableBlinkAnim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHpGaugeWidthRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidthRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::SetHpGaugeWidthRate(float InWidthRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHpGaugeWidthRate");
		
		UPartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate_Params params {};
		params.InWidthRate = InWidthRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHPGaugeSize
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_HPGauge_C::SetHPGaugeSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHPGaugeSize");
		
		UPartyMemberInfo_HPGauge_C_SetHPGaugeSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InCurrHp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMaxHp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMaxHPWoAdjust                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::SetHP(float InCurrHp, float InMaxHp, float InMaxHPWoAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHP");
		
		UPartyMemberInfo_HPGauge_C_SetHP_Params params {};
		params.InCurrHp = InCurrHp;
		params.InMaxHp = InMaxHp;
		params.InMaxHPWoAdjust = InMaxHPWoAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCharacterParameterComponent*        CharaParamComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::UpdateAnim(class USBPlayerCharacterParameterComponent* CharaParamComp, int32_t TeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateAnim");
		
		UPartyMemberInfo_HPGauge_C_UpdateAnim_Params params {};
		params.CharaParamComp = CharaParamComp;
		params.TeamNumber = TeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCharacterParameterComponent*        CharaParamComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::UpdateIcon(class USBPlayerCharacterParameterComponent* CharaParamComp, int32_t TeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateIcon");
		
		UPartyMemberInfo_HPGauge_C_UpdateIcon_Params params {};
		params.CharaParamComp = CharaParamComp;
		params.TeamNumber = TeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateHP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCharacterParameterComponent*        CharaParamComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::UpdateHP(class USBPlayerCharacterParameterComponent* CharaParamComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateHP");
		
		UPartyMemberInfo_HPGauge_C_UpdateHP_Params params {};
		params.CharaParamComp = CharaParamComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCharacterParameterComponent*        CharaParamComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::Update(class USBPlayerCharacterParameterComponent* CharaParamComp, int32_t TeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Update");
		
		UPartyMemberInfo_HPGauge_C_Update_Params params {};
		params.CharaParamComp = CharaParamComp;
		params.TeamNumber = TeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Construct
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_HPGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Construct");
		
		UPartyMemberInfo_HPGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPartyMemberInfo_HPGauge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PreConstruct");
		
		UPartyMemberInfo_HPGauge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdateAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCharacterParameterComponent*        ParameterComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTeamId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::OnUpdateAnim(class USBPlayerCharacterParameterComponent* ParameterComponent, int32_t InTeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdateAnim");
		
		UPartyMemberInfo_HPGauge_C_OnUpdateAnim_Params params {};
		params.ParameterComponent = ParameterComponent;
		params.InTeamId = InTeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCharacterParameterComponent*        ParameterComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTeamId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::OnUpdate(class USBPlayerCharacterParameterComponent* ParameterComponent, int32_t InTeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdate");
		
		UPartyMemberInfo_HPGauge_C_OnUpdate_Params params {};
		params.ParameterComponent = ParameterComponent;
		params.InTeamId = InTeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.ExecuteUbergraph_PartyMemberInfo_HPGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_HPGauge_C::ExecuteUbergraph_PartyMemberInfo_HPGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.ExecuteUbergraph_PartyMemberInfo_HPGauge");
		
		UPartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberInfo_HPGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberInfo_HPGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C");
		return ptr;
	}

}


