#pragma once

 

// Package: CraftRecepiDescProduct

#include "Basic.hpp"

#include "CraftRecepiDescProduct_classes.hpp"
#include "CraftRecepiDescProduct_parameters.hpp"


namespace SDK
{

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Request_ShowRate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCraftRecepiDescProduct_C::Request_ShowRate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "Request_ShowRate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.ExecuteUbergraph_CraftRecepiDescProduct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDescProduct_C::ExecuteUbergraph_CraftRecepiDescProduct(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "ExecuteUbergraph_CraftRecepiDescProduct");

	Params::CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature
// (BlueprintEvent)

void UCraftRecepiDescProduct_C::BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnUpdateBoost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDescProduct_C::OnUpdateBoost(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "OnUpdateBoost");

	Params::CraftRecepiDescProduct_C_OnUpdateBoost Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftRecepiDescProduct_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.LoadImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDescProduct_C::LoadImage(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "LoadImage");

	Params::CraftRecepiDescProduct_C_LoadImage Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.SetRecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Param_RecepiData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCraftRecepiDescProduct_C::SetRecepiData(const struct FCharacterCraftRecepi& Param_RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "SetRecepiData");

	Params::CraftRecepiDescProduct_C_SetRecepiData Parms{};

	Parms.Param_RecepiData = std::move(Param_RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftRecepiDescProduct_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnLoaded_29DFB891443B661BA66AFE8D4818F831
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDescProduct_C::OnLoaded_29DFB891443B661BA66AFE8D4818F831(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "OnLoaded_29DFB891443B661BA66AFE8D4818F831");

	Params::CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateBoost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftRecepiDescProduct_C::UpdateBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "UpdateBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateLiquidMemory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftRecepiDescProduct_C::UpdateLiquidMemory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "UpdateLiquidMemory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateCraftNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CraftCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDescProduct_C::UpdateCraftNum(int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDescProduct_C", "UpdateCraftNum");

	Params::CraftRecepiDescProduct_C_UpdateCraftNum Parms{};

	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

