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
	 * 		Name   -> Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeHorizonLevelBG_C::Init(bool IsSelect, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.Init");
		
		UWBP_SkillTreeHorizonLevelBG_C_Init_Params params {};
		params.IsSelect = IsSelect;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillTreeHorizonLevelBG_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.PreConstruct");
		
		UWBP_SkillTreeHorizonLevelBG_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeHorizonLevelBG_C::ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG");
		
		UWBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillTreeHorizonLevelBG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillTreeHorizonLevelBG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C");
		return ptr;
	}

}


