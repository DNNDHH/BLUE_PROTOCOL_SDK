#pragma once

 

// Package: UMG_PhotoModePlayerControlViewHeader

#include "Basic.hpp"

#include "UMG_PhotoModePlayerControlViewHeader_classes.hpp"
#include "UMG_PhotoModePlayerControlViewHeader_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModePlayerControlViewHeader_C::ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerControlViewHeader_C", "ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader");

	Params::UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.SetShowHeaderItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModePlayerControlViewHeader_C::SetShowHeaderItem(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerControlViewHeader_C", "SetShowHeaderItem");

	Params::UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModePlayerControlViewHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModePlayerControlViewHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

