#pragma once

 

// Package: EventShopCashBox_Item

#include "Basic.hpp"

#include "EventShopCashBox_Item_classes.hpp"
#include "EventShopCashBox_Item_parameters.hpp"


namespace SDK
{

// Function EventShopCashBox_Item.EventShopCashBox_Item_C.ExecuteUbergraph_EventShopCashBox_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_Item_C::ExecuteUbergraph_EventShopCashBox_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_Item_C", "ExecuteUbergraph_EventShopCashBox_Item");

	Params::EventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox_Item.EventShopCashBox_Item_C.LoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_Item_C::LoadTexture(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_Item_C", "LoadTexture");

	Params::EventShopCashBox_Item_C_LoadTexture Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_2719BDBD41C64E94F07F12919BE767BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_Item_C::OnLoaded_2719BDBD41C64E94F07F12919BE767BE(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_Item_C", "OnLoaded_2719BDBD41C64E94F07F12919BE767BE");

	Params::EventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_32A5081B4EB2444CBED5089FF650625A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_Item_C::OnLoaded_32A5081B4EB2444CBED5089FF650625A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_Item_C", "OnLoaded_32A5081B4EB2444CBED5089FF650625A");

	Params::EventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOver                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopCashBox_Item_C::SetAmount(int32 Amount, bool IsOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_Item_C", "SetAmount");

	Params::EventShopCashBox_Item_C_SetAmount Parms{};

	Parms.Amount = Amount;
	Parms.IsOver = IsOver;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_Item_C::SetIcon(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_Item_C", "SetIcon");

	Params::EventShopCashBox_Item_C_SetIcon Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}

}

