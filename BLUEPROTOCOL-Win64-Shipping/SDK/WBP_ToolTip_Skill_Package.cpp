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
	 * 		Name   -> Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      SBSkillDataMasterData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            DisplaySkillLV1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_Skill_C::SetDescription(const struct FSBSkillDataMasterData& SBSkillDataMasterData, int32_t DisplaySkillLV1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetDescription");
		
		UWBP_ToolTip_Skill_C_SetDescription_Params params {};
		params.SBSkillDataMasterData = SBSkillDataMasterData;
		params.DisplaySkillLV1 = DisplaySkillLV1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetSkillActiveAbilityLvReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ConditionSkillLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_Skill_C::SetSkillActiveAbilityLvReference(int32_t SkillId, int32_t SkillLevel, int32_t ConditionSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetSkillActiveAbilityLvReference");
		
		UWBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference_Params params {};
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		params.ConditionSkillLevel = ConditionSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.GetTacticalSkillBaseInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      InSkillMasterData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTacticalSkill                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutBaseSkillId                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutBaseSkillLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_Skill_C::GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32_t* OutBaseSkillId, int32_t* OutBaseSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.GetTacticalSkillBaseInfo");
		
		UWBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo_Params params {};
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
	 * 		Name   -> Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetUnleashedSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSkillType                                       InSkillIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSkillAbilityType                                InSkillAbilityType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReleaseLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_Skill_C::SetUnleashedSkill(ESBSkillType InSkillIType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32_t InReleaseLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetUnleashedSkill");
		
		UWBP_ToolTip_Skill_C_SetUnleashedSkill_Params params {};
		params.InSkillIType = InSkillIType;
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
	 * 		Name   -> Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.BuffIconsCollapsed
	 * 		Flags  -> ()
	 */
	void UWBP_ToolTip_Skill_C::BuffIconsCollapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.BuffIconsCollapsed");
		
		UWBP_ToolTip_Skill_C_BuffIconsCollapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.Set Skill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_Skill_C::SetSkill(int32_t SkillId, int32_t SkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.Set Skill");
		
		UWBP_ToolTip_Skill_C_SetSkill_Params params {};
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ToolTip_Skill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ToolTip_Skill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ToolTip_Skill.WBP_ToolTip_Skill_C");
		return ptr;
	}

}


