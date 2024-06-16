#pragma once

 

// Package: ResultRewardList

#include "Basic.hpp"

#include "ResultRewardList_classes.hpp"
#include "ResultRewardList_parameters.hpp"


namespace SDK
{

// Function ResultRewardList.ResultRewardList_C.ExecuteUbergraph_ResultRewardList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::ExecuteUbergraph_ResultRewardList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "ExecuteUbergraph_ResultRewardList");

	Params::ResultRewardList_C_ExecuteUbergraph_ResultRewardList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResultRewardList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UResultRewardList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.SetMoney
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::SetMoney(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetMoney");

	Params::ResultRewardList_C_SetMoney Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::SetExp(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetExp");

	Params::ResultRewardList_C_SetExp Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetGC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::SetGC(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetGC");

	Params::ResultRewardList_C_SetGC Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             InOwnItems                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetItem(TArray<struct FOwnItemInfo>& InOwnItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetItem");

	Params::ResultRewardList_C_SetItem Parms{};

	Parms.InOwnItems = std::move(InOwnItems);

	UObject::ProcessEvent(Func, &Parms);

	InOwnItems = std::move(Parms.InOwnItems);
}


// Function ResultRewardList.ResultRewardList_C.SetSkyCoin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::SetSkyCoin(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetSkyCoin");

	Params::ResultRewardList_C_SetSkyCoin Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     InReawrdIDList                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetReward(TArray<class FName>& InReawrdIDList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetReward");

	Params::ResultRewardList_C_SetReward Parms{};

	Parms.InReawrdIDList = std::move(InReawrdIDList);

	UObject::ProcessEvent(Func, &Parms);

	InReawrdIDList = std::move(Parms.InReawrdIDList);
}


// Function ResultRewardList.ResultRewardList_C.AddInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IsTeamBonusPercent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::AddInfo(const class FString& InUniqueId, int32 InAmount, int32 InId, int32 InStorageNumber, ESBRewardItemType InType, int32 IsTeamBonusPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "AddInfo");

	Params::ResultRewardList_C_AddInfo Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InAmount = InAmount;
	Parms.InId = InId;
	Parms.InStorageNumber = InStorageNumber;
	Parms.InType = InType;
	Parms.IsTeamBonusPercent = IsTeamBonusPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.ClearInfo
// (Private, BlueprintCallable, BlueprintEvent)

void UResultRewardList_C::ClearInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "ClearInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.AddIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResultRewardList_C::AddIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "AddIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.CreateIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsClickToShowDetail                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestRewardIcon_C*               OutIcon                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::CreateIcon(bool bIsClickToShowDetail, class UQuestRewardIcon_C** OutIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "CreateIcon");

	Params::ResultRewardList_C_CreateIcon Parms{};

	Parms.bIsClickToShowDetail = bIsClickToShowDetail;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIcon != nullptr)
		*OutIcon = Parms.OutIcon;
}


// Function ResultRewardList.ResultRewardList_C.SetSKill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBSkillParam>            InSkillParam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetSKill(TArray<struct FSBSkillParam>& InSkillParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetSKill");

	Params::ResultRewardList_C_SetSKill Parms{};

	Parms.InSkillParam = std::move(InSkillParam);

	UObject::ProcessEvent(Func, &Parms);

	InSkillParam = std::move(Parms.InSkillParam);
}


// Function ResultRewardList.ResultRewardList_C.DeleteIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResultRewardList_C::DeleteIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "DeleteIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.SetAlertIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsYellow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::SetAlertIcon(bool IsYellow, bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetAlertIcon");

	Params::ResultRewardList_C_SetAlertIcon Parms{};

	Parms.IsYellow = IsYellow;
	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetAmountColorType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ColorName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResultRewardList_C::SetAmountColorType(const class FString& ColorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetAmountColorType");

	Params::ResultRewardList_C_SetAmountColorType Parms{};

	Parms.ColorName = std::move(ColorName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetVisibleIconBG
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::SetVisibleIconBG(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetVisibleIconBG");

	Params::ResultRewardList_C_SetVisibleIconBG Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.Debug Dump Own Item Info
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResultRewardList_C::Debug_Dump_Own_Item_Info()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "Debug Dump Own Item Info");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.Debug Dump Integer Array
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::Debug_Dump_Integer_Array(TArray<int32>& InArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "Debug Dump Integer Array");

	Params::ResultRewardList_C_Debug_Dump_Integer_Array Parms{};

	Parms.InArray = std::move(InArray);

	UObject::ProcessEvent(Func, &Parms);

	InArray = std::move(Parms.InArray);
}


// Function ResultRewardList.ResultRewardList_C.Debug Dump Lottery Groups Rewards
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RewardId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBMasterRewardLotteryGroupsRewards>Rewards                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::Debug_Dump_Lottery_Groups_Rewards(class FName RewardId, TArray<struct FSBMasterRewardLotteryGroupsRewards>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "Debug Dump Lottery Groups Rewards");

	Params::ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards Parms{};

	Parms.RewardId = RewardId;
	Parms.Rewards = std::move(Rewards);

	UObject::ProcessEvent(Func, &Parms);

	Rewards = std::move(Parms.Rewards);
}


// Function ResultRewardList.ResultRewardList_C.SetRoseOrb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::SetRoseOrb(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetRoseOrb");

