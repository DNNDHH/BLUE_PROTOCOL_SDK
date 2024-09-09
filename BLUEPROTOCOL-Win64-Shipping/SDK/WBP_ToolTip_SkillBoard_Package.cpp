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
	 * 		Name   -> Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.GetSkillDataText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      InSkillData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UWBP_ToolTip_SkillBoard_C::GetSkillDataText(const struct FSBSkillDataMasterData& InSkillData, int32_t InLevel, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.GetSkillDataText");
		
		UWBP_ToolTip_SkillBoard_C_GetSkillDataText_Params params {};
		params.InSkillData = InSkillData;
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.Set Skill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTip_SkillBoard_C::SetSkill(int32_t SkillId, int32_t SkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.Set Skill");
		
		UWBP_ToolTip_SkillBoard_C_SetSkill_Params params {};
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ToolTip_SkillBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ToolTip_SkillBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C");
		return ptr;
	}

}


