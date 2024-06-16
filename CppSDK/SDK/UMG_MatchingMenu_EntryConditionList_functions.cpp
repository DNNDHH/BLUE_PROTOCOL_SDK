#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionList

#include "Basic.hpp"

#include "UMG_MatchingMenu_EntryConditionList_classes.hpp"
#include "UMG_MatchingMenu_EntryConditionList_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EntryConditionType                      EntryConditionType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::OnPressedButton__DelegateSignature(EntryConditionType EntryConditionType, int32 Value, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "OnPressedButton__DelegateSignature");

	Params::UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature Parms{};

	Parms.EntryConditionType = EntryConditionType;
	Parms.Value = Value;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButtonClass__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::OnPressedButtonClass__DelegateSignature(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "OnPressedButtonClass__DelegateSignature");

	Params::UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButtonQuest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::OnPressedButtonQuest__DelegateSignature(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "OnPressedButtonQuest__DelegateSignature");

	Params::UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList");

	Params::UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_EntryConditionList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_EntryConditionList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_BattleScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   BattleScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_BattleScore(bool Passed, int32 BattleScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_BattleScore");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore Parms{};

	Parms.Passed = Passed;
	Parms.BattleScore = BattleScore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_Equipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   EntryConditionId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_Equipment(bool Passed, int32 EntryConditionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_Equipment");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment Parms{};

	Parms.Passed = Passed;
	Parms.EntryConditionId = EntryConditionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_Common
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_MatchingMenu_EntryConditionListItem_C*Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_Common(class UUMG_MatchingMenu_EntryConditionListItem_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_Common");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_Equipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryConditionId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::OnPressedButton_Equipment(int32 EntryConditionId, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "OnPressedButton_Equipment");

	Params::UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment Parms{};

	Parms.EntryConditionId = EntryConditionId;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_AdventurerRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AdventurerRank                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_AdventurerRank(bool Passed, int32 AdventurerRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_AdventurerRank");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank Parms{};

	Parms.Passed = Passed;
	Parms.AdventurerRank = AdventurerRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_PartyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBEntryConditionPartyState             RequiredPartyState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_PartyState(bool Passed, ESBEntryConditionPartyState RequiredPartyState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_PartyState");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState Parms{};

	Parms.Passed = Passed;
	Parms.RequiredPartyState = RequiredPartyState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.SetVisibleUnderline
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_EntryConditionList_C::SetVisibleUnderline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "SetVisibleUnderline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_ClassLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ClassLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_ClassLevel(bool Passed, int32 ClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_ClassLevel");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel Parms{};

	Parms.Passed = Passed;
	Parms.ClassLevel = ClassLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_SubClassBonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MaxSubClassLv                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxScbNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_SubClassBonus(bool Passed, int32 MaxSubClassLv, int32 MaxScbNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_SubClassBonus");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus Parms{};

	Parms.Passed = Passed;
	Parms.MaxSubClassLv = MaxSubClassLv;
	Parms.MaxScbNum = MaxScbNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_QuestClear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_QuestClear(bool Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_QuestClear");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear Parms{};

	Parms.Passed = Passed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_ClassType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Passed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_EntryConditionList_C::AddCondition_ClassType(bool Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "AddCondition_ClassType");

	Params::UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType Parms{};

	Parms.Passed = Passed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_ClassType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryConditionId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::OnPressedButton_ClassType(int32 EntryConditionId, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "OnPressedButton_ClassType");

	Params::UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType Parms{};

	Parms.EntryConditionId = EntryConditionId;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_QuestClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryConditionId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionList_C::OnPressedButton_QuestClear(int32 EntryConditionId, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionList_C", "OnPressedButton_QuestClear");

	Params::UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear Parms{};

	Parms.EntryConditionId = EntryConditionId;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}

}

