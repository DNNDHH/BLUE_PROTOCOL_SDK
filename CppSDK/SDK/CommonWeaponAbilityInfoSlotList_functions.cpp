#pragma once

 

// Package: CommonWeaponAbilityInfoSlotList

#include "Basic.hpp"

#include "CommonWeaponAbilityInfoSlotList_classes.hpp"
#include "CommonWeaponAbilityInfoSlotList_parameters.hpp"


namespace SDK
{

// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotList_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlotList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "ExecuteUbergraph_CommonWeaponAbilityInfoSlotList");

	Params::CommonWeaponAbilityInfoSlotList_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "PreConstruct");

	Params::CommonWeaponAbilityInfoSlotList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.InitAllSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonWeaponAbilityInfoSlotList_C::InitAllSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "InitAllSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SwitchSlotInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSlotUnlocked                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::SwitchSlotInfoType(bool InIsSlotUnlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SwitchSlotInfoType");

	Params::CommonWeaponAbilityInfoSlotList_C_SwitchSlotInfoType Parms{};

	Parms.InIsSlotUnlocked = InIsSlotUnlocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonWeaponAbilityInfoSlot_C*   OutSlot                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotList_C::GetSlot(int32 InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlot_C** OutSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "GetSlot");

	Params::CommonWeaponAbilityInfoSlotList_C_GetSlot Parms{};

	Parms.InSlotId = InSlotId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutSlot != nullptr)
		*OutSlot = Parms.OutSlot;
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bHasValidAbility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData, bool* bHasValidAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetSlotInfo");

	Params::CommonWeaponAbilityInfoSlotList_C_SetSlotInfo Parms{};

	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);

	if (bHasValidAbility != nullptr)
		*bHasValidAbility = Parms.bHasValidAbility;
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoByUniqueId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bHasValidAbility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::SetSlotInfoByUniqueId(const class FString& UniqueId, bool* bHasValidAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetSlotInfoByUniqueId");

	Params::CommonWeaponAbilityInfoSlotList_C_SetSlotInfoByUniqueId Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (bHasValidAbility != nullptr)
		*bHasValidAbility = Parms.bHasValidAbility;
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetVLineVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::SetVLineVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetVLineVisibility");

	Params::CommonWeaponAbilityInfoSlotList_C_SetVLineVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonWeaponAbilityInfoSlotList_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetTextColor");

	Params::CommonWeaponAbilityInfoSlotList_C_SetTextColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetRecipeId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecipeId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotList_C::SetRecipeId(int32 RecipeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetRecipeId");

	Params::CommonWeaponAbilityInfoSlotList_C_SetRecipeId Parms{};

	Parms.RecipeId = RecipeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetUnknownSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonWeaponAbilityInfoSlotList_C::SetUnknownSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetUnknownSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetLotteryReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardLotteryGroupsRewardsLotteryReward                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::SetLotteryReward(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetLotteryReward");

	Params::CommonWeaponAbilityInfoSlotList_C_SetLotteryReward Parms{};

	Parms.LotteryReward = std::move(LotteryReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetUnlockSlotMinMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterRewardLotteryGroupsRewardsLotteryReward                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                                   Min                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotList_C::GetUnlockSlotMinMax(const struct FSBMasterRewardLotteryGroupsRewards& LotteryReward, int32* Min, int32* Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "GetUnlockSlotMinMax");

	Params::CommonWeaponAbilityInfoSlotList_C_GetUnlockSlotMinMax Parms{};

	Parms.LotteryReward = std::move(LotteryReward);

	UObject::ProcessEvent(Func, &Parms);

	if (Min != nullptr)
		*Min = Parms.Min;

	if (Max != nullptr)
		*Max = Parms.Max;
}


// Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoBase
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InUnlockedSlotNum                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBCharacterWeaponPerkData>InPerkList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InUsedSlotNum                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHasValidAbility                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotList_C::SetSlotInfoBase(int32 InUnlockedSlotNum, TArray<struct FSBCharacterWeaponPerkData>& InPerkList, int32 InUsedSlotNum, bool* bHasValidAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotList_C", "SetSlotInfoBase");

	Params::CommonWeaponAbilityInfoSlotList_C_SetSlotInfoBase Parms{};

	Parms.InUnlockedSlotNum = InUnlockedSlotNum;
	Parms.InPerkList = std::move(InPerkList);
	Parms.InUsedSlotNum = InUsedSlotNum;

	UObject::ProcessEvent(Func, &Parms);

	InPerkList = std::move(Parms.InPerkList);

	if (bHasValidAbility != nullptr)
		*bHasValidAbility = Parms.bHasValidAbility;
}

}

