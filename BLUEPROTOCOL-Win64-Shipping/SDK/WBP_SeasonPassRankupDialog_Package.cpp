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
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SeasonPassRankupDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.PreConstruct");
		
		UWBP_SeasonPassRankupDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SeasonPassRankupDialog_C_BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Construct");
		
		UWBP_SeasonPassRankupDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnInputCancelKey
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::OnInputCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnInputCancelKey");
		
		UWBP_SeasonPassRankupDialog_C_OnInputCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SeasonPassRankupDialog_C_BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrRank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MinRank                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxRank                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CosumePoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SeasonPassRankupDialog_C::SetData(int32_t CurrRank, int32_t MinRank, int32_t MaxRank, int32_t CurrPoint, int32_t CosumePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.SetData");
		
		UWBP_SeasonPassRankupDialog_C_SetData_Params params {};
		params.CurrRank = CurrRank;
		params.MinRank = MinRank;
		params.MaxRank = MaxRank;
		params.CurrPoint = CurrPoint;
		params.CosumePoint = CosumePoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SeasonPassRankupDialog_C_BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Event_OnValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnlyDisplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SeasonPassRankupDialog_C::Event_OnValueChanged(bool bOnlyDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Event_OnValueChanged");
		
		UWBP_SeasonPassRankupDialog_C_Event_OnValueChanged_Params params {};
		params.bOnlyDisplay = bOnlyDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1");
		
		UWBP_SeasonPassRankupDialog_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UWBP_SeasonPassRankupDialog_C::WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_2");
		
		UWBP_SeasonPassRankupDialog_C_WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.ExecuteUbergraph_WBP_SeasonPassRankupDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SeasonPassRankupDialog_C::ExecuteUbergraph_WBP_SeasonPassRankupDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.ExecuteUbergraph_WBP_SeasonPassRankupDialog");
		
		UWBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnClickedOk__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UpRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SeasonPassRankupDialog_C::OnClickedOk__DelegateSignature(int32_t UpRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnClickedOk__DelegateSignature");
		
		UWBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature_Params params {};
		params.UpRank = UpRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SeasonPassRankupDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SeasonPassRankupDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C");
		return ptr;
	}

}


