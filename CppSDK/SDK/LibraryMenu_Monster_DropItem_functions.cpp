#pragma once

 

// Package: LibraryMenu_Monster_DropItem

#include "Basic.hpp"

#include "LibraryMenu_Monster_DropItem_classes.hpp"
#include "LibraryMenu_Monster_DropItem_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewIconVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Rare                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_DropItem_C::SetData(EItemType ItemType, int32 ItemId, int32 LevelMin, int32 LevelMax, bool NewIconVisible, bool Rare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DropItem_C", "SetData");

	Params::LibraryMenu_Monster_DropItem_C_SetData Parms{};

	Parms.ItemType = ItemType;
	Parms.ItemId = ItemId;
	Parms.LevelMin = LevelMin;
	Parms.LevelMax = LevelMax;
	Parms.NewIconVisible = NewIconVisible;
	Parms.Rare = Rare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.DropMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OpenCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_DropItem_C::DropMask(int32 OpenCount, int32 NowCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DropItem_C", "DropMask");

	Params::LibraryMenu_Monster_DropItem_C_DropMask Parms{};

	Parms.OpenCount = OpenCount;
	Parms.NowCount = NowCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetDataLottery
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Rare                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_DropItem_C::SetDataLottery(ESBRewardItemType RewardType, int32 ItemId, int32 LevelMin, int32 LevelMax, bool Rare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DropItem_C", "SetDataLottery");

	Params::LibraryMenu_Monster_DropItem_C_SetDataLottery Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemId = ItemId;
	Parms.LevelMin = LevelMin;
	Parms.LevelMax = LevelMax;
	Parms.Rare = Rare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C.SetUnknownData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Rare                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_DropItem_C::SetUnknownData(int32 LevelMin, int32 LevelMax, bool Rare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_DropItem_C", "SetUnknownData");

	Params::LibraryMenu_Monster_DropItem_C_SetUnknownData Parms{};

	Parms.LevelMin = LevelMin;
	Parms.LevelMax = LevelMax;
	Parms.Rare = Rare;

	UObject::ProcessEvent(Func, &Parms);
}

}

