#pragma once

 

// Package: LibraryMenu_AchievementDetails

#include "Basic.hpp"

#include "LibraryMenu_AchievementDetails_classes.hpp"
#include "LibraryMenu_AchievementDetails_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnGetRewardItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_AchievementDetails_C::OnGetRewardItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "OnGetRewardItem__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnSetAchievement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_AchievementDetails_C::OnSetAchievement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "OnSetAchievement__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClickRewardIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  InMasterReward                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ULibraryMenu_AchievementDetails_C::OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "OnClickRewardIcon__DelegateSignature");

	Params::LibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature Parms{};

	Parms.InMasterReward = std::move(InMasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClicked_AchievementRewardsBtn__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMailData>              OutRewardsData                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           OutRewardsIds                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULibraryMenu_AchievementDetails_C::OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>& OutRewardsData, TArray<int32>& OutRewardsIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "OnClicked_AchievementRewardsBtn__DelegateSignature");

	Params::LibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature Parms{};

	Parms.OutRewardsData = std::move(OutRewardsData);
	Parms.OutRewardsIds = std::move(OutRewardsIds);

	UObject::ProcessEvent(Func, &Parms);

	OutRewardsData = std::move(Parms.OutRewardsData);
	OutRewardsIds = std::move(Parms.OutRewardsIds);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.ExecuteUbergraph_LibraryMenu_AchievementDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementDetails_C::ExecuteUbergraph_LibraryMenu_AchievementDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "ExecuteUbergraph_LibraryMenu_AchievementDetails");

	Params::LibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.RewardIconClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementDetails_C::RewardIconClick(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "RewardIconClick");

	Params::LibraryMenu_AchievementDetails_C_RewardIconClick Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_AchievementDetails_C::BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SaveAchievementSelectEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementDetails_C::SaveAchievementSelectEvent(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "SaveAchievementSelectEvent");

	Params::LibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    OutIsSetAchievement                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementDetails_C::BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature(bool OutIsSetAchievement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature");

	Params::LibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature Parms{};

	Parms.OutIsSetAchievement = OutIsSetAchievement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_AchievementDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetDetailsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementDetails_C::SetDetailsVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "SetDetailsVisibility");

	Params::LibraryMenu_AchievementDetails_C_SetDetailsVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Set Achievement Id
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAchievementMasterData           AchievementMasterData                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSBCharacterAchievementDataInfo  CharacterAchievementData                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDateTime                        InLoadDateTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementDetails_C::Set_Achievement_Id(const struct FAchievementMasterData& AchievementMasterData, const struct FSBCharacterAchievementDataInfo& CharacterAchievementData, const struct FDateTime& InLoadDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "Set Achievement Id");

	Params::LibraryMenu_AchievementDetails_C_Set_Achievement_Id Parms{};

	Parms.AchievementMasterData = std::move(AchievementMasterData);
	Parms.CharacterAchievementData = std::move(CharacterAchievementData);
	Parms.InLoadDateTime = std::move(InLoadDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEneble                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   RewardIdList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsRecieved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementDetails_C::SetReward(bool IsEneble, TArray<class FString>& RewardIdList, bool IsRecieved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "SetReward");

	Params::LibraryMenu_AchievementDetails_C_SetReward Parms{};

	Parms.IsEneble = IsEneble;
	Parms.RewardIdList = std::move(RewardIdList);
	Parms.IsRecieved = IsRecieved;

	UObject::ProcessEvent(Func, &Parms);

	RewardIdList = std::move(Parms.RewardIdList);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetLimitedTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TeamID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                        InLoadDateTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementDetails_C::SetLimitedTime(const class FString& TeamID, const struct FDateTime& InLoadDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "SetLimitedTime");

	Params::LibraryMenu_AchievementDetails_C_SetLimitedTime Parms{};

	Parms.TeamID = std::move(TeamID);
	Parms.InLoadDateTime = std::move(InLoadDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.GetAchievementReward
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSBMailData>              OutMailData                                            (Parm, OutParm)

void ULibraryMenu_AchievementDetails_C::GetAchievementReward(TArray<struct FSBMailData>* OutMailData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "GetAchievementReward");

	Params::LibraryMenu_AchievementDetails_C_GetAchievementReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMailData != nullptr)
		*OutMailData = std::move(Parms.OutMailData);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRankId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementDetails_C::SetRank(int32 InRankId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "SetRank");

	Params::LibraryMenu_AchievementDetails_C_SetRank Parms{};

	Parms.InRankId = InRankId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRewardIconAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAlpha                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementDetails_C::SetRewardIconAlpha(float InAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "SetRewardIconAlpha");

	Params::LibraryMenu_AchievementDetails_C_SetRewardIconAlpha Parms{};

	Parms.InAlpha = InAlpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.CheckAchievementReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSBMailData>              OutMailDatas                                           (Parm, OutParm)

void ULibraryMenu_AchievementDetails_C::CheckAchievementReward(TArray<struct FSBMailData>* OutMailDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementDetails_C", "CheckAchievementReward");

	Params::LibraryMenu_AchievementDetails_C_CheckAchievementReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMailDatas != nullptr)
		*OutMailDatas = std::move(Parms.OutMailDatas);
}

}

