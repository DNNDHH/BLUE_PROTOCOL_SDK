#pragma once

 

// Package: CharacterCardList

#include "Basic.hpp"

#include "CharacterCardList_classes.hpp"
#include "CharacterCardList_parameters.hpp"


namespace SDK
{

// Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfos__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::OnGetCharacterCardInfos__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "OnGetCharacterCardInfos__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.ExecuteUbergraph_CharacterCardList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardList_C::ExecuteUbergraph_CharacterCardList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "ExecuteUbergraph_CharacterCardList");

	Params::CharacterCardList_C_ExecuteUbergraph_CharacterCardList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.GoToCreateAdventurerCardSequence
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::GoToCreateAdventurerCardSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "GoToCreateAdventurerCardSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.OnGameStarted
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::OnGameStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "OnGameStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.ForceAdventurerCardClose
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::ForceAdventurerCardClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "ForceAdventurerCardClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.OnClosePlayerProfile
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::OnClosePlayerProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "OnClosePlayerProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.DestPlayerProfile
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::DestPlayerProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "DestPlayerProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.OnIsGetPlayerProfileDetailMenuData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardList_C::OnIsGetPlayerProfileDetailMenuData(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "OnIsGetPlayerProfileDetailMenuData");

	Params::CharacterCardList_C_OnIsGetPlayerProfileDetailMenuData Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.UnbindIsGetPlayerProfileDetailMenuDataEvent
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::UnbindIsGetPlayerProfileDetailMenuDataEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "UnbindIsGetPlayerProfileDetailMenuDataEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfoEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBPlayerCharacterCardData>PlayerCharacterCardDatas                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharacterCardList_C::OnGetCharacterCardInfoEvent(const bool bWasSuccessful, const int32 RetCode, const TArray<struct FSBPlayerCharacterCardData>& PlayerCharacterCardDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "OnGetCharacterCardInfoEvent");

	Params::CharacterCardList_C_OnGetCharacterCardInfoEvent Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.RetCode = RetCode;
	Parms.PlayerCharacterCardDatas = std::move(PlayerCharacterCardDatas);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.HandlePartyMemberUpdate
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::HandlePartyMemberUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "HandlePartyMemberUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.OnCharacterCardClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bInIsMe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardList_C::OnCharacterCardClickedEvent(const class FString& InCharacterId, bool bInIsMe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "OnCharacterCardClickedEvent");

	Params::CharacterCardList_C_OnCharacterCardClickedEvent Parms{};

	Parms.InCharacterId = std::move(InCharacterId);
	Parms.bInIsMe = bInIsMe;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCardList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCardList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "PreConstruct");

	Params::CharacterCardList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCharacterCardList_C::WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.StartMissionIntroInAnimationEvent
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::StartMissionIntroInAnimationEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "StartMissionIntroInAnimationEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InPartyMemberCharacterIds                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharacterCardList_C::Init(TArray<class FString>& InPartyMemberCharacterIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "Init");

	Params::CharacterCardList_C_Init Parms{};

	Parms.InPartyMemberCharacterIds = std::move(InPartyMemberCharacterIds);

	UObject::ProcessEvent(Func, &Parms);

	InPartyMemberCharacterIds = std::move(Parms.InPartyMemberCharacterIds);
}


// Function CharacterCardList.CharacterCardList_C.SetupCharacterCardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBPlayerCharacterCardData       InCharacterCardData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bInIsMe                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBPartyMemberState*              InPartyMemberState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInDoNewMemberJoinInAnimation                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardList_C::SetupCharacterCardData(int32 InId, const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState, bool bInDoNewMemberJoinInAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "SetupCharacterCardData");

	Params::CharacterCardList_C_SetupCharacterCardData Parms{};

	Parms.InId = InId;
	Parms.InCharacterCardData = std::move(InCharacterCardData);
	Parms.bInIsMe = bInIsMe;
	Parms.InPartyMemberState = InPartyMemberState;
	Parms.bInDoNewMemberJoinInAnimation = bInDoNewMemberJoinInAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.RequestCharacterCardListUpdate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InCharacterIds                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharacterCardList_C::RequestCharacterCardListUpdate(TArray<class FString>& InCharacterIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "RequestCharacterCardListUpdate");

	Params::CharacterCardList_C_RequestCharacterCardListUpdate Parms{};

	Parms.InCharacterIds = std::move(InCharacterIds);

	UObject::ProcessEvent(Func, &Parms);

	InCharacterIds = std::move(Parms.InCharacterIds);
}


// Function CharacterCardList.CharacterCardList_C.FindPartyMemberStateByCharacterId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class USBPartyMemberState*>      InPartyMemberStateList                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USBPartyMemberState*              OutPartyMemberState                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardList_C::FindPartyMemberStateByCharacterId(const class FString& InCharacterId, TArray<class USBPartyMemberState*>& InPartyMemberStateList, class USBPartyMemberState** OutPartyMemberState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "FindPartyMemberStateByCharacterId");

	Params::CharacterCardList_C_FindPartyMemberStateByCharacterId Parms{};

	Parms.InCharacterId = std::move(InCharacterId);
	Parms.InPartyMemberStateList = std::move(InPartyMemberStateList);

	UObject::ProcessEvent(Func, &Parms);

	InPartyMemberStateList = std::move(Parms.InPartyMemberStateList);

	if (OutPartyMemberState != nullptr)
		*OutPartyMemberState = Parms.OutPartyMemberState;
}


// Function CharacterCardList.CharacterCardList_C.GetIsAdventurerCardOpened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOutIsOpened                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardList_C::GetIsAdventurerCardOpened(bool* bOutIsOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "GetIsAdventurerCardOpened");

	Params::CharacterCardList_C_GetIsAdventurerCardOpened Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutIsOpened != nullptr)
		*bOutIsOpened = Parms.bOutIsOpened;
}


// Function CharacterCardList.CharacterCardList_C.StartCharacterCardNewPartyMemberInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterCardBase_C*             InCharacterCard                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardList_C::StartCharacterCardNewPartyMemberInAnimation(class UCharacterCardBase_C* InCharacterCard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "StartCharacterCardNewPartyMemberInAnimation");

	Params::CharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation Parms{};

	Parms.InCharacterCard = InCharacterCard;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardList.CharacterCardList_C.InitForDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::InitForDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "InitForDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.UnbindOnGetCharacterCardInfosDelegate
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCardList_C::UnbindOnGetCharacterCardInfosDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "UnbindOnGetCharacterCardInfosDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardList.CharacterCardList_C.UpdateCharacterCardList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBPlayerCharacterCardData>InListData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InNoNewMemberJoinInAnimation                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardList_C::UpdateCharacterCardList(TArray<struct FSBPlayerCharacterCardData>& InListData, bool InNoNewMemberJoinInAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardList_C", "UpdateCharacterCardList");

	Params::CharacterCardList_C_UpdateCharacterCardList Parms{};

	Parms.InListData = std::move(InListData);
	Parms.InNoNewMemberJoinInAnimation = InNoNewMemberJoinInAnimation;

	UObject::ProcessEvent(Func, &Parms);

	InListData = std::move(Parms.InListData);
}

}

