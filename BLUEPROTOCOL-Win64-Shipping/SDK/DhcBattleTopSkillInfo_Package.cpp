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
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.GetScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  OutSwitcher                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.GetScoreInfoSwitcher");
		
		UDhcBattleTopSkillInfo_C_GetScoreInfoSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSwitcher != nullptr)
			*OutSwitcher = params.OutSwitcher;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSubSkillPalette                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIgnoreSwitchBtn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteType");
		
		UDhcBattleTopSkillInfo_C_SetSkillPaletteType_Params params {};
		params.bInIsSubSkillPalette = bInIsSubSkillPalette;
		params.bInIgnoreSwitchBtn = bInIgnoreSwitchBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkillPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSkillPaletteGrp2AtFront                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::SetupTacticalSkillPosition(bool bInIsSkillPaletteGrp2AtFront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkillPosition");
		
		UDhcBattleTopSkillInfo_C_SetupTacticalSkillPosition_Params params {};
		params.bInIsSkillPaletteGrp2AtFront = bInIsSkillPaletteGrp2AtFront;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SwitchTacticalSkillBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsSubSkillPaletteAtFront                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::SwitchTacticalSkillBg(bool bInIsSubSkillPaletteAtFront, bool bInIsAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SwitchTacticalSkillBg");
		
		UDhcBattleTopSkillInfo_C_SwitchTacticalSkillBg_Params params {};
		params.bInIsSubSkillPaletteAtFront = bInIsSubSkillPaletteAtFront;
		params.bInIsAnimation = bInIsAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.StartSkillPaletteGrpSwitchAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInSwitchToSubSkillPalette                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::StartSkillPaletteGrpSwitchAnimation(bool bInSwitchToSubSkillPalette, bool bInIsAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.StartSkillPaletteGrpSwitchAnimation");
		
		UDhcBattleTopSkillInfo_C_StartSkillPaletteGrpSwitchAnimation_Params params {};
		params.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;
		params.bInIsAnimation = bInIsAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteGrpSwtichEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::SetSkillPaletteGrpSwtichEnable(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteGrpSwtichEnable");
		
		UDhcBattleTopSkillInfo_C_SetSkillPaletteGrpSwtichEnable_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupBattleImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>  InBattleImagineInfos                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::SetupBattleImagine(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>* InBattleImagineInfos, ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupBattleImagine");
		
		UDhcBattleTopSkillInfo_C_SetupBattleImagine_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBattleImagineInfos != nullptr)
			*InBattleImagineInfos = params.InBattleImagineInfos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupRegularAndULTSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InRegularSkillIds                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InULTSkillId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::SetupRegularAndULTSkill(TArray<int32_t>* InRegularSkillIds, int32_t InULTSkillId, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupRegularAndULTSkill");
		
		UDhcBattleTopSkillInfo_C_SetupRegularAndULTSkill_Params params {};
		params.InULTSkillId = InULTSkillId;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRegularSkillIds != nullptr)
			*InRegularSkillIds = params.InRegularSkillIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InTacticalSkillIds                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::SetupTacticalSkill(TArray<int32_t>* InTacticalSkillIds, ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkill");
		
		UDhcBattleTopSkillInfo_C_SetupTacticalSkill_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTacticalSkillIds != nullptr)
			*InTacticalSkillIds = params.InTacticalSkillIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>  InEquipBattleImagineInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBDhcBattlePlayerEquipArtsInfo>     InEquipArtsInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>* InEquipBattleImagineInfo, TArray<struct FSBDhcBattlePlayerEquipArtsInfo>* InEquipArtsInfo, ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Setup");
		
		UDhcBattleTopSkillInfo_C_Setup_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEquipBattleImagineInfo != nullptr)
			*InEquipBattleImagineInfo = params.InEquipBattleImagineInfo;
		if (InEquipArtsInfo != nullptr)
			*InEquipArtsInfo = params.InEquipArtsInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.PreConstruct");
		
		UDhcBattleTopSkillInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopSkillInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Construct");
		
		UDhcBattleTopSkillInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInSwitchToSubSkillPalette                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UDhcBattleTopSkillInfo_C_BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		params.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetUIBlockerMostFrontEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopSkillInfo_C::SetUIBlockerMostFrontEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetUIBlockerMostFrontEnable");
		
		UDhcBattleTopSkillInfo_C_SetUIBlockerMostFrontEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.OnAnimationFinished");
		
		UDhcBattleTopSkillInfo_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.ExecuteUbergraph_DhcBattleTopSkillInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopSkillInfo_C::ExecuteUbergraph_DhcBattleTopSkillInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.ExecuteUbergraph_DhcBattleTopSkillInfo");
		
		UDhcBattleTopSkillInfo_C_ExecuteUbergraph_DhcBattleTopSkillInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopSkillInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopSkillInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C");
		return ptr;
	}

}


