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
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeRadioBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTacticalSkillTypeRadioBtn_C*                InSkillTypeRadioBtn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillInfoForBattleSet_C::SetSkillTypeRadioBtnEnable(class UTacticalSkillTypeRadioBtn_C* InSkillTypeRadioBtn, bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeRadioBtnEnable");
		
		UTacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable_Params params {};
		params.InSkillTypeRadioBtn = InSkillTypeRadioBtn;
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.CheckAbilityMastery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAbilitySkillId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsMastery                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillInfoForBattleSet_C::CheckAbilityMastery(int32_t InAbilitySkillId, bool* OutIsMastery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.CheckAbilityMastery");
		
		UTacticalSkillInfoForBattleSet_C_CheckAbilityMastery_Params params {};
		params.InAbilitySkillId = InAbilitySkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsMastery != nullptr)
			*OutIsMastery = params.OutIsMastery;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.GetAbilitySkillId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBaseSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutAbilityAlphaSkillId                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutAbilityBetaSkillId                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::GetAbilitySkillId(int32_t InBaseSkillId, int32_t* OutAbilityAlphaSkillId, int32_t* OutAbilityBetaSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.GetAbilitySkillId");
		
		UTacticalSkillInfoForBattleSet_C_GetAbilitySkillId_Params params {};
		params.InBaseSkillId = InBaseSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAbilityAlphaSkillId != nullptr)
			*OutAbilityAlphaSkillId = params.OutAbilityAlphaSkillId;
		if (OutAbilityBetaSkillId != nullptr)
			*OutAbilityBetaSkillId = params.OutAbilityBetaSkillId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeSelectMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelectMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InEquippedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::SetSkillTypeSelectMode(bool InIsSelectMode, int32_t InEquippedSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeSelectMode");
		
		UTacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode_Params params {};
		params.InIsSelectMode = InIsSelectMode;
		params.InEquippedSkillTypeId = InEquippedSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.UpdateSkillTypeRadioBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillTypeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::UpdateSkillTypeRadioBtn(int32_t InSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.UpdateSkillTypeRadioBtn");
		
		UTacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn_Params params {};
		params.InSkillTypeId = InSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSkillTypeSelectableLevel                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsSkillTypeSelectMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InEquippedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::SetInfoType(bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32_t InEquippedSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetInfoType");
		
		UTacticalSkillInfoForBattleSet_C_SetInfoType_Params params {};
		params.InIsSkillTypeSelectableLevel = InIsSkillTypeSelectableLevel;
		params.InIsSkillTypeSelectMode = InIsSkillTypeSelectMode;
		params.InEquippedSkillTypeId = InEquippedSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsSkillTypeSelectableLevel                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsSkillTypeSelectMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InEquippedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::SetSkill(int32_t InSkillId, int32_t InSkillLevel, bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32_t InEquippedSkillTypeId, int32_t InSelectedSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkill");
		
		UTacticalSkillInfoForBattleSet_C_SetSkill_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		params.InIsSkillTypeSelectableLevel = InIsSkillTypeSelectableLevel;
		params.InIsSkillTypeSelectMode = InIsSkillTypeSelectMode;
		params.InEquippedSkillTypeId = InEquippedSkillTypeId;
		params.InSelectedSkillTypeId = InSelectedSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillInfoForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.PreConstruct");
		
		UTacticalSkillInfoForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UTacticalSkillInfoForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Construct");
		
		UTacticalSkillInfoForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTacticalSkillInfoForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Destruct");
		
		UTacticalSkillInfoForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnRadioBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillTypeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::OnRadioBtnSelected(int32_t InSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnRadioBtnSelected");
		
		UTacticalSkillInfoForBattleSet_C_OnRadioBtnSelected_Params params {};
		params.InSkillTypeId = InSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.ExecuteUbergraph_TacticalSkillInfoForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::ExecuteUbergraph_TacticalSkillInfoForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.ExecuteUbergraph_TacticalSkillInfoForBattleSet");
		
		UTacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnSkillTypeRadioBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectedSkillTypeId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSelectedSkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillInfoForBattleSet_C::OnSkillTypeRadioBtnSelected__DelegateSignature(int32_t InSelectedSkillTypeId, int32_t InSelectedSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnSkillTypeRadioBtnSelected__DelegateSignature");
		
		UTacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature_Params params {};
		params.InSelectedSkillTypeId = InSelectedSkillTypeId;
		params.InSelectedSkillId = InSelectedSkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTacticalSkillInfoForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTacticalSkillInfoForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C");
		return ptr;
	}

}


