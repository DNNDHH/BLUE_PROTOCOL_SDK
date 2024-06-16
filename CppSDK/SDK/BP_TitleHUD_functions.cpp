#pragma once

 

// Package: BP_TitleHUD

#include "Basic.hpp"

#include "BP_TitleHUD_classes.hpp"
#include "BP_TitleHUD_parameters.hpp"


namespace SDK
{

// Function BP_TitleHUD.BP_TitleHUD_C.ExecuteUbergraph_BP_TitleHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::ExecuteUbergraph_BP_TitleHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "ExecuteUbergraph_BP_TitleHUD");

	Params::BP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_TitleHUD_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.LoadCharaLayer
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::LoadCharaLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "LoadCharaLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.LogoFinish
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::LogoFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "LogoFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfRead
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::OnTermsOfRead(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "OnTermsOfRead");

	Params::BP_TitleHUD_C_OnTermsOfRead Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfUse
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FSBTermsOfUseInfo>        TermsOfUseList                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_TitleHUD_C::OnTermsOfUse(const TArray<struct FSBTermsOfUseInfo>& TermsOfUseList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "OnTermsOfUse");

	Params::BP_TitleHUD_C_OnTermsOfUse Parms{};

	Parms.TermsOfUseList = std::move(TermsOfUseList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.TryCreateTermsOfService
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::TryCreateTermsOfService()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "TryCreateTermsOfService");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Approval                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleHUD_C::CustomEvent_0(bool Approval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "CustomEvent_0");

	Params::BP_TitleHUD_C_CustomEvent_0 Parms{};

	Parms.Approval = Approval;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.StartTermsOfService
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::StartTermsOfService()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "StartTermsOfService");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.ExecNetworkCafe_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::ExecNetworkCafe_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "ExecNetworkCafe_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "ReceiveEndPlay");

	Params::BP_TitleHUD_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.OnLoginCompleted_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::OnLoginCompleted_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "OnLoginCompleted_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.LoginMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::LoginMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "LoginMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.OnFinish_Event_0
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::OnFinish_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "OnFinish_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.StartLogo
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::StartLogo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "StartLogo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.StartTitle
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::StartTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "StartTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TitleHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.OnSoundAssetLoaded
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::OnSoundAssetLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "OnSoundAssetLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.WaitAssetLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::WaitAssetLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "WaitAssetLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.BeginWaitAssetLoad
// (BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::BeginWaitAssetLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "BeginWaitAssetLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NetworkCafeTotalTimePlayedToday                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLoginTimeOnly                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TitleHUD_C::AddNetworkCafeLoginTimeNotificationMessage(const int32 NetworkCafeTotalTimePlayedToday, const bool bIsLoginTimeOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddNetworkCafeLoginTimeNotificationMessage");

	Params::BP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage Parms{};

	Parms.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
	Parms.bIsLoginTimeOnly = bIsLoginTimeOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddTutorialHelpMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTutorialHelpId                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddTutorialHelpMessage(const class FName InTutorialHelpId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddTutorialHelpMessage");

	Params::BP_TitleHUD_C_AddTutorialHelpMessage Parms{};

	Parms.InTutorialHelpId = InTutorialHelpId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddRecipeMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRecipeType                           RecipeType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RecepiId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddRecipeMessage(const ESBRecipeType RecipeType, const int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddRecipeMessage");

	Params::BP_TitleHUD_C_AddRecipeMessage Parms{};

	Parms.RecipeType = RecipeType;
	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddRankingRewardNotifyMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::AddRankingRewardNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddRankingRewardNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddMailAcceptLimitNotifyMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::AddMailAcceptLimitNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddMailAcceptLimitNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddLoginBonusNotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_TitleHUD_C::AddLoginBonusNotifyMessage(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddLoginBonusNotifyMessage");

	Params::BP_TitleHUD_C_AddLoginBonusNotifyMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddLine2NotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMainMessage                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             InSubMessage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_TitleHUD_C::AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddLine2NotifyMessage");

	Params::BP_TitleHUD_C_AddLine2NotifyMessage Parms{};

	Parms.InMainMessage = std::move(InMainMessage);
	Parms.InSubMessage = std::move(InSubMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddLine1NotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_TitleHUD_C::AddLine1NotifyMessage(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddLine1NotifyMessage");

	Params::BP_TitleHUD_C_AddLine1NotifyMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddLine1LNotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_TitleHUD_C::AddLine1LNotifyMessage(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddLine1LNotifyMessage");

	Params::BP_TitleHUD_C_AddLine1LNotifyMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddItemExpiryNotifyMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddItemExpiryNotifyMessage(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddItemExpiryNotifyMessage");

	Params::BP_TitleHUD_C_AddItemExpiryNotifyMessage Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddAwakeInterruptQuestMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddAwakeInterruptQuestMessage(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddAwakeInterruptQuestMessage");

	Params::BP_TitleHUD_C_AddAwakeInterruptQuestMessage Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddAutoDeliveryQuestCompleteMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSeasonPassQuestCycleType             InCycle                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           QuestName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddAutoDeliveryQuestCompleteMessage(const ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddAutoDeliveryQuestCompleteMessage");

	Params::BP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage Parms{};

	Parms.InCycle = InCycle;
	Parms.QuestName = std::move(QuestName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankUpdateCompleteMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         Slot                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddAdventurerRankUpdateCompleteMessage(const ESBPlayerPassiveImagineSlotType Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddAdventurerRankUpdateCompleteMessage");

	Params::BP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankupCompleteMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::AddAdventurerRankupCompleteMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddAdventurerRankupCompleteMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.AddAchievementGainedMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleHUD_C::AddAchievementGainedMessage(const int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "AddAchievementGainedMessage");

	Params::BP_TitleHUD_C_AddAchievementGainedMessage Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.OnLoaded_B892930043DB34F90488159C5989E221
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_TitleHUD_C::OnLoaded_B892930043DB34F90488159C5989E221(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "OnLoaded_B892930043DB34F90488159C5989E221");

	Params::BP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleHUD.BP_TitleHUD_C.Get Terms Of Service
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IndexPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Create                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBTermsOfUseInfo                Output                                                 (Parm, OutParm)

void ABP_TitleHUD_C::Get_Terms_Of_Service(int32 IndexPin, bool* Create, struct FSBTermsOfUseInfo* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "Get Terms Of Service");

	Params::BP_TitleHUD_C_Get_Terms_Of_Service Parms{};

	Parms.IndexPin = IndexPin;

	UObject::ProcessEvent(Func, &Parms);

	if (Create != nullptr)
		*Create = Parms.Create;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}


// Function BP_TitleHUD.BP_TitleHUD_C.GetTermsOfUseIds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           IDs                                                    (Parm, OutParm)

void ABP_TitleHUD_C::GetTermsOfUseIds(TArray<int32>* IDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "GetTermsOfUseIds");

	Params::BP_TitleHUD_C_GetTermsOfUseIds Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);
}


// Function BP_TitleHUD.BP_TitleHUD_C.DeleteHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::DeleteHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "DeleteHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.DeleteNotifyMessage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::DeleteNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "DeleteNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.CreateNotifyMessage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::CreateNotifyMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "CreateNotifyMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TitleHUD.BP_TitleHUD_C.CreateHUD
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_TitleHUD_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleHUD_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}

}

