#pragma once

 

// Package: BP_Fang_expedition

#include "Basic.hpp"

#include "BP_Fang_expedition_classes.hpp"
#include "BP_Fang_expedition_parameters.hpp"


namespace SDK
{

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnSceneFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnSceneFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnSceneFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionDataUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::OnExpeditionDataUpdate__DelegateSignature(bool WasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnExpeditionDataUpdate__DelegateSignature");

	Params::BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature Parms{};

	Parms.WasSuccessful = WasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExecuteUbergraph_BP_Fang_expedition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ExecuteUbergraph_BP_Fang_expedition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExecuteUbergraph_BP_Fang_expedition");

	Params::BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.EventAnimSkip
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::EventAnimSkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "EventAnimSkip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.Event_NotifyCompletionExpedition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::Event_NotifyCompletionExpedition(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "Event_NotifyCompletionExpedition");

	Params::BP_Fang_expedition_C_Event_NotifyCompletionExpedition Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::CustomEvent_0(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "CustomEvent_0");

	Params::BP_Fang_expedition_C_CustomEvent_0 Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Fang_expedition_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_AnmPlayList_InOut_K2Node_WidgetAnimationEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.Complete_GetRewardBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::Complete_GetRewardBoost(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "Complete_GetRewardBoost");

	Params::BP_Fang_expedition_C_Complete_GetRewardBoost Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BndEvt__BP_Fang_expedition_DetailFullScreenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BndEvt__BP_Fang_expedition_MapIconListFullScreenButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_Anm_PlayStart_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressBackButton
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnPressBackButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnPressBackButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.onAnimTimer
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnAnimTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "onAnimTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.SceneFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::SceneFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "SceneFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UBP_Fang_expedition_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Fang_expedition_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListDetailUpdateWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::PlayListDetailUpdateWork(bool WasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "PlayListDetailUpdateWork");

	Params::BP_Fang_expedition_C_PlayListDetailUpdateWork Parms{};

	Parms.WasSuccessful = WasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::PlayListUpdate(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "PlayListUpdate");

	Params::BP_Fang_expedition_C_PlayListUpdate Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BndEvt__BP_Fang_expedition_PlayListCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnDungeonOpenTicketDialogSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnDungeonOpenTicketDialogSelect(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnDungeonOpenTicketDialogSelect");

	Params::BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistFinishButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnPressPlaylistFinishButton(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnPressPlaylistFinishButton");

	Params::BP_Fang_expedition_C_OnPressPlaylistFinishButton Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistDetailButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnPressPlaylistDetailButton(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnPressPlaylistDetailButton");

	Params::BP_Fang_expedition_C_OnPressPlaylistDetailButton Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistOpenButton
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnPressPlaylistOpenButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnPressPlaylistOpenButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BndEvt__BP_Fang_expedition_StartAnimPanelCloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_Detail_Out_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_AnmTicketSelect_InOut_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UBP_Fang_expedition_C::WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "WidgetAnimationEvt_AnmDetailAreaSelect_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.UseCheckDialogWork
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::UseCheckDialogWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "UseCheckDialogWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.DetailClose
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::DetailClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "DetailClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.StartDialogSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::StartDialogSelect(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "StartDialogSelect");

	Params::BP_Fang_expedition_C_StartDialogSelect Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartButtonWork
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int32>                           TokenIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Fang_expedition_C::ExpeditionStartButtonWork(const struct FSBFang_expeditionAreaData& AreaData, const TArray<int32>& TokenIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionStartButtonWork");

	Params::BP_Fang_expedition_C_ExpeditionStartButtonWork Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TokenIds = std::move(TokenIds);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_Fang_expedition_C::BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BndEvt__BP_Fang_expedition_TicketWindowCloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.TicketSelectWindowOpen
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Fang_expedition_C::TicketSelectWindowOpen(const TArray<int32>& TokenIds, const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "TicketSelectWindowOpen");

	Params::BP_Fang_expedition_C_TicketSelectWindowOpen Parms{};

	Parms.TokenIds = std::move(TokenIds);
	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionFinishButtonWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ExpeditionFinishButtonWork(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionFinishButtonWork");

	Params::BP_Fang_expedition_C_ExpeditionFinishButtonWork Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateDialogSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ImmediateDialogSelect(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ImmediateDialogSelect");

	Params::BP_Fang_expedition_C_ImmediateDialogSelect Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionImmediateWork
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::ExpeditionImmediateWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionImmediateWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.CancelDialogSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::CancelDialogSelect(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "CancelDialogSelect");

	Params::BP_Fang_expedition_C_CancelDialogSelect Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionCancelButtonWork
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::ExpeditionCancelButtonWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionCancelButtonWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnCheckReward_Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnCheckReward_Complete(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnCheckReward_Complete");

	Params::BP_Fang_expedition_C_OnCheckReward_Complete Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.DataUpdateWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::DataUpdateWork(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "DataUpdateWork");

	Params::BP_Fang_expedition_C_DataUpdateWork Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionDataUpdate
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::ExpeditionDataUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionDataUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ImmediateErrorReload(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ImmediateErrorReload");

	Params::BP_Fang_expedition_C_ImmediateErrorReload Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorDialogWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ImmediateErrorDialogWork(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ImmediateErrorDialogWork");

	Params::BP_Fang_expedition_C_ImmediateErrorDialogWork Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ImmediateErrorWork(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ImmediateErrorWork");

	Params::BP_Fang_expedition_C_ImmediateErrorWork Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.DungeonSlotAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::DungeonSlotAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "DungeonSlotAnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnOpenRareRequest_Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnOpenRareRequest_Complete(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnOpenRareRequest_Complete");

	Params::BP_Fang_expedition_C_OnOpenRareRequest_Complete Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionStart_Complete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnExpeditionStart_Complete(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnExpeditionStart_Complete");

	Params::BP_Fang_expedition_C_OnExpeditionStart_Complete Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_GetReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnComplete_GetReward(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnComplete_GetReward");

	Params::BP_Fang_expedition_C_OnComplete_GetReward Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnAcceptResultClose
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnAcceptResultClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnAcceptResultClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptResultOpen
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::AcceptResultOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "AcceptResultOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnClose
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::AcceptWindow_OnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "AcceptWindow_OnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.AcceptWindow_OnRequesting
// (BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::AcceptWindow_OnRequesting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "AcceptWindow_OnRequesting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BackButtonPress
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::BackButtonPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BackButtonPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.VisibilityChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::VisibilityChange(int32 Type, bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "VisibilityChange");

	Params::BP_Fang_expedition_C_VisibilityChange Parms{};

	Parms.Type = Type;
	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.InitializeAreaListData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::InitializeAreaListData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "InitializeAreaListData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::RandomPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "RandomPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::RandomPlayAnimation2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "RandomPlayAnimation2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.BindEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::BindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "BindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.UnBindEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::UnBindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "UnBindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Town
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnListSelect_Town(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnListSelect_Town");

	Params::BP_Fang_expedition_C_OnListSelect_Town Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Field
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnListSelect_Field(const class FString& Field, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnListSelect_Field");

	Params::BP_Fang_expedition_C_OnListSelect_Field Parms{};

	Parms.Field = std::move(Field);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Fang_expedition_C::OnListSelect_DungeonPlay(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnListSelect_DungeonPlay");

	Params::BP_Fang_expedition_C_OnListSelect_DungeonPlay Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonStandby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnListSelect_DungeonStandby(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnListSelect_DungeonStandby");

	Params::BP_Fang_expedition_C_OnListSelect_DungeonStandby Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonTicket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnListSelect_DungeonTicket(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnListSelect_DungeonTicket");

	Params::BP_Fang_expedition_C_OnListSelect_DungeonTicket Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.SetPlayListVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::SetPlayListVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "SetPlayListVisibility");

	Params::BP_Fang_expedition_C_SetPlayListVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   TimeIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FangValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnProbabilityListView(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnProbabilityListView");

	Params::BP_Fang_expedition_C_OnProbabilityListView Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.TimeIndex = TimeIndex;
	Parms.FangValue = FangValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListClose
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnProbabilityListClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnProbabilityListClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::FangSelectOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "FangSelectOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_Immediate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnComplete_Immediate(bool WasSuccessful, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnComplete_Immediate");

	Params::BP_Fang_expedition_C_OnComplete_Immediate Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.UpdateExpeditionData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::UpdateExpeditionData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "UpdateExpeditionData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionRewardView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    LotterySkip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::ExpeditionRewardView(const struct FSBFang_expeditionPlayData& PlayData, bool LotterySkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionRewardView");

	Params::BP_Fang_expedition_C_ExpeditionRewardView Parms{};

	Parms.PlayData = std::move(PlayData);
	Parms.LotterySkip = LotterySkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.FindPlayData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ExpeditionId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       FindData                                               (Parm, OutParm)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::FindPlayData(const class FString& ExpeditionId, struct FSBFang_expeditionPlayData* FindData, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "FindPlayData");

	Params::BP_Fang_expedition_C_FindPlayData Parms{};

	Parms.ExpeditionId = std::move(ExpeditionId);

	UObject::ProcessEvent(Func, &Parms);

	if (FindData != nullptr)
		*FindData = std::move(Parms.FindData);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnFangListSelectChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Fang_expedition_C::OnFangListSelectChange(TArray<class FString>& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnFangListSelectChange");

	Params::BP_Fang_expedition_C_OnFangListSelectChange Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	UniqueId = std::move(Parms.UniqueId);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnTokenWindowClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Fang_expedition_C::OnTokenWindowClose(TArray<int32>& TokenList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnTokenWindowClose");

	Params::BP_Fang_expedition_C_OnTokenWindowClose Parms{};

	Parms.TokenList = std::move(TokenList);

	UObject::ProcessEvent(Func, &Parms);

	TokenList = std::move(Parms.TokenList);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::ExpeditionStartRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionStartRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.DisplayTargetPlayDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           AreaId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::DisplayTargetPlayDetail(const class FString& AreaId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "DisplayTargetPlayDetail");

	Params::BP_Fang_expedition_C_DisplayTargetPlayDetail Parms{};

	Parms.AreaId = std::move(AreaId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectClose
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::FangSelectClose(bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "FangSelectClose");

	Params::BP_Fang_expedition_C_FangSelectClose Parms{};

	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionPlayDetailOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::ExpeditionPlayDetailOpen(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ExpeditionPlayDetailOpen");

	Params::BP_Fang_expedition_C_ExpeditionPlayDetailOpen Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.GetTokenUseDialogMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           Message                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::GetTokenUseDialogMessage(TArray<int32>& TokenIds, class FString* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "GetTokenUseDialogMessage");

	Params::BP_Fang_expedition_C_GetTokenUseDialogMessage Parms{};

	Parms.TokenIds = std::move(TokenIds);

	UObject::ProcessEvent(Func, &Parms);

	TokenIds = std::move(Parms.TokenIds);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.SetupFieldMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FieldId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::SetupFieldMap(const class FString& FieldId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "SetupFieldMap");

	Params::BP_Fang_expedition_C_SetupFieldMap Parms{};

	Parms.FieldId = std::move(FieldId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnMapIconClick(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnMapIconClick");

	Params::BP_Fang_expedition_C_OnMapIconClick Parms{};

	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Fang_expedition_C::OnListSelect_DungeonArea(int32 Param_Index, const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnListSelect_DungeonArea");

	Params::BP_Fang_expedition_C_OnListSelect_DungeonArea Parms{};

	Parms.Param_Index = Param_Index;
	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView_PlayData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Fang_expedition_C::OnProbabilityListView_PlayData(const struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnProbabilityListView_PlayData");

	Params::BP_Fang_expedition_C_OnProbabilityListView_PlayData Parms{};

	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconGroupClick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionIconData       IconData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Fang_expedition_C::OnMapIconGroupClick(const struct FSBFang_expeditionIconData& IconData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnMapIconGroupClick");

	Params::BP_Fang_expedition_C_OnMapIconGroupClick Parms{};

	Parms.IconData = std::move(IconData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnDetailAreaListClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Fang_expedition_C::OnDetailAreaListClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnDetailAreaListClick");

	Params::BP_Fang_expedition_C_OnDetailAreaListClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressDungeonListClose
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnPressDungeonListClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnPressDungeonListClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.ReloadPlayDataDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::ReloadPlayDataDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "ReloadPlayDataDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.MapIconClickWork
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    AnimationSkip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::MapIconClickWork(const class FString& ID, bool AnimationSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "MapIconClickWork");

	Params::BP_Fang_expedition_C_MapIconClickWork Parms{};

	Parms.ID = std::move(ID);
	Parms.AnimationSkip = AnimationSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.OnItemDetailListClose
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Fang_expedition_C::OnItemDetailListClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "OnItemDetailListClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fang_expedition.BP_Fang_expedition_C.SetLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Loading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Fang_expedition_C::SetLoading(bool Loading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fang_expedition_C", "SetLoading");

	Params::BP_Fang_expedition_C_SetLoading Parms{};

	Parms.Loading = Loading;

	UObject::ProcessEvent(Func, &Parms);
}

}

