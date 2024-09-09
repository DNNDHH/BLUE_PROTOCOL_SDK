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
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetErrorData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HelpId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelpDialogBoxCommon_C::SetErrorData(const class FName& HelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetErrorData");
		
		UTutorialHelpDialogBoxCommon_C_SetErrorData_Params params {};
		params.HelpId = HelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ISCurrentPageEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialHelpDialogBoxCommon_C::ISCurrentPageEnd(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ISCurrentPageEnd");
		
		UTutorialHelpDialogBoxCommon_C_ISCurrentPageEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdatePageButton
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::UpdatePageButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdatePageButton");
		
		UTutorialHelpDialogBoxCommon_C_UpdatePageButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetHelpData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBTutorialHelpData                         InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTutorialHelpDialogBoxCommon_C::SetHelpData(int32_t InPage, const struct FSBTutorialHelpData& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetHelpData");
		
		UTutorialHelpDialogBoxCommon_C_SetHelpData_Params params {};
		params.InPage = InPage;
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.FindTurotialHelpData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsUsingClassTypeForTutorialHelp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForTutorialHelp                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFind                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBTutorialHelpData                         Ret                                                        (Parm, OutParm)
	 */
	void UTutorialHelpDialogBoxCommon_C::FindTurotialHelpData(const class FName& InId, bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassTypeForTutorialHelp, bool* bFind, struct FSBTutorialHelpData* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.FindTurotialHelpData");
		
		UTutorialHelpDialogBoxCommon_C_FindTurotialHelpData_Params params {};
		params.InId = InId;
		params.bInIsUsingClassTypeForTutorialHelp = bInIsUsingClassTypeForTutorialHelp;
		params.InClassTypeForTutorialHelp = InClassTypeForTutorialHelp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFind != nullptr)
			*bFind = params.bFind;
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSubMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsContinue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsUsingClassTypeForTutorialHelp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClasTypeForTutorialHelp                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelpDialogBoxCommon_C::Init(const class FName& InId, bool InSubMode, bool IsContinue, bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClasTypeForTutorialHelp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Init");
		
		UTutorialHelpDialogBoxCommon_C_Init_Params params {};
		params.InId = InId;
		params.InSubMode = InSubMode;
		params.IsContinue = IsContinue;
		params.bInIsUsingClassTypeForTutorialHelp = bInIsUsingClassTypeForTutorialHelp;
		params.InClasTypeForTutorialHelp = InClasTypeForTutorialHelp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdateUI
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::UpdateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdateUI");
		
		UTutorialHelpDialogBoxCommon_C_UpdateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UTutorialHelpDialogBoxCommon_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnNextPage
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnNextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnNextPage");
		
		UTutorialHelpDialogBoxCommon_C_OnNextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UTutorialHelpDialogBoxCommon_C_BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Construct
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Construct");
		
		UTutorialHelpDialogBoxCommon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Destruct");
		
		UTutorialHelpDialogBoxCommon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnClose_Event");
		
		UTutorialHelpDialogBoxCommon_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnForceClose_Event
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnForceClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnForceClose_Event");
		
		UTutorialHelpDialogBoxCommon_C_OnForceClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Colose
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnColose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Colose");
		
		UTutorialHelpDialogBoxCommon_C_OnColose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UTutorialHelpDialogBoxCommon_C_BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UTutorialHelpDialogBoxCommon_C_BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnPress_Cancel_2
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnPress_Cancel_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnPress_Cancel_2");
		
		UTutorialHelpDialogBoxCommon_C_OnPress_Cancel_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Open
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Open");
		
		UTutorialHelpDialogBoxCommon_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Open Continue
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnOpenContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Open Continue");
		
		UTutorialHelpDialogBoxCommon_C_OnOpenContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_4
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_4");
		
		UTutorialHelpDialogBoxCommon_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_5
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_5");
		
		UTutorialHelpDialogBoxCommon_C_WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ExecuteUbergraph_TutorialHelpDialogBoxCommon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelpDialogBoxCommon_C::ExecuteUbergraph_TutorialHelpDialogBoxCommon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ExecuteUbergraph_TutorialHelpDialogBoxCommon");
		
		UTutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTutorialHelpDialogBoxCommon_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnClose__DelegateSignature");
		
		UTutorialHelpDialogBoxCommon_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialHelpDialogBoxCommon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialHelpDialogBoxCommon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C");
		return ptr;
	}

}


