#pragma once

 

// Package: BPI_CommandMenuChildrenSwitcher

#include "Basic.hpp"

#include "BPI_CommandMenuChildrenSwitcher_classes.hpp"
#include "BPI_CommandMenuChildrenSwitcher_parameters.hpp"


namespace SDK
{

// Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OpenBookMarkType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CommandMenuChildrenSwitcher_C::SwitchIn(const class FString& OpenBookMarkType, class FName ParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommandMenuChildrenSwitcher_C", "SwitchIn");

	Params::BPI_CommandMenuChildrenSwitcher_C_SwitchIn Parms{};

	Parms.OpenBookMarkType = std::move(OpenBookMarkType);
	Parms.ParamName = ParamName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchOut
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CommandMenuChildrenSwitcher_C::SwitchOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommandMenuChildrenSwitcher_C", "SwitchOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.TermRequesTiming
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CommandMenuChildrenSwitcher_C::TermRequesTiming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CommandMenuChildrenSwitcher_C", "TermRequesTiming");

	UObject::ProcessEvent(Func, nullptr);
}

}

