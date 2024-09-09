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
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.SetDialogPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNumberInputDialog_C::SetDialogPoint(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.SetDialogPoint");
		
		UNumberInputDialog_C_SetDialogPoint_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.SetDialogTexts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InCommentText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InFreeText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InButtonText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNumberInputDialog_C::SetDialogTexts(const class FText& InCommentText, const class FText& InFreeText, const class FText& InButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.SetDialogTexts");
		
		UNumberInputDialog_C_SetDialogTexts_Params params {};
		params.InCommentText = InCommentText;
		params.InFreeText = InFreeText;
		params.InButtonText = InButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.SetDialogNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputDialog_C::SetDialogNumber(int32_t Number, int32_t NumberMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.SetDialogNumber");
		
		UNumberInputDialog_C_SetDialogNumber_Params params {};
		params.Number = Number;
		params.NumberMax = NumberMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.OnDestructMainWidget
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::OnDestructMainWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.OnDestructMainWidget");
		
		UNumberInputDialog_C_OnDestructMainWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputDialog_C::BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature(int32_t NewValue, float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.SetFreeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNumberInputDialog_C::SetFreeText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.SetFreeText");
		
		UNumberInputDialog_C_SetFreeText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.OnPress_Cancel");
		
		UNumberInputDialog_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.HideDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayCloseSe                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNumberInputDialog_C::HideDialog(bool bPlayCloseSe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.HideDialog");
		
		UNumberInputDialog_C_HideDialog_Params params {};
		params.bPlayCloseSe = bPlayCloseSe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.Destruct");
		
		UNumberInputDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.Construct");
		
		UNumberInputDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.OnSliderChange
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::OnSliderChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.OnSliderChange");
		
		UNumberInputDialog_C_OnSliderChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNumberInputDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.PreConstruct");
		
		UNumberInputDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.StartAnimation
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::StartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.StartAnimation");
		
		UNumberInputDialog_C_StartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UNumberInputDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.PositionInit
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::PositionInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.PositionInit");
		
		UNumberInputDialog_C_PositionInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNumberInputDialog_C::BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature");
		
		UNumberInputDialog_C_BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.ExecuteUbergraph_NumberInputDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputDialog_C::ExecuteUbergraph_NumberInputDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.ExecuteUbergraph_NumberInputDialog");
		
		UNumberInputDialog_C_ExecuteUbergraph_NumberInputDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.OnNumSliderUpdeta__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNumberInputDialog_C*                        CallerDialg                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputDialog_C::OnNumSliderUpdeta__DelegateSignature(int32_t Value, class UNumberInputDialog_C* CallerDialg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.OnNumSliderUpdeta__DelegateSignature");
		
		UNumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature_Params params {};
		params.Value = Value;
		params.CallerDialg = CallerDialg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputDialog.NumberInputDialog_C.OnHide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InNumber                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputDialog_C::OnHide__DelegateSignature(ENumberInputDialogResult InResult, int32_t InNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputDialog.NumberInputDialog_C.OnHide__DelegateSignature");
		
		UNumberInputDialog_C_OnHide__DelegateSignature_Params params {};
		params.InResult = InResult;
		params.InNumber = InNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNumberInputDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNumberInputDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NumberInputDialog.NumberInputDialog_C");
		return ptr;
	}

}


