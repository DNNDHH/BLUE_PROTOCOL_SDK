#pragma once

 

// Package: BattleCordeListItem

#include "Basic.hpp"

#include "BattleCordeListItem_classes.hpp"
#include "BattleCordeListItem_parameters.hpp"


namespace SDK
{

// Function BattleCordeListItem.BattleCordeListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattleCordeListItem_C*           InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeListItem_C::OnClicked__DelegateSignature(class UBattleCordeListItem_C* InSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "OnClicked__DelegateSignature");

	Params::BattleCordeListItem_C_OnClicked__DelegateSignature Parms{};

	Parms.InSelf = InSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeListItem.BattleCordeListItem_C.ExecuteUbergraph_BattleCordeListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeListItem_C::ExecuteUbergraph_BattleCordeListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "ExecuteUbergraph_BattleCordeListItem");

	Params::BattleCordeListItem_C_ExecuteUbergraph_BattleCordeListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeListItem_C::BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeListItem.BattleCordeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBattleCordeListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeListItem.BattleCordeListItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerPresetEquipList         InCordeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleCordeListItem_C::Setup(const struct FSBPlayerPresetEquipList& InCordeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "Setup");

	Params::BattleCordeListItem_C_Setup Parms{};

	Parms.InCordeData = std::move(InCordeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeListItem.BattleCordeListItem_C.SetIsEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeListItem_C::SetIsEnable(bool InIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "SetIsEnable");

	Params::BattleCordeListItem_C_SetIsEnable Parms{};

	Parms.InIsSelectable = InIsSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeListItem.BattleCordeListItem_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleCordeListItem_C::SetSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "SetSelected");

	Params::BattleCordeListItem_C_SetSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeListItem.BattleCordeListItem_C.GetCordeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBPlayerPresetEquipList         OutCordeData                                           (Parm, OutParm)

void UBattleCordeListItem_C::GetCordeData(struct FSBPlayerPresetEquipList* OutCordeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeListItem_C", "GetCordeData");

	Params::BattleCordeListItem_C_GetCordeData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCordeData != nullptr)
		*OutCordeData = std::move(Parms.OutCordeData);
}

}

