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
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.SetBirthdayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Age                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::SetBirthdayInfo(int32_t Year, int32_t Month, int32_t Age, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.SetBirthdayInfo");
		
		UCertificationWindow_C_SetBirthdayInfo_Params params {};
		params.Year = Year;
		params.Month = Month;
		params.Age = Age;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.ReserveInputText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsYear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMonth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCertificationWindow_C::ReserveInputText(const class FText& Input, bool IsYear, bool IsMonth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.ReserveInputText");
		
		UCertificationWindow_C_ReserveInputText_Params params {};
		params.Input = Input;
		params.IsYear = IsYear;
		params.IsMonth = IsMonth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.CheckInputText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsYear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMonth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCertificationWindow_C::CheckInputText(const class FText& Input, bool IsYear, bool IsMonth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.CheckInputText");
		
		UCertificationWindow_C_CheckInputText_Params params {};
		params.Input = Input;
		params.IsYear = IsYear;
		params.IsMonth = IsMonth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.CreateAgeLimit
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::CreateAgeLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.CreateAgeLimit");
		
		UCertificationWindow_C_CreateAgeLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.Clear
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.Clear");
		
		UCertificationWindow_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.CreateLists
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::CreateLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.CreateLists");
		
		UCertificationWindow_C_CreateLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.Hide
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.Hide");
		
		UCertificationWindow_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.Show
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.Show");
		
		UCertificationWindow_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.Construct");
		
		UCertificationWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.DoClose
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::DoClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.DoClose");
		
		UCertificationWindow_C_DoClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UCertificationWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCertificationWindow_C::BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCertificationWindow_C::BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.OnEsc
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::OnEsc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.OnEsc");
		
		UCertificationWindow_C_OnEsc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");
		
		UCertificationWindow_C_BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2");
		
		UCertificationWindow_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.ExecuteUbergraph_CertificationWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::ExecuteUbergraph_CertificationWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.ExecuteUbergraph_CertificationWindow");
		
		UCertificationWindow_C_ExecuteUbergraph_CertificationWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.OnRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_C::OnRequest__DelegateSignature(int32_t Year, int32_t Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.OnRequest__DelegateSignature");
		
		UCertificationWindow_C_OnRequest__DelegateSignature_Params params {};
		params.Year = Year;
		params.Month = Month;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow.CertificationWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow.CertificationWindow_C.OnClose__DelegateSignature");
		
		UCertificationWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCertificationWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCertificationWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CertificationWindow.CertificationWindow_C");
		return ptr;
	}

}