	Params::ResultRewardList_C_SetRoseOrb Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetToken
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::SetToken(int32 InId, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetToken");

	Params::ResultRewardList_C_SetToken Parms{};

	Parms.InId = InId;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetTokens
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBRewardToken>           InTokenInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetTokens(TArray<struct FSBRewardToken>& InTokenInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetTokens");

	Params::ResultRewardList_C_SetTokens Parms{};

	Parms.InTokenInfo = std::move(InTokenInfo);

	UObject::ProcessEvent(Func, &Parms);

	InTokenInfo = std::move(Parms.InTokenInfo);
}


// Function ResultRewardList.ResultRewardList_C.SetMedal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetMedal(TArray<int32>& InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetMedal");

	Params::ResultRewardList_C_SetMedal Parms{};

	Parms.InId = std::move(InId);

	UObject::ProcessEvent(Func, &Parms);

	InId = std::move(Parms.InId);
}


// Function ResultRewardList.ResultRewardList_C.SetOverLimit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBOverLimit                     SBOverLimit                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetOverLimit(const struct FSBOverLimit& SBOverLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetOverLimit");

	Params::ResultRewardList_C_SetOverLimit Parms{};

	Parms.SBOverLimit = std::move(SBOverLimit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.Build
// (Public, BlueprintCallable, BlueprintEvent)

void UResultRewardList_C::Build()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "Build");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ResultRewardList.ResultRewardList_C.SetOwnItemInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             Param_OwnItemInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetOwnItemInfo(TArray<struct FOwnItemInfo>& Param_OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetOwnItemInfo");

	Params::ResultRewardList_C_SetOwnItemInfo Parms{};

	Parms.Param_OwnItemInfo = std::move(Param_OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param_OwnItemInfo = std::move(Parms.Param_OwnItemInfo);
}


// Function ResultRewardList.ResultRewardList_C.SetRewardControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardControl           InRewardControl                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UResultRewardList_C::SetRewardControl(const struct FSBMasterRewardControl& InRewardControl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetRewardControl");

	Params::ResultRewardList_C_SetRewardControl Parms{};

	Parms.InRewardControl = std::move(InRewardControl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetBuffBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBuffItemBonusLuno_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBuffItemBonusEXP_                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBuffItemBonusGC_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::SetBuffBonus(bool IsBuffItemBonusLuno_, bool IsBuffItemBonusEXP_, bool IsBuffItemBonusGC_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetBuffBonus");

	Params::ResultRewardList_C_SetBuffBonus Parms{};

	Parms.IsBuffItemBonusLuno_ = IsBuffItemBonusLuno_;
	Parms.IsBuffItemBonusEXP_ = IsBuffItemBonusEXP_;
	Parms.IsBuffItemBonusGC_ = IsBuffItemBonusGC_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ResultRewardList.ResultRewardList_C.SetTeamBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMasterGuildBonus>      InTeamBonus                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultRewardList_C::SetTeamBonus(TArray<struct FSBMasterGuildBonus>& InTeamBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "SetTeamBonus");

	Params::ResultRewardList_C_SetTeamBonus Parms{};

	Parms.InTeamBonus = std::move(InTeamBonus);

	UObject::ProcessEvent(Func, &Parms);

	InTeamBonus = std::move(Parms.InTeamBonus);
}


// Function ResultRewardList.ResultRewardList_C.IsMargeType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBRewardItemType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::IsMargeType(ESBRewardItemType Type, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsMargeType");

	Params::ResultRewardList_C_IsMargeType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultRewardList.ResultRewardList_C.isBonus
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQuestRewardIconInfo             InInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::IsBonus(const struct FQuestRewardIconInfo& InInfo, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "isBonus");

	Params::ResultRewardList_C_IsBonus Parms{};

	Parms.InInfo = std::move(InInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultRewardList.ResultRewardList_C.GetIconNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UResultRewardList_C::GetIconNum() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetIconNum");

	Params::ResultRewardList_C_GetIconNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.GetOwnItemInfo
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FOwnItemInfo>             Param_OwnItemInfo                                      (Parm, OutParm)

void UResultRewardList_C::GetOwnItemInfo(TArray<struct FOwnItemInfo>* Param_OwnItemInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetOwnItemInfo");

	Params::ResultRewardList_C_GetOwnItemInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_OwnItemInfo != nullptr)
		*Param_OwnItemInfo = std::move(Parms.Param_OwnItemInfo);
}


// Function ResultRewardList.ResultRewardList_C.FindOwnItemInfo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     ItemInfo                                               (Parm, OutParm)

void UResultRewardList_C::FindOwnItemInfo(const class FString& InUniqueId, bool* Result, struct FOwnItemInfo* ItemInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "FindOwnItemInfo");

	Params::ResultRewardList_C_FindOwnItemInfo Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ItemInfo != nullptr)
		*ItemInfo = std::move(Parms.ItemInfo);
}


// Function ResultRewardList.ResultRewardList_C.IsShowDetailWindow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::IsShowDetailWindow(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsShowDetailWindow");

