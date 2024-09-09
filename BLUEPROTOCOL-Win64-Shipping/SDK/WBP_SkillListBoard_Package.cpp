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
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.PassiveSkillListSetting
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::PassiveSkillListSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.PassiveSkillListSetting");
		
		UWBP_SkillListBoard_C_PassiveSkillListSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.Skill List Setting
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::SkillListSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.Skill List Setting");
		
		UWBP_SkillListBoard_C_SkillListSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.Get Now Select Class
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillListBoard_C::GetNowSelectClass(ESBClassType* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.Get Now Select Class");
		
		UWBP_SkillListBoard_C_GetNowSelectClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.BoardUpdate
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::BoardUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.BoardUpdate");
		
		UWBP_SkillListBoard_C_BoardUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.OpenSkillTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SkillListBoard_C::OpenSkillTree(const struct FSBSkillDataMasterData& Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.OpenSkillTree");
		
		UWBP_SkillListBoard_C_OpenSkillTree_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.Construct");
		
		UWBP_SkillListBoard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       Typr                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillListBoard_C::CustomEvent_1(ESBClassType Typr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_1");
		
		UWBP_SkillListBoard_C_CustomEvent_1_Params params {};
		params.Typr = Typr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_2");
		
		UWBP_SkillListBoard_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnCharaSkillMasteryOthersComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillListBoard_C::OnCharaSkillMasteryOthersComplete(int32_t Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnCharaSkillMasteryOthersComplete");
		
		UWBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.Destruct");
		
		UWBP_SkillListBoard_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.BndEvt__WBP_SkillListBoard_WBP_SkillTreeHorizon_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListBoard_C::BndEvt__WBP_SkillListBoard_WBP_SkillTreeHorizon_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.BndEvt__WBP_SkillListBoard_WBP_SkillTreeHorizon_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UWBP_SkillListBoard_C_BndEvt__WBP_SkillListBoard_WBP_SkillTreeHorizon_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.ExecuteUbergraph_WBP_SkillListBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillListBoard_C::ExecuteUbergraph_WBP_SkillListBoard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.ExecuteUbergraph_WBP_SkillListBoard");
		
		UWBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnSubMenuChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillListBoard_C::OnSubMenuChanged__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnSubMenuChanged__DelegateSignature");
		
		UWBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillListBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillListBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillListBoard.WBP_SkillListBoard_C");
		return ptr;
	}

}


