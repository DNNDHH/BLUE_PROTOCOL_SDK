#pragma once

 

// Package: GuildTimeCBIcon

#include "Basic.hpp"

#include "GuildTimeCBIcon_classes.hpp"
#include "GuildTimeCBIcon_parameters.hpp"


namespace SDK
{

// Function GuildTimeCBIcon.GuildTimeCBIcon_C.ExecuteUbergraph_GuildTimeCBIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTimeCBIcon_C::ExecuteUbergraph_GuildTimeCBIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "ExecuteUbergraph_GuildTimeCBIcon");

	Params::GuildTimeCBIcon_C_ExecuteUbergraph_GuildTimeCBIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.InitializeTime
// (BlueprintCallable, BlueprintEvent)

void UGuildTimeCBIcon_C::InitializeTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "InitializeTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildTimeCBIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeCBIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "PreConstruct");

	Params::GuildTimeCBIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.OnLoaded_C91D83624D7160623CFFE1942693BDF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTimeCBIcon_C::OnLoaded_C91D83624D7160623CFFE1942693BDF3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "OnLoaded_C91D83624D7160623CFFE1942693BDF3");

	Params::GuildTimeCBIcon_C_OnLoaded_C91D83624D7160623CFFE1942693BDF3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.IsCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsCheck                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeCBIcon_C::IsCheck(bool* Param_IsCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "IsCheck");

	Params::GuildTimeCBIcon_C_IsCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsCheck != nullptr)
		*Param_IsCheck = Parms.Param_IsCheck;
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.GetTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBGuildActivityTime                    Param_Time                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTimeCBIcon_C::GetTime(ESBGuildActivityTime* Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "GetTime");

	Params::GuildTimeCBIcon_C_GetTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Time != nullptr)
		*Param_Time = Parms.Param_Time;
}


// Function GuildTimeCBIcon.GuildTimeCBIcon_C.Set Checked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeCBIcon_C::Set_Checked(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeCBIcon_C", "Set Checked");

	Params::GuildTimeCBIcon_C_Set_Checked Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}

