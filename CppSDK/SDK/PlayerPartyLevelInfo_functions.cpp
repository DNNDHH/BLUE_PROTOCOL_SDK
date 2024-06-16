#pragma once

 

// Package: PlayerPartyLevelInfo

#include "Basic.hpp"

#include "PlayerPartyLevelInfo_classes.hpp"
#include "PlayerPartyLevelInfo_parameters.hpp"


namespace SDK
{

// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.ExecuteUbergraph_PlayerPartyLevelInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::ExecuteUbergraph_PlayerPartyLevelInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "ExecuteUbergraph_PlayerPartyLevelInfo");

	Params::PlayerPartyLevelInfo_C_ExecuteUbergraph_PlayerPartyLevelInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.CompleteEvent_OnGetEquipItemsForCharactersDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBattleMemberLevelSyncInfo>BattleMemberLevelSyncInfos                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerPartyLevelInfo_C::CompleteEvent_OnGetEquipItemsForCharactersDelegate(const bool bWasSuccessful, const int32 RetCode, const TArray<struct FBattleMemberLevelSyncInfo>& BattleMemberLevelSyncInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "CompleteEvent_OnGetEquipItemsForCharactersDelegate");

	Params::PlayerPartyLevelInfo_C_CompleteEvent_OnGetEquipItemsForCharactersDelegate Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.RetCode = RetCode;
	Parms.BattleMemberLevelSyncInfos = std::move(BattleMemberLevelSyncInfos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerPartyLevelInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Event_OnChangedPartyMemberCount
// (BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::Event_OnChangedPartyMemberCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "Event_OnChangedPartyMemberCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerPartyLevelInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.DownloadAndSetFaceImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCaptureImageMatching_C*          CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::DownloadAndSetFaceImage(class UCaptureImageMatching_C* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "DownloadAndSetFaceImage");

	Params::PlayerPartyLevelInfo_C_DownloadAndSetFaceImage Parms{};

	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::InitializePlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "InitializePlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::InitializeParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "InitializeParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeCommon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::InitializeCommon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "InitializeCommon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.InitializeClassInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MemberIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBRuntimeTextBlock*              RuntimeText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClassIconL_C*                    ClassIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCaptureImageMatching_C*          CaptureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::InitializeClassInfo(int32 MemberIndex, class USBRuntimeTextBlock* RuntimeText, class UClassIconL_C* ClassIcon, class UCaptureImageMatching_C* CaptureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "InitializeClassInfo");

	Params::PlayerPartyLevelInfo_C_InitializeClassInfo Parms{};

	Parms.MemberIndex = MemberIndex;
	Parms.RuntimeText = RuntimeText;
	Parms.ClassIcon = ClassIcon;
	Parms.CaptureImage = CaptureImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.HideAdventurerRank
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::HideAdventurerRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "HideAdventurerRank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStackBEnableType                     StackBEnableType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMapInfo                       MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bNeedCorrection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPartyLevelInfo_C::SetLevelSyncValue(int32 LevelSyncValue, ESBStackBEnableType StackBEnableType, const struct FSBMapInfo& MapInfo, bool bNeedCorrection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetLevelSyncValue");

	Params::PlayerPartyLevelInfo_C_SetLevelSyncValue Parms{};

