#pragma once

 

// Package: ImagineCraftDescProduct

#include "Basic.hpp"

#include "ImagineCraftDescProduct_classes.hpp"
#include "ImagineCraftDescProduct_parameters.hpp"


namespace SDK
{

// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.ExecuteUbergraph_ImagineCraftDescProduct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftDescProduct_C::ExecuteUbergraph_ImagineCraftDescProduct(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "ExecuteUbergraph_ImagineCraftDescProduct");

	Params::ImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineCraftDescProduct_C::BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.OnComplete_RewardBoostInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftDescProduct_C::OnComplete_RewardBoostInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "OnComplete_RewardBoostInfo");

	Params::ImagineCraftDescProduct_C_OnComplete_RewardBoostInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineCraftDescProduct_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineCraftDescProduct_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.SetRecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             Param_RecepiData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineCraftDescProduct_C::SetRecepiData(const struct FMasterImagineRecepi& Param_RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "SetRecepiData");

	Params::ImagineCraftDescProduct_C_SetRecepiData Parms{};

	Parms.Param_RecepiData = std::move(Param_RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.IsLiquidMemoryActive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraftDescProduct_C::IsLiquidMemoryActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "IsLiquidMemoryActive");

	Params::ImagineCraftDescProduct_C_IsLiquidMemoryActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.UpdateBoost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraftDescProduct_C::UpdateBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftDescProduct_C", "UpdateBoost");

	UObject::ProcessEvent(Func, nullptr);
}

}

