#pragma once

 

// Package: MyCharaMenu_LeftSideParameters

#include "Basic.hpp"

#include "MyCharaMenu_LeftSideParameters_classes.hpp"
#include "MyCharaMenu_LeftSideParameters_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnClicked_AchievementChangeButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementListRef                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnClicked_AchievementChangeButton__DelegateSignature");

	Params::MyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature Parms{};

	Parms.InAchievementListRef = InAchievementListRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::OnLoadAchievement__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnLoadAchievement__DelegateSignature");

	Params::MyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::OnSaveAchievement__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnSaveAchievement__DelegateSignature");

	Params::MyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnDetailedStatusClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::OnDetailedStatusClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnDetailedStatusClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_LeftSideParameters
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::ExecuteUbergraph_MyCharaMenu_LeftSideParameters(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "ExecuteUbergraph_MyCharaMenu_LeftSideParameters");

	Params::MyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLevelUpDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InPrevLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCurLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExtraExpParse                 InExtraExpParse                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::OnLevelUpDelegate(int32 InPrevLevel, int32 InCurLevel, const struct FSBExtraExpParse& InExtraExpParse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnLevelUpDelegate");

	Params::MyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate Parms{};

	Parms.InPrevLevel = InPrevLevel;
	Parms.InCurLevel = InCurLevel;
	Parms.InExtraExpParse = std::move(InExtraExpParse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnStatusDiffAtRecalc2ndStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::OnStatusDiffAtRecalc2ndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnStatusDiffAtRecalc2ndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "PreConstruct");

	Params::MyCharaMenu_LeftSideParameters_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Close
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.�������_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::_________0(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "�������_0");

	Params::MyCharaMenu_LeftSideParameters_C__________0 Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnRenamed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::OnRenamed(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnRenamed");

	Params::MyCharaMenu_LeftSideParameters_C_OnRenamed Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Dest_Achievement
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::Dest_Achievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "Dest_Achievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Const_Achievement
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::Const_Achievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "Const_Achievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievementSelectedDelegate_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::OnSaveAchievementSelectedDelegate_____(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnSaveAchievementSelectedDelegate_����");

	Params::MyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate_____ Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSelectAchievement_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::OnSelectAchievement_____(int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnSelectAchievement_����");

	Params::MyCharaMenu_LeftSideParameters_C_OnSelectAchievement_____ Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::OnLoadAchievement_____(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnLoadAchievement_����");

	Params::MyCharaMenu_LeftSideParameters_C_OnLoadAchievement_____ Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnCloseAchievementList_����
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::OnCloseAchievementList_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "OnCloseAchievementList_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::SetAchievementName(int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetAchievementName");

	Params::MyCharaMenu_LeftSideParameters_C_SetAchievementName Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupNameGrp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::SetupNameGrp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetupNameGrp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupClassGrp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::SetupClassGrp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetupClassGrp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetPlayerLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::SetPlayerLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetPlayerLevel");

	Params::MyCharaMenu_LeftSideParameters_C_SetPlayerLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetTotalPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTotalPower                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::SetTotalPower(int32 InTotalPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetTotalPower");

	Params::MyCharaMenu_LeftSideParameters_C_SetTotalPower Parms{};

	Parms.InTotalPower = InTotalPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupStatusGrp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::SetupStatusGrp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetupStatusGrp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InCurrEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNewEquipmentUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::UpdateStatusDiffMark(bool InIsVisible, const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, ESBCharaEquipType InEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "UpdateStatusDiffMark");

	Params::MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark Parms{};

	Parms.InIsVisible = InIsVisible;
	Parms.InCurrEquipmentUniqueId = std::move(InCurrEquipmentUniqueId);
	Parms.InNewEquipmentUniqueId = std::move(InNewEquipmentUniqueId);
	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetStatusDiffMarkInBulk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDiff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::SetStatusDiffMarkInBulk(int32 InDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetStatusDiffMarkInBulk");

	Params::MyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk Parms{};

	Parms.InDiff = InDiff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipStatusDiff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InCurrEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNewEquipmentUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OutIsVallid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBCharacterStatus               OutNewEquipmentStatus                                  (Parm, OutParm, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::GetEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, bool* OutIsVallid, struct FSBCharacterStatus* OutNewEquipmentStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "GetEquipStatusDiff");

	Params::MyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff Parms{};

	Parms.InCurrEquipmentUniqueId = std::move(InCurrEquipmentUniqueId);
	Parms.InNewEquipmentUniqueId = std::move(InNewEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsVallid != nullptr)
		*OutIsVallid = Parms.OutIsVallid;

	if (OutNewEquipmentStatus != nullptr)
		*OutNewEquipmentStatus = std::move(Parms.OutNewEquipmentStatus);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.DestroyAchievementList
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::DestroyAchievementList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "DestroyAchievementList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMarkBattleSet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBPlayerPresetEquipItem> InPresetEquipItemList                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_LeftSideParameters_C::UpdateStatusDiffMarkBattleSet(bool InIsVisible, TArray<struct FSBPlayerPresetEquipItem>& InPresetEquipItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "UpdateStatusDiffMarkBattleSet");

	Params::MyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet Parms{};

	Parms.InIsVisible = InIsVisible;
	Parms.InPresetEquipItemList = std::move(InPresetEquipItemList);

	UObject::ProcessEvent(Func, &Parms);

	InPresetEquipItemList = std::move(Parms.InPresetEquipItemList);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementAndCharaNameVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SetAchievementAndCharaNameVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetAchievementAndCharaNameVisibility");

	Params::MyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.InitLevelSyncValueColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::InitLevelSyncValueColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "InitLevelSyncValueColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SwitchAllStatusValueForLevelSync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLevelSync                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SwitchAllStatusValueForLevelSync(bool InIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SwitchAllStatusValueForLevelSync");

	Params::MyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueForLevelSync Parms{};

	Parms.InIsLevelSync = InIsLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateLevelSync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLevelSync                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::UpdateLevelSync(bool InIsLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "UpdateLevelSync");

	Params::MyCharaMenu_LeftSideParameters_C_UpdateLevelSync Parms{};

	Parms.InIsLevelSync = InIsLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiffVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SetClassInfoDiffVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetClassInfoDiffVisibility");

	Params::MyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::SetClassInfoDiff(ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetClassInfoDiff");

	Params::MyCharaMenu_LeftSideParameters_C_SetClassInfoDiff Parms{};

	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateClassInfoDiff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquippedWeaponUniqueId                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNewWeaponUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::UpdateClassInfoDiff(const class FString& InEquippedWeaponUniqueId, const class FString& InNewWeaponUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "UpdateClassInfoDiff");

	Params::MyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff Parms{};

	Parms.InEquippedWeaponUniqueId = std::move(InEquippedWeaponUniqueId);
	Parms.InNewWeaponUniqueId = std::move(InNewWeaponUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIncludeClassInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::UpdateAllParam(bool InIncludeClassInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "UpdateAllParam");

	Params::MyCharaMenu_LeftSideParameters_C_UpdateAllParam Parms{};

	Parms.InIncludeClassInfo = InIncludeClassInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetExpGaugeUpdateStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SetExpGaugeUpdateStop(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetExpGaugeUpdateStop");

	Params::MyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetCurrLevelSyncTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutLevelSyncTarget                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::GetCurrLevelSyncTarget(int32* OutLevelSyncTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "GetCurrLevelSyncTarget");

	Params::MyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutLevelSyncTarget != nullptr)
		*OutLevelSyncTarget = Parms.OutLevelSyncTarget;
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetLevelSyncTargetByUniqueId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutLevelSyncTarget                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            OutClassType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::GetLevelSyncTargetByUniqueId(const class FString& InUniqueId, int32* OutLevelSyncTarget, ESBClassType* OutClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "GetLevelSyncTargetByUniqueId");

	Params::MyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLevelSyncTarget != nullptr)
		*OutLevelSyncTarget = Parms.OutLevelSyncTarget;

	if (OutClassType != nullptr)
		*OutClassType = Parms.OutClassType;
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetItemTypeByUniqueId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EItemType                               OutItemType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBImagineCategoryType                  OutImagineCategoryType                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::GetItemTypeByUniqueId(const class FString& InUniqueId, bool* IsValid, EItemType* OutItemType, ESBImagineCategoryType* OutImagineCategoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "GetItemTypeByUniqueId");

	Params::MyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutItemType != nullptr)
		*OutItemType = Parms.OutItemType;

	if (OutImagineCategoryType != nullptr)
		*OutImagineCategoryType = Parms.OutImagineCategoryType;
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetDhcBattleTopMenuMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDhcBattleTopMenuMode                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetDhcBattleTopMenuMode");

	Params::MyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode Parms{};

	Parms.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParamByDhcBattleScoreInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattleHighScoreInfo        InScoreInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_LeftSideParameters_C::UpdateAllParamByDhcBattleScoreInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "UpdateAllParamByDhcBattleScoreInfo");

	Params::MyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo Parms{};

	Parms.InScoreInfo = std::move(InScoreInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.AdjustClassInfoLayout
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_LeftSideParameters_C::AdjustClassInfoLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "AdjustClassInfoLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupExpOverflowGrp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsClassLevelCounterStop                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsClassLevelLimit                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsClassLevelLimitSmallerThanCounterStop             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SetupExpOverflowGrp(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetupExpOverflowGrp");

	Params::MyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp Parms{};

	Parms.bInIsClassLevelCounterStop = bInIsClassLevelCounterStop;
	Parms.bInIsClassLevelLimit = bInIsClassLevelLimit;
	Parms.bInIsClassLevelLimitSmallerThanCounterStop = bInIsClassLevelLimitSmallerThanCounterStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetIsExpOverflowInvalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsInvalid                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_LeftSideParameters_C::SetIsExpOverflowInvalid(bool bInIsInvalid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetIsExpOverflowInvalid");

	Params::MyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid Parms{};

	Parms.bInIsInvalid = bInIsInvalid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassTypeForTutorialHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsUsingClassTypeForTutorialHelp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_LeftSideParameters_C::SetClassTypeForTutorialHelp(bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_LeftSideParameters_C", "SetClassTypeForTutorialHelp");

	Params::MyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp Parms{};

	Parms.bInIsUsingClassTypeForTutorialHelp = bInIsUsingClassTypeForTutorialHelp;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}

