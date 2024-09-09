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
	 * 		Name   -> Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Set Brunch Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillTreeBranchSwitcher_C::SetBrunchColor(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Set Brunch Color");
		
		UWBP_SkillTreeBranchSwitcher_C_SetBrunchColor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillTreeHorizonBranchType                        InBrunchType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeBranchSwitcher_C::Init(ESkillTreeHorizonBranchType InBrunchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Init");
		
		UWBP_SkillTreeBranchSwitcher_C_Init_Params params {};
		params.InBrunchType = InBrunchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillTreeBranchSwitcher_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.PreConstruct");
		
		UWBP_SkillTreeBranchSwitcher_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.SetBrunchType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillTreeHorizonBranchType                        BrunchType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeBranchSwitcher_C::SetBrunchType(ESkillTreeHorizonBranchType BrunchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.SetBrunchType");
		
		UWBP_SkillTreeBranchSwitcher_C_SetBrunchType_Params params {};
		params.BrunchType = BrunchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.ExecuteUbergraph_WBP_SkillTreeBranchSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeBranchSwitcher_C::ExecuteUbergraph_WBP_SkillTreeBranchSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.ExecuteUbergraph_WBP_SkillTreeBranchSwitcher");
		
		UWBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillTreeBranchSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillTreeBranchSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C");
		return ptr;
	}

}