	Params::ResultRewardList_C_IsShowDetailWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultRewardList.ResultRewardList_C.GetRewardControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBMasterRewardControl           Param_RewardControl                                    (Parm, OutParm, NoDestructor)

void UResultRewardList_C::GetRewardControl(struct FSBMasterRewardControl* Param_RewardControl) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetRewardControl");

	Params::ResultRewardList_C_GetRewardControl Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_RewardControl != nullptr)
		*Param_RewardControl = std::move(Parms.Param_RewardControl);
}


// Function ResultRewardList.ResultRewardList_C.IsRewardControlLunoMulti
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsRewardControlLunoMulti() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsRewardControlLunoMulti");

	Params::ResultRewardList_C_IsRewardControlLunoMulti Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsRewardControlEXPMulti
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsRewardControlEXPMulti() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsRewardControlEXPMulti");

	Params::ResultRewardList_C_IsRewardControlEXPMulti Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountMulti
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsRewardControlMaterialAmountMulti() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsRewardControlMaterialAmountMulti");

	Params::ResultRewardList_C_IsRewardControlMaterialAmountMulti Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountAdd
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsRewardControlMaterialAmountAdd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsRewardControlMaterialAmountAdd");

	Params::ResultRewardList_C_IsRewardControlMaterialAmountAdd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialRate
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsRewardControlMaterialRate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsRewardControlMaterialRate");

	Params::ResultRewardList_C_IsRewardControlMaterialRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsBuffLunoBonus
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::IsBuffLunoBonus(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsBuffLunoBonus");

	Params::ResultRewardList_C_IsBuffLunoBonus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultRewardList.ResultRewardList_C.IsBuffEXPBonus
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::IsBuffEXPBonus(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsBuffEXPBonus");

	Params::ResultRewardList_C_IsBuffEXPBonus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultRewardList.ResultRewardList_C.IsBuffGCBonus
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResultRewardList_C::IsBuffGCBonus(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsBuffGCBonus");

	Params::ResultRewardList_C_IsBuffGCBonus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ResultRewardList.ResultRewardList_C.GetTeamBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSBMasterGuildBonus>      Param_TeamBonus                                        (Parm, OutParm)

void UResultRewardList_C::GetTeamBonus(TArray<struct FSBMasterGuildBonus>* Param_TeamBonus) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetTeamBonus");

	Params::ResultRewardList_C_GetTeamBonus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_TeamBonus != nullptr)
		*Param_TeamBonus = std::move(Parms.Param_TeamBonus);
}


// Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBRewardItemType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                                   Percent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UResultRewardList_C::GetTeamBonusPercentForType(ESBRewardItemType InType, int32* Percent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetTeamBonusPercentForType");

	Params::ResultRewardList_C_GetTeamBonusPercentForType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForItemID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   InItemID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                                   Percent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UResultRewardList_C::GetTeamBonusPercentForItemID(const int32& InItemID, int32* Percent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetTeamBonusPercentForItemID");

	Params::ResultRewardList_C_GetTeamBonusPercentForItemID Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForRewardID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             InRewardId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                                   Percent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UResultRewardList_C::GetTeamBonusPercentForRewardID(const class FName& InRewardId, int32* Percent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "GetTeamBonusPercentForRewardID");

	Params::ResultRewardList_C_GetTeamBonusPercentForRewardID Parms{};

	Parms.InRewardId = InRewardId;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsGC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBRewardItemType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsGC(ESBRewardItemType InType, int32 InId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsGC");

	Params::ResultRewardList_C_IsGC Parms{};

	Parms.InType = InType;
	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.IsIgnoreReward
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBMasterReward                  SBMasterReward                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UResultRewardList_C::IsIgnoreReward(const struct FSBMasterReward& SBMasterReward) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "IsIgnoreReward");

	Params::ResultRewardList_C_IsIgnoreReward Parms{};

	Parms.SBMasterReward = std::move(SBMasterReward);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ResultRewardList.ResultRewardList_C.ConvertItemTypeToRewardType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       RewardItemType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResultRewardList_C::ConvertItemTypeToRewardType(EItemType ItemType, ESBRewardItemType* RewardItemType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ResultRewardList_C", "ConvertItemTypeToRewardType");

	Params::ResultRewardList_C_ConvertItemTypeToRewardType Parms{};

	Parms.ItemType = ItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (RewardItemType != nullptr)
		*RewardItemType = Parms.RewardItemType;
}

}

