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
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetBtnForPadCursorMoveVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetBtnForPadCursorMoveVisible");
		
		USkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SwitchSkillBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBehind                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnim                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::SwitchSkillBg(bool bBehind, bool bAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SwitchSkillBg");
		
		USkillInfoIconForTacticalSkill_C_SwitchSkillBg_Params params {};
		params.bBehind = bBehind;
		params.bAnim = bAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillAbillityType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSkillAbilityType                                InSkillAbilityType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForTacticalSkill_C::SetTacticalSkillAbillityType(ESBSkillAbilityType InSkillAbilityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillAbillityType");
		
		USkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType_Params params {};
		params.InSkillAbilityType = InSkillAbilityType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillStopUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSAP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForTacticalSkill_C::InitSkillStopUpdate(ESkillActionPosition InSAP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillStopUpdate");
		
		USkillInfoIconForTacticalSkill_C_InitSkillStopUpdate_Params params {};
		params.InSAP = InSAP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillEmptyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSAP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForTacticalSkill_C::InitSkillEmptyColor(ESkillActionPosition InSAP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillEmptyColor");
		
		USkillInfoIconForTacticalSkill_C_InitSkillEmptyColor_Params params {};
		params.InSAP = InSAP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.UpdateTacticalSkillIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSAP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsMastery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::UpdateTacticalSkillIcon(ESkillActionPosition InSAP, int32_t InSkillId, bool InIsMastery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.UpdateTacticalSkillIcon");
		
		USkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon_Params params {};
		params.InSAP = InSAP;
		params.InSkillId = InSkillId;
		params.InIsMastery = InIsMastery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillButtonOff
	 * 		Flags  -> ()
	 */
	void USkillInfoIconForTacticalSkill_C::SetTacticalSkillButtonOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillButtonOff");
		
		USkillInfoIconForTacticalSkill_C_SetTacticalSkillButtonOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetIsTacticalSkillEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSAP                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::SetIsTacticalSkillEmpty(ESkillActionPosition InSAP, bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetIsTacticalSkillEmpty");
		
		USkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty_Params params {};
		params.InSAP = InSAP;
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillButtonOffBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsButtonOff                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::SetSkillButtonOffBase(bool InIsButtonOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillButtonOffBase");
		
		USkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase_Params params {};
		params.InIsButtonOff = InIsButtonOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForTacticalSkill_C::SetLevel(int32_t InLevel, int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetLevel");
		
		USkillInfoIconForTacticalSkill_C_SetLevel_Params params {};
		params.InLevel = InLevel;
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsInformationHidden                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsSkillMastery                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::SetSkillInfo(int32_t InSkillId, int32_t InSkillLevel, bool InIsInformationHidden, bool InIsSkillMastery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillInfo");
		
		USkillInfoIconForTacticalSkill_C_SetSkillInfo_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		params.InIsInformationHidden = InIsInformationHidden;
		params.InIsSkillMastery = InIsSkillMastery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNotUseTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::CreateTooltip(bool InIsNotUseTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.CreateTooltip");
		
		USkillInfoIconForTacticalSkill_C_CreateTooltip_Params params {};
		params.InIsNotUseTooltip = InIsNotUseTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoIconForTacticalSkill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.Construct");
		
		USkillInfoIconForTacticalSkill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillInfoIconForTacticalSkill_C::BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		USkillInfoIconForTacticalSkill_C_BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoIconForTacticalSkill_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.PreConstruct");
		
		USkillInfoIconForTacticalSkill_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.ExecuteUbergraph_SkillInfoIconForTacticalSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForTacticalSkill_C::ExecuteUbergraph_SkillInfoIconForTacticalSkill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.ExecuteUbergraph_SkillInfoIconForTacticalSkill");
		
		USkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.OnTacticalSkillIconPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InTacticalSkillSAP                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoIconForTacticalSkill_C::OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.OnTacticalSkillIconPressed__DelegateSignature");
		
		USkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction USkillInfoIconForTacticalSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoIconForTacticalSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C");
		return ptr;
	}

}


