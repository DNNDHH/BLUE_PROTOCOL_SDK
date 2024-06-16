#pragma once

 

// Package: NotifyMessage

#include "Basic.hpp"

#include "NotifyMessage_classes.hpp"
#include "NotifyMessage_parameters.hpp"


namespace SDK
{

// Function NotifyMessage.NotifyMessage_C.ExecuteUbergraph_NotifyMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::ExecuteUbergraph_NotifyMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "ExecuteUbergraph_NotifyMessage");

	Params::NotifyMessage_C_ExecuteUbergraph_NotifyMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddItemExpiryNotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddItemExpiryNotifyMessage(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddItemExpiryNotifyMessage");

	Params::NotifyMessage_C_AddItemExpiryNotifyMessage Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddLine2NotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTextMain                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InTextSub                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessage_C::AddLine2NotifyMessage(const class FText& InTextMain, const class FText& InTextSub)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddLine2NotifyMessage");

	Params::NotifyMessage_C_AddLine2NotifyMessage Parms{};

	Parms.InTextMain = std::move(InTextMain);
	Parms.InTextSub = std::move(InTextSub);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddLine1LNotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessage_C::AddLine1LNotifyMessage(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddLine1LNotifyMessage");

	Params::NotifyMessage_C_AddLine1LNotifyMessage Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddLine1NotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessage_C::AddLine1NotifyMessage(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddLine1NotifyMessage");

	Params::NotifyMessage_C_AddLine1NotifyMessage Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddRankingRewardNotifyMessage
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::AddRankingRewardNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddRankingRewardNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.AddMailAcceptLimitNotification
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::AddMailAcceptLimitNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddMailAcceptLimitNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifyMessage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.AddMemberDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MemberName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessage_C::AddMemberDead(const class FText& MemberName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddMemberDead");

	Params::NotifyMessage_C_AddMemberDead Parms{};

	Parms.MemberName = std::move(MemberName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddNetworkCafeRewardNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBNetworkCafeReward             InNetwordCafeReward                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UNotifyMessage_C::AddNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& InNetwordCafeReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddNetworkCafeRewardNotification");

	Params::NotifyMessage_C_AddNetworkCafeRewardNotification Parms{};

	Parms.InNetwordCafeReward = std::move(InNetwordCafeReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddLoginBonusNotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessage_C::AddLoginBonusNotifyMessage(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddLoginBonusNotifyMessage");

	Params::NotifyMessage_C_AddLoginBonusNotifyMessage Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddNetworkCafePlayTimeNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NetworkCafeTotalTimePlayedToday                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddNetworkCafePlayTimeNotification(int32 NetworkCafeTotalTimePlayedToday)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddNetworkCafePlayTimeNotification");

	Params::NotifyMessage_C_AddNetworkCafePlayTimeNotification Parms{};

	Parms.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddRecipeUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRecipeType                           RecipeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddRecipeUpdated(ESBRecipeType RecipeType, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddRecipeUpdated");

	Params::NotifyMessage_C_AddRecipeUpdated Parms{};

	Parms.RecipeType = RecipeType;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddWarehouseAbilityUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             AbilityName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBWarehouseAbilityCharacterStatus      Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddWarehouseAbilityUpdated(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddWarehouseAbilityUpdated");

	Params::NotifyMessage_C_AddWarehouseAbilityUpdated Parms{};

	Parms.AbilityName = std::move(AbilityName);
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddAutoDeliveryQuestComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InQuestName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBSeasonPassQuestCycleType             InCycleType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddAutoDeliveryQuestComplete(const class FString& InQuestName, ESBSeasonPassQuestCycleType InCycleType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddAutoDeliveryQuestComplete");

	Params::NotifyMessage_C_AddAutoDeliveryQuestComplete Parms{};

	Parms.InQuestName = std::move(InQuestName);
	Parms.InCycleType = InCycleType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddWishlist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBWishListType                         Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddWishlist(const class FText& Param_Name, ESBWishListType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddWishlist");

	Params::NotifyMessage_C_AddWishlist Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddQuestUpdateSimple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddQuestUpdateSimple(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddQuestUpdateSimple");

	Params::NotifyMessage_C_AddQuestUpdateSimple Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddQuestSynopsis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddQuestSynopsis(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddQuestSynopsis");

	Params::NotifyMessage_C_AddQuestSynopsis Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddAdventurerRank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddAdventurerRank(ESBPlayerPassiveImagineSlotType Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddAdventurerRank");

	Params::NotifyMessage_C_AddAdventurerRank Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddTutorialHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTutorialHelp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddTutorialHelp(class FName InTutorialHelp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddTutorialHelp");

	Params::NotifyMessage_C_AddTutorialHelp Parms{};

	Parms.InTutorialHelp = InTutorialHelp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddAchievementGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddAchievementGained(int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddAchievementGained");

	Params::NotifyMessage_C_AddAchievementGained Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddInterruptQuestAwake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             QuestID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddInterruptQuestAwake(class FName QuestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddInterruptQuestAwake");

	Params::NotifyMessage_C_AddInterruptQuestAwake Parms{};

	Parms.QuestID = QuestID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddQuestUpdateProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAcceptedQuestInfo               PrevAcceptedQuestInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAcceptedQuestInfo               AfterAcceptedQuestInfo                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UNotifyMessage_C::AddQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo, const struct FAcceptedQuestInfo& AfterAcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddQuestUpdateProgress");

	Params::NotifyMessage_C_AddQuestUpdateProgress Parms{};

	Parms.PrevAcceptedQuestInfo = std::move(PrevAcceptedQuestInfo);
	Parms.AfterAcceptedQuestInfo = std::move(AfterAcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "Tick");

	Params::NotifyMessage_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddQuestCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddQuestCompleted(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddQuestCompleted");

	Params::NotifyMessage_C_AddQuestCompleted Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddNotifyMessageItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsNeedSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyMessage_C::AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound, bool bIsNeedSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddNotifyMessageItem");

	Params::NotifyMessage_C_AddNotifyMessageItem Parms{};

	Parms.Widget = Widget;
	Parms.Sound = Sound;
	Parms.bIsNeedSound = bIsNeedSound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.AddQuestAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::AddQuestAccepted(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "AddQuestAccepted");

	Params::NotifyMessage_C_AddQuestAccepted Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifyMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleCancel
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::UnbindQuestJingleCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "UnbindQuestJingleCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::UnbindQuestJingleUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "UnbindQuestJingleUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleClear
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::UnbindQuestJingleClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "UnbindQuestJingleClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleAccept
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::UnbindQuestJingleAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "UnbindQuestJingleAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.OnUpdatedQuestsJoin
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           QuestIndexes                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyMessage_C::OnUpdatedQuestsJoin(const TArray<int32>& QuestIndexes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnUpdatedQuestsJoin");

	Params::NotifyMessage_C_OnUpdatedQuestsJoin Parms{};

	Parms.QuestIndexes = std::move(QuestIndexes);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate2
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::UnbindQuestJingleUpdate2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "UnbindQuestJingleUpdate2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate2
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::BindQuestJingleUpdate2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "BindQuestJingleUpdate2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.OnReceiveCancelQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnReceiveCancelQuest(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnReceiveCancelQuest");

	Params::NotifyMessage_C_OnReceiveCancelQuest Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnReceiveCompleteQuestEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnReceiveCompleteQuestEvent");

	Params::NotifyMessage_C_OnReceiveCompleteQuestEvent Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnReceiveUpdateQuestProgressEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnReceiveUpdateQuestProgressEvent");

	Params::NotifyMessage_C_OnReceiveUpdateQuestProgressEvent Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnReceiveAcceptedQuestEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnReceiveAcceptedQuestEvent");

	Params::NotifyMessage_C_OnReceiveAcceptedQuestEvent Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.BindQuestJingleCancel
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::BindQuestJingleCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "BindQuestJingleCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.BindQuestJingleClear
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::BindQuestJingleClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "BindQuestJingleClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::BindQuestJingleUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "BindQuestJingleUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.BindQuestJingleAccept
// (BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::BindQuestJingleAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "BindQuestJingleAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.InitQuestJingle
// (Private, BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::InitQuestJingle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "InitQuestJingle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.TermQuestJingle
// (Private, BlueprintCallable, BlueprintEvent)

void UNotifyMessage_C::TermQuestJingle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "TermQuestJingle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessage.NotifyMessage_C.OnQuestJingleAccepted
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnQuestJingleAccepted(class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnQuestJingleAccepted");

	Params::NotifyMessage_C_OnQuestJingleAccepted Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnQuestJingleUpdate(class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnQuestJingleUpdate");

	Params::NotifyMessage_C_OnQuestJingleUpdate Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate2
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNotifyMessage_C::OnQuestJingleUpdate2(const TArray<int32>& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnQuestJingleUpdate2");

	Params::NotifyMessage_C_OnQuestJingleUpdate2 Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnQuestJingleComplete
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnQuestJingleComplete(class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnQuestJingleComplete");

	Params::NotifyMessage_C_OnQuestJingleComplete Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessage.NotifyMessage_C.OnQuestJingleCancel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessage_C::OnQuestJingleCancel(class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessage_C", "OnQuestJingleCancel");

	Params::NotifyMessage_C_OnQuestJingleCancel Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}

}

