#pragma once

 

// Package: GuildActivityList

#include "Basic.hpp"

#include "GuildActivityList_classes.hpp"
#include "GuildActivityList_parameters.hpp"


namespace SDK
{

// Function GuildActivityList.GuildActivityList_C.ExecuteUbergraph_GuildActivityList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivityList_C::ExecuteUbergraph_GuildActivityList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "ExecuteUbergraph_GuildActivityList");

	Params::GuildActivityList_C_ExecuteUbergraph_GuildActivityList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityList.GuildActivityList_C.OnClosePlayerCard
// (BlueprintCallable, BlueprintEvent)

void UGuildActivityList_C::OnClosePlayerCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "OnClosePlayerCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivityList.GuildActivityList_C.OnCompleteProfileLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivityList_C::OnCompleteProfileLoaded(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "OnCompleteProfileLoaded");

	Params::GuildActivityList_C_OnCompleteProfileLoaded Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityList.GuildActivityList_C.OnRequestPlayerCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UserId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildActivityList_C::OnRequestPlayerCard(const class FString& UserId, const class FString& CharacterId, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "OnRequestPlayerCard");

	Params::GuildActivityList_C_OnRequestPlayerCard Parms{};

	Parms.UserId = std::move(UserId);
	Parms.CharacterId = std::move(CharacterId);
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityList.GuildActivityList_C.GenerateActivities
// (BlueprintCallable, BlueprintEvent)

void UGuildActivityList_C::GenerateActivities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "GenerateActivities");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivityList.GuildActivityList_C.OnComplete RequestGetGuildActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivityList_C::OnComplete_RequestGetGuildActivity(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "OnComplete RequestGetGuildActivity");

	Params::GuildActivityList_C_OnComplete_RequestGetGuildActivity Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityList.GuildActivityList_C.BindInit
// (BlueprintCallable, BlueprintEvent)

void UGuildActivityList_C::BindInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "BindInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivityList.GuildActivityList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildActivityList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivityList.GuildActivityList_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildActivityList_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "GetGuildComp");

	Params::GuildActivityList_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildActivityList.GuildActivityList_C.GenerateGuildActivities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildActivityList_C::GenerateGuildActivities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "GenerateGuildActivities");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivityList.GuildActivityList_C.CreateWidgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Activity                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class USBUIGuildActivityUMGBase*        AsSBUIGuild_Activity_UMGBase                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivityList_C::CreateWidgets(const struct FGuildActivity& Activity, class USBUIGuildActivityUMGBase** AsSBUIGuild_Activity_UMGBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityList_C", "CreateWidgets");

	Params::GuildActivityList_C_CreateWidgets Parms{};

	Parms.Activity = std::move(Activity);

	UObject::ProcessEvent(Func, &Parms);

	if (AsSBUIGuild_Activity_UMGBase != nullptr)
		*AsSBUIGuild_Activity_UMGBase = Parms.AsSBUIGuild_Activity_UMGBase;
}

}

