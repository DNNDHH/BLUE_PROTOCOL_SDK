#pragma once

 

// Package: EventShopTokenBox_Item

#include "Basic.hpp"

#include "EventShopTokenBox_Item_classes.hpp"
#include "EventShopTokenBox_Item_parameters.hpp"


namespace SDK
{

// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.ExecuteUbergraph_EventShopTokenBox_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::ExecuteUbergraph_EventShopTokenBox_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "ExecuteUbergraph_EventShopTokenBox_Item");

	Params::EventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.LoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TokenID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::LoadTexture(int32 Param_TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "LoadTexture");

	Params::EventShopTokenBox_Item_C_LoadTexture Parms{};

	Parms.Param_TokenID = Param_TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84");

	Params::EventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_B6C13B804169678F239B7791E3D3E1F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::OnLoaded_B6C13B804169678F239B7791E3D3E1F9(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "OnLoaded_B6C13B804169678F239B7791E3D3E1F9");

	Params::EventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::SetAmount(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "SetAmount");

	Params::EventShopTokenBox_Item_C_SetAmount Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TokenID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::SetIcon(int32 Param_TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "SetIcon");

	Params::EventShopTokenBox_Item_C_SetIcon Parms{};

	Parms.Param_TokenID = Param_TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SubAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::SubAmount(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "SubAmount");

	Params::EventShopTokenBox_Item_C_SubAmount Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.CheckAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopTokenBox_Item_C::CheckAmount(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopTokenBox_Item_C", "CheckAmount");

	Params::EventShopTokenBox_Item_C_CheckAmount Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}

}

