#pragma once

 

// Package: MapWidget_Map

#include "Basic.hpp"

#include "MapWidget_Map_classes.hpp"
#include "MapWidget_Map_parameters.hpp"


namespace SDK
{

// Function MapWidget_Map.MapWidget_Map_C.OnChangeToRegionMap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRegionMapId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnChangeToRegionMap__DelegateSignature(const class FString& InRegionMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnChangeToRegionMap__DelegateSignature");

	Params::MapWidget_Map_C_OnChangeToRegionMap__DelegateSignature Parms{};

	Parms.InRegionMapId = std::move(InRegionMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnMapPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::OnMapPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnMapPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnStartSavePinInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::OnStartSavePinInfo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnStartSavePinInfo__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnEndSavePinInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsResultSuccess                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBMapErrorCode                         ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnEndSavePinInfo__DelegateSignature(bool IsResultSuccess, ESBMapErrorCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnEndSavePinInfo__DelegateSignature");

	Params::MapWidget_Map_C_OnEndSavePinInfo__DelegateSignature Parms{};

	Parms.IsResultSuccess = IsResultSuccess;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnPinnedPinClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnPinnedPinClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnPinnedPinClicked__DelegateSignature");

	Params::MapWidget_Map_C_OnPinnedPinClicked__DelegateSignature Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnShowErrorMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InMessageTextId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnShowErrorMessage__DelegateSignature(int32 InMessageTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnShowErrorMessage__DelegateSignature");

	Params::MapWidget_Map_C_OnShowErrorMessage__DelegateSignature Parms{};

	Parms.InMessageTextId = InMessageTextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnWarpRequestAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::OnWarpRequestAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnWarpRequestAccepted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnResetInputMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::OnResetInputMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnResetInputMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnWarpPointIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::OnWarpPointIconPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnWarpPointIconPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnUpdateTraverseCloud__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::OnUpdateTraverseCloud__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnUpdateTraverseCloud__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnSetMapScrollFunctionOnOff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsScrollFunctionOn                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                        InScrollHVLength                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnSetMapScrollFunctionOnOff__DelegateSignature(bool InIsScrollFunctionOn, const struct FVector2D& InScrollHVLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnSetMapScrollFunctionOnOff__DelegateSignature");

	Params::MapWidget_Map_C_OnSetMapScrollFunctionOnOff__DelegateSignature Parms{};

	Parms.InIsScrollFunctionOn = InIsScrollFunctionOn;
	Parms.InScrollHVLength = std::move(InScrollHVLength);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnUpdatePlayerIconPosition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        MapPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ViewScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnUpdatePlayerIconPosition__DelegateSignature(const struct FVector2D& MapPosition, float ViewScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnUpdatePlayerIconPosition__DelegateSignature");

	Params::MapWidget_Map_C_OnUpdatePlayerIconPosition__DelegateSignature Parms{};

	Parms.MapPosition = std::move(MapPosition);
	Parms.ViewScale = ViewScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnInitPlayerIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        PlayerPosition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MapSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnInitPlayerIcon__DelegateSignature(const struct FVector2D& PlayerPosition, const struct FVector2D& MapSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnInitPlayerIcon__DelegateSignature");

	Params::MapWidget_Map_C_OnInitPlayerIcon__DelegateSignature Parms{};

	Parms.PlayerPosition = std::move(PlayerPosition);
	Parms.MapSize = std::move(MapSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnQuestDetailForMapChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::OnQuestDetailForMapChanged__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnQuestDetailForMapChanged__DelegateSignature");

	Params::MapWidget_Map_C_OnQuestDetailForMapChanged__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.ExecuteUbergraph_MapWidget_Map
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::ExecuteUbergraph_MapWidget_Map(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ExecuteUbergraph_MapWidget_Map");

	Params::MapWidget_Map_C_ExecuteUbergraph_MapWidget_Map Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnFinishMenu_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestDetail_FinishStatus               FinishStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnFinishMenu_1(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnFinishMenu_1");

	Params::MapWidget_Map_C_OnFinishMenu_1 Parms{};

	Parms.FinishStatus = FinishStatus;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OpenQuestMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OpenQuestMenu(int32 InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OpenQuestMenu");

	Params::MapWidget_Map_C_OpenQuestMenu Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.EventCreateDialog
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::EventCreateDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "EventCreateDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UMapWidget_Map_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.InitMapBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapBGConfigTableRow           InMapBGConfig                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::InitMapBG(const struct FSBMapBGConfigTableRow& InMapBGConfig, const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "InitMapBG");

	Params::MapWidget_Map_C_InitMapBG Parms{};

	Parms.InMapBGConfig = std::move(InMapBGConfig);
	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "PreConstruct");

	Params::MapWidget_Map_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_Map_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnEndYesNoDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnEndYesNoDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnEndYesNoDialog");

	Params::MapWidget_Map_C_OnEndYesNoDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_Map_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_Map_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.InitAdminBtn
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::InitAdminBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "InitAdminBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_Map_C::BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "BndEvt__AdminBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UnbindOnSaveMapPinInfos
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UnbindOnSaveMapPinInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UnbindOnSaveMapPinInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.BindOnSaveMapPinInfos
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::BindOnSaveMapPinInfos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "BindOnSaveMapPinInfos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UnbindPin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::UnbindPin(class UMapWidget_MapPinnedPin_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UnbindPin");

	Params::MapWidget_Map_C_UnbindPin Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.BindPin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::BindPin(class UMapWidget_MapPinnedPin_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "BindPin");

	Params::MapWidget_Map_C_BindPin Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnPinBtnClicked_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnPinBtnClicked_____(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnPinBtnClicked_����");

	Params::MapWidget_Map_C_OnPinBtnClicked_____ Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnTextCommitted_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnTextCommitted_____(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnTextCommitted_����");

	Params::MapWidget_Map_C_OnTextCommitted_____ Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnSaveMapPinInfosDelegate_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBMapErrorCode                         ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnSaveMapPinInfosDelegate_____(const bool Result, const ESBMapErrorCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnSaveMapPinInfosDelegate_����");

	Params::MapWidget_Map_C_OnSaveMapPinInfosDelegate_____ Parms{};

	Parms.Result = Result;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.ResetInterruptQuest
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ResetInterruptQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ResetInterruptQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBInterruptQuestInstance*        InInstance                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::RemoveInterruptArea(const class ASBInterruptQuestInstance* InInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "RemoveInterruptArea");

	Params::MapWidget_Map_C_RemoveInterruptArea Parms{};

	Parms.InInstance = InInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.AddInterruptArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBInterruptQuestInstance*        InInstance                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::AddInterruptArea(const class ASBInterruptQuestInstance* InInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "AddInterruptArea");

	Params::MapWidget_Map_C_AddInterruptArea Parms{};

	Parms.InInstance = InInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupInterruptQuest
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::SetupInterruptQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupInterruptQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8");

	Params::MapWidget_Map_C_OnLoaded_20605FE04FEA463F3200F1B3C3F47AC8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.Terminate
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::SetupIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupTimerEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::SetupTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ResetTimerEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ResetTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ResetTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateTimerEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetRegionMapTexture
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetRegionMapTexture(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetRegionMapTexture");

	Params::MapWidget_Map_C_SetRegionMapTexture Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsPlayerCursorVisible                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetupMap(const class FString& InMapId, bool InIsPlayerCursorVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupMap");

	Params::MapWidget_Map_C_SetupMap Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.InIsPlayerCursorVisible = InIsPlayerCursorVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupAsWorldMap
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetupAsWorldMap(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupAsWorldMap");

	Params::MapWidget_Map_C_SetupAsWorldMap Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupAsRegionMap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsPlayerCursorVisible                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetupAsRegionMap(const class FString& InMapId, bool InIsPlayerCursorVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupAsRegionMap");

	Params::MapWidget_Map_C_SetupAsRegionMap Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.InIsPlayerCursorVisible = InIsPlayerCursorVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetWorldMapTexture
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetWorldMapTexture(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetWorldMapTexture");

	Params::MapWidget_Map_C_SetWorldMapTexture Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearWarpPointIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearWarpPointIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPoint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateWarpPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateWarpPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetMapBodySize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetMapBodySize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetMapBodySize");

	Params::MapWidget_Map_C_SetMapBodySize Parms{};

	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetMapBodyPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetMapBodyPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetMapBodyPosition");

	Params::MapWidget_Map_C_SetMapBodyPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.InitPinInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::InitPinInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "InitPinInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateWorldMapPinnedPin
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::CreateWorldMapPinnedPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateWorldMapPinnedPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearWorldMapPinnedPin
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearWorldMapPinnedPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearWorldMapPinnedPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateCurrentAreaMapPinnedPin
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::CreateCurrentAreaMapPinnedPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateCurrentAreaMapPinnedPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearCurrentAreaMapPinnedPin
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearCurrentAreaMapPinnedPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearCurrentAreaMapPinnedPin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateMapWidgetMapPinnedPin
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMapWidget_MapPinnedPin_C* UMapWidget_Map_C::CreateMapWidgetMapPinnedPin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateMapWidgetMapPinnedPin");

	Params::MapWidget_Map_C_CreateMapWidgetMapPinnedPin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_Map.MapWidget_Map_C.SetPinToMap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPinRef                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetPinToMap(class UMapWidget_MapPinnedPin_C* InPinnedPinRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetPinToMap");

	Params::MapWidget_Map_C_SetPinToMap Parms{};

	Parms.InPinnedPinRef = InPinnedPinRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.AttachPinToMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InMapPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapPinInfo                      InMapPinInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsTextBoxVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::AttachPinToMap(class UMapWidget_MapPinnedPin_C* InMapPin, const struct FMapPinInfo& InMapPinInfo, bool IsTextBoxVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "AttachPinToMap");

	Params::MapWidget_Map_C_AttachPinToMap Parms{};

	Parms.InMapPin = InMapPin;
	Parms.InMapPinInfo = std::move(InMapPinInfo);
	Parms.IsTextBoxVisible = IsTextBoxVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetMapToPinAttachMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAttachMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetMapToPinAttachMode(bool IsAttachMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetMapToPinAttachMode");

	Params::MapWidget_Map_C_SetMapToPinAttachMode Parms{};

	Parms.IsAttachMode = IsAttachMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OpenPinnedPinCommentBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OpenPinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OpenPinnedPinCommentBox");

	Params::MapWidget_Map_C_OpenPinnedPinCommentBox Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.ClosePinnedPinCommentBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::ClosePinnedPinCommentBox(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClosePinnedPinCommentBox");

	Params::MapWidget_Map_C_ClosePinnedPinCommentBox Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateComboBoxPinList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateComboBoxPinList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateComboBoxPinList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetSavingMapPinInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSavingMapPinInfo                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetSavingMapPinInfo(bool Param_IsSavingMapPinInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetSavingMapPinInfo");

	Params::MapWidget_Map_C_SetSavingMapPinInfo Parms{};

	Parms.Param_IsSavingMapPinInfo = Param_IsSavingMapPinInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.DoSavePinInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetInputMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::DoSavePinInfo(class UMapWidget_MapPinnedPin_C* InPinnedPin, bool ResetInputMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "DoSavePinInfo");

	Params::MapWidget_Map_C_DoSavePinInfo Parms{};

	Parms.InPinnedPin = InPinnedPin;
	Parms.ResetInputMode = ResetInputMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.DoErasePinnedPin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::DoErasePinnedPin(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "DoErasePinnedPin");

	Params::MapWidget_Map_C_DoErasePinnedPin Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.PrintMapPinInfoList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::PrintMapPinInfoList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "PrintMapPinInfoList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.PlayAnimIn
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.PlayAnimOut
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CreatePartyMemberIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::CreatePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreatePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearPartyMemberIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearPartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearPartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdatePartyMemberIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdatePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdatePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.HidePartyMemberIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::HidePartyMemberIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "HidePartyMemberIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.InitPlayerIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::InitPlayerIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "InitPlayerIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateQuestIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OtherSymbolIconSetting
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_CommonSymbolIcon_C*    IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Prio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OtherSymbolIconSetting(class UMapWidget_CommonSymbolIcon_C* IconWidget, int32 Prio, const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OtherSymbolIconSetting");

	Params::MapWidget_Map_C_OtherSymbolIconSetting Parms{};

	Parms.IconWidget = IconWidget;
	Parms.Prio = Prio;
	Parms.Pos = std::move(Pos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToProfile
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterProfileData          CharcterProfile                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_Map_C::CreateOtherSymbolIconToProfile(const struct FSBCharacterProfileData& CharcterProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateOtherSymbolIconToProfile");

	Params::MapWidget_Map_C_CreateOtherSymbolIconToProfile Parms{};

	Parms.CharcterProfile = std::move(CharcterProfile);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateOtherSymbolIconToLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  LocationInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             Param_RowName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CreateOtherSymbolIconToLocation(const struct FSBLocationInfo& LocationInfo, class FName Param_RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateOtherSymbolIconToLocation");

	Params::MapWidget_Map_C_CreateOtherSymbolIconToLocation Parms{};

	Parms.LocationInfo = std::move(LocationInfo);
	Parms.Param_RowName = Param_RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateCommonSymbolIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Prio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           TooltipString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMapWidget_Map_C::CreateCommonSymbolIcon(class UTexture2D* InTexture, int32 Prio, const struct FVector2D& Pos, const class FString& TooltipString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateCommonSymbolIcon");

	Params::MapWidget_Map_C_CreateCommonSymbolIcon Parms{};

	Parms.InTexture = InTexture;
	Parms.Prio = Prio;
	Parms.Pos = std::move(Pos);
	Parms.TooltipString = std::move(TooltipString);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_Map.MapWidget_Map_C.CreateTimeSymbolIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterProfileLocationData  LocationData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMapWidget_CommonSymbolIcon_C*    TargetPosWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CreateTimeSymbolIcon(int32 InIndex, const struct FSBCharacterProfileLocationData& LocationData, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateTimeSymbolIcon");

	Params::MapWidget_Map_C_CreateTimeSymbolIcon Parms{};

	Parms.InIndex = InIndex;
	Parms.LocationData = std::move(LocationData);
	Parms.TargetPosWidget = TargetPosWidget;
	Parms.InPriority = InPriority;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearOtherSymbolIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearOtherSymbolIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearOtherSymbolIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateOtherSymbolIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateOtherSymbolIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateOtherSymbolIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearQuestIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CalcPinPosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapPinInfo                      InMapPinInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMapWidget_Map_C::CalcPinPosition(class UMapWidget_MapPinnedPin_C* InPin, const struct FMapPinInfo& InMapPinInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CalcPinPosition");

	Params::MapWidget_Map_C_CalcPinPosition Parms{};

	Parms.InPin = InPin;
	Parms.InMapPinInfo = std::move(InMapPinInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CheckIfWarpDestIsAbsoluteFree_ForAlpha
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWarpPointMasterData             InWarpPointMasterData                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsAbsoluteFree                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::CheckIfWarpDestIsAbsoluteFree_ForAlpha(const struct FWarpPointMasterData& InWarpPointMasterData, bool* IsAbsoluteFree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CheckIfWarpDestIsAbsoluteFree_ForAlpha");

	Params::MapWidget_Map_C_CheckIfWarpDestIsAbsoluteFree_ForAlpha Parms{};

	Parms.InWarpPointMasterData = std::move(InWarpPointMasterData);

	UObject::ProcessEvent(Func, &Parms);

	if (IsAbsoluteFree != nullptr)
		*IsAbsoluteFree = Parms.IsAbsoluteFree;
}


// Function MapWidget_Map.MapWidget_Map_C.DoWarpFromWarpBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterWarpPoint               InWarpPointData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_Map_C::DoWarpFromWarpBox(const struct FSBMasterWarpPoint& InWarpPointData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "DoWarpFromWarpBox");

	Params::MapWidget_Map_C_DoWarpFromWarpBox Parms{};

	Parms.InWarpPointData = std::move(InWarpPointData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupPlayerIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsIconVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetupPlayerIcon(bool IsIconVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupPlayerIcon");

	Params::MapWidget_Map_C_SetupPlayerIcon Parms{};

	Parms.IsIconVisible = IsIconVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdatePlayerIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdatePlayerIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdatePlayerIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateInterruptQuestIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::CreateInterruptQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateInterruptQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearInterruptQuestIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearInterruptQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearInterruptQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateInterruptQuestIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateInterruptQuestIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.TraverseCloudUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Floor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::TraverseCloudUpdate(const class FString& InMapId, int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "TraverseCloudUpdate");

	Params::MapWidget_Map_C_TraverseCloudUpdate Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateNamedEnemyIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::CreateNamedEnemyIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateNamedEnemyIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearNamedEnemyIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearNamedEnemyIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearNamedEnemyIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateNamedEnemyIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateNamedEnemyIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateNamedEnemyIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetupMapPlaceNamePlates
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::SetupMapPlaceNamePlates(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetupMapPlaceNamePlates");

	Params::MapWidget_Map_C_SetupMapPlaceNamePlates Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.RecalculateMapPlaceNamePlatePositions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InMapImageSize                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::RecalculateMapPlaceNamePlatePositions(const struct FVector2D& InMapImageSize, const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "RecalculateMapPlaceNamePlatePositions");

	Params::MapWidget_Map_C_RecalculateMapPlaceNamePlatePositions Parms{};

	Parms.InMapImageSize = std::move(InMapImageSize);
	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateResearchTeamSymbolIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::CreateResearchTeamSymbolIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateResearchTeamSymbolIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearResearchTeamSymbolIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearResearchTeamSymbolIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearResearchTeamSymbolIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.SetResearchTeamList
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBResearchTeamData>      InList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMapWidget_Map_C::SetResearchTeamList(TArray<struct FSBResearchTeamData>& InList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetResearchTeamList");

	Params::MapWidget_Map_C_SetResearchTeamList Parms{};

	Parms.InList = std::move(InList);

	UObject::ProcessEvent(Func, &Parms);

	InList = std::move(Parms.InList);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearQuestAreaIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearQuestAreaIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearQuestAreaIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateQuestAreaIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateQuestAreaIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateQuestAreaIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.CalcAreaIconSize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconQuestArea_C*                 AreaWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CalcAreaIconSize(class FName MapId, class UIconQuestArea_C* AreaWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CalcAreaIconSize");

	Params::MapWidget_Map_C_CalcAreaIconSize Parms{};

	Parms.MapId = MapId;
	Parms.AreaWidget = AreaWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.AddInterruptQuestAreaIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBInterruptQuestInstance*        QuestInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::AddInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "AddInterruptQuestAreaIcon");

	Params::MapWidget_Map_C_AddInterruptQuestAreaIcon Parms{};

	Parms.QuestInstance = QuestInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.RemoveInterruptQuestAreaIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBInterruptQuestInstance*        QuestInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::RemoveInterruptQuestAreaIcon(class ASBInterruptQuestInstance* QuestInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "RemoveInterruptQuestAreaIcon");

	Params::MapWidget_Map_C_RemoveInterruptQuestAreaIcon Parms{};

	Parms.QuestInstance = QuestInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateInterruptQuestAreaIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateInterruptQuestAreaIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateInterruptQuestAreaIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.TimeIconSetting
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapWidget_CommonSymbolIcon_C*    TargetPosWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Prio                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::TimeIconSetting(class UWidget* IconWidget, class UMapWidget_CommonSymbolIcon_C* TargetPosWidget, int32 Prio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "TimeIconSetting");

	Params::MapWidget_Map_C_TimeIconSetting Parms{};

	Parms.IconWidget = IconWidget;
	Parms.TargetPosWidget = TargetPosWidget;
	Parms.Prio = Prio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateChallengeQuestIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterProfileData          ProfileData                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   LocationIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBFacilityType                         FacilityType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CreateChallengeQuestIcon(struct FSBCharacterProfileData& ProfileData, int32 LocationIndex, ESBFacilityType FacilityType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateChallengeQuestIcon");

	Params::MapWidget_Map_C_CreateChallengeQuestIcon Parms{};

	Parms.ProfileData = std::move(ProfileData);
	Parms.LocationIndex = LocationIndex;
	Parms.FacilityType = FacilityType;

	UObject::ProcessEvent(Func, &Parms);

	ProfileData = std::move(Parms.ProfileData);
}


// Function MapWidget_Map.MapWidget_Map_C.FindQuestAreaIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMiniMapQuestAreaConfig        TargetData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FSBMiniMapQuestAreaConfig>RefList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   TopIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           FindIndex                                              (Parm, OutParm)

void UMapWidget_Map_C::FindQuestAreaIcon(const struct FSBMiniMapQuestAreaConfig& TargetData, TArray<struct FSBMiniMapQuestAreaConfig>& RefList, int32* TopIndex, TArray<int32>* FindIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "FindQuestAreaIcon");

	Params::MapWidget_Map_C_FindQuestAreaIcon Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.RefList = std::move(RefList);

	UObject::ProcessEvent(Func, &Parms);

	RefList = std::move(Parms.RefList);

	if (TopIndex != nullptr)
		*TopIndex = Parms.TopIndex;

	if (FindIndex != nullptr)
		*FindIndex = std::move(Parms.FindIndex);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearCampPointIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearCampPointIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearCampPointIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateCampPointIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateCampPointIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateCampPointIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.LocationIconVisibleCheck
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::LocationIconVisibleCheck(class FName LocationId, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "LocationIconVisibleCheck");

	Params::MapWidget_Map_C_LocationIconVisibleCheck Parms{};

	Parms.LocationId = LocationId;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateCanvasScale
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateCanvasScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateCanvasScale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnPressed_RegionIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InRegionMapId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnPressed_RegionIcon(const class FString& InRegionMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnPressed_RegionIcon");

	Params::MapWidget_Map_C_OnPressed_RegionIcon Parms{};

	Parms.InRegionMapId = std::move(InRegionMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnPressed_WarpPointIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_WarpPointIcon_C*       InWarpPointIcon                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnPressed_WarpPointIcon(class UMapWidget_WarpPointIcon_C* InWarpPointIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnPressed_WarpPointIcon");

	Params::MapWidget_Map_C_OnPressed_WarpPointIcon Parms{};

	Parms.InWarpPointIcon = InWarpPointIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.OnRaidPortalClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapWidget_TimeSymbolIcon_C*      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnRaidPortalClose(int32 Param_Index, class UMapWidget_TimeSymbolIcon_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnRaidPortalClose");

	Params::MapWidget_Map_C_OnRaidPortalClose Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetWorldMapFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsWorldMap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetWorldMapFlag(bool IsWorldMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetWorldMapFlag");

	Params::MapWidget_Map_C_SetWorldMapFlag Parms{};

	Parms.IsWorldMap = IsWorldMap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateMapPlaceNamePlate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::UpdateMapPlaceNamePlate(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateMapPlaceNamePlate");

	Params::MapWidget_Map_C_UpdateMapPlaceNamePlate Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CreateDialog
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Dialog_C*                     OutputPin                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CreateDialog(class UBP_Dialog_C** OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CreateDialog");

	Params::MapWidget_Map_C_CreateDialog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function MapWidget_Map.MapWidget_Map_C.DeleteDialog
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::DeleteDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "DeleteDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.HideDialog
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::HideDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "HideDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.UpdateWarpPointEx
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::UpdateWarpPointEx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "UpdateWarpPointEx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.ClearWarpPointIconEx
// (Private, BlueprintCallable, BlueprintEvent)

void UMapWidget_Map_C::ClearWarpPointIconEx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "ClearWarpPointIconEx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_Map.MapWidget_Map_C.OnPressed_QuestIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::OnPressed_QuestIcon(int32 InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "OnPressed_QuestIcon");

	Params::MapWidget_Map_C_OnPressed_QuestIcon Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.GetNamedEnemyLevelColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      OutColor                                               (Parm, OutParm)

void UMapWidget_Map_C::GetNamedEnemyLevelColor(int32 InLevel, struct FSlateColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetNamedEnemyLevelColor");

	Params::MapWidget_Map_C_GetNamedEnemyLevelColor Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}


// Function MapWidget_Map.MapWidget_Map_C.Get Portal to Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPortalName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutLocationName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::Get_Portal_to_Location(const class FString& InPortalName, class FString* OutLocationName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Get Portal to Location");

	Params::MapWidget_Map_C_Get_Portal_to_Location Parms{};

	Parms.InPortalName = std::move(InPortalName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocationName != nullptr)
		*OutLocationName = std::move(Parms.OutLocationName);
}


// Function MapWidget_Map.MapWidget_Map_C.Get Quest Category 2Name
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EQuestCategory2                         InCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::Get_Quest_Category_2Name(EQuestCategory2 InCategory, class FString* Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "Get Quest Category 2Name");

	Params::MapWidget_Map_C_Get_Quest_Category_2Name Parms{};

	Parms.InCategory = InCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Name != nullptr)
		*Param_Name = std::move(Parms.Param_Name);
}


// Function MapWidget_Map.MapWidget_Map_C.DebugQuestInfoPrint
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPriority                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::DebugQuestInfoPrint(int32 InIndex, int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "DebugQuestInfoPrint");

	Params::MapWidget_Map_C_DebugQuestInfoPrint Parms{};

	Parms.InIndex = InIndex;
	Parms.InPriority = InPriority;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.SetPinMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPinSelected                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::SetPinMode(bool IsPinSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "SetPinMode");

	Params::MapWidget_Map_C_SetPinMode Parms{};

	Parms.IsPinSelected = IsPinSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_Map.MapWidget_Map_C.CalcMapPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        WorldLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MapLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CalcMapPosition(const struct FVector2D& WorldLocation, struct FVector2D* MapLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CalcMapPosition");

	Params::MapWidget_Map_C_CalcMapPosition Parms{};

	Parms.WorldLocation = std::move(WorldLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (MapLocation != nullptr)
		*MapLocation = std::move(Parms.MapLocation);
}


// Function MapWidget_Map.MapWidget_Map_C.CalcWorldPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        MapLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        WorldLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::CalcWorldPosition(const struct FVector2D& MapLocation, struct FVector2D* WorldLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "CalcWorldPosition");

	Params::MapWidget_Map_C_CalcWorldPosition Parms{};

	Parms.MapLocation = std::move(MapLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapBodySize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UMapWidget_Map_C::GetMapBodySize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapBodySize");

	Params::MapWidget_Map_C_GetMapBodySize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapBodyPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        OutPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::GetMapBodyPosition(struct FVector2D* OutPosition) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapBodyPosition");

	Params::MapWidget_Map_C_GetMapBodyPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMapBGConfigTableRow           OutMapBGConfig                                         (Parm, OutParm)

void UMapWidget_Map_C::GetMapBGConfigFromIndex(int32 InIndex, struct FSBMapBGConfigTableRow* OutMapBGConfig) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapBGConfigFromIndex");

	Params::MapWidget_Map_C_GetMapBGConfigFromIndex Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMapBGConfig != nullptr)
		*OutMapBGConfig = std::move(Parms.OutMapBGConfig);
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigFromMapId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBMapBGConfigTableRow           OutMapBGConfig                                         (Parm, OutParm)

void UMapWidget_Map_C::GetMapBGConfigFromMapId(const class FString& InMapId, struct FSBMapBGConfigTableRow* OutMapBGConfig) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapBGConfigFromMapId");

	Params::MapWidget_Map_C_GetMapBGConfigFromMapId Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutMapBGConfig != nullptr)
		*OutMapBGConfig = std::move(Parms.OutMapBGConfig);
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromBoxIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   InPinId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapPinInfo                      OutMapPinInfo                                          (Parm, OutParm)

void UMapWidget_Map_C::GetMapPinInfoFromBoxIndex(int32 InPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapPinInfoFromBoxIndex");

	Params::MapWidget_Map_C_GetMapPinInfoFromBoxIndex Parms{};

	Parms.InPinId = InPinId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutMapPinInfo != nullptr)
		*OutMapPinInfo = std::move(Parms.OutMapPinInfo);
}


// Function MapWidget_Map.MapWidget_Map_C.IsSavingMapPinInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsSavingMapPinInfo                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::IsSavingMapPinInfo(bool* Param_IsSavingMapPinInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "IsSavingMapPinInfo");

	Params::MapWidget_Map_C_IsSavingMapPinInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsSavingMapPinInfo != nullptr)
		*Param_IsSavingMapPinInfo = Parms.Param_IsSavingMapPinInfo;
}


// Function MapWidget_Map.MapWidget_Map_C.FindPinInfoByPinIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FMapPinInfo>              InPinInfoList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FMapPinInfo                      InTargetPinInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMapPinInfo                      OutPinInfo                                             (Parm, OutParm)
// bool                                    OutResult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::FindPinInfoByPinIndex(TArray<struct FMapPinInfo>& InPinInfoList, const struct FMapPinInfo& InTargetPinInfo, struct FMapPinInfo* OutPinInfo, bool* OutResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "FindPinInfoByPinIndex");

	Params::MapWidget_Map_C_FindPinInfoByPinIndex Parms{};

	Parms.InPinInfoList = std::move(InPinInfoList);
	Parms.InTargetPinInfo = std::move(InTargetPinInfo);

	UObject::ProcessEvent(Func, &Parms);

	InPinInfoList = std::move(Parms.InPinInfoList);

	if (OutPinInfo != nullptr)
		*OutPinInfo = std::move(Parms.OutPinInfo);

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;
}


// Function MapWidget_Map.MapWidget_Map_C.GetVacantAreaMapPin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        OutPinRef                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPinVacant                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::GetVacantAreaMapPin(class UMapWidget_MapPinnedPin_C** OutPinRef, bool* IsPinVacant) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetVacantAreaMapPin");

	Params::MapWidget_Map_C_GetVacantAreaMapPin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPinRef != nullptr)
		*OutPinRef = Parms.OutPinRef;

	if (IsPinVacant != nullptr)
		*IsPinVacant = Parms.IsPinVacant;
}


// Function MapWidget_Map.MapWidget_Map_C.IsEnablePinIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMapWidget_Map_C::IsEnablePinIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "IsEnablePinIcon");

	Params::MapWidget_Map_C_IsEnablePinIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_Map.MapWidget_Map_C.GetPinnedPinCnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_PinnedPinCnt                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::GetPinnedPinCnd(int32* Param_PinnedPinCnt) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetPinnedPinCnd");

	Params::MapWidget_Map_C_GetPinnedPinCnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PinnedPinCnt != nullptr)
		*Param_PinnedPinCnt = Parms.Param_PinnedPinCnt;
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FMapPinInfo>              Param_MapPinInfoList                                   (Parm, OutParm)

void UMapWidget_Map_C::GetMapPinInfoList(TArray<struct FMapPinInfo>* Param_MapPinInfoList) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapPinInfoList");

	Params::MapWidget_Map_C_GetMapPinInfoList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MapPinInfoList != nullptr)
		*Param_MapPinInfoList = std::move(Parms.Param_MapPinInfoList);
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapPinInfoFromPinId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   InPinId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapPinInfo                      OutMapPinInfo                                          (Parm, OutParm)

void UMapWidget_Map_C::GetMapPinInfoFromPinId(int32 InPinId, bool* IsValid, struct FMapPinInfo* OutMapPinInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapPinInfoFromPinId");

	Params::MapWidget_Map_C_GetMapPinInfoFromPinId Parms{};

	Parms.InPinId = InPinId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutMapPinInfo != nullptr)
		*OutMapPinInfo = std::move(Parms.OutMapPinInfo);
}


// Function MapWidget_Map.MapWidget_Map_C.GetMapBGConfigRowName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBMapBGConfigTableRow           InMagBGConfig                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OutRowName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_Map_C::GetMapBGConfigRowName(const struct FSBMapBGConfigTableRow& InMagBGConfig, bool* OutIsValid, class FString* OutRowName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetMapBGConfigRowName");

	Params::MapWidget_Map_C_GetMapBGConfigRowName Parms{};

	Parms.InMagBGConfig = std::move(InMagBGConfig);

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutRowName != nullptr)
		*OutRowName = std::move(Parms.OutRowName);
}


// Function MapWidget_Map.MapWidget_Map_C.GetWarpPointDataFromName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           InWarpPointName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterWarpPoint               OutWarpPointData                                       (Parm, OutParm)

void UMapWidget_Map_C::GetWarpPointDataFromName(const class FString& InWarpPointName, bool* IsValid, struct FSBMasterWarpPoint* OutWarpPointData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetWarpPointDataFromName");

	Params::MapWidget_Map_C_GetWarpPointDataFromName Parms{};

	Parms.InWarpPointName = std::move(InWarpPointName);

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWarpPointData != nullptr)
		*OutWarpPointData = std::move(Parms.OutWarpPointData);
}


// Function MapWidget_Map.MapWidget_Map_C.GetWarpConfirmationTextIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   TextIdx                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::GetWarpConfirmationTextIdx(int32* TextIdx) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetWarpConfirmationTextIdx");

	Params::MapWidget_Map_C_GetWarpConfirmationTextIdx Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextIdx != nullptr)
		*TextIdx = Parms.TextIdx;
}


// Function MapWidget_Map.MapWidget_Map_C.getQuestIconZOrder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EQuestCategory2                         Category2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EQuestStatus                            Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMapWidget_Map_C::GetQuestIconZOrder(EQuestCategory2 Category2, EQuestStatus Status, int32 QuestIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "getQuestIconZOrder");

	Params::MapWidget_Map_C_GetQuestIconZOrder Parms{};

	Parms.Category2 = Category2;
	Parms.Status = Status;
	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_Map.MapWidget_Map_C.IsDisplayQuestIconStandby
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EQuestCategory2                         QuestCategory2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDisplay                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::IsDisplayQuestIconStandby(EQuestCategory2 QuestCategory2, bool* bDisplay) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "IsDisplayQuestIconStandby");

	Params::MapWidget_Map_C_IsDisplayQuestIconStandby Parms{};

	Parms.QuestCategory2 = QuestCategory2;

	UObject::ProcessEvent(Func, &Parms);

	if (bDisplay != nullptr)
		*bDisplay = Parms.bDisplay;
}


// Function MapWidget_Map.MapWidget_Map_C.PublicDungeon_DirectWarpCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::PublicDungeon_DirectWarpCheck(class FName DungeonId, bool* IsOpen) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "PublicDungeon_DirectWarpCheck");

	Params::MapWidget_Map_C_PublicDungeon_DirectWarpCheck Parms{};

	Parms.DungeonId = DungeonId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;
}


// Function MapWidget_Map.MapWidget_Map_C.IsWorldMapFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsWorldMap                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_Map_C::IsWorldMapFlag(bool* IsWorldMap) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "IsWorldMapFlag");

	Params::MapWidget_Map_C_IsWorldMapFlag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsWorldMap != nullptr)
		*IsWorldMap = Parms.IsWorldMap;
}


// Function MapWidget_Map.MapWidget_Map_C.GetAreaMapPinMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_AreaMapPinMax                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_Map_C::GetAreaMapPinMax(int32* Param_AreaMapPinMax) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetAreaMapPinMax");

	Params::MapWidget_Map_C_GetAreaMapPinMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AreaMapPinMax != nullptr)
		*Param_AreaMapPinMax = Parms.Param_AreaMapPinMax;
}


// Function MapWidget_Map.MapWidget_Map_C.GetLoadData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBMapBGConfigTableRow           Param_LoadData                                         (Parm, OutParm)

void UMapWidget_Map_C::GetLoadData(struct FSBMapBGConfigTableRow* Param_LoadData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_Map_C", "GetLoadData");

	Params::MapWidget_Map_C_GetLoadData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_LoadData != nullptr)
		*Param_LoadData = std::move(Parms.Param_LoadData);
}

}

