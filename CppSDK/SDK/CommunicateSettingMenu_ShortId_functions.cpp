#pragma once

 

// Package: CommunicateSettingMenu_ShortId

#include "Basic.hpp"

#include "CommunicateSettingMenu_ShortId_classes.hpp"
#include "CommunicateSettingMenu_ShortId_parameters.hpp"


namespace SDK
{

// Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ExecuteUbergraph_CommunicateSettingMenu_ShortId
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_ShortId_C::ExecuteUbergraph_CommunicateSettingMenu_ShortId(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_ShortId_C", "ExecuteUbergraph_CommunicateSettingMenu_ShortId");

	Params::CommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ErrorDataSet
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_ShortId_C::ErrorDataSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_ShortId_C", "ErrorDataSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.SetShortId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InShortId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_ShortId_C::SetShortId(const class FString& InShortId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_ShortId_C", "SetShortId");

	Params::CommunicateSettingMenu_ShortId_C_SetShortId Parms{};

	Parms.InShortId = std::move(InShortId);

	UObject::ProcessEvent(Func, &Parms);
}

}

