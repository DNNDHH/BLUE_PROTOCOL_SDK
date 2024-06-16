#pragma once

 

// Package: CommunicateSettingMenu_NameAndAchieve

#include "Basic.hpp"

#include "CommunicateSettingMenu_NameAndAchieve_classes.hpp"
#include "CommunicateSettingMenu_NameAndAchieve_parameters.hpp"


namespace SDK
{

// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.OnAchievementSelectWindowOpenEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_NameAndAchieve_C::OnAchievementSelectWindowOpenEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "OnAchievementSelectWindowOpenEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_NameAndAchieve_C::ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve");

	Params::CommunicateSettingMenu_NameAndAchieve_C_ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ErrorDataSet
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_NameAndAchieve_C::ErrorDataSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "ErrorDataSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommunicateSettingMenu_NameAndAchieve_C::BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommunicateSettingMenu_NameAndAchieve_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.ClearAchievementText
// (Public, BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_NameAndAchieve_C::ClearAchievementText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "ClearAchievementText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetAchievementName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_NameAndAchieve_C::SetAchievementName(int32 InAchievementId, bool* IsResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "SetAchievementName");

	Params::CommunicateSettingMenu_NameAndAchieve_C_SetAchievementName Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsResult != nullptr)
		*IsResult = Parms.IsResult;
}


// Function CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_NameAndAchieve_C::SetName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_NameAndAchieve_C", "SetName");

	Params::CommunicateSettingMenu_NameAndAchieve_C_SetName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}

}

