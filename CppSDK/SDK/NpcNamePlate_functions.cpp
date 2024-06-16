#pragma once

 

// Package: NpcNamePlate

#include "Basic.hpp"

#include "NpcNamePlate_classes.hpp"
#include "NpcNamePlate_parameters.hpp"


namespace SDK
{

// Function NpcNamePlate.NpcNamePlate_C.ExecuteUbergraph_NpcNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::ExecuteUbergraph_NpcNamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "ExecuteUbergraph_NpcNamePlate");

	Params::NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnDisplayStart
// (Event, Public, BlueprintEvent)

void UNpcNamePlate_C::OnDisplayStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnDisplayStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.FadeOutFinishSelectCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFadeIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcNamePlate_C::FadeOutFinishSelectCursor(bool IsFadeIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "FadeOutFinishSelectCursor");

	Params::NpcNamePlate_C_FadeOutFinishSelectCursor Parms{};

	Parms.IsFadeIn = IsFadeIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.SetScreenPositionOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InScreenPositionOffset                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetScreenPositionOffset");

	Params::NpcNamePlate_C_SetScreenPositionOffset Parms{};

	Parms.InScreenPositionOffset = std::move(InScreenPositionOffset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.SetInteractionTargetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInVisibility                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcNamePlate_C::SetInteractionTargetVisibility(const bool bInVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetInteractionTargetVisibility");

	Params::NpcNamePlate_C_SetInteractionTargetVisibility Parms{};

	Parms.bInVisibility = bInVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.UnbindChangeBalloonVisible
// (BlueprintCallable, BlueprintEvent)

void UNpcNamePlate_C::UnbindChangeBalloonVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "UnbindChangeBalloonVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcNamePlate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.AutoChangeVisible
// (Event, Public, BlueprintEvent)

void UNpcNamePlate_C::AutoChangeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "AutoChangeVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.AutoChangeInvisible
// (Event, Public, BlueprintEvent)

void UNpcNamePlate_C::AutoChangeInvisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "AutoChangeInvisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.SetChargeMax
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UNpcNamePlate_C::SetChargeMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetChargeMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.SetDepth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDepth                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::SetDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetDepth");

	Params::NpcNamePlate_C_SetDepth Parms{};

	Parms.InDepth = InDepth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnChangeBalloonVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVsiible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcNamePlate_C::OnChangeBalloonVisible(bool bVsiible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnChangeBalloonVisible");

	Params::NpcNamePlate_C_OnChangeBalloonVisible Parms{};

	Parms.bVsiible = bVsiible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.SetNpcCharacter_Internal
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  InNpcCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::SetNpcCharacter_Internal(class ASBMobCharacter* InNpcCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetNpcCharacter_Internal");

	Params::NpcNamePlate_C_SetNpcCharacter_Internal Parms{};

	Parms.InNpcCharacter = InNpcCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.SetNPCFacility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacilityType                         IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::SetNPCFacility(ESBFacilityType IconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetNPCFacility");

	Params::NpcNamePlate_C_SetNPCFacility Parms{};

	Parms.IconType = IconType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcNamePlate_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcNamePlate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.ClassChangeNotify_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InDirtyExpiredEquipmentData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNpcNamePlate_C::ClassChangeNotify_Event(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "ClassChangeNotify_Event");

	Params::NpcNamePlate_C_ClassChangeNotify_Event Parms{};

	Parms.InRetCode = InRetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InDirtyExpiredEquipmentData = std::move(InDirtyExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnLevelUp_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InPrevLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCurLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExtraExpParse                 InExtraExpParse                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UNpcNamePlate_C::OnLevelUp_Event(int32 InPrevLevel, int32 InCurLevel, const struct FSBExtraExpParse& InExtraExpParse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnLevelUp_Event");

	Params::NpcNamePlate_C_OnLevelUp_Event Parms{};

	Parms.InPrevLevel = InPrevLevel;
	Parms.InCurLevel = InCurLevel;
	Parms.InExtraExpParse = std::move(InExtraExpParse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnSetKeyValue_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcNamePlate_C::OnSetKeyValue_Event(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnSetKeyValue_Event");

	Params::NpcNamePlate_C_OnSetKeyValue_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnAdventurerRankDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::OnAdventurerRankDelegate_Event_0(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnAdventurerRankDelegate_Event_0");

	Params::NpcNamePlate_C_OnAdventurerRankDelegate_Event_0 Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnEndPlay
// (BlueprintCallable, BlueprintEvent)

void UNpcNamePlate_C::OnEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnEndPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.OnBeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  Param_NpcCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::OnBeginPlay(class ASBMobCharacter* Param_NpcCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnBeginPlay");

	Params::NpcNamePlate_C_OnBeginPlay Parms{};

	Parms.Param_NpcCharacter = Param_NpcCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnAcceptedQuestListDelegete_����_0
// (BlueprintCallable, BlueprintEvent)

void UNpcNamePlate_C::OnAcceptedQuestListDelegete______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnAcceptedQuestListDelegete_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.OnCompleteQuestDelegate_����_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestCompleteResult                    CompleteResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMailRewardData                MailRewardData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNpcNamePlate_C::OnCompleteQuestDelegate______2(int32 RetCode, int32 QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnCompleteQuestDelegate_����_2");

	Params::NpcNamePlate_C_OnCompleteQuestDelegate______2 Parms{};

	Parms.RetCode = RetCode;
	Parms.QuestIndex = QuestIndex;
	Parms.CompleteResult = CompleteResult;
	Parms.MailRewardData = std::move(MailRewardData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnUpdateQuestProgressDelegate_����_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               PrevAcceptedQuestInfo                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNpcNamePlate_C::OnUpdateQuestProgressDelegate______0(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnUpdateQuestProgressDelegate_����_0");

	Params::NpcNamePlate_C_OnUpdateQuestProgressDelegate______0 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.PrevAcceptedQuestInfo = std::move(PrevAcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnCancelQuestDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcNamePlate_C::OnCancelQuestDelegate______0(bool Result, int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnCancelQuestDelegate_����_0");

	Params::NpcNamePlate_C_OnCancelQuestDelegate______0 Parms{};

	Parms.Result = Result;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnAcceptQuestDelegate_Reset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EAcceptedQuestErrorCode                 ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAcceptedQuestInfo               AcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNpcNamePlate_C::OnAcceptQuestDelegate_Reset(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnAcceptQuestDelegate_Reset");

	Params::NpcNamePlate_C_OnAcceptQuestDelegate_Reset Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;
	Parms.RetCode = RetCode;
	Parms.AcceptedQuestInfo = std::move(AcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.OnQuestListDelegete_Reset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUnlockedQuestInfo>       QuestList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNpcNamePlate_C::OnQuestListDelegete_Reset(const TArray<struct FUnlockedQuestInfo>& QuestList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "OnQuestListDelegete_Reset");

	Params::NpcNamePlate_C_OnQuestListDelegete_Reset Parms{};

	Parms.QuestList = std::move(QuestList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNpcNamePlate_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "SetText");

	Params::NpcNamePlate_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcNamePlate.NpcNamePlate_C.UpdateQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNpcNamePlate_C::UpdateQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "UpdateQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.CheckVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UNpcNamePlate_C::CheckVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "CheckVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcNamePlate.NpcNamePlate_C.CursorInOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcNamePlate_C::CursorInOutAnim(bool bin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcNamePlate_C", "CursorInOutAnim");

	Params::NpcNamePlate_C_CursorInOutAnim Parms{};

	Parms.bin = bin;

	UObject::ProcessEvent(Func, &Parms);
}

}

