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
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckIconActive
	 * 		Flags  -> ()
	 */
	void UWBP_ContentAction_Break_C::CheckIconActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckIconActive");
		
		UWBP_ContentAction_Break_C_CheckIconActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckVisibleChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::CheckVisibleChange(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckVisibleChange");
		
		UWBP_ContentAction_Break_C_CheckVisibleChange_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetRecastVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::SetRecastVisible(bool ToVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetRecastVisible");
		
		UWBP_ContentAction_Break_C_SetRecastVisible_Params params {};
		params.ToVisible = ToVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetKeyVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::SetKeyVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetKeyVisible");
		
		UWBP_ContentAction_Break_C_SetKeyVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::SetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetKeyGuideVisible");
		
		UWBP_ContentAction_Break_C_SetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetGaugeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InBaseValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRecastTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ContentAction_Break_C::SetGaugeValue(float InBaseValue, float InRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetGaugeValue");
		
		UWBP_ContentAction_Break_C_SetGaugeValue_Params params {};
		params.InBaseValue = InBaseValue;
		params.InRecastTime = InRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimChargStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::PlayAnimChargStart(bool Init)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimChargStart");
		
		UWBP_ContentAction_Break_C_PlayAnimChargStart_Params params {};
		params.Init = Init;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimChargeEnd
	 * 		Flags  -> ()
	 */
	void UWBP_ContentAction_Break_C::PlayAnimChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimChargeEnd");
		
		UWBP_ContentAction_Break_C_PlayAnimChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::PlayAnimUse(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimUse");
		
		UWBP_ContentAction_Break_C_PlayAnimUse_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnStopActiveAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_ContentAction_Break_C::OnStopActiveAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnStopActiveAnimation");
		
		UWBP_ContentAction_Break_C_OnStopActiveAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnIconDisableChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::OnIconDisableChange(bool IsDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnIconDisableChange");
		
		UWBP_ContentAction_Break_C_OnIconDisableChange_Params params {};
		params.IsDisable = IsDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnUpdateRecastGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutMaxRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutRecastTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ContentAction_Break_C::OnUpdateRecastGauge(float OutMaxRecastTime, float OutRecastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnUpdateRecastGauge");
		
		UWBP_ContentAction_Break_C_OnUpdateRecastGauge_Params params {};
		params.OutMaxRecastTime = OutMaxRecastTime;
		params.OutRecastTime = OutRecastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSetKeyGuideVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::OnSetKeyGuideVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSetKeyGuideVisible");
		
		UWBP_ContentAction_Break_C_OnSetKeyGuideVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnInitWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::OnInitWidget(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnInitWidget");
		
		UWBP_ContentAction_Break_C_OnInitWidget_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSkillUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               SkillPosition                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ContentAction_Break_C::OnSkillUse(ESkillActionPosition SkillPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSkillUse");
		
		UWBP_ContentAction_Break_C_OnSkillUse_Params params {};
		params.SkillPosition = SkillPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_ContentAction_Break_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.Destruct");
		
		UWBP_ContentAction_Break_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSetVisibleWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ContentAction_Break_C::OnSetVisibleWidget(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSetVisibleWidget");
		
		UWBP_ContentAction_Break_C_OnSetVisibleWidget_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckActiveAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_ContentAction_Break_C::CheckActiveAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckActiveAnimation");
		
		UWBP_ContentAction_Break_C_CheckActiveAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnStartExecuteAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_ContentAction_Break_C::OnStartExecuteAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnStartExecuteAnimation");
		
		UWBP_ContentAction_Break_C_OnStartExecuteAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.ExecuteUbergraph_WBP_ContentAction_Break
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ContentAction_Break_C::ExecuteUbergraph_WBP_ContentAction_Break(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.ExecuteUbergraph_WBP_ContentAction_Break");
		
		UWBP_ContentAction_Break_C_ExecuteUbergraph_WBP_ContentAction_Break_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ContentAction_Break_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ContentAction_Break_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ContentAction_Break.WBP_ContentAction_Break_C");
		return ptr;
	}

}


