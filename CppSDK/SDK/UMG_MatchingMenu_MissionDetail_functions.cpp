#pragma once

 

// Package: UMG_MatchingMenu_MissionDetail

#include "Basic.hpp"

#include "UMG_MatchingMenu_MissionDetail_classes.hpp"
#include "UMG_MatchingMenu_MissionDetail_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::OnCloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnCloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnClickRewardIcon__DelegateSignature");

	Params::UMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickSupplyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ExecuteUbergraph_UMG_MatchingMenu_MissionDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::ExecuteUbergraph_UMG_MatchingMenu_MissionDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "ExecuteUbergraph_UMG_MatchingMenu_MissionDetail");

	Params::UMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Class
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::OnClose_Class()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnClose_Class");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Quest
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::OnClose_Quest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnClose_Quest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature");

	Params::UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature");

	Params::UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature");

	Params::UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseEntryCondition
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::OnCloseEntryCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnCloseEntryCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EntryConditionType                      EntryConditionType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature(EntryConditionType EntryConditionType, int32 Value, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature");

	Params::UMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature Parms{};

	Parms.EntryConditionType = EntryConditionType;
	Parms.Value = Value;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIconEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::OnClickRewardIconEvent(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "OnClickRewardIconEvent");

	Params::UMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       DungeonMapInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MatchingMenu_MissionDetail_C::SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetDungeonInfo");

	Params::UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo Parms{};

	Parms.DungeonMapInfo = std::move(DungeonMapInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       DungeonMapInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MatchingMenu_MissionDetail_C::SetDungeonInfo2(const struct FSBMapInfo& DungeonMapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetDungeonInfo2");

	Params::UMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2 Parms{};

	Parms.DungeonMapInfo = std::move(DungeonMapInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeLimit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetTimeLimit(int32 TimeLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetTimeLimit");

	Params::UMG_MatchingMenu_MissionDetail_C_SetTimeLimit Parms{};

	Parms.TimeLimit = TimeLimit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit2
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_MissionDetail_C::SetTimeLimit2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetTimeLimit2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RequiredBattleScore                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelSync                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequiredAdventurerRank                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_EntryConditionId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBEntryConditionPartyState             RequiredPartyState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequiredClassLevel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     Param_EntryConditionQuest                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<ESBClassType>                    Param_EntryConditionClass                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   EntryConditionSubClassLv                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   EntryConditionScbNum                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetEntryCondition(int32 RequiredBattleScore, int32 LevelSync, int32 RequiredAdventurerRank, int32 Param_EntryConditionId, ESBEntryConditionPartyState RequiredPartyState, int32 RequiredClassLevel, TArray<class FName>& Param_EntryConditionQuest, TArray<ESBClassType>& Param_EntryConditionClass, int32 EntryConditionSubClassLv, int32 EntryConditionScbNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetEntryCondition");

	Params::UMG_MatchingMenu_MissionDetail_C_SetEntryCondition Parms{};

	Parms.RequiredBattleScore = RequiredBattleScore;
	Parms.LevelSync = LevelSync;
	Parms.RequiredAdventurerRank = RequiredAdventurerRank;
	Parms.Param_EntryConditionId = Param_EntryConditionId;
	Parms.RequiredPartyState = RequiredPartyState;
	Parms.RequiredClassLevel = RequiredClassLevel;
	Parms.Param_EntryConditionQuest = std::move(Param_EntryConditionQuest);
	Parms.Param_EntryConditionClass = std::move(Param_EntryConditionClass);
	Parms.EntryConditionSubClassLv = EntryConditionSubClassLv;
	Parms.EntryConditionScbNum = EntryConditionScbNum;

	UObject::ProcessEvent(Func, &Parms);

	Param_EntryConditionQuest = std::move(Parms.Param_EntryConditionQuest);
	Param_EntryConditionClass = std::move(Parms.Param_EntryConditionClass);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RequiredBattleScore                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequiredClassLevel                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetEntryCondition2(int32 RequiredBattleScore, int32 RequiredClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetEntryCondition2");

	Params::UMG_MatchingMenu_MissionDetail_C_SetEntryCondition2 Parms{};

	Parms.RequiredBattleScore = RequiredBattleScore;
	Parms.RequiredClassLevel = RequiredClassLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetWebButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InSiteUrl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetWebButton(const class FString& InSiteUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetWebButton");

	Params::UMG_MatchingMenu_MissionDetail_C_SetWebButton Parms{};

	Parms.InSiteUrl = std::move(InSiteUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DungeonRewardId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DungeonGameMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList(class FName DungeonId, class FName DungeonRewardId, const class FString& DungeonGameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList Parms{};

	Parms.DungeonId = DungeonId;
	Parms.DungeonRewardId = DungeonRewardId;
	Parms.DungeonGameMode = std::move(DungeonGameMode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DungeonRewardId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DungeonGameMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList2(class FName DungeonId, class FName DungeonRewardId, const class FString& DungeonGameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList2");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList2 Parms{};

	Parms.DungeonId = DungeonId;
	Parms.DungeonRewardId = DungeonRewardId;
	Parms.DungeonGameMode = std::move(DungeonGameMode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstRanked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_FirstRanked(const class FString& GameMode, class FName DungeonId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_FirstRanked");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_NormalRanked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_NormalRanked(const class FString& GameMode, class FName DungeonId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_NormalRanked");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_FirstNormal(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_FirstNormal");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardId = RewardId;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_FirstNormal2(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_FirstNormal2");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2 Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardId = RewardId;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_LimitTermFirst
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_LimitTermFirst(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_LimitTermFirst");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardId = RewardId;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_Plus(const class FString& GameMode, class FName DungeonId, class FName RewardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_Plus");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardId = RewardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_Plus2(const class FString& GameMode, class FName DungeonId, class FName RewardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_Plus2");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2 Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardId = RewardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_HelpBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_HelpBonus(const class FString& GameMode, class FName DungeonId, class FName RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetRewardList_HelpBonus");

	Params::UMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus Parms{};

	Parms.GameMode = std::move(GameMode);
	Parms.DungeonId = DungeonId;
	Parms.RewardId = RewardId;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetStackB
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBStackBEnableType                     StackB                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::SetStackB(ESBStackBEnableType StackB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "SetStackB");

	Params::UMG_MatchingMenu_MissionDetail_C_SetStackB Parms{};

	Parms.StackB = StackB;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<ESBClassType>                    Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Passed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::CheckEntryConditionClass(TArray<ESBClassType>& Param_Class, bool* Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "CheckEntryConditionClass");

	Params::UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass Parms{};

	Parms.Param_Class = std::move(Param_Class);

	UObject::ProcessEvent(Func, &Parms);

	Param_Class = std::move(Parms.Param_Class);

	if (Passed != nullptr)
		*Passed = Parms.Passed;
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Passed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::CheckEntryConditionQuest(TArray<class FName>& Quest, bool* Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "CheckEntryConditionQuest");

	Params::UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest Parms{};

	Parms.Quest = std::move(Quest);

	UObject::ProcessEvent(Func, &Parms);

	Quest = std::move(Parms.Quest);

	if (Passed != nullptr)
		*Passed = Parms.Passed;
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionScb
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Lv                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::CheckEntryConditionScb(int32 Lv, int32 Num, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "CheckEntryConditionScb");

	Params::UMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb Parms{};

	Parms.Lv = Lv;
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Ex Rank by Class Lv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Lv                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rank                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::Get_Ex_Rank_by_Class_Lv(int32 Lv, int32* Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "Get Ex Rank by Class Lv");

	Params::UMG_MatchingMenu_MissionDetail_C_Get_Ex_Rank_by_Class_Lv Parms{};

	Parms.Lv = Lv;

	UObject::ProcessEvent(Func, &Parms);

	if (Rank != nullptr)
		*Rank = Parms.Rank;
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ClearRewardList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHelpMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_MissionDetail_C::ClearRewardList(bool IsHelpMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "ClearRewardList");

	Params::UMG_MatchingMenu_MissionDetail_C_ClearRewardList Parms{};

	Parms.IsHelpMode = IsHelpMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Reward Search Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ModeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SearchName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_MissionDetail_C::Get_Reward_Search_Name(int32 ModeId, class FName* SearchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_MissionDetail_C", "Get Reward Search Name");

	Params::UMG_MatchingMenu_MissionDetail_C_Get_Reward_Search_Name Parms{};

	Parms.ModeId = ModeId;

	UObject::ProcessEvent(Func, &Parms);

	if (SearchName != nullptr)
		*SearchName = Parms.SearchName;
}

}

