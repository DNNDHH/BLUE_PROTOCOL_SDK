#pragma once

 

// Package: MyCharaMenu_PassiveImagineIconBtnForBattleSet

#include "Basic.hpp"

#include "MyCharaMenu_PassiveImagineIconBtnForBattleSet_classes.hpp"
#include "MyCharaMenu_PassiveImagineIconBtnForBattleSet_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPassiveImagineItemId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "OnClicked__DelegateSignature");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;
	Parms.InPassiveImagineItemId = InPassiveImagineItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "PreConstruct");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineSlotType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InSlotType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType InSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetPassiveImagineSlotType");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType Parms{};

	Parms.InSlotType = InSlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.GetPassiveImagineSlotType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBPlayerPassiveImagineSlotType         OutSlotType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::GetPassiveImagineSlotType(ESBPlayerPassiveImagineSlotType* OutSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "GetPassiveImagineSlotType");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSlotType != nullptr)
		*OutSlotType = Parms.OutSlotType;
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineByOwnItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetPassiveImagineByOwnItemInfo");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetIconEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetIconEmpty");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetButtonOff
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetButtonOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetButtonOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetAlertIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetAlertIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetAlertIconVisibility");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineBlankIconStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineBlankIconStyle(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetPassiveImagineBlankIconStyle");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetForceLevelSyncOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInForceLevelSyncOff                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetForceLevelSyncOff(bool bInForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetForceLevelSyncOff");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff Parms{};

	Parms.bInForceLevelSyncOff = bInForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetDhcBattleTopMenuMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDhcBattleTopMenuMode                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetDhcBattleTopMenuMode");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode Parms{};

	Parms.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetBtnForPadCursorMoveVisible");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNoTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::CreateTooltipForBtnPadCursorMove(bool InNoTooltip, const struct FOwnItemInfo& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "CreateTooltipForBtnPadCursorMove");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove Parms{};

	Parms.InNoTooltip = InNoTooltip;
	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMoveDhcBattle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNoTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattlePlayerEquipImagineInfoInPassiveImagineInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::CreateTooltipForBtnPadCursorMoveDhcBattle(bool InNoTooltip, int32 InClassLevel, const struct FSBDhcBattlePlayerEquipImagineInfo& InPassiveImagineInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "CreateTooltipForBtnPadCursorMoveDhcBattle");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle Parms{};

	Parms.InNoTooltip = InNoTooltip;
	Parms.InClassLevel = InClassLevel;
	Parms.InPassiveImagineInfo = std::move(InPassiveImagineInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetIconTooltipEnable(bool InIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetIconTooltipEnable");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable Parms{};

	Parms.InIsEnable = InIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineForDhcBattle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattlePlayerEquipImagineInfoInImagineInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C::SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_PassiveImagineIconBtnForBattleSet_C", "SetPassiveImagineForDhcBattle");

	Params::MyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle Parms{};

	Parms.InImagineInfo = std::move(InImagineInfo);
	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}

