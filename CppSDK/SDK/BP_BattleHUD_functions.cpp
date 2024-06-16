#pragma once

 

// Package: BP_BattleHUD

#include "Basic.hpp"

#include "BP_BattleHUD_classes.hpp"
#include "BP_BattleHUD_parameters.hpp"


namespace SDK
{

// Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OnCloseRmShop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnCloseRmShop__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ExecuteUbergraph_BP_BattleHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::ExecuteUbergraph_BP_BattleHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ExecuteUbergraph_BP_BattleHUD");

	Params::BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleContentsHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteBattleContentsHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteBattleContentsHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::OnVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnVisibleSetting");

	Params::BP_BattleHUD_C_OnVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShowSimpleAlertByID
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             TextId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::ShowSimpleAlertByID(const class FName& TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShowSimpleAlertByID");

	Params::BP_BattleHUD_C_ShowSimpleAlertByID Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnGameSettingAfter
// (Event, Public, BlueprintEvent)

void ABP_BattleHUD_C::OnGameSettingAfter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnGameSettingAfter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.RegistClassHud
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::RegistClassHud(class UUserWidget* Widget, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "RegistClassHud");

	Params::BP_BattleHUD_C_RegistClassHud Parms{};

	Parms.Widget = Widget;
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnGetMaterial(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnGetMaterial");

	Params::BP_BattleHUD_C_OnGetMaterial Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnReceiveUpdateQuestProgressEvent2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnReceiveUpdateQuestProgressEvent2(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnReceiveUpdateQuestProgressEvent2");

	Params::BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UnbindBalloonWIdget
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::UnbindBalloonWIdget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UnbindBalloonWIdget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnReceivedMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBChatUIMessage                 Mess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleHUD_C::OnReceivedMessage(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnReceivedMessage");

	Params::BP_BattleHUD_C_OnReceivedMessage Parms{};

	Parms.Message = Message;
	Parms.Mess = std::move(Mess);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.BindBalloonWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::BindBalloonWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "BindBalloonWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_BattleHUD_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int32                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ReceiveDrawHUD");

	Params::BP_BattleHUD_C_ReceiveDrawHUD Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BattleHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddItemExpiryNotifyMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddItemExpiryNotifyMessage(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddItemExpiryNotifyMessage");

	Params::BP_BattleHUD_C_AddItemExpiryNotifyMessage Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddLine2NotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMainMessage                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             InSubMessage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BattleHUD_C::AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddLine2NotifyMessage");

	Params::BP_BattleHUD_C_AddLine2NotifyMessage Parms{};

	Parms.InMainMessage = std::move(InMainMessage);
	Parms.InSubMessage = std::move(InSubMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddLine1LNotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BattleHUD_C::AddLine1LNotifyMessage(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddLine1LNotifyMessage");

	Params::BP_BattleHUD_C_AddLine1LNotifyMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddLine1NotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BattleHUD_C::AddLine1NotifyMessage(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddLine1NotifyMessage");

	Params::BP_BattleHUD_C_AddLine1NotifyMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddRankingRewardNotifyMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::AddRankingRewardNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddRankingRewardNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddMailAcceptLimitNotifyMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::AddMailAcceptLimitNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddMailAcceptLimitNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddMemberDeadNotifyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MemberName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleHUD_C::AddMemberDeadNotifyMessage(const class FText& MemberName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddMemberDeadNotifyMessage");

	Params::BP_BattleHUD_C_AddMemberDeadNotifyMessage Parms{};

	Parms.MemberName = std::move(MemberName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddLoginBonusNotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BattleHUD_C::AddLoginBonusNotifyMessage(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddLoginBonusNotifyMessage");

	Params::BP_BattleHUD_C_AddLoginBonusNotifyMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NetworkCafeTotalTimePlayedToday                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLoginTimeOnly                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::AddNetworkCafeLoginTimeNotificationMessage(const int32 NetworkCafeTotalTimePlayedToday, const bool bIsLoginTimeOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddNetworkCafeLoginTimeNotificationMessage");

	Params::BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage Parms{};

	Parms.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
	Parms.bIsLoginTimeOnly = bIsLoginTimeOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddRecipeMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRecipeType                           RecipeType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecepiId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddRecipeMessage(const ESBRecipeType RecipeType, const int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddRecipeMessage");

	Params::BP_BattleHUD_C_AddRecipeMessage Parms{};

	Parms.RecipeType = RecipeType;
	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddWarehouseAbilityNotifyMessage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBWarehouseAbilityNotifyUIInfo>InParam                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BattleHUD_C::AddWarehouseAbilityNotifyMessage(const TArray<struct FSBWarehouseAbilityNotifyUIInfo>& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddWarehouseAbilityNotifyMessage");

	Params::BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddAutoDeliveryQuestCompleteMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSeasonPassQuestCycleType             InCycle                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           QuestName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddAutoDeliveryQuestCompleteMessage(const ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddAutoDeliveryQuestCompleteMessage");

	Params::BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage Parms{};

	Parms.InCycle = InCycle;
	Parms.QuestName = std::move(QuestName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial_Core
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnGetMaterial_Core(class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnGetMaterial_Core");

	Params::BP_BattleHUD_C_OnGetMaterial_Core Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankUpdateCompleteMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         Slot                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddAdventurerRankUpdateCompleteMessage(const ESBPlayerPassiveImagineSlotType Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddAdventurerRankUpdateCompleteMessage");

	Params::BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddTutorialHelpMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTutorialHelpId                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddTutorialHelpMessage(const class FName InTutorialHelpId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddTutorialHelpMessage");

	Params::BP_BattleHUD_C_AddTutorialHelpMessage Parms{};

	Parms.InTutorialHelpId = InTutorialHelpId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddAchievementGainedMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddAchievementGainedMessage(const int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddAchievementGainedMessage");

	Params::BP_BattleHUD_C_AddAchievementGainedMessage Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddAwakeInterruptQuestMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddAwakeInterruptQuestMessage(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddAwakeInterruptQuestMessage");

	Params::BP_BattleHUD_C_AddAwakeInterruptQuestMessage Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.TryShowQuestCompleteMessage_Delay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStepNo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelaySeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::TryShowQuestCompleteMessage_Delay(int32 InQuestIndex, int32 InStepNo, float DelaySeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "TryShowQuestCompleteMessage_Delay");

	Params::BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.InStepNo = InStepNo;
	Parms.DelaySeconds = DelaySeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnChangedDebugValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnChangedDebugValue(ESBDebugMenuType MenuType, class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnChangedDebugValue");

	Params::BP_BattleHUD_C_OnChangedDebugValue Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DestructDebugMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DestructDebugMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DestructDebugMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ConstructDebugMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ConstructDebugMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ConstructDebugMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UnbindWarehouseAbility
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::UnbindWarehouseAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UnbindWarehouseAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.BindWarehouseAbility
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::BindWarehouseAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "BindWarehouseAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnWarehouseAbilityUpdateDelegate_����_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBWarehouseAbilityNotifyUIInfo>UIInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BattleHUD_C::OnWarehouseAbilityUpdateDelegate______0(const TArray<struct FSBWarehouseAbilityNotifyUIInfo>& UIInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnWarehouseAbilityUpdateDelegate_����_0");

	Params::BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0 Parms{};

	Parms.UIInfo = std::move(UIInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF12
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF11
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF10
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF9
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF8
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF7
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF6
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF5
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingExecuteF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingExecuteF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.SetKeyGuideTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillActionPosition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "SetKeyGuideTextVisible");

	Params::BP_BattleHUD_C_SetKeyGuideTextVisible Parms{};

	Parms.InSkillActionPosition = InSkillActionPosition;
	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.SetBattleInfoHUDVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::SetBattleInfoHUDVisible(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "SetBattleInfoHUDVisible");

	Params::BP_BattleHUD_C_SetBattleInfoHUDVisible Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.BattleAreaDisableMessage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::BattleAreaDisableMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "BattleAreaDisableMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuide1_2Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ChangeKeyGuide1_2Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ChangeKeyGuide1_2Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OpenInitSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OpenInitSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OpenInitSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEditMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::SetEditMode(bool bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "SetEditMode");

	Params::BP_BattleHUD_C_SetEditMode Parms{};

	Parms.bEditMode = bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnUpdateRespawnGauge
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OnUpdateRespawnGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnUpdateRespawnGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawnBattleArea
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OnShowRespawnBattleArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnShowRespawnBattleArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnDisableRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OnDisableRespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnDisableRespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRespawnTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnShowRespawn(float InRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnShowRespawn");

	Params::BP_BattleHUD_C_OnShowRespawn Parms{};

	Parms.InRespawnTime = InRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnShowCombo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Combo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnShowCombo(int32 Combo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnShowCombo");

	Params::BP_BattleHUD_C_OnShowCombo Parms{};

	Parms.Combo = Combo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnSaveCharaConfigUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnSaveCharaConfigUpdate");

	Params::BP_BattleHUD_C_OnSaveCharaConfigUpdate Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuideUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ChangeKeyGuideUpdate");

	Params::BP_BattleHUD_C_ChangeKeyGuideUpdate Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnClickedCloseChatHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OnClickedCloseChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnClickedCloseChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CallAddMemberDeadNotifyMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MemberName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleHUD_C::CallAddMemberDeadNotifyMessage(const class FText& MemberName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CallAddMemberDeadNotifyMessage");

	Params::BP_BattleHUD_C_CallAddMemberDeadNotifyMessage Parms{};

	Parms.MemberName = std::move(MemberName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OpenCursorModeToOtherPCMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*            InOtherPC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OpenCursorModeToOtherPCMenu");

	Params::BP_BattleHUD_C_OpenCursorModeToOtherPCMenu Parms{};

	Parms.InOtherPC = InOtherPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.HitIndicatorAddMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::HitIndicatorAddMarker(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "HitIndicatorAddMarker");

	Params::BP_BattleHUD_C_HitIndicatorAddMarker Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.SetFocusActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::SetFocusActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "SetFocusActor");

	Params::BP_BattleHUD_C_SetFocusActor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.Switching Map
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::Switching_Map()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "Switching Map");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.NextQuestInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::NextQuestInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "NextQuestInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorExe
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ItemSelectorExe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ItemSelectorExe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftPress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ItemSelectorMoveLeftPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ItemSelectorMoveLeftPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ItemSelectorMoveLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ItemSelectorMoveLeftRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightPress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ItemSelectorMoveRightPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ItemSelectorMoveRightPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ItemSelectorMoveRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ItemSelectorMoveRightRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingOpen
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingClose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShortcutRingClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShortcutRingClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ForceCloseChatHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ForceCloseChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ForceCloseChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.ShowChatHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::ShowChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "ShowChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CallUpdateInteractionNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInteractionInfo               InteractionInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void ABP_BattleHUD_C::CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CallUpdateInteractionNotice");

	Params::BP_BattleHUD_C_CallUpdateInteractionNotice Parms{};

	Parms.InteractionInfo = std::move(InteractionInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnRequestTutorialHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCheckUnlock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::OnRequestTutorialHelp(bool bCheckUnlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnRequestTutorialHelp");

	Params::BP_BattleHUD_C_OnRequestTutorialHelp Parms{};

	Parms.bCheckUnlock = bCheckUnlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.KeyShortcut_Stamp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::KeyShortcut_Stamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "KeyShortcut_Stamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UpdateMouseCursorIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::UpdateMouseCursorIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UpdateMouseCursorIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.RequestDirectChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        Privilege_Type                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::RequestDirectChat(const class FString& PlayerId, const class FText& Param_Name, const class FString& CharacterId, ESBPrivilegeType Privilege_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "RequestDirectChat");

	Params::BP_BattleHUD_C_RequestDirectChat Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Param_Name = std::move(Param_Name);
	Parms.CharacterId = std::move(CharacterId);
	Parms.Privilege_Type = Privilege_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteRmShop
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteRmShop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteRmShop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UnbindRmShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URmShopMenu_C*                    InRmShop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::UnbindRmShop(class URmShopMenu_C* InRmShop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UnbindRmShop");

	Params::BP_BattleHUD_C_UnbindRmShop Parms{};

	Parms.InRmShop = InRmShop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.BindRmShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URmShopMenu_C*                    InRmShop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::BindRmShop(class URmShopMenu_C* InRmShop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "BindRmShop");

	Params::BP_BattleHUD_C_BindRmShop Parms{};

	Parms.InRmShop = InRmShop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateRmShop
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateRmShop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateRmShop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShopMenuEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::OnCloseRmShopMenuEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnCloseRmShopMenuEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateEventMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateEventMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateEventMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankupCompleteMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::AddAdventurerRankupCompleteMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddAdventurerRankupCompleteMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpSkill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SkillType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddLevelUpSkill(const class FString& SkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddLevelUpSkill");

	Params::BP_BattleHUD_C_AddLevelUpSkill Parms{};

	Parms.SkillType = std::move(SkillType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpClass
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::AddLevelUpClass(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "AddLevelUpClass");

	Params::BP_BattleHUD_C_AddLevelUpClass Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.InitDhcBattleHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::InitDhcBattleHUD(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "InitDhcBattleHUD");

	Params::BP_BattleHUD_C_InitDhcBattleHUD Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.InitTimerRespawnHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETimerHUDType                           HUDType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::InitTimerRespawnHUD(ETimerHUDType HUDType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "InitTimerRespawnHUD");

	Params::BP_BattleHUD_C_InitTimerRespawnHUD Parms{};

	Parms.HUDType = HUDType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8");

	Params::BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_BattleHUD_C::OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB");

	Params::BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DrawWireLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SizeY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::DrawWireLocator(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DrawWireLocator");

	Params::BP_BattleHUD_C_DrawWireLocator Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.SetLayoutEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditModeEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::SetLayoutEditMode(bool EditModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "SetLayoutEditMode");

	Params::BP_BattleHUD_C_SetLayoutEditMode Parms{};

	Parms.EditModeEnabled = EditModeEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.IsLayoutEditMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_LayoutEditMode                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::IsLayoutEditMode(bool* Param_LayoutEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "IsLayoutEditMode");

	Params::BP_BattleHUD_C_IsLayoutEditMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_LayoutEditMode != nullptr)
		*Param_LayoutEditMode = Parms.Param_LayoutEditMode;
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnQuestUpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAcceptedQuestInfo               PrevAcceptedQuestInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BattleHUD_C::OnQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnQuestUpdateProgress");

	Params::BP_BattleHUD_C_OnQuestUpdateProgress Parms{};

	Parms.PrevAcceptedQuestInfo = std::move(PrevAcceptedQuestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextWindow*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBTextWindow* ABP_BattleHUD_C::GetTextWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetTextWindow");

	Params::BP_BattleHUD_C_GetTextWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetHitFlash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHitFlash_C*                      RefHitFlash                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::GetHitFlash(class UHitFlash_C** RefHitFlash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetHitFlash");

	Params::BP_BattleHUD_C_GetHitFlash Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RefHitFlash != nullptr)
		*RefHitFlash = Parms.RefHitFlash;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetHitIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHitIndicator_C*                  HitIndicator                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::GetHitIndicator(bool* bValid, class UHitIndicator_C** HitIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetHitIndicator");

	Params::BP_BattleHUD_C_GetHitIndicator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (HitIndicator != nullptr)
		*HitIndicator = Parms.HitIndicator;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetOptionLayoutableHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* ABP_BattleHUD_C::GetOptionLayoutableHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetOptionLayoutableHUD");

	Params::BP_BattleHUD_C_GetOptionLayoutableHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetRespawnHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URespawnHUD_C*                    RespawnHUD                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::GetRespawnHUD(bool* bValid, class URespawnHUD_C** RespawnHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetRespawnHUD");

	Params::BP_BattleHUD_C_GetRespawnHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (RespawnHUD != nullptr)
		*RespawnHUD = Parms.RespawnHUD;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowSkit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextWindowBase*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBTextWindowBase* ABP_BattleHUD_C::GetTextWindowSkit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetTextWindowSkit");

	Params::BP_BattleHUD_C_GetTextWindowSkit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.UnregistClassHud
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_BattleHUD_C::UnregistClassHud(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UnregistClassHud");

	Params::BP_BattleHUD_C_UnregistClassHud Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowDemo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextWindowBase*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBTextWindowBase* ABP_BattleHUD_C::GetTextWindowDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetTextWindowDemo");

	Params::BP_BattleHUD_C_GetTextWindowDemo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateBattleInfoHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateBattleInfoHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateBattleInfoHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleInfoHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteBattleInfoHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteBattleInfoHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UpdateBattleInfoHUD
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInteractionInfo               InteractionInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void ABP_BattleHUD_C::UpdateBattleInfoHUD(const struct FSBInteractionInfo& InteractionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UpdateBattleInfoHUD");

	Params::BP_BattleHUD_C_UpdateBattleInfoHUD Parms{};

	Parms.InteractionInfo = std::move(InteractionInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateLayoutHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateLayoutHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateLayoutHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteLayoutHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteLayoutHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteLayoutHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateKeyGuideHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateKeyGuideHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateKeyGuideHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteKeyGuideHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteKeyGuideHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteKeyGuideHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateChatHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteChatHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteChatHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateShortPinHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateShortPinHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateShortPinHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteShortPinHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteShortPinHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteShortPinHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateClassHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteClassHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifyMessage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifyMessage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifications
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateNotifications()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateNotifications");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifications
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteNotifications()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteNotifications");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowDemo
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateTextWindowDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateTextWindowDemo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowDemo
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteTextWindowDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteTextWindowDemo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindow
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateTextWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateTextWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindow
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteTextWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteTextWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowSkit
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateTextWindowSkit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateTextWindowSkit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowSkit
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteTextWindowSkit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteTextWindowSkit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateMailLimitIndicator
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateMailLimitIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateMailLimitIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteMailLimitIndicator
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteMailLimitIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteMailLimitIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateOpenCommandMenu
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateOpenCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateOpenCommandMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteOpenCommandMenu
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteOpenCommandMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteOpenCommandMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateStatusAlimentNotifyWidgetOwner
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateStatusAlimentNotifyWidgetOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateStatusAlimentNotifyWidgetOwner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteStatusAlimentNotifyWidgetOwner
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteStatusAlimentNotifyWidgetOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteStatusAlimentNotifyWidgetOwner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateChatUnreadNotify
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateChatUnreadNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateChatUnreadNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatUnreadNotify
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteChatUnreadNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteChatUnreadNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.CreateTelopManager
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::CreateTelopManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "CreateTelopManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTelopManager
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::DeleteTelopManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "DeleteTelopManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.Bind
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.Unbind
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.BindOnJoinInterruptQuest
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::BindOnJoinInterruptQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "BindOnJoinInterruptQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.UnbindOnJoinInterruptQuest
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleHUD_C::UnbindOnJoinInterruptQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "UnbindOnJoinInterruptQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BattleHUD.BP_BattleHUD_C.OnJoinInterreputQuestDelegete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInFirst                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::OnJoinInterreputQuestDelegete(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "OnJoinInterreputQuestDelegete");

	Params::BP_BattleHUD_C_OnJoinInterreputQuestDelegete Parms{};

	Parms.InComponent = InComponent;
	Parms.bInFirst = bInFirst;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetPlaceGuideWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlaceGuide_C*                    PlaceGuideWidget                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleHUD_C::GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetPlaceGuideWidget");

	Params::BP_BattleHUD_C_GetPlaceGuideWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlaceGuideWidget != nullptr)
		*PlaceGuideWidget = Parms.PlaceGuideWidget;
}


// Function BP_BattleHUD.BP_BattleHUD_C.IsChatWindowActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::IsChatWindowActive(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "IsChatWindowActive");

	Params::BP_BattleHUD_C_IsChatWindowActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function BP_BattleHUD.BP_BattleHUD_C.IsOtherPCListMenuVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::IsOtherPCListMenuVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "IsOtherPCListMenuVisible");

	Params::BP_BattleHUD_C_IsOtherPCListMenuVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function BP_BattleHUD.BP_BattleHUD_C.IsEditMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PressTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BattleHUD_C::IsEditMap(float PressTime, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "IsEditMap");

	Params::BP_BattleHUD_C_IsEditMap Parms{};

	Parms.PressTime = PressTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetLayoutableHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBLayoutableHUD*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBLayoutableHUD* ABP_BattleHUD_C::GetLayoutableHUD() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetLayoutableHUD");

	Params::BP_BattleHUD_C_GetLayoutableHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetChatHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* ABP_BattleHUD_C::GetChatHUD() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetChatHUD");

	Params::BP_BattleHUD_C_GetChatHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetNotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* ABP_BattleHUD_C::GetNotifyMessage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetNotifyMessage");

	Params::BP_BattleHUD_C_GetNotifyMessage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetBattleContentsHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBBattleContentsHUD*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBBattleContentsHUD* ABP_BattleHUD_C::GetBattleContentsHUD() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetBattleContentsHUD");

	Params::BP_BattleHUD_C_GetBattleContentsHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BattleHUD.BP_BattleHUD_C.GetTelopManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBTelopManager*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBTelopManager* ABP_BattleHUD_C::GetTelopManager() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleHUD_C", "GetTelopManager");

	Params::BP_BattleHUD_C_GetTelopManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

