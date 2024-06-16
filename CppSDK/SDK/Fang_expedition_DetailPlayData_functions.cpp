#pragma once

 

// Package: Fang_expedition_DetailPlayData

#include "Basic.hpp"

#include "Fang_expedition_DetailPlayData_classes.hpp"
#include "Fang_expedition_DetailPlayData_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionCancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::OnExpeditionCancelClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnExpeditionCancelClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnExpeditionUseTicketClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::OnExpeditionUseTicketClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnExpeditionUseTicketClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   TimeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FangValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnClickRandomRewardListView__DelegateSignature");

	Params::Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView__DelegateSignature Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TimeIndex = TimeIndex;
	Parms.FangValue = FangValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ExpeditionId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::OnClickExpeditionFinish__DelegateSignature(const class FString& ExpeditionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnClickExpeditionFinish__DelegateSignature");

	Params::Fang_expedition_DetailPlayData_C_OnClickExpeditionFinish__DelegateSignature Parms{};

	Parms.ExpeditionId = std::move(ExpeditionId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickTicketWindowOpen__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           SelectedTokenIds                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailPlayData_C::OnClickTicketWindowOpen__DelegateSignature(TArray<int32>& SelectedTokenIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnClickTicketWindowOpen__DelegateSignature");

	Params::Fang_expedition_DetailPlayData_C_OnClickTicketWindowOpen__DelegateSignature Parms{};

	Parms.SelectedTokenIds = std::move(SelectedTokenIds);

	UObject::ProcessEvent(Func, &Parms);

	SelectedTokenIds = std::move(Parms.SelectedTokenIds);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickExpeditionStart__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int32>                           TokenIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailPlayData_C::OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnClickExpeditionStart__DelegateSignature");

	Params::Fang_expedition_DetailPlayData_C_OnClickExpeditionStart__DelegateSignature Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TokenIds = std::move(TokenIds);

	UObject::ProcessEvent(Func, &Parms);

	TokenIds = std::move(Parms.TokenIds);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnClickRandomRewardListView_PlayData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DetailPlayData_C::OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnClickRandomRewardListView_PlayData__DelegateSignature");

	Params::Fang_expedition_DetailPlayData_C_OnClickRandomRewardListView_PlayData__DelegateSignature Parms{};

	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.ExecuteUbergraph_Fang_expedition_DetailPlayData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::ExecuteUbergraph_Fang_expedition_DetailPlayData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "ExecuteUbergraph_Fang_expedition_DetailPlayData");

	Params::Fang_expedition_DetailPlayData_C_ExecuteUbergraph_Fang_expedition_DetailPlayData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.OnFastFinish
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::OnFastFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "OnFastFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailPlayData_C::BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionTicketClick
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::CB_OnExpeditionTicketClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "CB_OnExpeditionTicketClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.CB_OnExpeditionCancelClick
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::CB_OnExpeditionCancelClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "CB_OnExpeditionCancelClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetPlayData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   CancelCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::SetPlayData(struct FSBFang_expeditionPlayData& PlayData, int32 CancelCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetPlayData");

	Params::Fang_expedition_DetailPlayData_C_SetPlayData Parms{};

	Parms.PlayData = std::move(PlayData);
	Parms.CancelCount = CancelCount;

	UObject::ProcessEvent(Func, &Parms);

	PlayData = std::move(Parms.PlayData);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetFangSelectMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   TimeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::SetFangSelectMode(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetFangSelectMode");

	Params::Fang_expedition_DetailPlayData_C_SetFangSelectMode Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TimeIndex = TimeIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetSelectFangIds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueIds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailPlayData_C::SetSelectFangIds(TArray<class FString>& UniqueIds, bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetSelectFangIds");

	Params::Fang_expedition_DetailPlayData_C_SetSelectFangIds Parms{};

	Parms.UniqueIds = std::move(UniqueIds);
	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);

	UniqueIds = std::move(Parms.UniqueIds);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateTokenIconVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::UpdateTokenIconVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "UpdateTokenIconVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UsableTokenCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasUseToken                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailPlayData_C::UsableTokenCheck(bool* WasUseToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "UsableTokenCheck");

	Params::Fang_expedition_DetailPlayData_C_UsableTokenCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WasUseToken != nullptr)
		*WasUseToken = Parms.WasUseToken;
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetUseTokenData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailPlayData_C::SetUseTokenData(TArray<int32>& TokenList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetUseTokenData");

	Params::Fang_expedition_DetailPlayData_C_SetUseTokenData Parms{};

	Parms.TokenList = std::move(TokenList);

	UObject::ProcessEvent(Func, &Parms);

	TokenList = std::move(Parms.TokenList);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::SetShortTime(int32 TimeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetShortTime");

	Params::Fang_expedition_DetailPlayData_C_SetShortTime Parms{};

	Parms.TimeIndex = TimeIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetBaseTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::SetBaseTime(int32 TimeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetBaseTime");

	Params::Fang_expedition_DetailPlayData_C_SetBaseTime Parms{};

	Parms.TimeData = TimeData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.UpdateRandomFixedReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMasterReward>          RewardData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_DetailPlayData_C::UpdateRandomFixedReward(TArray<struct FSBMasterReward>& RewardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "UpdateRandomFixedReward");

	Params::Fang_expedition_DetailPlayData_C_UpdateRandomFixedReward Parms{};

	Parms.RewardData = std::move(RewardData);

	UObject::ProcessEvent(Func, &Parms);

	RewardData = std::move(Parms.RewardData);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.SetShortTimeEx
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailPlayData_C::SetShortTimeEx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "SetShortTimeEx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C.GetEtcTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EtcTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailPlayData_C::GetEtcTime(int32 SelectType, int32* EtcTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailPlayData_C", "GetEtcTime");

	Params::Fang_expedition_DetailPlayData_C_GetEtcTime Parms{};

	Parms.SelectType = SelectType;

	UObject::ProcessEvent(Func, &Parms);

	if (EtcTime != nullptr)
		*EtcTime = Parms.EtcTime;
}

}

