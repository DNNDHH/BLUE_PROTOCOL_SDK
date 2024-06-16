#pragma once

 

// Package: BP_PlayerUIComponent

#include "Basic.hpp"

#include "BP_PlayerUIComponent_classes.hpp"
#include "BP_PlayerUIComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnCastSkill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnCastSkill__DelegateSignature(ESkillActionPosition InSkillPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnCastSkill__DelegateSignature");

	Params::BP_PlayerUIComponent_C_OnCastSkill__DelegateSignature Parms{};

	Parms.InSkillPosition = InSkillPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ExecuteUbergraph_BP_PlayerUIComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::ExecuteUbergraph_BP_PlayerUIComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ExecuteUbergraph_BP_PlayerUIComponent");

	Params::BP_PlayerUIComponent_C_ExecuteUbergraph_BP_PlayerUIComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_UpdateRespawnGauge
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::BP_UpdateRespawnGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_UpdateRespawnGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ReceiveTick");

	Params::BP_PlayerUIComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ReceiveEndPlay");

	Params::BP_PlayerUIComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnSelect(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnSelect");

	Params::BP_PlayerUIComponent_C_OnSelect Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_EscapeConfirmation
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::BP_EscapeConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_EscapeConfirmation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnClose_Event_0
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnClose_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnClose_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowJankenWindow
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::BP_ShowJankenWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowJankenWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowRespawnBattleArea
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::BP_ShowRespawnBattleArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowRespawnBattleArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_DisableRespawn
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::BP_DisableRespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_DisableRespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowRespawn
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   RespawnTime                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::BP_ShowRespawn(const float RespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowRespawn");

	Params::BP_PlayerUIComponent_C_BP_ShowRespawn Parms{};

	Parms.RespawnTime = RespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowCombo
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InComboNum                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::BP_ShowCombo(const int32 InComboNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowCombo");

	Params::BP_PlayerUIComponent_C_BP_ShowCombo Parms{};

	Parms.InComboNum = InComboNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowKillMark
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::BP_ShowKillMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowKillMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowKillMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::BP_ShowKillMessage(const class AActor* InOtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowKillMessage");

	Params::BP_PlayerUIComponent_C_BP_ShowKillMessage Parms{};

	Parms.InOtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowSerialKillMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InKillCount                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::BP_ShowSerialKillMessage(const int32 InKillCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BP_ShowSerialKillMessage");

	Params::BP_PlayerUIComponent_C_BP_ShowSerialKillMessage Parms{};

	Parms.InKillCount = InKillCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerUIComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLeaveInterruptQuestDelegete_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLeaveInterruptQuestDelegete_Event_0(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLeaveInterruptQuestDelegete_Event_0");

	Params::BP_PlayerUIComponent_C_OnLeaveInterruptQuestDelegete_Event_0 Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::CustomEvent_1(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "CustomEvent_1");

	Params::BP_PlayerUIComponent_C_CustomEvent_1 Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.InitInterruptQuestDelegate
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::InitInterruptQuestDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "InitInterruptQuestDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.NotifyCastSkill
// (Event, Public, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::NotifyCastSkill(ESkillActionPosition InSkillPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "NotifyCastSkill");

	Params::BP_PlayerUIComponent_C_NotifyCastSkill Parms{};

	Parms.InSkillPosition = InSkillPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.DebugPlayGashaSpecialCut
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBRarity                               InDemoRarity                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRarity                               InActualRarity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::DebugPlayGashaSpecialCut(const ESBRarity InDemoRarity, const ESBRarity InActualRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "DebugPlayGashaSpecialCut");

	Params::BP_PlayerUIComponent_C_DebugPlayGashaSpecialCut Parms{};

	Parms.InDemoRarity = InDemoRarity;
	Parms.InActualRarity = InActualRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.DebugPlayGashaDemo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSBGashaResultData               InResultData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bInSkip                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerUIComponent_C::DebugPlayGashaDemo(const struct FSBGashaResultData& InResultData, const bool bInSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "DebugPlayGashaDemo");

	Params::BP_PlayerUIComponent_C_DebugPlayGashaDemo Parms{};

	Parms.InResultData = std::move(InResultData);
	Parms.bInSkip = bInSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.AchievementedAutoDeliveryQuestDelegete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSeasonPassQuestCycleType             CycleType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::AchievementedAutoDeliveryQuestDelegete(const ESBSeasonPassQuestCycleType CycleType, const class FString& QuestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "AchievementedAutoDeliveryQuestDelegete");

	Params::BP_PlayerUIComponent_C_AchievementedAutoDeliveryQuestDelegete Parms{};

	Parms.CycleType = CycleType;
	Parms.QuestID = std::move(QuestID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.AutoDeliveryQuestDelegate
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::AutoDeliveryQuestDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "AutoDeliveryQuestDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CreateFailed
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::CreateFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "CreateFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CreateResult
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::CreateResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "CreateResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindOnRequestEndResultMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindOnRequestEndResultMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindOnRequestEndResultMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindOnRequestEndResultMenu
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindOnRequestEndResultMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindOnRequestEndResultMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindOnGameOver
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindOnGameOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindOnGameOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindOnGameOver
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindOnGameOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindOnGameOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindOnTimeOver
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindOnTimeOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindOnTimeOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindOnTimeOver
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindOnTimeOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindOnTimeOver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnDungeonFailedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBGameOver                             InGameOverType                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnDungeonFailedDelegate(const int32 RetCode, const ESBGameOver InGameOverType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnDungeonFailedDelegate");

	Params::BP_PlayerUIComponent_C_OnDungeonFailedDelegate Parms{};

	Parms.RetCode = RetCode;
	Parms.InGameOverType = InGameOverType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindEventDungeonFailed
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindEventDungeonFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindEventDungeonFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindEventDungeonFailed
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindEventDungeonFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindEventDungeonFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindAutoLikeSend
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindAutoLikeSend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindAutoLikeSend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnAutoLikeSendDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnAutoLikeSendDelegate(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnAutoLikeSendDelegate");

	Params::BP_PlayerUIComponent_C_OnAutoLikeSendDelegate Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindAutoLikeSend
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindAutoLikeSend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindAutoLikeSend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnResultEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnResultEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnResultEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindEventResultEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResultMenuBase_C*                Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::UnbindEventResultEnd(class UResultMenuBase_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindEventResultEnd");

	Params::BP_PlayerUIComponent_C_UnbindEventResultEnd Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindEventResultEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResultMenuBase_C*                Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::BindEventResultEnd(class UResultMenuBase_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindEventResultEnd");

	Params::BP_PlayerUIComponent_C_BindEventResultEnd Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindEventDungeonClear
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindEventDungeonClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindEventDungeonClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindEventDungeonClear
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindEventDungeonClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindEventDungeonClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnDungeonClearDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnDungeonClearDelegate(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnDungeonClearDelegate");

	Params::BP_PlayerUIComponent_C_OnDungeonClearDelegate Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_0AB9338748E6F335CE49BA903CAD7296
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_0AB9338748E6F335CE49BA903CAD7296(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_0AB9338748E6F335CE49BA903CAD7296");

	Params::BP_PlayerUIComponent_C_OnLoaded_0AB9338748E6F335CE49BA903CAD7296 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_693A7C1845F6EAE19463A184C6C44674
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_693A7C1845F6EAE19463A184C6C44674(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_693A7C1845F6EAE19463A184C6C44674");

	Params::BP_PlayerUIComponent_C_OnLoaded_693A7C1845F6EAE19463A184C6C44674 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_2959E7A6448E4A19F01A719E578C8E3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_2959E7A6448E4A19F01A719E578C8E3D(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_2959E7A6448E4A19F01A719E578C8E3D");

	Params::BP_PlayerUIComponent_C_OnLoaded_2959E7A6448E4A19F01A719E578C8E3D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_23C7A54141864CEF5FF5F089CA9C231E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_23C7A54141864CEF5FF5F089CA9C231E(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_23C7A54141864CEF5FF5F089CA9C231E");

	Params::BP_PlayerUIComponent_C_OnLoaded_23C7A54141864CEF5FF5F089CA9C231E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_1BC6453D43889E654F51A3A00EE84C6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_1BC6453D43889E654F51A3A00EE84C6F(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_1BC6453D43889E654F51A3A00EE84C6F");

	Params::BP_PlayerUIComponent_C_OnLoaded_1BC6453D43889E654F51A3A00EE84C6F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A");

	Params::BP_PlayerUIComponent_C_OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_7D1867C2409FD80E3A58C39FDD75F797
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_7D1867C2409FD80E3A58C39FDD75F797(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_7D1867C2409FD80E3A58C39FDD75F797");

	Params::BP_PlayerUIComponent_C_OnLoaded_7D1867C2409FD80E3A58C39FDD75F797 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_069377654D13A7187F0A43AE1026CAF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_069377654D13A7187F0A43AE1026CAF8(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_069377654D13A7187F0A43AE1026CAF8");

	Params::BP_PlayerUIComponent_C_OnLoaded_069377654D13A7187F0A43AE1026CAF8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_698586454896DB641C19D693D96ED60D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_698586454896DB641C19D693D96ED60D(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_698586454896DB641C19D693D96ED60D");

	Params::BP_PlayerUIComponent_C_OnLoaded_698586454896DB641C19D693D96ED60D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_E0603C6B44161052AF941591848D438A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_E0603C6B44161052AF941591848D438A(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_E0603C6B44161052AF941591848D438A");

	Params::BP_PlayerUIComponent_C_OnLoaded_E0603C6B44161052AF941591848D438A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF");

	Params::BP_PlayerUIComponent_C_OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67");

	Params::BP_PlayerUIComponent_C_OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726");

	Params::BP_PlayerUIComponent_C_OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.Terminate
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.GetDungeonComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerDungeonComponent*        DungeonComponent                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::GetDungeonComponent(class USBPlayerDungeonComponent** DungeonComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "GetDungeonComponent");

	Params::BP_PlayerUIComponent_C_GetDungeonComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DungeonComponent != nullptr)
		*DungeonComponent = Parms.DungeonComponent;
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindResult
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::BindResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "BindResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindResult
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UnbindResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UnbindResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UpdateResult
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::UpdateResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "UpdateResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetupResult
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Result                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerUIComponent_C::SetupResult(bool* Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "SetupResult");

	Params::BP_PlayerUIComponent_C_SetupResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Result != nullptr)
		*Param_Result = Parms.Param_Result;
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetupFailed
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Result                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerUIComponent_C::SetupFailed(bool* Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "SetupFailed");

	Params::BP_PlayerUIComponent_C_SetupFailed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Result != nullptr)
		*Param_Result = Parms.Param_Result;
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ResetResult
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::ResetResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ResetResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnRequestDungeonClear
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnRequestDungeonClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnRequestDungeonClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnRequestDungeonFailed
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBGameOver                             InGameOverType                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerUIComponent_C::OnRequestDungeonFailed(const ESBGameOver& InGameOverType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnRequestDungeonFailed");

	Params::BP_PlayerUIComponent_C_OnRequestDungeonFailed Parms{};

	Parms.InGameOverType = InGameOverType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnComplateDungeonClear
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnComplateDungeonClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnComplateDungeonClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnComplateDungeonFailed
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnComplateDungeonFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnComplateDungeonFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnSkipDungeonClear
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnSkipDungeonClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnSkipDungeonClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.DeleteResult
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::DeleteResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "DeleteResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetMenuMode
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::SetMenuMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "SetMenuMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ResetMenuMode
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::ResetMenuMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ResetMenuMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetSlientBaloon
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::SetSlientBaloon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "SetSlientBaloon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnRequestAutoLikeSend
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::OnRequestAutoLikeSend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "OnRequestAutoLikeSend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ResetSlientBaloon
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::ResetSlientBaloon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "ResetSlientBaloon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.EndGameClear
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::EndGameClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "EndGameClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.EndGameOver
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_PlayerUIComponent_C::EndGameOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerUIComponent_C", "EndGameOver");

	UObject::ProcessEvent(Func, nullptr);
}

}

