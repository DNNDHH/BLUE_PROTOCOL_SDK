#pragma once

 

// Package: EventShopTokenBox

#include "Basic.hpp"

#include "EventShopTokenBox_classes.hpp"
#include "EventShopTokenBox_parameters.hpp"


namespace SDK
{

// Function EventShopTokenBox.EventShopTokenBox_C.ExecuteUbergraph_EventShopTokenBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_C::ExecuteUbergraph_EventShopTokenBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "ExecuteUbergraph_EventShopTokenBox");

	Params::EventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox.EventShopTokenBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShopTokenBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopTokenBox.EventShopTokenBox_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShopTokenBox_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopTokenBox.EventShopTokenBox_C.Set Token Num
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_C::Set_Token_Num(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "Set Token Num");

	Params::EventShopTokenBox_C_Set_Token_Num Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox.EventShopTokenBox_C.SetTokenList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventShopTokenBox_C::SetTokenList(TArray<int32>& TokenList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "SetTokenList");

	Params::EventShopTokenBox_C_SetTokenList Parms{};

	Parms.TokenList = std::move(TokenList);

	UObject::ProcessEvent(Func, &Parms);

	TokenList = std::move(Parms.TokenList);
}


// Function EventShopTokenBox.EventShopTokenBox_C.ResetAmount
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopTokenBox_C::ResetAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "ResetAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopTokenBox.EventShopTokenBox_C.SetTokenAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_C::SetTokenAmount(int32 TokenID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "SetTokenAmount");

	Params::EventShopTokenBox_C_SetTokenAmount Parms{};

	Parms.TokenID = TokenID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox.EventShopTokenBox_C.GetAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_C::GetAmount(int32 TokenID, int32* Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "GetAmount");

	Params::EventShopTokenBox_C_GetAmount Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;
}


// Function EventShopTokenBox.EventShopTokenBox_C.CheckCostOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_C::CheckCostOver(int32 ListId, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_C", "CheckCostOver");

	Params::EventShopTokenBox_C_CheckCostOver Parms{};

	Parms.ListId = ListId;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}

}

