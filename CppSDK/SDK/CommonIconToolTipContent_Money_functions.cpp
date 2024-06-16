#pragma once

 

// Package: CommonIconToolTipContent_Money

#include "Basic.hpp"

#include "CommonIconToolTipContent_Money_classes.hpp"
#include "CommonIconToolTipContent_Money_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.ExecuteUbergraph_CommonIconToolTipContent_Money
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Money_C::ExecuteUbergraph_CommonIconToolTipContent_Money(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Money_C", "ExecuteUbergraph_CommonIconToolTipContent_Money");

	Params::CommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.SetAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InAmountText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContent_Money_C::SetAmount(int32 InAmount, const class FText& InAmountText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Money_C", "SetAmount");

	Params::CommonIconToolTipContent_Money_C_SetAmount Parms{};

	Parms.InAmount = InAmount;
	Parms.InAmountText = std::move(InAmountText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.Set Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InOptionText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContent_Money_C::Set_Option(const class FText& InOptionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Money_C", "Set Option");

	Params::CommonIconToolTipContent_Money_C_Set_Option Parms{};

	Parms.InOptionText = std::move(InOptionText);

	UObject::ProcessEvent(Func, &Parms);
}

}

