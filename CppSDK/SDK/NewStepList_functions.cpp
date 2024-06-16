#pragma once

 

// Package: NewStepList

#include "Basic.hpp"

#include "NewStepList_classes.hpp"
#include "NewStepList_parameters.hpp"


namespace SDK
{

// Function NewStepList.NewStepList_C.ExecuteUbergraph_NewStepList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::ExecuteUbergraph_NewStepList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "ExecuteUbergraph_NewStepList");

	Params::NewStepList_C_ExecuteUbergraph_NewStepList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewStepList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.RequestSetupList
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::RequestSetupList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "RequestSetupList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewStepList_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUIVisibleSettingChange");

	Params::NewStepList_C_OnUIVisibleSettingChange Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindUIVisible
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindUIVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindUIVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindUIVisible
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindUIVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindUIVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnAnimationFinished");

	Params::NewStepList_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "CustomEvent_3");

	Params::NewStepList_C_CustomEvent_3 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "CustomEvent_2");

	Params::NewStepList_C_CustomEvent_2 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnUpdateItems
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::OnUpdateItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUpdateItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.UnbindUpdateItems
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindUpdateItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindUpdateItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindUpdateItems
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindUpdateItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindUpdateItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnClearConditionComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InDungeonName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnClearConditionComplete(const class FName& InDungeonName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnClearConditionComplete");

	Params::NewStepList_C_OnClearConditionComplete Parms{};

	Parms.InDungeonName = InDungeonName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnClearConditionChangeStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCurStep                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnClearConditionChangeStep(const int32 InCurStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnClearConditionChangeStep");

	Params::NewStepList_C_OnClearConditionChangeStep Parms{};

	Parms.InCurStep = InCurStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnClearConditionUpdateProgress
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonClearConditionProgressItemInfoInProgressItem                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                                   InStepNum                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InProgressIndex                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnClearConditionUpdateProgress(const struct FDungeonClearConditionProgressItemInfo& InProgressItem, const int32 InStepNum, const int32 InProgressIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnClearConditionUpdateProgress");

	Params::NewStepList_C_OnClearConditionUpdateProgress Parms{};

	Parms.InProgressItem = std::move(InProgressItem);
	Parms.InStepNum = InStepNum;
	Parms.InProgressIndex = InProgressIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnClearConditionChange
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::OnClearConditionChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnClearConditionChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.UnbindGameState
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindGameState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindGameState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindGameState
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindGameState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindGameState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnAdventurerRankChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnAdventurerRankChange(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnAdventurerRankChange");

	Params::NewStepList_C_OnAdventurerRankChange Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindAdventurerComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindAdventurerComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindAdventurerComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindAdventurerComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindAdventurerComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindAdventurerComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnLeaveInterruptQuest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnLeaveInterruptQuest(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnLeaveInterruptQuest");

	Params::NewStepList_C_OnLeaveInterruptQuest Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnRepInterruptQuest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInterruptQuestPlayInfo        InPlayInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UNewStepList_C::OnRepInterruptQuest(const struct FSBInterruptQuestPlayInfo& InPlayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnRepInterruptQuest");

	Params::NewStepList_C_OnRepInterruptQuest Parms{};

	Parms.InPlayInfo = std::move(InPlayInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnUpdateProgressInterruptQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnUpdateProgressInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUpdateProgressInterruptQuest");

	Params::NewStepList_C_OnUpdateProgressInterruptQuest Parms{};

	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnFailedInterruptQuest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnFailedInterruptQuest(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnFailedInterruptQuest");

	Params::NewStepList_C_OnFailedInterruptQuest Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnSuccessInterruptQuest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewStepList_C::OnSuccessInterruptQuest(const class FName& InQuestId, bool InSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnSuccessInterruptQuest");

	Params::NewStepList_C_OnSuccessInterruptQuest Parms{};

	Parms.InQuestId = InQuestId;
	Parms.InSuccess = InSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnJoinInterruptQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInFirst                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewStepList_C::OnJoinInterruptQuest(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnJoinInterruptQuest");

	Params::NewStepList_C_OnJoinInterruptQuest Parms{};

	Parms.InComponent = InComponent;
	Parms.bInFirst = bInFirst;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindInterruptQuestComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindInterruptQuestComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindInterruptQuestComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindInterruptQuestComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindInterruptQuestComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindInterruptQuestComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnWarehouseAbilityUpdate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBWarehouseAbilityNotifyUIInfo>UIInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNewStepList_C::OnWarehouseAbilityUpdate(const TArray<struct FSBWarehouseAbilityNotifyUIInfo>& UIInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnWarehouseAbilityUpdate");

	Params::NewStepList_C_OnWarehouseAbilityUpdate Parms{};

	Parms.UIInfo = std::move(UIInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindWarehouseAbilityComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindWarehouseAbilityComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindWarehouseAbilityComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindWarehouseAbilityComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindWarehouseAbilityComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindWarehouseAbilityComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnSaveQuestCheckList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewStepList_C::OnSaveQuestCheckList(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnSaveQuestCheckList");

	Params::NewStepList_C_OnSaveQuestCheckList Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindCommonComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindCommonComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindCommonComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindCommonComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindCommonComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindCommonComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnAcceptedQuestList
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::OnAcceptedQuestList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnAcceptedQuestList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.UnbindQuestComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindQuestComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindQuestComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindQuestComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindQuestComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindQuestComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnGetMyCharaInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewStepList_C::OnGetMyCharaInfo(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnGetMyCharaInfo");

	Params::NewStepList_C_OnGetMyCharaInfo Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindGetMyCharaInfo
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindGetMyCharaInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindGetMyCharaInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindGetMyCharaInfo
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindGetMyCharaInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindGetMyCharaInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.UnbindPlayer
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindPlayer
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "CustomEvent_1");

	Params::NewStepList_C_CustomEvent_1 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::CustomEvent_0(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "CustomEvent_0");

	Params::NewStepList_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnLoadRouteGuideQuestId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnLoadRouteGuideQuestId(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnLoadRouteGuideQuestId");

	Params::NewStepList_C_OnLoadRouteGuideQuestId Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnUpdateRouteGuideSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnUpdateRouteGuideSetting(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUpdateRouteGuideSetting");

	Params::NewStepList_C_OnUpdateRouteGuideSetting Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.QuestListDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::QuestListDebug(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "QuestListDebug");

	Params::NewStepList_C_QuestListDebug Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnCancelQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnCancelQuest(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnCancelQuest");

	Params::NewStepList_C_OnCancelQuest Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnCompleteQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnCompleteQuest(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnCompleteQuest");

	Params::NewStepList_C_OnCompleteQuest Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnUpdateQuestProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnUpdateQuestProgress(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUpdateQuestProgress");

	Params::NewStepList_C_OnUpdateQuestProgress Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnAcceptQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnAcceptQuest(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnAcceptQuest");

	Params::NewStepList_C_OnAcceptQuest Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.RemoveReceiver
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::RemoveReceiver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "RemoveReceiver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.AddReceiver
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::AddReceiver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "AddReceiver");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnUpdateWishlist
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::OnUpdateWishlist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUpdateWishlist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.UnbindWishlist
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindWishlist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindWishlist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindWishlist
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindWishlist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindWishlist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnChangeHUDDrawAdventureBoard
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBAdventureBoardParam           InBoardParam                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnChangeHUDDrawAdventureBoard(const struct FSBAdventureBoardParam& InBoardParam, int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnChangeHUDDrawAdventureBoard");

	Params::NewStepList_C_OnChangeHUDDrawAdventureBoard Parms{};

	Parms.InBoardParam = std::move(InBoardParam);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardAllPanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAdventureBoardParam>   InBoardParamList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBMailRewardData                InRewardDataList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnGetRewardAdventureBoardAllPanel(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnGetRewardAdventureBoardAllPanel");

	Params::NewStepList_C_OnGetRewardAdventureBoardAllPanel Parms{};

	Parms.InBoardParamList = std::move(InBoardParamList);
	Parms.InRewardDataList = std::move(InRewardDataList);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnGetRewardAdventureBoardPanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAdventureBoardParam>   InBoardParamList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBMailRewardData                InRewardDataList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnGetRewardAdventureBoardPanel(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnGetRewardAdventureBoardPanel");

	Params::NewStepList_C_OnGetRewardAdventureBoardPanel Parms{};

	Parms.InBoardParamList = std::move(InBoardParamList);
	Parms.InRewardDataList = std::move(InRewardDataList);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnChangeActiveAdventureBoard
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAdventureBoardParam>   InBoardParamList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnChangeActiveAdventureBoard(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnChangeActiveAdventureBoard");

	Params::NewStepList_C_OnChangeActiveAdventureBoard Parms{};

	Parms.InBoardParamList = std::move(InBoardParamList);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnComplateAdventureBoard
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAdventureBoardParam>   InBoardParamList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBMailRewardData                InRewardDataList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnComplateAdventureBoard(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, const struct FSBMailRewardData& InRewardDataList, int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnComplateAdventureBoard");

	Params::NewStepList_C_OnComplateAdventureBoard Parms{};

	Parms.InBoardParamList = std::move(InBoardParamList);
	Parms.InRewardDataList = std::move(InRewardDataList);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnAchievementedAdventureBoardPanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAdventureBoardPanelParam>PanelList                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InPanelId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnAchievementedAdventureBoardPanel(const TArray<struct FSBAdventureBoardPanelParam>& PanelList, int32 InPanelId, int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnAchievementedAdventureBoardPanel");

	Params::NewStepList_C_OnAchievementedAdventureBoardPanel Parms{};

	Parms.PanelList = std::move(PanelList);
	Parms.InPanelId = InPanelId;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnLoadAdventureBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnLoadAdventureBoard(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnLoadAdventureBoard");

	Params::NewStepList_C_OnLoadAdventureBoard Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnUpdateAdventureBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnUpdateAdventureBoard(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnUpdateAdventureBoard");

	Params::NewStepList_C_OnUpdateAdventureBoard Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnChangeFavoriteAdventureBoard
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBAdventureBoardParam>   InBoardParamList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnChangeFavoriteAdventureBoard(const TArray<struct FSBAdventureBoardParam>& InBoardParamList, int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnChangeFavoriteAdventureBoard");

	Params::NewStepList_C_OnChangeFavoriteAdventureBoard Parms{};

	Parms.InBoardParamList = std::move(InBoardParamList);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.UnbindAdventureBoardComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::UnbindAdventureBoardComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "UnbindAdventureBoardComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BindAdventureBoardComponent
// (BlueprintCallable, BlueprintEvent)

void UNewStepList_C::BindAdventureBoardComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BindAdventureBoardComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
// (BlueprintEvent)

void UNewStepList_C::BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
// (BlueprintEvent)

void UNewStepList_C::BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
// (BlueprintEvent)

void UNewStepList_C::BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "BndEvt__NewStepList_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnimationIn1
// (Private, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnimationIn1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnimationIn1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnimationIn2
// (Private, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnimationIn2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnimationIn2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnimationIn3
// (Private, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnimationIn3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnimationIn3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnimationOut1
// (Private, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnimationOut1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnimationOut1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnimationOut2
// (Private, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnimationOut2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnimationOut2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnimationOut3
// (Private, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnimationOut3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnimationOut3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.Bind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.Unbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.OnSetupTitle
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TitleTextId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TitleBackTextID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewStepList_C::OnSetupTitle(class FName TitleTextId, class FName TitleBackTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnSetupTitle");

	Params::NewStepList_C_OnSetupTitle Parms{};

	Parms.TitleTextId = TitleTextId;
	Parms.TitleBackTextID = TitleBackTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewStepList.NewStepList_C.OnSetupKeyGuide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::OnSetupKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "OnSetupKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UNewStepList_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewStepList.NewStepList_C.IsPlayAnimIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimIn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimIn");

	Params::NewStepList_C_IsPlayAnimIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimationIn1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimationIn1() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimationIn1");

	Params::NewStepList_C_IsPlayAnimationIn1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimationIn2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimationIn2() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimationIn2");

	Params::NewStepList_C_IsPlayAnimationIn2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimationIn3
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimationIn3() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimationIn3");

	Params::NewStepList_C_IsPlayAnimationIn3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimOut() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimOut");

	Params::NewStepList_C_IsPlayAnimOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimationOut1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimationOut1() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimationOut1");

	Params::NewStepList_C_IsPlayAnimationOut1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimationOut2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimationOut2() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimationOut2");

	Params::NewStepList_C_IsPlayAnimationOut2 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnimationOut3
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnimationOut3() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnimationOut3");

	Params::NewStepList_C_IsPlayAnimationOut3 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NewStepList.NewStepList_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UNewStepList_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewStepList_C", "IsPlayAnim");

	Params::NewStepList_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

