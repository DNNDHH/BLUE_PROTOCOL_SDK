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
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsTooltipEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnSkillPaletteSwitchBtn_C::SetIsTooltipEnable(bool bInIsTooltipEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsTooltipEnable");
		
		UCmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable_Params params {};
		params.bInIsTooltipEnabled = bInIsTooltipEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetActiveSwitchBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InActiveSwitchBtnId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnSkillPaletteSwitchBtn_C::SetActiveSwitchBtn(int32_t InActiveSwitchBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetActiveSwitchBtn");
		
		UCmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn_Params params {};
		params.InActiveSwitchBtnId = InActiveSwitchBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsNoTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnSkillPaletteSwitchBtn_C::CreateTooltip(bool InIsNoTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.CreateTooltip");
		
		UCmnSkillPaletteSwitchBtn_C_CreateTooltip_Params params {};
		params.InIsNoTooltip = InIsNoTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsSubPaletteReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsReleased                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnSkillPaletteSwitchBtn_C::SetIsSubPaletteReleased(bool bInIsReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsSubPaletteReleased");
		
		UCmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased_Params params {};
		params.bInIsReleased = bInIsReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnSkillPaletteSwitchBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Construct");
		
		UCmnSkillPaletteSwitchBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCmnSkillPaletteSwitchBtn_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Destruct");
		
		UCmnSkillPaletteSwitchBtn_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnSkillPaletteSwitchBtn_C::BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UCmnSkillPaletteSwitchBtn_C_BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnSkillPaletteSwitchBtn_C::BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UCmnSkillPaletteSwitchBtn_C_BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.ExecuteUbergraph_CmnSkillPaletteSwitchBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnSkillPaletteSwitchBtn_C::ExecuteUbergraph_CmnSkillPaletteSwitchBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.ExecuteUbergraph_CmnSkillPaletteSwitchBtn");
		
		UCmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInSwitchToSubSkillPalette                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnSkillPaletteSwitchBtn_C::OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.OnPressed__DelegateSignature");
		
		UCmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature_Params params {};
		params.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnSkillPaletteSwitchBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnSkillPaletteSwitchBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C");
		return ptr;
	}

}