	Parms.LevelSyncValue = LevelSyncValue;
	Parms.StackBEnableType = StackBEnableType;
	Parms.MapInfo = std::move(MapInfo);
	Parms.bNeedCorrection = bNeedCorrection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValuePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::SetLevelSyncValuePlayer(int32 LevelSyncValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetLevelSyncValuePlayer");

	Params::PlayerPartyLevelInfo_C_SetLevelSyncValuePlayer Parms{};

	Parms.LevelSyncValue = LevelSyncValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::SetLevelSyncValueParty(int32 LevelSyncValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetLevelSyncValueParty");

	Params::PlayerPartyLevelInfo_C_SetLevelSyncValueParty Parms{};

	Parms.LevelSyncValue = LevelSyncValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::SetLevelSyncValueMe(int32 LevelSyncValue, class UTextBlock* Text, class UImage* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetLevelSyncValueMe");

	Params::PlayerPartyLevelInfo_C_SetLevelSyncValueMe Parms{};

	Parms.LevelSyncValue = LevelSyncValue;
	Parms.Text = Text;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelSyncValueMember
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MemberIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::SetLevelSyncValueMember(int32 LevelSyncValue, int32 MemberIndex, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetLevelSyncValueMember");

	Params::PlayerPartyLevelInfo_C_SetLevelSyncValueMember Parms{};

	Parms.LevelSyncValue = LevelSyncValue;
	Parms.MemberIndex = MemberIndex;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetLevelText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::SetLevelText(class UTextBlock* Text, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetLevelText");

	Params::PlayerPartyLevelInfo_C_SetLevelText Parms{};

	Parms.Text = Text;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateLevelBySync
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MemberIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutLevelSyncIsValid                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPartyLevelInfo_C::UpdateLevelBySync(int32 LevelSyncValue, int32 MemberIndex, class UTextBlock* Text, bool* OutLevelSyncIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "UpdateLevelBySync");

	Params::PlayerPartyLevelInfo_C_UpdateLevelBySync Parms{};

	Parms.LevelSyncValue = LevelSyncValue;
	Parms.MemberIndex = MemberIndex;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLevelSyncIsValid != nullptr)
		*OutLevelSyncIsValid = Parms.OutLevelSyncIsValid;
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.GetLevelSyncInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MemberIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutLevelSyncIsValid                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutClassLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::GetLevelSyncInfo(int32 LevelSyncValue, int32 MemberIndex, bool* OutLevelSyncIsValid, int32* OutClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "GetLevelSyncInfo");

	Params::PlayerPartyLevelInfo_C_GetLevelSyncInfo Parms{};

	Parms.LevelSyncValue = LevelSyncValue;
	Parms.MemberIndex = MemberIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLevelSyncIsValid != nullptr)
		*OutLevelSyncIsValid = Parms.OutLevelSyncIsValid;

	if (OutClassLevel != nullptr)
		*OutClassLevel = Parms.OutClassLevel;
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetTextColorBySync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SyncIsValid                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPartyLevelInfo_C::SetTextColorBySync(bool SyncIsValid, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetTextColorBySync");

	Params::PlayerPartyLevelInfo_C_SetTextColorBySync Parms{};

	Parms.SyncIsValid = SyncIsValid;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.SetBattleScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncTarget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStackBEnableType                     StackBEnableType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlayerMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPartyLevelInfo_C::SetBattleScore(int32 LevelSyncTarget, ESBStackBEnableType StackBEnableType, bool IsPlayerMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "SetBattleScore");

	Params::PlayerPartyLevelInfo_C_SetBattleScore Parms{};

	Parms.LevelSyncTarget = LevelSyncTarget;
	Parms.StackBEnableType = StackBEnableType;
	Parms.IsPlayerMode = IsPlayerMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.Set Battle Score Core
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelSyncTarget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStackBEnableType                     StackBEnableType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlayerMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerPartyLevelInfo_C::Set_Battle_Score_Core(int32 LevelSyncTarget, ESBStackBEnableType StackBEnableType, bool IsPlayerMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "Set Battle Score Core");

	Params::PlayerPartyLevelInfo_C_Set_Battle_Score_Core Parms{};

	Parms.LevelSyncTarget = LevelSyncTarget;
	Parms.StackBEnableType = StackBEnableType;
	Parms.IsPlayerMode = IsPlayerMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.UpdateEquipItemsForCharacters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::UpdateEquipItemsForCharacters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "UpdateEquipItemsForCharacters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPartyLevelInfo.PlayerPartyLevelInfo_C.RequestGetEquipItemsForCharacters
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPartyLevelInfo_C::RequestGetEquipItemsForCharacters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPartyLevelInfo_C", "RequestGetEquipItemsForCharacters");

	UObject::ProcessEvent(Func, nullptr);
}

}

