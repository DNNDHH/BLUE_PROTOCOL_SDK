#pragma once

 

// Package: MyCharaMenu_ArmamentChange

#include "Basic.hpp"

#include "MyCharaMenu_ArmamentChange_classes.hpp"
#include "MyCharaMenu_ArmamentChange_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipWeaponProc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ProcStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ArmamentChange_C::OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnChangeEquipWeaponProc__DelegateSignature");

	Params::MyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature Parms{};

	Parms.ProcStart = ProcStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAnimFinishedMyCharaOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::OnAnimFinishedMyCharaOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnAnimFinishedMyCharaOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSubMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::OnSubMenuChanged__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnSubMenuChanged__DelegateSignature");

	Params::MyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAchievementChangeButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnAchievementChangeButtonClicked__DelegateSignature");

	Params::MyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature Parms{};

	Parms.InAchievementList = InAchievementList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAcquiredAchievementLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ArmamentChange_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnAcquiredAchievementLoaded__DelegateSignature");

	Params::MyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSelectAchievementSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ArmamentChange_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnSelectAchievementSaved__DelegateSignature");

	Params::MyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipCostumeProc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::OnChangeEquipCostumeProc__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnChangeEquipCostumeProc__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ExecuteUbergraph_MyCharaMenu_ArmamentChange
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::ExecuteUbergraph_MyCharaMenu_ArmamentChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "ExecuteUbergraph_MyCharaMenu_ArmamentChange");

	Params::MyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnOpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::OnOpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnOpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Init
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnCaptureStudioConstructed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CaptureStudioBase_C*          InConstructedCaptureStudio                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::OnCaptureStudioConstructed(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnCaptureStudioConstructed");

	Params::MyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed Parms{};

	Parms.InConstructedCaptureStudio = InConstructedCaptureStudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadTimeout
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::AssetLoadTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "AssetLoadTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadComplete
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::AssetLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "AssetLoadComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.LoadMountImagineModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMountImagineUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::LoadMountImagineModel(const class FString& InMountImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "LoadMountImagineModel");

	Params::MyCharaMenu_ArmamentChange_C_LoadMountImagineModel Parms{};

	Parms.InMountImagineUniqueId = std::move(InMountImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineSelectReleased
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::OnMountImagineSelectReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnMountImagineSelectReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSaveImagineEquipDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       EquipType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsEquip                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_ArmamentChange_C::OnSaveImagineEquipDelegate(int32 RetCode, const ESBCharaEquipType EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnSaveImagineEquipDelegate");

	Params::MyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate Parms{};

	Parms.RetCode = RetCode;
	Parms.EquipType = EquipType;
	Parms.UniqueId = std::move(UniqueId);
	Parms.IsEquip = IsEquip;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowFin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChangeRequest                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ArmamentChange_C::OnMountImagineHideWindowFin(bool IsChangeRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnMountImagineHideWindowFin");

	Params::MyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin Parms{};

	Parms.IsChangeRequest = IsChangeRequest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowStart
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::OnMountImagineHideWindowStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnMountImagineHideWindowStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquip                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::OnMountImagineChangeClick(const class FString& InEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnMountImagineChangeClick");

	Params::MyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick Parms{};

	Parms.InEquip = std::move(InEquip);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::OnMountImagineChangeRequest(const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "OnMountImagineChangeRequest");

	Params::MyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.GetEquipped_Mountmagine_UniqueId
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::GetEquipped_Mountmagine_UniqueId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "GetEquipped_Mountmagine_UniqueId");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct_Imagine
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::Destruct_Imagine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "Destruct_Imagine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct_Imagine
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::Construct_Imagine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "Construct_Imagine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupEquipMountImagine
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_ArmamentChange_C::SetupEquipMountImagine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "SetupEquipMountImagine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.CheckIfWeaponDecayed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FSBDecayedWeaponData>     InDecayedWeaponDatas                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutIsDecayed                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ArmamentChange_C::CheckIfWeaponDecayed(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>& InDecayedWeaponDatas, bool* OutIsDecayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "CheckIfWeaponDecayed");

	Params::MyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InDecayedWeaponDatas = std::move(InDecayedWeaponDatas);

	UObject::ProcessEvent(Func, &Parms);

	InDecayedWeaponDatas = std::move(Parms.InDecayedWeaponDatas);

	if (OutIsDecayed != nullptr)
		*OutIsDecayed = Parms.OutIsDecayed;
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupMountImagineModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMountImagineUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_ArmamentChange_C::SetupMountImagineModel(const class FString& InMountImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "SetupMountImagineModel");

	Params::MyCharaMenu_ArmamentChange_C_SetupMountImagineModel Parms{};

	Parms.InMountImagineUniqueId = std::move(InMountImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetCaptureStudioVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_ArmamentChange_C::SetCaptureStudioVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_ArmamentChange_C", "SetCaptureStudioVisibility");

	Params::MyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

