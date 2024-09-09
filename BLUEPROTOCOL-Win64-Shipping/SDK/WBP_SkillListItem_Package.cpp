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
	 * 		Name   -> Function WBP_SkillListItem.WBP_SkillListItem_C.UpdateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Use                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillListItem_C::UpdateAbility(bool* Use)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListItem.WBP_SkillListItem_C.UpdateAbility");
		
		UWBP_SkillListItem_C_UpdateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Use != nullptr)
			*Use = params.Use;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListItem.WBP_SkillListItem_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      SBSkillDataMasterData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SkillListItem_C::Init(const struct FSBSkillDataMasterData& SBSkillDataMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListItem.WBP_SkillListItem_C.Init");
		
		UWBP_SkillListItem_C_Init_Params params {};
		params.SBSkillDataMasterData = SBSkillDataMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListItem.WBP_SkillListItem_C.BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillListItem_C::BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListItem.WBP_SkillListItem_C.BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SkillListItem_C_BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListItem.WBP_SkillListItem_C.ExecuteUbergraph_WBP_SkillListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillListItem_C::ExecuteUbergraph_WBP_SkillListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListItem.WBP_SkillListItem_C.ExecuteUbergraph_WBP_SkillListItem");
		
		UWBP_SkillListItem_C_ExecuteUbergraph_WBP_SkillListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillListItem.WBP_SkillListItem_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSkillDataMasterData                      SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_SkillListItem_C::OnClick__DelegateSignature(const struct FSBSkillDataMasterData& SkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillListItem.WBP_SkillListItem_C.OnClick__DelegateSignature");
		
		UWBP_SkillListItem_C_OnClick__DelegateSignature_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillListItem.WBP_SkillListItem_C");
		return ptr;
	}

}


