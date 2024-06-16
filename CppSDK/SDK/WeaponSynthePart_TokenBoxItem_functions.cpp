#pragma once

 

// Package: WeaponSynthePart_TokenBoxItem

#include "Basic.hpp"

#include "WeaponSynthePart_TokenBoxItem_classes.hpp"
#include "WeaponSynthePart_TokenBoxItem_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponSynthePart_TokenBoxItem_C* This                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::OnSelected__DelegateSignature(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* This)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "OnSelected__DelegateSignature");

	Params::WeaponSynthePart_TokenBoxItem_C_OnSelected__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.This = This;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.ExecuteUbergraph_WeaponSynthePart_TokenBoxItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::ExecuteUbergraph_WeaponSynthePart_TokenBoxItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "ExecuteUbergraph_WeaponSynthePart_TokenBoxItem");

	Params::WeaponSynthePart_TokenBoxItem_C_ExecuteUbergraph_WeaponSynthePart_TokenBoxItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBoxItem_C::BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WeaponSynthePart_TokenBoxItem_C_BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_TokenBoxItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFusionTicketMasterData        TicketData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   ConstRate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::Setup(const struct FSBFusionTicketMasterData& TicketData, int32 ConstRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "Setup");

	Params::WeaponSynthePart_TokenBoxItem_C_Setup Parms{};

	Parms.TicketData = std::move(TicketData);
	Parms.ConstRate = ConstRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetNameText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_TokenBoxItem_C::SetNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetNameText");

	Params::WeaponSynthePart_TokenBoxItem_C_SetNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_TokenBoxItem_C::SetName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetNameColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBoxItem_C::SetNameColor(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetNameColor");

	Params::WeaponSynthePart_TokenBoxItem_C_SetNameColor Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetCostText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_TokenBoxItem_C::SetCostText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetCostText");

	Params::WeaponSynthePart_TokenBoxItem_C_SetCostText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetCost
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_TokenBoxItem_C::SetCost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetCost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetAmountText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_TokenBoxItem_C::SetAmountText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetAmountText");

	Params::WeaponSynthePart_TokenBoxItem_C_SetAmountText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetAmount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_TokenBoxItem_C::SetAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBoxItem_C::SetEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetEnable");

	Params::WeaponSynthePart_TokenBoxItem_C_SetEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.SetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBoxItem_C::SetSelect(bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "SetSelect");

	Params::WeaponSynthePart_TokenBoxItem_C_SetSelect Parms{};

	Parms.bSelect = bSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.IsSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Selected                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_TokenBoxItem_C::IsSelect(bool* Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "IsSelect");

	Params::WeaponSynthePart_TokenBoxItem_C_IsSelect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Selected != nullptr)
		*Selected = Parms.Selected;
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetTokenId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::GetTokenId(int32* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "GetTokenId");

	Params::WeaponSynthePart_TokenBoxItem_C_GetTokenId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   NeedCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::GetCost(int32* NeedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "GetCost");

	Params::WeaponSynthePart_TokenBoxItem_C_GetCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NeedCount != nullptr)
		*NeedCount = Parms.NeedCount;
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWeaponSynthePart_TokenBoxItem_C::GetAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "GetAmount");

	Params::WeaponSynthePart_TokenBoxItem_C_GetAmount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.IsValidCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWeaponSynthePart_TokenBoxItem_C::IsValidCost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "IsValidCost");

	Params::WeaponSynthePart_TokenBoxItem_C_IsValidCost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.CreateDialog
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_Dialog_C*                     OutDialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::CreateDialog(const class FText& Message, class UBP_Dialog_C** OutDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "CreateDialog");

	Params::WeaponSynthePart_TokenBoxItem_C_CreateDialog Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);

	if (OutDialog != nullptr)
		*OutDialog = Parms.OutDialog;
}


// Function WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C.GetType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBFusionTicketType                     Ticket_Type                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TokenBoxItem_C::GetType(ESBFusionTicketType* Ticket_Type) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TokenBoxItem_C", "GetType");

	Params::WeaponSynthePart_TokenBoxItem_C_GetType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ticket_Type != nullptr)
		*Ticket_Type = Parms.Ticket_Type;
}

}

