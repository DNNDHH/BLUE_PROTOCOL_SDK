#pragma once

 

// Package: UMG_MatchingMenu_Reward

#include "Basic.hpp"

#include "UMG_MatchingMenu_Reward_classes.hpp"
#include "UMG_MatchingMenu_Reward_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Reward_C::OnClickIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "OnClickIcon__DelegateSignature");

	Params::UMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ExecuteUbergraph_UMG_MatchingMenu_Reward
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Reward_C::ExecuteUbergraph_UMG_MatchingMenu_Reward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "ExecuteUbergraph_UMG_MatchingMenu_Reward");

	Params::UMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIconEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestRewardIcon_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Reward_C::OnClickIconEvent(class UQuestRewardIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "OnClickIconEvent");

	Params::UMG_MatchingMenu_Reward_C_OnClickIconEvent Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_GameMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             Param_MapId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Reward_C::Setup(const class FString& Param_GameMode, class FName Param_MapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "Setup");

	Params::UMG_MatchingMenu_Reward_C_Setup Parms{};

	Parms.Param_GameMode = std::move(Param_GameMode);
	Parms.Param_MapId = Param_MapId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RewardInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FloorNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FloorMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::SetReward(class FName RewardInfo, int32 FloorNum, int32 FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetReward");

	Params::UMG_MatchingMenu_Reward_C_SetReward Parms{};

	Parms.RewardInfo = RewardInfo;
	Parms.FloorNum = FloorNum;
	Parms.FloorMax = FloorMax;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RewardInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FloorNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FloorMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::SetReward2(class FName RewardInfo, int32 FloorNum, int32 FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetReward2");

	Params::UMG_MatchingMenu_Reward_C_SetReward2 Parms{};

	Parms.RewardInfo = RewardInfo;
	Parms.FloorNum = FloorNum;
	Parms.FloorMax = FloorMax;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardRanked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardSetType                        Param_RewardSetType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::SetRewardRanked(ESBRewardSetType Param_RewardSetType, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetRewardRanked");

	Params::UMG_MatchingMenu_Reward_C_SetRewardRanked Parms{};

	Parms.Param_RewardSetType = Param_RewardSetType;
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardTower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::SetRewardTower(const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetRewardTower");

	Params::UMG_MatchingMenu_Reward_C_SetRewardTower Parms{};

	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetCaption
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Reward_C::SetCaption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetCaption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Reward_C::SetClearLineTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetClearLineTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Reward_C::SetClearLineScore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetClearLineScore");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Reward_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetMasterDataDungeonRankedReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bExist                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterDungeonRankedReward     MasterDataDungeonRankedReward                          (Parm, OutParm, NoDestructor)

void UUMG_MatchingMenu_Reward_C::GetMasterDataDungeonRankedReward(bool* bExist, struct FSBMasterDungeonRankedReward* MasterDataDungeonRankedReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetMasterDataDungeonRankedReward");

	Params::UMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bExist != nullptr)
		*bExist = Parms.bExist;

	if (MasterDataDungeonRankedReward != nullptr)
		*MasterDataDungeonRankedReward = std::move(Parms.MasterDataDungeonRankedReward);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ConvertMaximumValueToTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaximumValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UUMG_MatchingMenu_Reward_C::ConvertMaximumValueToTime(int32 MaximumValue, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "ConvertMaximumValueToTime");

	Params::UMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime Parms{};

	Parms.MaximumValue = MaximumValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardWithAmountRange   MasterRewardWithAmountRange                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountFixed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountLottery                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AmountChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::GetRewardAmount(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetRewardAmount");

	Params::UMG_MatchingMenu_Reward_C_GetRewardAmount Parms{};

	Parms.MasterRewardWithAmountRange = std::move(MasterRewardWithAmountRange);
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountFixed != nullptr)
		*AmountFixed = Parms.AmountFixed;

	if (AmountLottery != nullptr)
		*AmountLottery = Parms.AmountLottery;

	if (AmountChanged != nullptr)
		*AmountChanged = Parms.AmountChanged;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetAmountByRewardBoost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardWithAmountRange   MasterRewardWithAmountRange                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FSBRewardBoostMissionMasterData  RewardBoostData                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    RewardBoostIsValid                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   AmountFixed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountLottery                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AmountChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::GetAmountByRewardBoost(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetAmountByRewardBoost");

	Params::UMG_MatchingMenu_Reward_C_GetAmountByRewardBoost Parms{};

	Parms.MasterRewardWithAmountRange = std::move(MasterRewardWithAmountRange);
	Parms.RewardBoostData = std::move(RewardBoostData);
	Parms.RewardBoostIsValid = RewardBoostIsValid;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountFixed != nullptr)
		*AmountFixed = Parms.AmountFixed;

	if (AmountLottery != nullptr)
		*AmountLottery = Parms.AmountLottery;

	if (AmountChanged != nullptr)
		*AmountChanged = Parms.AmountChanged;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardWithAmountRange   MasterRewardWithAmountRange                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountFixed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountLottery                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AmountChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::GetRewardAmountByItem(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetRewardAmountByItem");

	Params::UMG_MatchingMenu_Reward_C_GetRewardAmountByItem Parms{};

	Parms.MasterRewardWithAmountRange = std::move(MasterRewardWithAmountRange);

	UObject::ProcessEvent(Func, &Parms);

	if (AmountFixed != nullptr)
		*AmountFixed = Parms.AmountFixed;

	if (AmountLottery != nullptr)
		*AmountLottery = Parms.AmountLottery;

	if (AmountChanged != nullptr)
		*AmountChanged = Parms.AmountChanged;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByNetworkCafe
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardWithAmountRange   MasterRewardWithAmountRange                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountFixed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountLottery                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AmountChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::GetRewardAmountByNetworkCafe(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetRewardAmountByNetworkCafe");

	Params::UMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe Parms{};

	Parms.MasterRewardWithAmountRange = std::move(MasterRewardWithAmountRange);

	UObject::ProcessEvent(Func, &Parms);

	if (AmountFixed != nullptr)
		*AmountFixed = Parms.AmountFixed;

	if (AmountLottery != nullptr)
		*AmountLottery = Parms.AmountLottery;

	if (AmountChanged != nullptr)
		*AmountChanged = Parms.AmountChanged;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByLiquidMemory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardWithAmountRange   MasterRewardWithAmountRange                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountFixed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountLottery                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AmountChanged                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::GetRewardAmountByLiquidMemory(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32* AmountFixed, int32* AmountLottery, bool* AmountChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetRewardAmountByLiquidMemory");

	Params::UMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory Parms{};

	Parms.MasterRewardWithAmountRange = std::move(MasterRewardWithAmountRange);

	UObject::ProcessEvent(Func, &Parms);

	if (AmountFixed != nullptr)
		*AmountFixed = Parms.AmountFixed;

	if (AmountLottery != nullptr)
		*AmountLottery = Parms.AmountLottery;

	if (AmountChanged != nullptr)
		*AmountChanged = Parms.AmountChanged;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             RewardInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBMasterRewardWithAmountRange>OutRewardList                                          (Parm, OutParm)

void UUMG_MatchingMenu_Reward_C::GetRewardList(class FName RewardInfo, TArray<struct FSBMasterRewardWithAmountRange>* OutRewardList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "GetRewardList");

	Params::UMG_MatchingMenu_Reward_C_GetRewardList Parms{};

	Parms.RewardInfo = RewardInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRewardList != nullptr)
		*OutRewardList = std::move(Parms.OutRewardList);
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_All
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ShouldBeRemoved                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::ShouldTheFirstRewardBeRemoved_All(bool* ShouldBeRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "ShouldTheFirstRewardBeRemoved_All");

	Params::UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldBeRemoved != nullptr)
		*ShouldBeRemoved = Parms.ShouldBeRemoved;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_Individually
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ClearLine                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldBeRemoved                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::ShouldTheFirstRewardBeRemoved_Individually(int32 ClearLine, bool* ShouldBeRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "ShouldTheFirstRewardBeRemoved_Individually");

	Params::UMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually Parms{};

	Parms.ClearLine = ClearLine;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldBeRemoved != nullptr)
		*ShouldBeRemoved = Parms.ShouldBeRemoved;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldRankedRewardBeAdded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardSetType                        Param_RewardSetType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMasterDungeonRankedReward     MasterDungeonRankedReward                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    ShouldBeAdded                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Reward_C::ShouldRankedRewardBeAdded(ESBRewardSetType Param_RewardSetType, const struct FSBMasterDungeonRankedReward& MasterDungeonRankedReward, bool* ShouldBeAdded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "ShouldRankedRewardBeAdded");

	Params::UMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded Parms{};

	Parms.Param_RewardSetType = Param_RewardSetType;
	Parms.MasterDungeonRankedReward = std::move(MasterDungeonRankedReward);

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldBeAdded != nullptr)
		*ShouldBeAdded = Parms.ShouldBeAdded;
}


// Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetTerm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Reward_C::SetTerm(class FName RewardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Reward_C", "SetTerm");

	Params::UMG_MatchingMenu_Reward_C_SetTerm Parms{};

	Parms.RewardId = RewardId;

	UObject::ProcessEvent(Func, &Parms);
}

}

