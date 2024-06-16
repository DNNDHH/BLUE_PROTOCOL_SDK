#pragma once

 

// Package: MiniMapIcons

#include "Basic.hpp"

#include "MiniMapIcons_classes.hpp"
#include "MiniMapIcons_parameters.hpp"


namespace SDK
{

// Function MiniMapIcons.MiniMapIcons_C.ExecuteUbergraph_MiniMapIcons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::ExecuteUbergraph_MiniMapIcons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "ExecuteUbergraph_MiniMapIcons");

	Params::MiniMapIcons_C_ExecuteUbergraph_MiniMapIcons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "CustomEvent_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindFieldStatus
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindFieldStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindFieldStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindFieldStatus
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindFieldStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindFieldStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindOnSaveMapPinInfos
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindOnSaveMapPinInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindOnSaveMapPinInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "CustomEvent_2");

	Params::MiniMapIcons_C_CustomEvent_2 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindStepList
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindStepList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindStepList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindStepList
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindStepList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindStepList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnSaveQuestCheckList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapIcons_C::OnSaveQuestCheckList(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnSaveQuestCheckList");

	Params::MiniMapIcons_C_OnSaveQuestCheckList Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindCommonComponent
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindCommonComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindCommonComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindCommonComponent
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindCommonComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindCommonComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnGetMyCharacterInfo_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapIcons_C::OnGetMyCharacterInfo_Event_0(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnGetMyCharacterInfo_Event_0");

	Params::MiniMapIcons_C_OnGetMyCharacterInfo_Event_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnClassChangeNotify_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InDirtyExpiredEquipmentData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniMapIcons_C::OnClassChangeNotify_Event_0(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnClassChangeNotify_Event_0");

	Params::MiniMapIcons_C_OnClassChangeNotify_Event_0 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InDirtyExpiredEquipmentData = std::move(InDirtyExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindOnInitMapPin
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindOnInitMapPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindOnInitMapPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindOnInitMapPin
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindOnInitMapPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindOnInitMapPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindPin
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindPin
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindQuest
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnInitMapPin
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnInitMapPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnInitMapPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnQuestListDelegete_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUnlockedQuestInfo>       QuestList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniMapIcons_C::OnQuestListDelegete_Event_0(const TArray<struct FUnlockedQuestInfo>& QuestList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnQuestListDelegete_Event_0");

	Params::MiniMapIcons_C_OnQuestListDelegete_Event_0 Parms{};

	Parms.QuestList = std::move(QuestList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnUpdateQuestProgressDelegate_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               PrevAcceptedQuestInfo                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniMapIcons_C::OnUpdateQuestProgressDelegate_Event_0(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnUpdateQuestProgressDelegate_Event_0");

	Params::MiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_0 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.PrevAcceptedQuestInfo = std::move(PrevAcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCompleteQuestDelegate_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCompleteResult                    CompleteResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailRewardData                MailRewardData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniMapIcons_C::OnCompleteQuestDelegate_Event_0(int32 RetCode, int32 QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCompleteQuestDelegate_Event_0");

	Params::MiniMapIcons_C_OnCompleteQuestDelegate_Event_0 Parms{};

	Parms.RetCode = RetCode;
	Parms.QuestIndex = QuestIndex;
	Parms.CompleteResult = CompleteResult;
	Parms.MailRewardData = std::move(MailRewardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCancelQuestDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCancelQuestDelegate_Event_0(bool Result, int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCancelQuestDelegate_Event_0");

	Params::MiniMapIcons_C_OnCancelQuestDelegate_Event_0 Parms{};

	Parms.Result = Result;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnAcceptedQuestListDelegete_Event_0
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnAcceptedQuestListDelegete_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnAcceptedQuestListDelegete_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindOnSaveMapPinInfos
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindOnSaveMapPinInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindOnSaveMapPinInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnAcceptQuestDelegate_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EAcceptedQuestErrorCode                 ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               AcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniMapIcons_C::OnAcceptQuestDelegate_Event_0(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnAcceptQuestDelegate_Event_0");

	Params::MiniMapIcons_C_OnAcceptQuestDelegate_Event_0 Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;
	Parms.RetCode = RetCode;
	Parms.AcceptedQuestInfo = std::move(AcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.BindQuest
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMiniMapIconPartyMember_C*        PartyMember                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDead                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapIcons_C::CustomEvent_1(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "CustomEvent_1");

	Params::MiniMapIcons_C_CustomEvent_1 Parms{};

	Parms.PartyMember = PartyMember;
	Parms.IsDead = IsDead;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMemberOnSetDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMiniMapIconPartyMember_C*        PartyMember                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::UnbindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindPartyMemberOnSetDead");

	Params::MiniMapIcons_C_UnbindPartyMemberOnSetDead Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.BindPartyMemberOnSetDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMiniMapIconPartyMember_C*        PartyMember                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::BindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindPartyMemberOnSetDead");

	Params::MiniMapIcons_C_BindPartyMemberOnSetDead Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMember
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::UnbindPartyMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "UnbindPartyMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnPartyMemberUpdate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnPartyMemberUpdate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnPartyMemberUpdate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.BindPartyMember
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::BindPartyMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "BindPartyMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBMapErrorCode                         ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::CustomEvent_0(const bool Result, const ESBMapErrorCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "CustomEvent_0");

	Params::MiniMapIcons_C_CustomEvent_0 Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.AddQuestIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CheckDisplayOutOfRange                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniMapIcons_C::AddQuestIcon(int32 InQuestIndex, bool CheckDisplayOutOfRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "AddQuestIcon");

	Params::MiniMapIcons_C_AddQuestIcon Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.CheckDisplayOutOfRange = CheckDisplayOutOfRange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestIcon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnCreateQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.GetPartyMemberIconPriority
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerState*                   InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutPriority                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::GetPartyMemberIconPriority(class ASBPlayerState* InPlayerState, int32* OutPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "GetPartyMemberIconPriority");

	Params::MiniMapIcons_C_GetPartyMemberIconPriority Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPriority != nullptr)
		*OutPriority = Parms.OutPriority;
}


// Function MiniMapIcons.MiniMapIcons_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::DebugPrint(const class FString& InStr, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "DebugPrint");

	Params::MiniMapIcons_C_DebugPrint Parms{};

	Parms.InStr = std::move(InStr);
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateEngramCannon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEngramCannon*                  EngramCannon                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateEngramCannon(const class ASBEngramCannon* EngramCannon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateEngramCannon");

	Params::MiniMapIcons_C_OnCreateEngramCannon Parms{};

	Parms.EngramCannon = EngramCannon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateCampIcon
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateCampIcon(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateCampIcon");

	Params::MiniMapIcons_C_OnCreateCampIcon Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateFishingIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateFishingIcon(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateFishingIcon");

	Params::MiniMapIcons_C_OnCreateFishingIcon Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateClimbIcon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBClimbPoint*                    InClimbPoint                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateClimbIcon(const class ASBClimbPoint* InClimbPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateClimbIcon");

	Params::MiniMapIcons_C_OnCreateClimbIcon Parms{};

	Parms.InClimbPoint = InClimbPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreatePin
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinInfo                      MapPinInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InWorldPosition                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreatePin");

	Params::MiniMapIcons_C_OnCreatePin Parms{};

	Parms.MapPinInfo = std::move(MapPinInfo);
	Parms.InWorldPosition = std::move(InWorldPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PortalName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateWarpPointIcon");

	Params::MiniMapIcons_C_OnCreateWarpPointIcon Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.PortalName = std::move(PortalName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateEnemyGate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateEnemyGate(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateEnemyGate");

	Params::MiniMapIcons_C_OnCreateEnemyGate Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateCarrys
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCarry*                         InCarry                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateCarrys(const class ASBCarry* InCarry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateCarrys");

	Params::MiniMapIcons_C_OnCreateCarrys Parms{};

	Parms.InCarry = InCarry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateCarryBases
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateCarryBases(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateCarryBases");

	Params::MiniMapIcons_C_OnCreateCarryBases Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateShortPin
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnCreateShortPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateShortPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreatePartyMemberIcon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnCreatePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreatePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnDeletePartyMemberIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UMiniMapIcons_C::OnDeletePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnDeletePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestAreaIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAreaSize                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InColor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateQuestAreaIcon");

	Params::MiniMapIcons_C_OnCreateQuestAreaIcon Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.InRange = InRange;
	Parms.InAreaSize = std::move(InAreaSize);
	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.DeleteEnemyGateIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::DeleteEnemyGateIcon(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "DeleteEnemyGateIcon");

	Params::MiniMapIcons_C_DeleteEnemyGateIcon Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateFacilityIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InProfileId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBFacilityType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterProfileLocationData  InLocationData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateFacilityIcon(const class FName InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateFacilityIcon");

	Params::MiniMapIcons_C_OnCreateFacilityIcon Parms{};

	Parms.InProfileId = InProfileId;
	Parms.InType = InType;
	Parms.InLocationData = std::move(InLocationData);
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateBuffNPCIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBFieldActorFreeBuffPoint*       FreeBuffPoint                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateBuffNPCIcon(const class ASBFieldActorFreeBuffPoint* FreeBuffPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateBuffNPCIcon");

	Params::MiniMapIcons_C_OnCreateBuffNPCIcon Parms{};

	Parms.FreeBuffPoint = FreeBuffPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.AddInterruptQuestIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBInterruptQuestInstance*        InInstance                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAreaSize                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::AddInterruptQuestIcon(const class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "AddInterruptQuestIcon");

	Params::MiniMapIcons_C_AddInterruptQuestIcon Parms{};

	Parms.InInstance = InInstance;
	Parms.InLocation = std::move(InLocation);
	Parms.InRange = InRange;
	Parms.InAreaSize = std::move(InAreaSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleGateBarrier
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateDxBattleGateBarrier(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateDxBattleGateBarrier");

	Params::MiniMapIcons_C_OnCreateDxBattleGateBarrier Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.AddEnemyIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InEnemyCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMiniMapIconBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBMiniMapIconBase* UMiniMapIcons_C::AddEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "AddEnemyIcon");

	Params::MiniMapIcons_C_AddEnemyIcon Parms{};

	Parms.InEnemyCharacter = InEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MiniMapIcons.MiniMapIcons_C.AddNamedEnemyIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InEnemyCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMiniMapIconBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBMiniMapIconBase* UMiniMapIcons_C::AddNamedEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "AddNamedEnemyIcon");

	Params::MiniMapIcons_C_AddNamedEnemyIcon Parms{};

	Parms.InEnemyCharacter = InEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MiniMapIcons.MiniMapIcons_C.AddBuddyIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InEnemyCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMiniMapIconBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBMiniMapIconBase* UMiniMapIcons_C::AddBuddyIcon(class ASBEnemyCharacter* InEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "AddBuddyIcon");

	Params::MiniMapIcons_C_AddBuddyIcon Parms{};

	Parms.InEnemyCharacter = InEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateRaidIcon
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateRaidIcon");

	Params::MiniMapIcons_C_OnCreateRaidIcon Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateDungeonIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateDungeonIcon");

	Params::MiniMapIcons_C_OnCreateDungeonIcon Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreatePublicDungeonIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             RowName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreatePublicDungeonIcon");

	Params::MiniMapIcons_C_OnCreatePublicDungeonIcon Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.RowName = RowName;
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleSupplier
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateDxBattleSupplier(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateDxBattleSupplier");

	Params::MiniMapIcons_C_OnCreateDxBattleSupplier Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.DeleteDxBattleSupplierIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::DeleteDxBattleSupplierIcon(const class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "DeleteDxBattleSupplierIcon");

	Params::MiniMapIcons_C_DeleteDxBattleSupplierIcon Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.AddIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMiniMapIconBase*               InIconWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ZOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMiniMapIconBase*               IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::AddIcon(class USBMiniMapIconBase*& InIconWidget, int32 ZOrder, class USBMiniMapIconBase** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "AddIcon");

	Params::MiniMapIcons_C_AddIcon Parms{};

	Parms.InIconWidget = InIconWidget;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

	InIconWidget = Parms.InIconWidget;

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestChallenge
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBMiniMapIconType                      IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateQuestChallenge");

	Params::MiniMapIcons_C_OnCreateQuestChallenge Parms{};

	Parms.IconType = IconType;
	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestNPCIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestIconType                          QuestType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCategory2                         QuestCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateQuestNPCIcon(int32 QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateQuestNPCIcon");

	Params::MiniMapIcons_C_OnCreateQuestNPCIcon Parms{};

	Parms.QuestID = QuestID;
	Parms.QuestType = QuestType;
	Parms.QuestCategory = QuestCategory;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateUpdraftIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBUpdraft*                       InUpdraft                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateUpdraftIcon(const class ASBUpdraft* InUpdraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateUpdraftIcon");

	Params::MiniMapIcons_C_OnCreateUpdraftIcon Parms{};

	Parms.InUpdraft = InUpdraft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointDungeonIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PortalName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMiniMapIcons_C::OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIcons_C", "OnCreateWarpPointDungeonIcon");

	Params::MiniMapIcons_C_OnCreateWarpPointDungeonIcon Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.PortalName = std::move(PortalName);

	UObject::ProcessEvent(Func, &Parms);
}

}

