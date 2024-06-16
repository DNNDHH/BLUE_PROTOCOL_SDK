#pragma once

 

// Package: SkillInfoIconForBattleImagine

#include "Basic.hpp"

#include "SkillInfoIconForBattleImagine_classes.hpp"
#include "SkillInfoIconForBattleImagine_parameters.hpp"


namespace SDK
{

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.OnBattleImagineIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USkillInfoIconForBattleImagine_C::OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "OnBattleImagineIconPressed__DelegateSignature");

	Params::SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.ExecuteUbergraph_SkillInfoIconForBattleImagine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForBattleImagine_C::ExecuteUbergraph_SkillInfoIconForBattleImagine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "ExecuteUbergraph_SkillInfoIconForBattleImagine");

	Params::SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "PreConstruct");

	Params::SkillInfoIconForBattleImagine_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillInfoIconForBattleImagine_C::BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoIconForBattleImagine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.CreateTooltipForBattleImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ToolTipInfo                  InImagineTooltipInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    InIsNotUseTooltip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::CreateTooltipForBattleImagine(const struct FST_ToolTipInfo& InImagineTooltipInfo, bool InIsNotUseTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "CreateTooltipForBattleImagine");

	Params::SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine Parms{};

	Parms.InImagineTooltipInfo = std::move(InImagineTooltipInfo);
	Parms.InIsNotUseTooltip = InIsNotUseTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsImagineIconActive                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDontDisplayAlertIcon                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::SetBattleImagineInfo(const class FString& InImagineUniqueId, bool InIsInformationHidden, bool InIsStorageMode, bool InIsImagineIconActive, ESBClassType InClassType, bool InDontDisplayAlertIcon, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBattleImagineInfo");

	Params::SkillInfoIconForBattleImagine_C_SetBattleImagineInfo Parms{};

	Parms.InImagineUniqueId = std::move(InImagineUniqueId);
	Parms.InIsInformationHidden = InIsInformationHidden;
	Parms.InIsStorageMode = InIsStorageMode;
	Parms.InIsImagineIconActive = InIsImagineIconActive;
	Parms.InClassType = InClassType;
	Parms.InDontDisplayAlertIcon = InDontDisplayAlertIcon;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetIsBattleImagineEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillActionPosition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::SetIsBattleImagineEmpty(ESkillActionPosition InSkillActionPosition, bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetIsBattleImagineEmpty");

	Params::SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty Parms{};

	Parms.InSkillActionPosition = InSkillActionPosition;
	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineButtonOff
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoIconForBattleImagine_C::SetBattleImagineButtonOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBattleImagineButtonOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::SetBattleImagineLevel(int32 InLevel, const class FString& InImagineUniqueId, ESBClassType InClassType, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBattleImagineLevel");

	Params::SkillInfoIconForBattleImagine_C_SetBattleImagineLevel Parms{};

	Parms.InLevel = InLevel;
	Parms.InImagineUniqueId = std::move(InImagineUniqueId);
	Parms.InClassType = InClassType;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevelVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::SetBattleImagineLevelVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBattleImagineLevelVisibility");

	Params::SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineAlertIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::SetBattleImagineAlertIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBattleImagineAlertIconVisibility");

	Params::SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.UpdateBattleImagineIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillActionPosition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsTermLimited                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::UpdateBattleImagineIcon(ESkillActionPosition InSkillActionPosition, int32 InImagineId, const class FString& InImagineUniqueId, int32 InStackBNum, int32 InStackBMax, bool InIsTermLimited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "UpdateBattleImagineIcon");

	Params::SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon Parms{};

	Parms.InSkillActionPosition = InSkillActionPosition;
	Parms.InImagineId = InImagineId;
	Parms.InImagineUniqueId = std::move(InImagineUniqueId);
	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;
	Parms.InIsTermLimited = InIsTermLimited;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillActionPosition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForBattleImagine_C::InitSkillEmptyColor(ESkillActionPosition InSkillActionPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "InitSkillEmptyColor");

	Params::SkillInfoIconForBattleImagine_C_InitSkillEmptyColor Parms{};

	Parms.InSkillActionPosition = InSkillActionPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillStopUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSkillActionPosition                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForBattleImagine_C::InitSkillStopUpdate(ESkillActionPosition InSkillActionPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "InitSkillStopUpdate");

	Params::SkillInfoIconForBattleImagine_C_InitSkillStopUpdate Parms{};

	Parms.InSkillActionPosition = InSkillActionPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetStackBIconByOwnItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillInfoIconForBattleImagine_C::SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetStackBIconByOwnItemInfo");

	Params::SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBtnForPadCursorMoveVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForBattleImagine_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBtnForPadCursorMoveVisible");

	Params::SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfoForDhcBattle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattlePlayerEquipImagineInfoInBattleImagineInfo                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForBattleImagine_C::SetBattleImagineInfoForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InBattleImagineInfo, ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForBattleImagine_C", "SetBattleImagineInfoForDhcBattle");

	Params::SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle Parms{};

	Parms.InBattleImagineInfo = std::move(InBattleImagineInfo);
	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

