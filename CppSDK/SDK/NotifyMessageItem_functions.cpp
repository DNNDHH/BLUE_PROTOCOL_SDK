#pragma once

 

// Package: NotifyMessageItem

#include "Basic.hpp"

#include "NotifyMessageItem_classes.hpp"
#include "NotifyMessageItem_parameters.hpp"


namespace SDK
{

// Function NotifyMessageItem.NotifyMessageItem_C.ExecuteUbergraph_NotifyMessageItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::ExecuteUbergraph_NotifyMessageItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "ExecuteUbergraph_NotifyMessageItem");

	Params::NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyMessageItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "PreConstruct");

	Params::NotifyMessageItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetSwitcher
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ENotifyMessageItemType                  Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetSwitcher(ENotifyMessageItemType Param_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetSwitcher");

	Params::NotifyMessageItem_C_SetSwitcher Parms{};

	Parms.Param_Type = Param_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetLine1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessageItem_C::SetLine1(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetLine1");

	Params::NotifyMessageItem_C_SetLine1 Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetLine1L
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessageItem_C::SetLine1L(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetLine1L");

	Params::NotifyMessageItem_C_SetLine1L Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetLine2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTextMain                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InTextSub                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessageItem_C::SetLine2(const class FText& InTextMain, const class FText& InTextSub)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetLine2");

	Params::NotifyMessageItem_C_SetLine2 Parms{};

	Parms.InTextMain = std::move(InTextMain);
	Parms.InTextSub = std::move(InTextSub);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessageItem_C::SetScreenshot(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetScreenshot");

	Params::NotifyMessageItem_C_SetScreenshot Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetAchievement(int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetAchievement");

	Params::NotifyMessageItem_C_SetAchievement Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetAdventurerRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetAdventurerRank(ESBPlayerPassiveImagineSlotType Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetAdventurerRank");

	Params::NotifyMessageItem_C_SetAdventurerRank Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRecipeType                           Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetRecipe(ESBRecipeType Selection, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetRecipe");

	Params::NotifyMessageItem_C_SetRecipe Parms{};

	Parms.Selection = Selection;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetPartyMemberDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MemberName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessageItem_C::SetPartyMemberDead(const class FText& MemberName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetPartyMemberDead");

	Params::NotifyMessageItem_C_SetPartyMemberDead Parms{};

	Parms.MemberName = std::move(MemberName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeLoginTimeNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NetworkCafeTotalTimePlayedToday                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetNetworkCafeLoginTimeNotification(int32 NetworkCafeTotalTimePlayedToday)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetNetworkCafeLoginTimeNotification");

	Params::NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification Parms{};

	Parms.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeRewardNotification
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBNetworkCafeReward             SBNetworkCafeReward                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bSucceed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyMessageItem_C::SetNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& SBNetworkCafeReward, bool* bSucceed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetNetworkCafeRewardNotification");

	Params::NotifyMessageItem_C_SetNetworkCafeRewardNotification Parms{};

	Parms.SBNetworkCafeReward = std::move(SBNetworkCafeReward);

	UObject::ProcessEvent(Func, &Parms);

	if (bSucceed != nullptr)
		*bSucceed = Parms.bSucceed;
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetTutorialHelp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TutorialId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetTutorialHelp(class FName TutorialId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetTutorialHelp");

	Params::NotifyMessageItem_C_SetTutorialHelp Parms{};

	Parms.TutorialId = TutorialId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetWarehouseAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             AbilityName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBWarehouseAbilityCharacterStatus      Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetWarehouseAbility(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetWarehouseAbility");

	Params::NotifyMessageItem_C_SetWarehouseAbility Parms{};

	Parms.AbilityName = std::move(AbilityName);
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetWishList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBWishListType                         Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetWishList(const class FText& Param_Name, ESBWishListType Param_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetWishList");

	Params::NotifyMessageItem_C_SetWishList Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_Type = Param_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestAccepted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetQuestAccepted(const int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetQuestAccepted");

	Params::NotifyMessageItem_C_SetQuestAccepted Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestCompleted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetQuestCompleted(const int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetQuestCompleted");

	Params::NotifyMessageItem_C_SetQuestCompleted Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateProgress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAcceptedQuestInfo               AcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bValidProgressUiInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBQuestProgressItemUIInfo       SBQuestProgressItemUIInfo                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyMessageItem_C::SetQuestUpdateProgress(const struct FAcceptedQuestInfo& AcceptedQuestInfo, bool bValidProgressUiInfo, const struct FSBQuestProgressItemUIInfo& SBQuestProgressItemUIInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetQuestUpdateProgress");

	Params::NotifyMessageItem_C_SetQuestUpdateProgress Parms{};

	Parms.AcceptedQuestInfo = std::move(AcceptedQuestInfo);
	Parms.bValidProgressUiInfo = bValidProgressUiInfo;
	Parms.SBQuestProgressItemUIInfo = std::move(SBQuestProgressItemUIInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetInterruptQuestAwake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetInterruptQuestAwake(class FName QuestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetInterruptQuestAwake");

	Params::NotifyMessageItem_C_SetInterruptQuestAwake Parms{};

	Parms.QuestID = QuestID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestSynopsisAdded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetQuestSynopsisAdded(const int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetQuestSynopsisAdded");

	Params::NotifyMessageItem_C_SetQuestSynopsisAdded Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateSImple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetQuestUpdateSImple(const int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetQuestUpdateSImple");

	Params::NotifyMessageItem_C_SetQuestUpdateSImple Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetAutoDeliveryQuestComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSeasonPassQuestCycleType             InCycleType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InQuestName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetAutoDeliveryQuestComplete(ESBSeasonPassQuestCycleType InCycleType, const class FString& InQuestName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetAutoDeliveryQuestComplete");

	Params::NotifyMessageItem_C_SetAutoDeliveryQuestComplete Parms{};

	Parms.InCycleType = InCycleType;
	Parms.InQuestName = std::move(InQuestName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshotFileName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetScreenshotFileName(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetScreenshotFileName");

	Params::NotifyMessageItem_C_SetScreenshotFileName Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetRankingReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNotifyMessageItem_C::SetRankingReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetRankingReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessageItem.NotifyMessageItem_C.SetItemExpiry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_C::SetItemExpiry(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_C", "SetItemExpiry");

	Params::NotifyMessageItem_C_SetItemExpiry Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}

