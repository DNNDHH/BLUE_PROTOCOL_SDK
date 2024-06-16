#pragma once

 

// Package: BP_RsDialog_ProductAmount

#include "Basic.hpp"

#include "BP_RsDialog_ProductAmount_classes.hpp"
#include "BP_RsDialog_ProductAmount_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.ExecuteUbergraph_BP_RsDialog_ProductAmount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductAmount_C::ExecuteUbergraph_BP_RsDialog_ProductAmount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "ExecuteUbergraph_BP_RsDialog_ProductAmount");

	Params::BP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetRibbon_PaidOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PaidOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_ProductAmount_C::SetRibbon_PaidOnly(bool PaidOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "SetRibbon_PaidOnly");

	Params::BP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly Parms{};

	Parms.PaidOnly = PaidOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetSelectNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductAmount_C::SetSelectNum(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "SetSelectNum");

	Params::BP_RsDialog_ProductAmount_C_SetSelectNum Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmountColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_ProductAmount_C::SetAmountColor(bool IsLack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "SetAmountColor");

	Params::BP_RsDialog_ProductAmount_C_SetAmountColor Parms{};

	Parms.IsLack = IsLack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_ProductAmount_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "PreConstruct");

	Params::BP_RsDialog_ProductAmount_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetPaymentType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogPaymentType                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductAmount_C::SetPaymentType(ERsDialogPaymentType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "SetPaymentType");

	Params::BP_RsDialog_ProductAmount_C_SetPaymentType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialog_ProductAmount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductAmount_C::SetAmount(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductAmount_C", "SetAmount");

	Params::BP_RsDialog_ProductAmount_C_SetAmount Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}

}

