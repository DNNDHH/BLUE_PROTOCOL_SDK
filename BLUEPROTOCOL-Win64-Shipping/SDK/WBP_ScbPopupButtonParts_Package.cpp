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
	 * 		Name   -> Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetEnableButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScbPopupButtonParts_C::SetEnableButton(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetEnableButton");
		
		UWBP_ScbPopupButtonParts_C_SetEnableButton_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetupExpertRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCurrRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxRank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbPopupButtonParts_C::SetupExpertRank(int32_t InCurrRank, int32_t InMaxRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetupExpertRank");
		
		UWBP_ScbPopupButtonParts_C_SetupExpertRank_Params params {};
		params.InCurrRank = InCurrRank;
		params.InMaxRank = InMaxRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopupButtonParts_C::BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ScbPopupButtonParts_C_BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.ExecuteUbergraph_WBP_ScbPopupButtonParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbPopupButtonParts_C::ExecuteUbergraph_WBP_ScbPopupButtonParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.ExecuteUbergraph_WBP_ScbPopupButtonParts");
		
		UWBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.OnClickedScbPopup__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ScbPopupButtonParts_C::OnClickedScbPopup__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.OnClickedScbPopup__DelegateSignature");
		
		UWBP_ScbPopupButtonParts_C_OnClickedScbPopup__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ScbPopupButtonParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ScbPopupButtonParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C");
		return ptr;
	}

}


