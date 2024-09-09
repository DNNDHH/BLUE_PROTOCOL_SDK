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
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.ChangeDesign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRank                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScbPopup_C::ChangeDesign(bool bRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.ChangeDesign");
		
		UWBP_ScbPopup_C_ChangeDesign_Params params {};
		params.bRank = bRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.SetTotalBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBScbClassData                             TotalBonus                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_ScbPopup_C::SetTotalBonus(const struct FSBScbClassData& TotalBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.SetTotalBonus");
		
		UWBP_ScbPopup_C_SetTotalBonus_Params params {};
		params.TotalBonus = TotalBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.Finished_48175ABA459004A31D7F73BB1AD68F3D
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::Finished_48175ABA459004A31D7F73BB1AD68F3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.Finished_48175ABA459004A31D7F73BB1AD68F3D");
		
		UWBP_ScbPopup_C_Finished_48175ABA459004A31D7F73BB1AD68F3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.Construct");
		
		UWBP_ScbPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.ShowRank
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::ShowRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.ShowRank");
		
		UWBP_ScbPopup_C_ShowRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.ShowConditions
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::ShowConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.ShowConditions");
		
		UWBP_ScbPopup_C_ShowConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.OnPressCancelKey
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopup_C::OnPressCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.OnPressCancelKey");
		
		UWBP_ScbPopup_C_OnPressCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopup.WBP_ScbPopup_C.ExecuteUbergraph_WBP_ScbPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbPopup_C::ExecuteUbergraph_WBP_ScbPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopup.WBP_ScbPopup_C.ExecuteUbergraph_WBP_ScbPopup");
		
		UWBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ScbPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ScbPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScbPopup.WBP_ScbPopup_C");
		return ptr;
	}

}


