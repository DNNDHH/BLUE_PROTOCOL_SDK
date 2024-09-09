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
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UNameSettingDialog_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.GetToolTipWidget_1");
		
		UNameSettingDialog_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.SetMainMessageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNameSettingDialog_C::SetMainMessageText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.SetMainMessageText");
		
		UNameSettingDialog_C_SetMainMessageText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.SetOptionDecideText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OptionDecideText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::SetOptionDecideText(const class FString& OptionDecideText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.SetOptionDecideText");
		
		UNameSettingDialog_C_SetOptionDecideText_Params params {};
		params.OptionDecideText = OptionDecideText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.SetGameOutMode
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::SetGameOutMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.SetGameOutMode");
		
		UNameSettingDialog_C_SetGameOutMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.SetGameInMode
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::SetGameInMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.SetGameInMode");
		
		UNameSettingDialog_C_SetGameInMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.SetNameInputEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNameSettingDialog_C::SetNameInputEnable(bool InIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.SetNameInputEnable");
		
		UNameSettingDialog_C_SetNameInputEnable_Params params {};
		params.InIsEnable = InIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.Setting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMainMessageTextID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubMessageTextID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTextMaxCnt                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      StartInputName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::Setting(int32_t InMainMessageTextID, int32_t InSubMessageTextID, int32_t InTextMaxCnt, const class FString& StartInputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.Setting");
		
		UNameSettingDialog_C_Setting_Params params {};
		params.InMainMessageTextID = InMainMessageTextID;
		params.InSubMessageTextID = InSubMessageTextID;
		params.InTextMaxCnt = InTextMaxCnt;
		params.StartInputName = StartInputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.IsNameEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               enable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNameSettingDialog_C::IsNameEnable(const class FText& InText, bool* enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.IsNameEnable");
		
		UNameSettingDialog_C_IsNameEnable_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (enable != nullptr)
			*enable = params.enable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.Close
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.Close");
		
		UNameSettingDialog_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.Open
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.Open");
		
		UNameSettingDialog_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.Construct");
		
		UNameSettingDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNameSettingDialog_C::BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.Destruct");
		
		UNameSettingDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.MessageDecideProc
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::MessageDecideProc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.MessageDecideProc");
		
		UNameSettingDialog_C_MessageDecideProc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.UpdateNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNameSettingDialog_C::UpdateNameText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.UpdateNameText");
		
		UNameSettingDialog_C_UpdateNameText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.OnPress_Cancel");
		
		UNameSettingDialog_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.OnAnimationFinished");
		
		UNameSettingDialog_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.DecisonDialogResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::DecisonDialogResult(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.DecisonDialogResult");
		
		UNameSettingDialog_C_DecisonDialogResult_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UNameSettingDialog_C_BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.VisibleTicketGrp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NameChangeTicketCount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::VisibleTicketGrp(bool Visible, int32_t NameChangeTicketCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.VisibleTicketGrp");
		
		UNameSettingDialog_C_VisibleTicketGrp_Params params {};
		params.Visible = Visible;
		params.NameChangeTicketCount = NameChangeTicketCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.ExecuteUbergraph_NameSettingDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::ExecuteUbergraph_NameSettingDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.ExecuteUbergraph_NameSettingDialog");
		
		UNameSettingDialog_C_ExecuteUbergraph_NameSettingDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.OnClickedButtonFullScreen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::OnClickedButtonFullScreen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.OnClickedButtonFullScreen__DelegateSignature");
		
		UNameSettingDialog_C_OnClickedButtonFullScreen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UNameSettingDialog_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.OnClose__DelegateSignature");
		
		UNameSettingDialog_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NameSettingDialog.NameSettingDialog_C.OnEnter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNameSettingDialog_C::OnEnter__DelegateSignature(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NameSettingDialog.NameSettingDialog_C.OnEnter__DelegateSignature");
		
		UNameSettingDialog_C_OnEnter__DelegateSignature_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNameSettingDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNameSettingDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NameSettingDialog.NameSettingDialog_C");
		return ptr;
	}

}


