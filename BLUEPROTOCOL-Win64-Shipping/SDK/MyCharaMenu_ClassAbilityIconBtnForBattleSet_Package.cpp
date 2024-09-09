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
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateUnopenedTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSkillType                                       InSkillType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSkillAbilityType                                InSkillAbilityType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReleaseLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::CreateUnopenedTooltip(ESBSkillType InSkillType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32_t InReleaseLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateUnopenedTooltip");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip_Params params {};
		params.InSkillType = InSkillType;
		params.InSkillAbilityType = InSkillAbilityType;
		params.InClassType = InClassType;
		params.InReleaseLevel = InReleaseLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNoTooltip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::CreateTooltip(bool InNoTooltip, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateTooltip");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip_Params params {};
		params.InNoTooltip = InNoTooltip;
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetUnopened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSkillType                                       InSkillType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSkillAbilityType                                InSkillAbilityType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReleaseLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetUnopened(ESBSkillType InSkillType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32_t InReleaseLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetUnopened");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened_Params params {};
		params.InSkillType = InSkillType;
		params.InSkillAbilityType = InSkillAbilityType;
		params.InClassType = InClassType;
		params.InReleaseLevel = InReleaseLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEmpty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetIsEmpty(bool InIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIsEmpty");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty_Params params {};
		params.InIsEmpty = InIsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetButtonOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsButtonOff                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetButtonOff(bool InIsButtonOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetButtonOff");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff_Params params {};
		params.InIsButtonOff = InIsButtonOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InIconTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsPassive2                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetIconTexture(class UTexture2D* InIconTexture, bool InIsPassive2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIconTexture");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture_Params params {};
		params.InIconTexture = InIconTexture;
		params.InIsPassive2 = InIsPassive2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetLevel");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::SetSkill(int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetSkill");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSkill_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.PreConstruct");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.Destruct");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.OnIconClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InClassAbilityId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::OnIconClicked__DelegateSignature(int32_t InClassAbilityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.OnIconClicked__DelegateSignature");
		
		UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature_Params params {};
		params.InClassAbilityId = InClassAbilityId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C");
		return ptr;
	}

}


