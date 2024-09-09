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
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIsSkillTypeSelectable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsSkillTypeSelectable                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::CheckIsSkillTypeSelectable(int32_t InSkillId, int32_t InSkillLevel, bool* OutIsSkillTypeSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIsSkillTypeSelectable");
		
		USkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsSkillTypeSelectable != nullptr)
			*OutIsSkillTypeSelectable = params.OutIsSkillTypeSelectable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.GetTacticalSkillBaseInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      InSkillMasterData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTacticalSkill                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutBaseSkillId                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutBaseSkillLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32_t* OutBaseSkillId, int32_t* OutBaseSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.GetTacticalSkillBaseInfo");
		
		USkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo_Params params {};
		params.InSkillMasterData = InSkillMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTacticalSkill != nullptr)
			*IsTacticalSkill = params.IsTacticalSkill;
		if (OutBaseSkillId != nullptr)
			*OutBaseSkillId = params.OutBaseSkillId;
		if (OutBaseSkillLevel != nullptr)
			*OutBaseSkillLevel = params.OutBaseSkillLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIfTacticalSkillIsEquppedAndItsSkillType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsEquipped                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutSkillType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::CheckIfTacticalSkillIsEquppedAndItsSkillType(int32_t InSkillId, bool* OutIsEquipped, int32_t* OutSkillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIfTacticalSkillIsEquppedAndItsSkillType");
		
		USkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType_Params params {};
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEquipped != nullptr)
			*OutIsEquipped = params.OutIsEquipped;
		if (OutSkillType != nullptr)
			*OutSkillType = params.OutSkillType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InWindowSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::SetWindowSize(const struct FVector2D& InWindowSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetWindowSize");
		
		USkillStatusDescForBattleSet_C_SetWindowSize_Params params {};
		params.InWindowSize = InWindowSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchStatusType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStatusTypeId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::SwitchStatusType(int32_t InStatusTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchStatusType");
		
		USkillStatusDescForBattleSet_C_SwitchStatusType_Params params {};
		params.InStatusTypeId = InStatusTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetClassAbilityRemoveBtnVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::SetClassAbilityRemoveBtnVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetClassAbilityRemoveBtnVisibility");
		
		USkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchBaseBgType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNormalType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::SwitchBaseBgType(bool InIsNormalType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchBaseBgType");
		
		USkillStatusDescForBattleSet_C_SwitchBaseBgType_Params params {};
		params.InIsNormalType = InIsNormalType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDescBlank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDescBlank                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::SetDescBlank(bool InIsDescBlank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDescBlank");
		
		USkillStatusDescForBattleSet_C_SetDescBlank_Params params {};
		params.InIsDescBlank = InIsDescBlank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDefaultDescType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsSharedAbility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::SetDefaultDescType(E_BattleSetInfoType InInfoType, bool InIsSharedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDefaultDescType");
		
		USkillStatusDescForBattleSet_C_SetDefaultDescType_Params params {};
		params.InInfoType = InInfoType;
		params.InIsSharedAbility = InIsSharedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetInfoType");
		
		USkillStatusDescForBattleSet_C_SetInfoType_Params params {};
		params.InInfoType = InInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchDescType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDescDefault                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::SwitchDescType(bool InIsDescDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchDescType");
		
		USkillStatusDescForBattleSet_C_SwitchDescType_Params params {};
		params.InIsDescDefault = InIsDescDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::SetSkill(int32_t InSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetSkill");
		
		USkillStatusDescForBattleSet_C_SetSkill_Params params {};
		params.InSkillId = InSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillStatusDescForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.PreConstruct");
		
		USkillStatusDescForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescForBattleSet_C::BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		USkillStatusDescForBattleSet_C_BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature");
		
		USkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature_Params params {};
		params.InSelectedSkillTypeId = InSelectedSkillTypeId;
		params.InSelectedSkillId = InSelectedSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.ExecuteUbergraph_SkillStatusDescForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::ExecuteUbergraph_SkillStatusDescForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.ExecuteUbergraph_SkillStatusDescForBattleSet");
		
		USkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnTacticalSkillTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillStatusDescForBattleSet_C::OnTacticalSkillTypeSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnTacticalSkillTypeSelected__DelegateSignature");
		
		USkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature_Params params {};
		params.InSelectedSkillTypeId = InSelectedSkillTypeId;
		params.InSelectedSkillId = InSelectedSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnClassAbilityRemoveBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillStatusDescForBattleSet_C::OnClassAbilityRemoveBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnClassAbilityRemoveBtnPressed__DelegateSignature");
		
		USkillStatusDescForBattleSet_C_OnClassAbilityRemoveBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillStatusDescForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillStatusDescForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C");
		return ptr;
	}

}


