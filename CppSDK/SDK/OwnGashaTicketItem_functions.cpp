#pragma once

 

// Package: OwnGashaTicketItem

#include "Basic.hpp"

#include "OwnGashaTicketItem_classes.hpp"
#include "OwnGashaTicketItem_parameters.hpp"


namespace SDK
{

// Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnSelectTicket__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaTickets                  Param_TicketData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::OnSelectTicket__DelegateSignature(const struct FSBGashaTickets& Param_TicketData, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "OnSelectTicket__DelegateSignature");

	Params::OwnGashaTicketItem_C_OnSelectTicket__DelegateSignature Parms{};

	Parms.Param_TicketData = std::move(Param_TicketData);
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOwnGashaTicketItem_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.ExecuteUbergraph_OwnGashaTicketItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::ExecuteUbergraph_OwnGashaTicketItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "ExecuteUbergraph_OwnGashaTicketItem");

	Params::OwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetIconTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::SetIconTexture(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "SetIconTexture");

	Params::OwnGashaTicketItem_C_SetIconTexture Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature
// (BlueprintEvent)

void UOwnGashaTicketItem_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UOwnGashaTicketItem_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOwnGashaTicketItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "PreConstruct");

	Params::OwnGashaTicketItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnLoaded_B24768C447D1D1C1B9F53D83D080C74E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::OnLoaded_B24768C447D1D1C1B9F53D83D080C74E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "OnLoaded_B24768C447D1D1C1B9F53D83D080C74E");

	Params::OwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetOwnTicketList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::SetOwnTicketList(int32 TokenID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "SetOwnTicketList");

	Params::OwnGashaTicketItem_C_SetOwnTicketList Parms{};

	Parms.TokenID = TokenID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetExecutionTicketSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaTickets                  InGashaTicketData                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Gender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::SetExecutionTicketSelect(const struct FSBGashaTickets& InGashaTicketData, int32 Amount, int32 Gender, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "SetExecutionTicketSelect");

	Params::OwnGashaTicketItem_C_SetExecutionTicketSelect Parms{};

	Parms.InGashaTicketData = std::move(InGashaTicketData);
	Parms.Amount = Amount;
	Parms.Gender = Gender;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OwnGashaTicketItem.OwnGashaTicketItem_C.GetAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOwnGashaTicketItem_C::GetAmount(int32* OutAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OwnGashaTicketItem_C", "GetAmount");

	Params::OwnGashaTicketItem_C_GetAmount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAmount != nullptr)
		*OutAmount = Parms.OutAmount;
}

}

