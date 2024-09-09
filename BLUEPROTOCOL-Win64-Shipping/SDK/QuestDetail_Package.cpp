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
	 * 		Name   -> Function QuestDetail.QuestDetail_C.Stop All Button Click Input Action
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::StopAllButtonClickInputAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.Stop All Button Click Input Action");
		
		UQuestDetail_C_StopAllButtonClickInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetActionButtonLabelCmn16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCmnBtn16_C*                                 CmnBtn16                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestDetail_ActionButtonType                      InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::SetActionButtonLabelCmn16(class UCmnBtn16_C* CmnBtn16, EQuestDetail_ActionButtonType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetActionButtonLabelCmn16");
		
		UQuestDetail_C_SetActionButtonLabelCmn16_Params params {};
		params.CmnBtn16 = CmnBtn16;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetNextMainQuestMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Flag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::SetNextMainQuestMode(bool Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetNextMainQuestMode");
		
		UQuestDetail_C_SetNextMainQuestMode_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetPreviewModeEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShowButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::SetPreviewModeEx(bool InShowButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetPreviewModeEx");
		
		UQuestDetail_C_SetPreviewModeEx_Params params {};
		params.InShowButton = InShowButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.Get Quest Precondition Infos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestStatus                                       InQuestStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBQuestPreconditionUIInfo>          OutUiInfo                                                  (Parm, OutParm)
	 */
	void UQuestDetail_C::GetQuestPreconditionInfos(int32_t InQuestIndex, EQuestStatus InQuestStatus, TArray<struct FSBQuestPreconditionUIInfo>* OutUiInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.Get Quest Precondition Infos");
		
		UQuestDetail_C_GetQuestPreconditionInfos_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.InQuestStatus = InQuestStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUiInfo != nullptr)
			*OutUiInfo = params.OutUiInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.Set Repeat Count Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::SetRepeatCountText(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.Set Repeat Count Text");
		
		UQuestDetail_C_SetRepeatCountText_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetQuestStatusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestStatus                                       InQuestStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::SetQuestStatusText(int32_t InQuestIndex, EQuestStatus InQuestStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetQuestStatusText");
		
		UQuestDetail_C_SetQuestStatusText_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.InQuestStatus = InQuestStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.TermRequesTiming
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::TermRequesTiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.TermRequesTiming");
		
		UQuestDetail_C_TermRequesTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetPreviewMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPreviewMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::SetPreviewMode(bool bPreviewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetPreviewMode");
		
		UQuestDetail_C_SetPreviewMode_Params params {};
		params.bPreviewMode = bPreviewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.ResetButtonEnable
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::ResetButtonEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.ResetButtonEnable");
		
		UQuestDetail_C_ResetButtonEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.CheckPrecondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::CheckPrecondition(int32_t InQuestIndex, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.CheckPrecondition");
		
		UQuestDetail_C_CheckPrecondition_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.PlayActionButtonClickSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_ActionButtonType                      InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::PlayActionButtonClickSound(EQuestDetail_ActionButtonType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.PlayActionButtonClickSound");
		
		UQuestDetail_C_PlayActionButtonClickSound_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.DestroyBlocker
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::DestroyBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.DestroyBlocker");
		
		UQuestDetail_C_DestroyBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.CreateBlocker
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::CreateBlocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.CreateBlocker");
		
		UQuestDetail_C_CreateBlocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.GetThumbnailId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ThumbnailId                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::GetThumbnailId(int32_t QuestIndex, class FName* ThumbnailId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.GetThumbnailId");
		
		UQuestDetail_C_GetThumbnailId_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThumbnailId != nullptr)
			*ThumbnailId = params.ThumbnailId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetButtonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InButton1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   InButton2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::SetButtonVisibility(ESlateVisibility InButton1, ESlateVisibility InButton2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetButtonVisibility");
		
		UQuestDetail_C_SetButtonVisibility_Params params {};
		params.InButton1 = InButton1;
		params.InButton2 = InButton2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetButtonState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_ActionButtonType                      ButtonType1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestDetail_ActionButtonType                      ButtonType2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bButtonEnable1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::SetButtonState(EQuestDetail_ActionButtonType ButtonType1, EQuestDetail_ActionButtonType ButtonType2, bool bButtonEnable1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetButtonState");
		
		UQuestDetail_C_SetButtonState_Params params {};
		params.ButtonType1 = ButtonType1;
		params.ButtonType2 = ButtonType2;
		params.bButtonEnable1 = bButtonEnable1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestStatus                                       InQuestStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FQuestMasterData                            InQuestMasterData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UQuestDetail_C::SetButton(EQuestStatus InQuestStatus, const struct FQuestMasterData& InQuestMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetButton");
		
		UQuestDetail_C_SetButton_Params params {};
		params.InQuestStatus = InQuestStatus;
		params.InQuestMasterData = InQuestMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetQuestInfo_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnableRouteGuideSw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::SetQuestInfo_Internal(int32_t InQuestIndex, bool IsEnableRouteGuideSw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetQuestInfo_Internal");
		
		UQuestDetail_C_SetQuestInfo_Internal_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.IsEnableRouteGuideSw = IsEnableRouteGuideSw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.OnLoaded_430FBD6944474F8D28745AB2C5A082A2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::OnLoaded_430FBD6944474F8D28745AB2C5A082A2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.OnLoaded_430FBD6944474F8D28745AB2C5A082A2");
		
		UQuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.AcceptQuest
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::AcceptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.AcceptQuest");
		
		UQuestDetail_C_AcceptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.OnAcceptQuestDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EAcceptedQuestErrorCode                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          AcceptedQuestInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestDetail_C::OnAcceptQuestDelegate_Event_1(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.OnAcceptQuestDelegate_Event_1");
		
		UQuestDetail_C_OnAcceptQuestDelegate_Event_1_Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		params.RetCode = RetCode;
		params.AcceptedQuestInfo = AcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::CustomEvent(bool Result, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.CustomEvent");
		
		UQuestDetail_C_CustomEvent_Params params {};
		params.Result = Result;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.CancelQuest
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::CancelQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.CancelQuest");
		
		UQuestDetail_C_CancelQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.ReportQuest
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::ReportQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.ReportQuest");
		
		UQuestDetail_C_ReportQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.OnFinish_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReported                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::OnFinish_Event_1(bool bReported)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.OnFinish_Event_1");
		
		UQuestDetail_C_OnFinish_Event_1_Params params {};
		params.bReported = bReported;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.Construct");
		
		UQuestDetail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.Destruct
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.Destruct");
		
		UQuestDetail_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.OnActionButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_ActionButtonType                      InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::OnActionButtonClicked(EQuestDetail_ActionButtonType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.OnActionButtonClicked");
		
		UQuestDetail_C_OnActionButtonClicked_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.FinishResultNone
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::FinishResultNone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.FinishResultNone");
		
		UQuestDetail_C_FinishResultNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::SetThumbnail(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetThumbnail");
		
		UQuestDetail_C_SetThumbnail_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.FinishResultCancel
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::FinishResultCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.FinishResultCancel");
		
		UQuestDetail_C_FinishResultCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.SetQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnableRouteGuideSw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::SetQuestInfo(int32_t InQuestIndex, bool IsEnableRouteGuideSw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.SetQuestInfo");
		
		UQuestDetail_C_SetQuestInfo_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.IsEnableRouteGuideSw = IsEnableRouteGuideSw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.ChangeQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnableRouteGuideSw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::ChangeQuestInfo(int32_t InQuestIndex, bool IsEnableRouteGuideSw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.ChangeQuestInfo");
		
		UQuestDetail_C_ChangeQuestInfo_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.IsEnableRouteGuideSw = IsEnableRouteGuideSw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.OnPress_Cancel");
		
		UQuestDetail_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.ChangeQuestInfoForQuestList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnableRouteGuideSw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsClosed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_C::ChangeQuestInfoForQuestList(int32_t InQuestIndex, bool IsEnableRouteGuideSw, bool IsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.ChangeQuestInfoForQuestList");
		
		UQuestDetail_C_ChangeQuestInfoForQuestList_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.IsEnableRouteGuideSw = IsEnableRouteGuideSw;
		params.IsClosed = IsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UQuestDetail_C_BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UQuestDetail_C_BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetail_C::BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UQuestDetail_C_BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.ExecuteUbergraph_QuestDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::ExecuteUbergraph_QuestDetail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.ExecuteUbergraph_QuestDetail");
		
		UQuestDetail_C_ExecuteUbergraph_QuestDetail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail.QuestDetail_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_C::OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail.QuestDetail_C.OnFinish__DelegateSignature");
		
		UQuestDetail_C_OnFinish__DelegateSignature_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail.QuestDetail_C");
		return ptr;
	}

}


