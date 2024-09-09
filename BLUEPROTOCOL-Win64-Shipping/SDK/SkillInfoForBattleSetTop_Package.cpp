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
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.GetScoreInfoSwitcher");
		
		USkillInfoForBattleSetTop_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillButtonEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSkillPaletteGrp2AtFront                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SetupTacticalSkillButtonEnable(bool bInIsSkillPaletteGrp2AtFront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillButtonEnable");
		
		USkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable_Params params {};
		params.bInIsSkillPaletteGrp2AtFront = bInIsSkillPaletteGrp2AtFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BindTacticalSkillIconEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInUnbindEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::BindTacticalSkillIconEvents(bool bInUnbindEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BindTacticalSkillIconEvents");
		
		USkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents_Params params {};
		params.bInUnbindEvent = bInUnbindEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSubSkillPalette                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIgnoreSwitchBtn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteType");
		
		USkillInfoForBattleSetTop_C_SetSkillPaletteType_Params params {};
		params.bInIsSubSkillPalette = bInIsSubSkillPalette;
		params.bInIgnoreSwitchBtn = bInIgnoreSwitchBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSkillPaletteGrp2AtFront                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SetupTacticalSkillPosition(bool isSkillPaletteGrp2AtFront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillPosition");
		
		USkillInfoForBattleSetTop_C_SetupTacticalSkillPosition_Params params {};
		params.isSkillPaletteGrp2AtFront = isSkillPaletteGrp2AtFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SwitchTacticalSkillBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSubSkillPaletteAtFront                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SwitchTacticalSkillBg(bool IsSubSkillPaletteAtFront, bool IsAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SwitchTacticalSkillBg");
		
		USkillInfoForBattleSetTop_C_SwitchTacticalSkillBg_Params params {};
		params.IsSubSkillPaletteAtFront = IsSubSkillPaletteAtFront;
		params.IsAnimation = IsAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.StartSkillPaletteGrpSwitchAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InSwitchToSubSkillPalette                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::StartSkillPaletteGrpSwitchAnimation(bool InSwitchToSubSkillPalette, bool InIsAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.StartSkillPaletteGrpSwitchAnimation");
		
		USkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation_Params params {};
		params.InSwitchToSubSkillPalette = InSwitchToSubSkillPalette;
		params.InIsAnimation = InIsAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteGrpSwtichEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SetSkillPaletteGrpSwtichEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteGrpSwtichEnable");
		
		USkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetStorageMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SetStorageMode(bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetStorageMode");
		
		USkillInfoForBattleSetTop_C_SetStorageMode_Params params {};
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupBattleImagine
	 * 		Flags  -> ()
	 */
	void USkillInfoForBattleSetTop_C::SetupBattleImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupBattleImagine");
		
		USkillInfoForBattleSetTop_C_SetupBattleImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupMainSubULTSkill
	 * 		Flags  -> ()
	 */
	void USkillInfoForBattleSetTop_C::SetupMainSubULTSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupMainSubULTSkill");
		
		USkillInfoForBattleSetTop_C_SetupMainSubULTSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkill
	 * 		Flags  -> ()
	 */
	void USkillInfoForBattleSetTop_C::SetupTacticalSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkill");
		
		USkillInfoForBattleSetTop_C_SetupTacticalSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupAllSkill
	 * 		Flags  -> ()
	 */
	void USkillInfoForBattleSetTop_C::SetupAllSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupAllSkill");
		
		USkillInfoForBattleSetTop_C_SetupAllSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoForBattleSetTop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Construct");
		
		USkillInfoForBattleSetTop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.PreConstruct");
		
		USkillInfoForBattleSetTop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InBattleImagineSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature");
		
		USkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature_Params params {};
		params.InBattleImagineSAP = InBattleImagineSAP;
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InBattleImagineSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature");
		
		USkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature_Params params {};
		params.InBattleImagineSAP = InBattleImagineSAP;
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInSwitchToSubSkillPalette                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		USkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		params.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetUIBlockerMostFrontEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoForBattleSetTop_C::SetUIBlockerMostFrontEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetUIBlockerMostFrontEnable");
		
		USkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnAnimationFinished");
		
		USkillInfoForBattleSetTop_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InTacticalSkillSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::OnTacticalSkillIconSelected(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconSelected");
		
		USkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected_Params params {};
		params.InTacticalSkillSAP = InTacticalSkillSAP;
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Destruct
	 * 		Flags  -> ()
	 */
	void USkillInfoForBattleSetTop_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Destruct");
		
		USkillInfoForBattleSetTop_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.ExecuteUbergraph_SkillInfoForBattleSetTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::ExecuteUbergraph_SkillInfoForBattleSetTop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.ExecuteUbergraph_SkillInfoForBattleSetTop");
		
		USkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnBattleImagineIconPresssed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InBattleImagineSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::OnBattleImagineIconPresssed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnBattleImagineIconPresssed__DelegateSignature");
		
		USkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature_Params params {};
		params.InBattleImagineSAP = InBattleImagineSAP;
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InTacticalSkillSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoForBattleSetTop_C::OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconPressed__DelegateSignature");
		
		USkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature_Params params {};
		params.InTacticalSkillSAP = InTacticalSkillSAP;
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoForBattleSetTop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoForBattleSetTop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C");
		return ptr;
	}

}


