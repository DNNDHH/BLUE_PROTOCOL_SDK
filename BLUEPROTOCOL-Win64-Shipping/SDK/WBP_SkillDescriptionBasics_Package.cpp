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
	 * 		Name   -> Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_SkillDescriptionBasics_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.GetToolTipWidget_1");
		
		UWBP_SkillDescriptionBasics_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.BuffIconsCollapsed
	 * 		Flags  -> ()
	 */
	void UWBP_SkillDescriptionBasics_C::BuffIconsCollapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.BuffIconsCollapsed");
		
		UWBP_SkillDescriptionBasics_C_BuffIconsCollapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.Set Skill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillDescriptionBasics_C::SetSkill(int32_t SkillId, int32_t SkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.Set Skill");
		
		UWBP_SkillDescriptionBasics_C_SetSkill_Params params {};
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillDescriptionBasics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillDescriptionBasics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C");
		return ptr;
	}

}


