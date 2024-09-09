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
	 * 		Name   -> Function GuildDetails.GuildDetails_C.CheckInviteData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNeedToWait                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::CheckInviteData(bool* bNeedToWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.CheckInviteData");
		
		UGuildDetails_C_CheckInviteData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNeedToWait != nullptr)
			*bNeedToWait = params.bNeedToWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.CheckEntryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNeedToWait                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::CheckEntryData(bool* bNeedToWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.CheckEntryData");
		
		UGuildDetails_C_CheckEntryData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNeedToWait != nullptr)
			*bNeedToWait = params.bNeedToWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.IsAbleToSendGuildEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::IsAbleToSendGuildEntry(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.IsAbleToSendGuildEntry");
		
		UGuildDetails_C_IsAbleToSendGuildEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.CheckGuildComment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildDetails_C::CheckGuildComment(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.CheckGuildComment");
		
		UGuildDetails_C_CheckGuildComment_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildTimeInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildTimeInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildTimeInfos");
		
		UGuildDetails_C_SetGuildTimeInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildMemberInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildMemberInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildMemberInfos");
		
		UGuildDetails_C_SetGuildMemberInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildExperienceInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildExperienceInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildExperienceInfos");
		
		UGuildDetails_C_SetGuildExperienceInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildAcceptTypeInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildAcceptTypeInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildAcceptTypeInfos");
		
		UGuildDetails_C_SetGuildAcceptTypeInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildLeaderInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildLeaderInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildLeaderInfos");
		
		UGuildDetails_C_SetGuildLeaderInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildComment
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildComment");
		
		UGuildDetails_C_SetGuildComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildIdInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildIdInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildIdInfos");
		
		UGuildDetails_C_SetGuildIdInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildNameInfos
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::SetGuildNameInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildNameInfos");
		
		UGuildDetails_C_SetGuildNameInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.Get Times
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESBGuildActivityTime>                       RetTimes                                                   (Parm, OutParm)
	 */
	void UGuildDetails_C::GetTimes(TArray<ESBGuildActivityTime>* RetTimes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.Get Times");
		
		UGuildDetails_C_GetTimes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetTimes != nullptr)
			*RetTimes = params.RetTimes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.GetAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EGuildAttribute>                            RetAttrib                                                  (Parm, OutParm)
	 */
	void UGuildDetails_C::GetAttributes(TArray<EGuildAttribute>* RetAttrib)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.GetAttributes");
		
		UGuildDetails_C_GetAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetAttrib != nullptr)
			*RetAttrib = params.RetAttrib;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildDetails_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.GetGuildComp");
		
		UGuildDetails_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.Set EditMode Times
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::SetEditModeTimes(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.Set EditMode Times");
		
		UGuildDetails_C_SetEditModeTimes_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.Set EditMode Attributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::SetEditModeAttributes(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.Set EditMode Attributes");
		
		UGuildDetails_C_SetEditModeAttributes_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.GenerateTimes
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::GenerateTimes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.GenerateTimes");
		
		UGuildDetails_C_GenerateTimes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.GenerateAttributes
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::GenerateAttributes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.GenerateAttributes");
		
		UGuildDetails_C_GenerateAttributes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildData                                  GuildData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            ButtonsSwitcherIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::SetGuildData(const struct FGuildData& GuildData, int32_t ButtonsSwitcherIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildData");
		
		UGuildDetails_C_SetGuildData_Params params {};
		params.GuildData = GuildData;
		params.ButtonsSwitcherIndex = ButtonsSwitcherIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.PreConstruct");
		
		UGuildDetails_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.Construct");
		
		UGuildDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.InitalizeGuildData
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::InitalizeGuildData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.InitalizeGuildData");
		
		UGuildDetails_C_InitalizeGuildData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.EnterEditMode
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::EnterEditMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.EnterEditMode");
		
		UGuildDetails_C_EnterEditMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.LeaveEditMode
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::LeaveEditMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.LeaveEditMode");
		
		UGuildDetails_C_LeaveEditMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.DenyEditable
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::DenyEditable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.DenyEditable");
		
		UGuildDetails_C_DenyEditable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.CounstructChangeData
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::CounstructChangeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.CounstructChangeData");
		
		UGuildDetails_C_CounstructChangeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.On Change GuildData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::OnChangeGuildData(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.On Change GuildData");
		
		UGuildDetails_C_OnChangeGuildData_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BindChanged
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BindChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BindChanged");
		
		UGuildDetails_C_BindChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnComplete GuildDataChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuildData                                  InGuildData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildDetails_C::OnCompleteGuildDataChanged(int32_t RetCode, const struct FGuildData& InGuildData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnComplete GuildDataChanged");
		
		UGuildDetails_C_OnCompleteGuildDataChanged_Params params {};
		params.RetCode = RetCode;
		params.InGuildData = InGuildData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnGuildNameChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::OnGuildNameChanged(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnGuildNameChanged");
		
		UGuildDetails_C_OnGuildNameChanged_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.Set ShowEntryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFromPlayerProfile                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::SetShowEntryMode(bool bFromPlayerProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.Set ShowEntryMode");
		
		UGuildDetails_C_SetShowEntryMode_Params params {};
		params.bFromPlayerProfile = bFromPlayerProfile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UGuildDetails_C_BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnCloseEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      OnButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildDetails_C::OnCloseEntry(EDialogResult OnButton, const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnCloseEntry");
		
		UGuildDetails_C_OnCloseEntry_Params params {};
		params.OnButton = OnButton;
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnCompletedGuildEntry_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::OnCompletedGuildEntry_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnCompletedGuildEntry_Event");
		
		UGuildDetails_C_OnCompletedGuildEntry_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::CustomEvent_1(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.CustomEvent_1");
		
		UGuildDetails_C_CustomEvent_1_Params params {};
		params.RetCode = RetCode;
		params.isAccept = isAccept;
		params.InEntryId = InEntryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::CustomEvent_2(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.CustomEvent_2");
		
		UGuildDetails_C_CustomEvent_2_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.EntryRefuseDecisionDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::EntryRefuseDecisionDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.EntryRefuseDecisionDialog");
		
		UGuildDetails_C_EntryRefuseDecisionDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.InviteRefuseDecisionDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::InviteRefuseDecisionDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.InviteRefuseDecisionDialog");
		
		UGuildDetails_C_InviteRefuseDecisionDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.InviteAcceptDecisionDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::InviteAcceptDecisionDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.InviteAcceptDecisionDialog");
		
		UGuildDetails_C_InviteAcceptDecisionDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");
		
		UGuildDetails_C_BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");
		
		UGuildDetails_C_BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature");
		
		UGuildDetails_C_BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature");
		
		UGuildDetails_C_BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.SetGuildDetailsCloseBtnEnables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::SetGuildDetailsCloseBtnEnables(bool InIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.SetGuildDetailsCloseBtnEnables");
		
		UGuildDetails_C_SetGuildDetailsCloseBtnEnables_Params params {};
		params.InIsEnable = InIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildDetails_C::BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
		
		UGuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnCompletedGetGuildEntryData_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::OnCompletedGetGuildEntryData_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnCompletedGetGuildEntryData_Event");
		
		UGuildDetails_C_OnCompletedGetGuildEntryData_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnCompletedGetGuildInviteData_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::OnCompletedGetGuildInviteData_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnCompletedGetGuildInviteData_Event");
		
		UGuildDetails_C_OnCompletedGetGuildInviteData_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.ExecuteUbergraph_GuildDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetails_C::ExecuteUbergraph_GuildDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.ExecuteUbergraph_GuildDetails");
		
		UGuildDetails_C_ExecuteUbergraph_GuildDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildDetails_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.OnClose__DelegateSignature");
		
		UGuildDetails_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetails.GuildDetails_C.EventEdit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Edit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetails_C::EventEdit__DelegateSignature(bool Edit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetails.GuildDetails_C.EventEdit__DelegateSignature");
		
		UGuildDetails_C_EventEdit__DelegateSignature_Params params {};
		params.Edit = Edit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildDetails.GuildDetails_C");
		return ptr;
	}

}


