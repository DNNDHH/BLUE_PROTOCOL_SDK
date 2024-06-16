#pragma once

 

// Package: PlayerNamePlate

#include "Basic.hpp"

#include "PlayerNamePlate_classes.hpp"
#include "PlayerNamePlate_parameters.hpp"


namespace SDK
{

// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeDrawSize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        DrawSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::OnChangeDrawSize__DelegateSignature(const struct FVector2D& DrawSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnChangeDrawSize__DelegateSignature");

	Params::PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature Parms{};

	Parms.DrawSize = std::move(DrawSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeScale__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::OnChangeScale__DelegateSignature(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnChangeScale__DelegateSignature");

	Params::PlayerNamePlate_C_OnChangeScale__DelegateSignature Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.ExecuteUbergraph_PlayerNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::ExecuteUbergraph_PlayerNamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "ExecuteUbergraph_PlayerNamePlate");

	Params::PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UpdateTension
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBTensionTagType                       InTensionTagId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::UpdateTension(ESBTensionTagType InTensionTagId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UpdateTension");

	Params::PlayerNamePlate_C_UpdateTension Parms{};

	Parms.InTensionTagId = InTensionTagId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnUpdatenSimplycityPartyOn
// (Event, Public, BlueprintEvent)

void UPlayerNamePlate_C::OnUpdatenSimplycityPartyOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnUpdatenSimplycityPartyOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProfileSummaryData>PlayerProfileSummaryData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerNamePlate_C::CustomEvent_2(const TArray<struct FPlayerProfileSummaryData>& PlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "CustomEvent_2");

	Params::PlayerNamePlate_C_CustomEvent_2 Parms{};

	Parms.PlayerProfileSummaryData = std::move(PlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBTensionTagType                       TensionTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::CustomEvent_1(const ESBTensionTagType TensionTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "CustomEvent_1");

	Params::PlayerNamePlate_C_CustomEvent_1 Parms{};

	Parms.TensionTag = TensionTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateRelationshipSetting
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::PlayerStateRelationshipSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "PlayerStateRelationshipSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateSettingAfter
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::PlayerStateSettingAfter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "PlayerStateSettingAfter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnDisplayStart
// (Event, Public, BlueprintEvent)

void UPlayerNamePlate_C::OnDisplayStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnDisplayStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetScreenPositionOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InScreenPositionOffset                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetScreenPositionOffset");

	Params::PlayerNamePlate_C_SetScreenPositionOffset Parms{};

	Parms.InScreenPositionOffset = std::move(InScreenPositionOffset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetInteractionTargetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::SetInteractionTargetVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetInteractionTargetVisibility");

	Params::PlayerNamePlate_C_SetInteractionTargetVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UnbindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::UnbindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UnbindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UnbindOnClientRecieveBattleStatusDelegete
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::UnbindOnClientRecieveBattleStatusDelegete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UnbindOnClientRecieveBattleStatusDelegete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UnbindPlayerCommunicateDelegate
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::UnbindPlayerCommunicateDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UnbindPlayerCommunicateDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnFinishedFadeAnime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFadeIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::OnFinishedFadeAnime(bool IsFadeIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnFinishedFadeAnime");

	Params::PlayerNamePlate_C_OnFinishedFadeAnime Parms{};

	Parms.IsFadeIn = IsFadeIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeVisible
// (Event, Public, BlueprintEvent)

void UPlayerNamePlate_C::AutoChangeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "AutoChangeVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeInvisible
// (Event, Public, BlueprintEvent)

void UPlayerNamePlate_C::AutoChangeInvisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "AutoChangeInvisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetChargeMax
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::SetChargeMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetChargeMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetDepth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDepth                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetDepth");

	Params::PlayerNamePlate_C_SetDepth Parms{};

	Parms.InDepth = InDepth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerNamePlate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeWidthRate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidthRate                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetHpGaugeWidthRate(const float InWidthRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetHpGaugeWidthRate");

	Params::PlayerNamePlate_C_SetHpGaugeWidthRate Parms{};

	Parms.InWidthRate = InWidthRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::SetHpGaugeVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetHpGaugeVisibility");

	Params::PlayerNamePlate_C_SetHpGaugeVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetNameVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::SetNameVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetNameVisibility");

	Params::PlayerNamePlate_C_SetNameVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetInitialHpRate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HPRate                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetInitialHpRate(const float HPRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetInitialHpRate");

	Params::PlayerNamePlate_C_SetInitialHpRate Parms{};

	Parms.HPRate = HPRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetHostility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHostility                            Hostility                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetHostility(const ESBHostility Hostility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetHostility");

	Params::PlayerNamePlate_C_SetHostility Parms{};

	Parms.Hostility = Hostility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetCharacter_Internal
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetCharacter_Internal(class ASBCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetCharacter_Internal");

	Params::PlayerNamePlate_C_SetCharacter_Internal Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetTeamNumber
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamNumber                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetTeamNumber(const int32 TeamNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetTeamNumber");

	Params::PlayerNamePlate_C_SetTeamNumber Parms{};

	Parms.TeamNumber = TeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeLifeGaugeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHealChainColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::OnChangeLifeGaugeColor(bool IsHealChainColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnChangeLifeGaugeColor");

	Params::PlayerNamePlate_C_OnChangeLifeGaugeColor Parms{};

	Parms.IsHealChainColor = IsHealChainColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnSetHealChainUIVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::OnSetHealChainUIVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnSetHealChainUIVisibility");

	Params::PlayerNamePlate_C_OnSetHealChainUIVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetHpRate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HPRate                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetHpRate(const float HPRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetHpRate");

	Params::PlayerNamePlate_C_SetHpRate Parms{};

	Parms.HPRate = HPRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetName(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetName");

	Params::PlayerNamePlate_C_SetName Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerNamePlate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnUpdateNameColor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bParty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::OnUpdateNameColor(bool bParty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnUpdateNameColor");

	Params::PlayerNamePlate_C_OnUpdateNameColor Parms{};

	Parms.bParty = bParty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UnbindAwakeInterruptQuestDelegete
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::UnbindAwakeInterruptQuestDelegete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UnbindAwakeInterruptQuestDelegete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.PartyUnbindDelegates
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::PartyUnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "PartyUnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.BeginBind Party
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::BeginBind_Party()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "BeginBind Party");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Update Prog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::Update_Prog(class USBPlayerInterruptQuestComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Update Prog");

	Params::PlayerNamePlate_C_Update_Prog Parms{};

	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SucInterruptQuest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::SucInterruptQuest(const class FName& InQuestId, bool InSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SucInterruptQuest");

	Params::PlayerNamePlate_C_SucInterruptQuest Parms{};

	Parms.InQuestId = InQuestId;
	Parms.InSuccess = InSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.RepTeam
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::RepTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "RepTeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Repinterrupt
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInterruptQuestPlayInfo        InPlayInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPlayerNamePlate_C::Repinterrupt(const struct FSBInterruptQuestPlayInfo& InPlayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Repinterrupt");

	Params::PlayerNamePlate_C_Repinterrupt Parms{};

	Parms.InPlayInfo = std::move(InPlayInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Leaveout
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::Leaveout(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Leaveout");

	Params::PlayerNamePlate_C_Leaveout Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.JoinIninterrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInFirst                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::JoinIninterrupt(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "JoinIninterrupt");

	Params::PlayerNamePlate_C_JoinIninterrupt Parms{};

	Parms.InComponent = InComponent;
	Parms.bInFirst = bInFirst;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.InAwake
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::InAwake(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "InAwake");

	Params::PlayerNamePlate_C_InAwake Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetAchievementSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementSelected                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetAchievementSelected(const int32 InAchievementSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetAchievementSelected");

	Params::PlayerNamePlate_C_SetAchievementSelected Parms{};

	Parms.InAchievementSelected = InAchievementSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Bind TeamTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::Bind_TeamTag(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Bind TeamTag");

	Params::PlayerNamePlate_C_Bind_TeamTag Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.InitOptions
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::InitOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "InitOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.UpdateOptionNamePlate
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::UpdateOptionNamePlate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UpdateOptionNamePlate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.InitOptionValue
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::InitOptionValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "InitOptionValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeNamePlateOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::OnChangeNamePlateOption(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "OnChangeNamePlateOption");

	Params::PlayerNamePlate_C_OnChangeNamePlateOption Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.TermOptionConnect
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::TermOptionConnect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "TermOptionConnect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.InitOptionConnect
// (BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::InitOptionConnect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "InitOptionConnect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Update Prev Life Gauge BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::Update_Prev_Life_Gauge_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Update Prev Life Gauge BP");

	Params::PlayerNamePlate_C_Update_Prev_Life_Gauge_BP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetLifeGaugeCurTintColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     TintColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetLifeGaugeCurTintColor(const struct FLinearColor& TintColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetLifeGaugeCurTintColor");

	Params::PlayerNamePlate_C_SetLifeGaugeCurTintColor Parms{};

	Parms.TintColor = std::move(TintColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.CursorInOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::CursorInOutAnim(bool bin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "CursorInOutAnim");

	Params::PlayerNamePlate_C_CursorInOutAnim Parms{};

	Parms.bin = bin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.IsInteractionUIVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibilty                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerNamePlate_C::IsInteractionUIVisibility(bool* IsVisibilty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "IsInteractionUIVisibility");

	Params::PlayerNamePlate_C_IsInteractionUIVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisibilty != nullptr)
		*IsVisibilty = Parms.IsVisibilty;
}


// Function PlayerNamePlate.PlayerNamePlate_C.UpdateFriendIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProfileSummaryData>InPlayerProfileSummaryData                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerNamePlate_C::UpdateFriendIcon(TArray<struct FPlayerProfileSummaryData>& InPlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "UpdateFriendIcon");

	Params::PlayerNamePlate_C_UpdateFriendIcon Parms{};

	Parms.InPlayerProfileSummaryData = std::move(InPlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);

	InPlayerProfileSummaryData = std::move(Parms.InPlayerProfileSummaryData);
}


// Function PlayerNamePlate.PlayerNamePlate_C.SetupBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::SetupBuffIcon(class ASBCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "SetupBuffIcon");

	Params::PlayerNamePlate_C_SetupBuffIcon Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerNamePlate.PlayerNamePlate_C.ResetBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UPlayerNamePlate_C::ResetBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "ResetBuffIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerNamePlate.PlayerNamePlate_C.Get Resurrection Remain Time Rate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerNamePlate_C::Get_Resurrection_Remain_Time_Rate(float* Rate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerNamePlate_C", "Get Resurrection Remain Time Rate");

	Params::PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}

}

