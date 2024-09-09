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
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.GetEtcTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            selectType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EtcTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::GetEtcTime(int32_t selectType, int32_t* EtcTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.GetEtcTime");
		
		UFang_expedition_DetailPlayData_C_GetEtcTime_Params params {};
		params.selectType = selectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EtcTime != nullptr)
			*EtcTime = params.EtcTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTimeEx
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::SetShortTimeEx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTimeEx");
		
		UFang_expedition_DetailPlayData_C_SetShortTimeEx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateRandomFixedReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMasterReward>                     RewardData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailPlayData_C::UpdateRandomFixedReward(TArray<struct FSBMasterReward>* RewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateRandomFixedReward");
		
		UFang_expedition_DetailPlayData_C_UpdateRandomFixedReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardData != nullptr)
			*RewardData = params.RewardData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetBaseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimeData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::SetBaseTime(int32_t TimeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetBaseTime");
		
		UFang_expedition_DetailPlayData_C_SetBaseTime_Params params {};
		params.TimeData = TimeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::SetShortTime(int32_t TimeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTime");
		
		UFang_expedition_DetailPlayData_C_SetShortTime_Params params {};
		params.TimeIndex = TimeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetUseTokenData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailPlayData_C::SetUseTokenData(TArray<int32_t>* TokenList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetUseTokenData");
		
		UFang_expedition_DetailPlayData_C_SetUseTokenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenList != nullptr)
			*TokenList = params.TokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UsableTokenCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasUseToken                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailPlayData_C::UsableTokenCheck(bool* WasUseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UsableTokenCheck");
		
		UFang_expedition_DetailPlayData_C_UsableTokenCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasUseToken != nullptr)
			*WasUseToken = params.WasUseToken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateTokenIconVisibility
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::UpdateTokenIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateTokenIconVisibility");
		
		UFang_expedition_DetailPlayData_C_UpdateTokenIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetSelectFangIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueIds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               AnimationSkip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailPlayData_C::SetSelectFangIds(TArray<class FString>* UniqueIds, bool AnimationSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetSelectFangIds");
		
		UFang_expedition_DetailPlayData_C_SetSelectFangIds_Params params {};
		params.AnimationSkip = AnimationSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueIds != nullptr)
			*UniqueIds = params.UniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetFangSelectMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::SetFangSelectMode(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetFangSelectMode");
		
		UFang_expedition_DetailPlayData_C_SetFangSelectMode_Params params {};
		params.AreaData = AreaData;
		params.TimeIndex = TimeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CancelCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::SetPlayData(struct FSBFang_expeditionPlayData* PlayData, int32_t CancelCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetPlayData");
		
		UFang_expedition_DetailPlayData_C_SetPlayData_Params params {};
		params.CancelCount = CancelCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayData != nullptr)
			*PlayData = params.PlayData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Construct");
		
		UFang_expedition_DetailPlayData_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionCancelClick
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::CB_OnExpeditionCancelClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionCancelClick");
		
		UFang_expedition_DetailPlayData_C_CB_OnExpeditionCancelClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionTicketClick
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::CB_OnExpeditionTicketClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionTicketClick");
		
		UFang_expedition_DetailPlayData_C_CB_OnExpeditionTicketClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Destruct");
		
		UFang_expedition_DetailPlayData_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnFastFinish
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::OnFastFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnFastFinish");
		
		UFang_expedition_DetailPlayData_C_OnFastFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.ExecuteUbergraph_Fang_expedition_DetailPlayData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::ExecuteUbergraph_Fang_expedition_DetailPlayData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.ExecuteUbergraph_Fang_expedition_DetailPlayData");
		
		UFang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView_PlayData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionPlayData                  PlayData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DetailPlayData_C::OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView_PlayData__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature_Params params {};
		params.PlayData = PlayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionStart__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<int32_t>                                    TokenIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailPlayData_C::OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32_t>* TokenIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionStart__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenIds != nullptr)
			*TokenIds = params.TokenIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickTicketWindowOpen__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    SelectedTokenIds                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_DetailPlayData_C::OnClickTicketWindowOpen__DelegateSignature(TArray<int32_t>* SelectedTokenIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickTicketWindowOpen__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedTokenIds != nullptr)
			*SelectedTokenIds = params.SelectedTokenIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ExpeditionId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::OnClickExpeditionFinish__DelegateSignature(const class FString& ExpeditionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionFinish__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature_Params params {};
		params.ExpeditionId = ExpeditionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TimeIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FangValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailPlayData_C::OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32_t TimeIndex, int32_t FangValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature_Params params {};
		params.AreaData = AreaData;
		params.TimeIndex = TimeIndex;
		params.FangValue = FangValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionUseTicketClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::OnExpeditionUseTicketClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionUseTicketClicked__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnExpeditionUseTicketClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionCancelClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailPlayData_C::OnExpeditionCancelClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionCancelClicked__DelegateSignature");
		
		UFang_expedition_DetailPlayData_C_OnExpeditionCancelClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailPlayData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailPlayData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C");
		return ptr;
	}

}


